/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x1401BC290
 * Callers:
 *     KiParkUmsThread @ 0x14029D5C0 (KiParkUmsThread.c)
 *     KiSwapToUmsThread @ 0x140845790 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
