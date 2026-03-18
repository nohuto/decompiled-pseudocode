/*
 * XREFs of KiUmsCallEntryContinue @ 0x1401D7180
 * Callers:
 *     <none>
 * Callees:
 *     KiSwapToUmsThreadContinue @ 0x1402B6420 (KiSwapToUmsThreadContinue.c)
 */

__int64 KiUmsCallEntryContinue()
{
  _enable();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  return KiSwapToUmsThreadContinue();
}
