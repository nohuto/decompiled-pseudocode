/*
 * XREFs of KeQuerySystemTimePrecise @ 0x14008A4E0
 * Callers:
 *     PspUserThreadStartup @ 0x1405F7E40 (PspUserThreadStartup.c)
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     EtwpInitializeTimeStamp @ 0x14065C188 (EtwpInitializeTimeStamp.c)
 *     EtwpInitLoggerContext @ 0x14065C2EC (EtwpInitLoggerContext.c)
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 *     EtwpFinalizeHeader @ 0x14069B5BC (EtwpFinalizeHeader.c)
 *     EtwpTraceSystemShutdown @ 0x1408BA2C4 (EtwpTraceSystemShutdown.c)
 *     EtwTraceLpacAccessFailure @ 0x1408C1BF4 (EtwTraceLpacAccessFailure.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14008A500 (RtlGetSystemTimePrecise.c)
 */

LARGE_INTEGER __fastcall KeQuerySystemTimePrecise(LARGE_INTEGER *a1)
{
  LARGE_INTEGER result; // rax

  result = RtlGetSystemTimePrecise();
  *a1 = result;
  return result;
}
