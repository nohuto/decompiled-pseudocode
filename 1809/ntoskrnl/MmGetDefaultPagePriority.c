/*
 * XREFs of MmGetDefaultPagePriority @ 0x1400E217C
 * Callers:
 *     PfTAccessTracingCleanup @ 0x14056598C (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140565FF4 (PfTAccessTracingStart.c)
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     PspAllocateProcess @ 0x14064BCD8 (PspAllocateProcess.c)
 *     PfSnAsyncPrefetchWorker @ 0x140666580 (PfSnAsyncPrefetchWorker.c)
 *     PfSnCheckActionsNeeded @ 0x140667E5C (PfSnCheckActionsNeeded.c)
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 *     PspApplyIFEOPerfOptions @ 0x1406CBF58 (PspApplyIFEOPerfOptions.c)
 *     PfpLogEventRequest @ 0x1406E1AB4 (PfpLogEventRequest.c)
 *     ExpDebuggerWorker @ 0x140915030 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
