/*
 * XREFs of KiUmsTrapEntryContinue @ 0x1401D6FC0
 * Callers:
 *     <none>
 * Callees:
 *     KiSwapToUmsThreadContinue @ 0x1402B6420 (KiSwapToUmsThreadContinue.c)
 */

__int64 __fastcall KiUmsTrapEntryContinue()
{
  __int64 v0; // rbp

  _enable();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  KiSwapToUmsThreadContinue();
  return *(_QWORD *)(v0 - 120);
}
