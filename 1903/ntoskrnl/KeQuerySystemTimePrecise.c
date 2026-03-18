/*
 * XREFs of KeQuerySystemTimePrecise @ 0x140082040
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     PspUserThreadStartup @ 0x1405E6CA0 (PspUserThreadStartup.c)
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     PspAllocateThread @ 0x14060DC44 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     EtwpInitializeTimeStamp @ 0x1406B6A3C (EtwpInitializeTimeStamp.c)
 *     EtwpInitLoggerContext @ 0x1406B6BB4 (EtwpInitLoggerContext.c)
 *     EtwpFinalizeHeader @ 0x1406B827C (EtwpFinalizeHeader.c)
 *     EtwpTraceSystemShutdown @ 0x1408F5B54 (EtwpTraceSystemShutdown.c)
 *     EtwTraceAdminlessAccessFailure @ 0x1408FD7E8 (EtwTraceAdminlessAccessFailure.c)
 *     EtwTraceLpacAccessFailure @ 0x1408FDB3C (EtwTraceLpacAccessFailure.c)
 * Callees:
 *     EtwpGetSystemTime @ 0x140082060 (EtwpGetSystemTime.c)
 */

__int64 __fastcall KeQuerySystemTimePrecise(__int64 *a1)
{
  __int64 result; // rax

  result = EtwpGetSystemTime();
  *a1 = result;
  return result;
}
