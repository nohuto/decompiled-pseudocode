/*
 * XREFs of CmpInitializeLightWeightTransaction @ 0x1407F6548
 * Callers:
 *     CmpTransMgrCommit @ 0x1406FCFB0 (CmpTransMgrCommit.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 */

__int64 __fastcall CmpInitializeLightWeightTransaction(_QWORD *a1)
{
  memset(a1, 0, 0x20uLL);
  a1[1] = 0LL;
  return 0LL;
}
