/*
 * XREFs of MmGetDefaultPagePriority @ 0x1400D4884
 * Callers:
 *     PfTAccessTracingCleanup @ 0x14059E1E4 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x14059E334 (PfTAccessTracingStart.c)
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 *     PfSnCheckActionsNeeded @ 0x14066C960 (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncPrefetchWorker @ 0x14066EA90 (PfSnAsyncPrefetchWorker.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     PspApplyIFEOPerfOptions @ 0x1406EDDAC (PspApplyIFEOPerfOptions.c)
 *     PfpLogEventRequest @ 0x14072A4AC (PfpLogEventRequest.c)
 *     ExpDebuggerWorker @ 0x140953030 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
