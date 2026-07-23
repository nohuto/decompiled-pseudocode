/*
 * XREFs of PopResetActionDefaults @ 0x14072006C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PopExecutePowerAction @ 0x1406DF390 (PopExecutePowerAction.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_1404187CC = 1;
  dword_1404187C0 = 0;
  dword_1404187C8 = 0;
  byte_1404187BD = 0;
  if ( (PopAction & 2) == 0 )
  {
    PopAction = 0;
    byte_1404187A2 = 0;
    qword_1404187A4 = 0LL;
    dword_1404187B0 = 0;
    byte_1404187BC = 0;
    dword_1404187B4 = 16;
    dword_1404187AC = 268435459;
  }
}
