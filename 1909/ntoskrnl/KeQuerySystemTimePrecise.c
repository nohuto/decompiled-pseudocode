/*
 * XREFs of KeQuerySystemTimePrecise @ 0x140082440
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     PspUserThreadStartup @ 0x1405E7470 (PspUserThreadStartup.c)
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     PspAllocateThread @ 0x14060F754 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     EtwpInitializeTimeStamp @ 0x1406AA23C (EtwpInitializeTimeStamp.c)
 *     EtwpInitLoggerContext @ 0x1406AA3B4 (EtwpInitLoggerContext.c)
 *     EtwpFinalizeHeader @ 0x1406AD96C (EtwpFinalizeHeader.c)
 *     EtwpTraceSystemShutdown @ 0x1408F54C4 (EtwpTraceSystemShutdown.c)
 *     EtwTraceAdminlessAccessFailure @ 0x1408FD140 (EtwTraceAdminlessAccessFailure.c)
 *     EtwTraceLpacAccessFailure @ 0x1408FD494 (EtwTraceLpacAccessFailure.c)
 * Callees:
 *     EtwpGetSystemTime @ 0x140082460 (EtwpGetSystemTime.c)
 */

__int64 __fastcall KeQuerySystemTimePrecise(__int64 *a1)
{
  __int64 result; // rax

  result = EtwpGetSystemTime();
  *a1 = result;
  return result;
}
