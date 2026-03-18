/*
 * XREFs of PopResetActionDefaults @ 0x140749B24
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopExecutePowerAction @ 0x1407274F8 (PopExecutePowerAction.c)
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_140442FEC = 1;
  dword_140442FE0 = 0;
  dword_140442FE8 = 0;
  byte_140442FDD = 0;
  if ( (PopAction & 2) == 0 )
  {
    LOBYTE(PopAction) = 0;
    byte_140442FC2 = 0;
    qword_140442FC4 = 0LL;
    dword_140442FD0 = 0;
    byte_140442FDC = 0;
    dword_140442FD4 = 16;
    dword_140442FCC = 268435459;
  }
}
