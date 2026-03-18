/*
 * XREFs of PopResetActionDefaults @ 0x14071EDEC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PopExecutePowerAction @ 0x1406DE110 (PopExecutePowerAction.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_14041772C = 1;
  dword_140417720 = 0;
  dword_140417728 = 0;
  byte_14041771D = 0;
  if ( (PopAction & 2) == 0 )
  {
    PopAction = 0;
    byte_140417702 = 0;
    qword_140417704 = 0LL;
    dword_140417710 = 0;
    byte_14041771C = 0;
    dword_140417714 = 16;
    dword_14041770C = 268435459;
  }
}
