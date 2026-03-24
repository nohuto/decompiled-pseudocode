/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x1401BC2B0
 * Callers:
 *     KiParkUmsThread @ 0x14029D6C0 (KiParkUmsThread.c)
 *     KiSwapToUmsThread @ 0x140845770 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
