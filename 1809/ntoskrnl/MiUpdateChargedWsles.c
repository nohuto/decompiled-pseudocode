/*
 * XREFs of MiUpdateChargedWsles @ 0x1402CB68C
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x1405EC380 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1405ECBB0 (MiCommitPageTablesForVad.c)
 *     MiDeleteVadBitmap @ 0x140608CFC (MiDeleteVadBitmap.c)
 *     MiComputeProcessUserVa @ 0x14067A0FC (MiComputeProcessUserVa.c)
 * Callees:
 *     MiGetSharedVm @ 0x140064D30 (MiGetSharedVm.c)
 */

LONG *__fastcall MiUpdateChargedWsles(__int64 a1)
{
  LONG *result; // rax
  unsigned __int64 v2; // rdx

  result = MiGetSharedVm(a1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)result + 7, v2);
  return result;
}
