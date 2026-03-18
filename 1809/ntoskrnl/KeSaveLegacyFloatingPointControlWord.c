/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x1401BC2A0
 * Callers:
 *     KiSwapToUmsThread @ 0x140845790 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x140846B58 (KiCaptureUmsThreadContext.c)
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
