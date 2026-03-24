/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x1401BC2C0
 * Callers:
 *     KiSwapToUmsThread @ 0x140845770 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x140846B38 (KiCaptureUmsThreadContext.c)
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
