/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x1401C4D90
 * Callers:
 *     KiParkUmsThread @ 0x1402B5E90 (KiParkUmsThread.c)
 *     KiSwapToUmsThread @ 0x140880460 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
