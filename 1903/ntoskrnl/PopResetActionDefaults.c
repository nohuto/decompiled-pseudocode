/*
 * XREFs of PopResetActionDefaults @ 0x140747C24
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopExecutePowerAction @ 0x140725658 (PopExecutePowerAction.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_14044306C = 1;
  dword_140443060 = 0;
  dword_140443068 = 0;
  byte_14044305D = 0;
  if ( (PopAction & 2) == 0 )
  {
    LOBYTE(PopAction) = 0;
    byte_140443042 = 0;
    qword_140443044 = 0LL;
    dword_140443050 = 0;
    byte_14044305C = 0;
    dword_140443054 = 16;
    dword_14044304C = 268435459;
  }
}
