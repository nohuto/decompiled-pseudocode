/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x1401BC420
 * Callers:
 *     KiSwapToUmsThread @ 0x1408469D0 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x140847D98 (KiCaptureUmsThreadContext.c)
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
