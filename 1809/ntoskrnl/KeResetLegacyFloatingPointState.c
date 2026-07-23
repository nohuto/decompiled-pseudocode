/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x1401BC410
 * Callers:
 *     KiParkUmsThread @ 0x14029D8B0 (KiParkUmsThread.c)
 *     KiSwapToUmsThread @ 0x1408469D0 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
