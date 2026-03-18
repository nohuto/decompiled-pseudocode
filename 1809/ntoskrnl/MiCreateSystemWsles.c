/*
 * XREFs of MiCreateSystemWsles @ 0x1400F3184
 * Callers:
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     MiReturnPageTablePageCommitment @ 0x1405EC380 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1405ECBB0 (MiCommitPageTablesForVad.c)
 *     MiUnloadSystemImage @ 0x140651AC4 (MiUnloadSystemImage.c)
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 *     MiComputeProcessUserVa @ 0x14067A11C (MiComputeProcessUserVa.c)
 *     MiSessionCreate @ 0x140715028 (MiSessionCreate.c)
 * Callees:
 *     <none>
 */

__int64 MiCreateSystemWsles()
{
  return 1LL;
}
