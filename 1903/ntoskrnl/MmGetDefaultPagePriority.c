/*
 * XREFs of MmGetDefaultPagePriority @ 0x140097564
 * Callers:
 *     PfTAccessTracingCleanup @ 0x14059E204 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x14059E354 (PfTAccessTracingStart.c)
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 *     PfSnCheckActionsNeeded @ 0x140659940 (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncPrefetchWorker @ 0x14066A190 (PfSnAsyncPrefetchWorker.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     PspApplyIFEOPerfOptions @ 0x1406ECB8C (PspApplyIFEOPerfOptions.c)
 *     PfpLogEventRequest @ 0x14072913C (PfpLogEventRequest.c)
 *     ExpDebuggerWorker @ 0x140953030 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
