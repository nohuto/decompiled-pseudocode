/*
 * XREFs of KeQuerySystemTimePrecise @ 0x14008A4F0
 * Callers:
 *     PspUserThreadStartup @ 0x1405F6E40 (PspUserThreadStartup.c)
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     PspAllocateThread @ 0x1405F7E84 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x14064BCB8 (PspAllocateProcess.c)
 *     EtwpInitializeTimeStamp @ 0x14065AFC8 (EtwpInitializeTimeStamp.c)
 *     EtwpInitLoggerContext @ 0x14065B12C (EtwpInitLoggerContext.c)
 *     NtQueryInformationProcess @ 0x14066DB70 (NtQueryInformationProcess.c)
 *     EtwpFinalizeHeader @ 0x14069A3FC (EtwpFinalizeHeader.c)
 *     EtwpTraceSystemShutdown @ 0x1408B9004 (EtwpTraceSystemShutdown.c)
 *     EtwTraceLpacAccessFailure @ 0x1408C0934 (EtwTraceLpacAccessFailure.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14008A510 (RtlGetSystemTimePrecise.c)
 */

__int64 __fastcall KeQuerySystemTimePrecise(__int64 *a1)
{
  __int64 result; // rax

  result = RtlGetSystemTimePrecise(a1);
  *a1 = result;
  return result;
}
