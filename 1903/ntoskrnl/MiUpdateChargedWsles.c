/*
 * XREFs of MiUpdateChargedWsles @ 0x1402E5BF4
 * Callers:
 *     MiCommitPageTablesForVad @ 0x140603C50 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x1406058B0 (MiReturnPageTablePageCommitment.c)
 *     MiDeleteVadBitmap @ 0x1406708B8 (MiDeleteVadBitmap.c)
 *     MiComputeProcessUserVa @ 0x1406929BC (MiComputeProcessUserVa.c)
 * Callees:
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 */

LONG *__fastcall MiUpdateChargedWsles(__int64 a1)
{
  LONG *result; // rax
  unsigned __int64 v2; // rdx

  result = MiGetSharedVm(a1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)result + 6, v2);
  return result;
}
