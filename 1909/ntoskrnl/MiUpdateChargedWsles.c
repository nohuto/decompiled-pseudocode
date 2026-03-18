/*
 * XREFs of MiUpdateChargedWsles @ 0x1402E5954
 * Callers:
 *     MiCommitPageTablesForVad @ 0x140605760 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x1406073C0 (MiReturnPageTablePageCommitment.c)
 *     MiDeleteVadBitmap @ 0x1406445A0 (MiDeleteVadBitmap.c)
 *     MiComputeProcessUserVa @ 0x140685F2C (MiComputeProcessUserVa.c)
 * Callees:
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 */

LONG *__fastcall MiUpdateChargedWsles(__int64 a1)
{
  LONG *result; // rax
  unsigned __int64 v2; // rdx

  result = MiGetSharedVm(a1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)result + 6, v2);
  return result;
}
