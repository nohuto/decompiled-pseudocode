/*
 * XREFs of KiUmsTrapEntryContinue @ 0x1401D0BC0
 * Callers:
 *     <none>
 * Callees:
 *     KiSwapToUmsThreadContinue @ 0x14029DB20 (KiSwapToUmsThreadContinue.c)
 */

__int64 __fastcall KiUmsTrapEntryContinue()
{
  __int64 v0; // rbp

  _enable();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  KiSwapToUmsThreadContinue();
  return *(_QWORD *)(v0 - 120);
}
