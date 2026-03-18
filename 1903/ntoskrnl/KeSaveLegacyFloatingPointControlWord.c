/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x1401C4220
 * Callers:
 *     KiSwapToUmsThread @ 0x140880D60 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x140881F98 (KiCaptureUmsThreadContext.c)
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
