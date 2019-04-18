#include<iostream>
#include<string>

class Player
{
public:
	Player(int positionX, int positionY, int currentVelocity, int hitPoints, int hitStrenght)
	{
		x = positionX;
		y = positionY;
		velocity = currentVelocity;
		hp = hitPoints;
		strenght = hitStrenght;
	}

	int x, y, velocity, hp, strenght;
	std::string userName;
	/*std::string attacker;
	std::string defender;*/

	void move()
	{
		x += velocity;
		y += velocity;
	}

	void damage(int amount)
	{
		hp -= amount;
	}
};

//int** attacker(int a, int b)
//{
//	return;
//}

int main()
{
	Player playerOne = Player(0, 0, 10, 30, 10);
	std::cout << "Player 1 name: ";
	std::cin >> playerOne.userName;
	
	Player playerTwo = Player(10, 15, 10, 30, 10);
	std::cout << "Player 2 name: ";
	std::cin >> playerTwo.userName;
	
	Player playerThree = Player(20, 30, 10, 30, 10);
	std::cout << "Player 3 name: ";
	std::cin >> playerThree.userName;


	playerOne.move();
	playerTwo.move();
	playerThree.move();

	std::string losingPlayer;
	std::string winningPlayer;

	int attacker = 0;
	int defender = 0;
	std::string attackerName;
	std::string defenderName;

	while (playerOne.hp > 0 && playerTwo.hp > 0 && playerThree.hp >0)
	{
		int chooseAttacker;
		int chooseDefender;


		std::cout << "Choose attacking player: ";
		std::cin >> chooseAttacker;
		std::cout << std::endl;
		if (chooseAttacker <= 0 || chooseAttacker > 3)
		{
			std::cout << "===========================" << std::endl;
			std::cout << "Player " << chooseAttacker << " doesn't exist!" << std::endl;
			std::cout << "GAME OVER!\n" << std::endl;
			break;
		}
		else
			switch (chooseAttacker)
			{
			case 1:
				attacker = playerOne.strenght;
				//std::cout << "Attacker is: " << playerOne.userName << "(ATT: " << playerOne.strenght << ")" << std::endl;
				attackerName = playerOne.userName;
				break;
			case 2:
				attacker = playerTwo.strenght;
				//std::cout << "Attacker is: " << playerTwo.userName << std::endl;
				attackerName = playerTwo.userName;
				break;
			case 3:
				attacker = playerThree.strenght;
				//std::cout << "Attacker is: " << playerThree.userName << std::endl;
				attackerName = playerThree.userName;
				break;
			default:
				break;
			}

		std::cout << "Attacker is: " << attackerName << " (ATT: " << attacker << ")" << std::endl;

		
		std::cout << "Choose defending player: ";
		std::cin >> chooseDefender;
		std::cout << std::endl;
		if (chooseDefender <= 0 || chooseDefender > 3)
		{
			std::cout << "===========================" << std::endl;
			std::cout << "Player " << chooseDefender << " doesn't exist!" << std::endl;
			std::cout << "GAME OVER!\n" << std::endl;
			break;
		}
		else
			switch (chooseDefender)
			{
			case 1:
				defender = playerOne.hp;
				std::cout << playerOne.userName << " is defending!" << std::endl;
				defenderName = playerOne.userName;
				break;
			case 2:
				defender = playerTwo.hp;
				std::cout << playerTwo.userName << " is defending!" << std::endl;
				break;
			case 3:
				defender = playerThree.hp;
				std::cout << playerThree.userName << " is defending!" << std::endl;
				break;
			default:
				break;
			}

		std::cout << "defender: " << defenderName <<" - "<< defender << std::endl;


		std::cin.ignore(1000, '\n');
		std::cin.clear();
		//std::cout << attacker << " hits " << defender << std::endl;
		//std::cout<<defender<<" lost "<<
		
		//tu ide udaranje!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!



		/*std::cout << playerOne.userName << " HP: " << playerOne.hp << std::endl;
		std::cout << playerTwo.userName << " HP: " << playerTwo.hp << std::endl;
		std::cout << playerThree.userName << " HP: " << playerThree.hp << std::endl;
		std::cout << std::endl;


		if (playerOne.hp <= 0)
		{
			losingPlayer = playerOne.userName;
			if (playerTwo.hp > playerThree.hp)
			{
				winningPlayer = playerTwo.userName;
			}
			else
				winningPlayer = playerThree.userName;
		}
		else if (playerTwo.hp <= 0)
		{
			losingPlayer = playerTwo.userName;
			if (playerOne.hp > playerThree.hp)
			{
				winningPlayer = playerOne.hp;
			}
			else
				winningPlayer = playerThree.userName;
		}
		else
		{
			if (playerOne.hp > playerTwo.hp)
			{
				losingPlayer = playerTwo.userName;
			}
			else
				losingPlayer = playerOne.userName;
			winningPlayer = playerThree.userName;
		}*/
	}

	system("pause");
	std::cin.get();
}