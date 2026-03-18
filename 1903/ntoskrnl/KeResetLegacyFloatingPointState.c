/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x1401C4210
 * Callers:
 *     KiParkUmsThread @ 0x1402B6130 (KiParkUmsThread.c)
 *     KiSwapToUmsThread @ 0x140880D60 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
