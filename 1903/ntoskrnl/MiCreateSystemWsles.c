/*
 * XREFs of MiCreateSystemWsles @ 0x1400E5550
 * Callers:
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 *     MiCommitPageTablesForVad @ 0x140603C50 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x1406058B0 (MiReturnPageTablePageCommitment.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     MiComputeProcessUserVa @ 0x1406929BC (MiComputeProcessUserVa.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiSessionCreate @ 0x14073FA18 (MiSessionCreate.c)
 * Callees:
 *     <none>
 */

__int64 MiCreateSystemWsles()
{
  return 1LL;
}
