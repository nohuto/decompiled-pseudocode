/*
 * XREFs of MmGetDefaultPagePriority @ 0x1400E221C
 * Callers:
 *     PfTAccessTracingCleanup @ 0x14056698C (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140566FF4 (PfTAccessTracingStart.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     PfSnAsyncPrefetchWorker @ 0x140667720 (PfSnAsyncPrefetchWorker.c)
 *     PfSnCheckActionsNeeded @ 0x140668FFC (PfSnCheckActionsNeeded.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 *     PspApplyIFEOPerfOptions @ 0x1406CD1D8 (PspApplyIFEOPerfOptions.c)
 *     PfpLogEventRequest @ 0x1406E2D34 (PfpLogEventRequest.c)
 *     ExpDebuggerWorker @ 0x140916030 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
