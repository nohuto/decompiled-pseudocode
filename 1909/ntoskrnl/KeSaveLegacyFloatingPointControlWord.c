/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x1401C4DA0
 * Callers:
 *     KiSwapToUmsThread @ 0x140880460 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x140881698 (KiCaptureUmsThreadContext.c)
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
