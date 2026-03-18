/*
 * XREFs of PspTerminateAllProcessesInJobHierarchy @ 0x1406E2594
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x140613050 (PspEnforceLimitsJobPostCallback.c)
 *     PspJobClose @ 0x1406E2430 (PspJobClose.c)
 *     NtTerminateJobObject @ 0x1406E2520 (NtTerminateJobObject.c)
 *     PsTerminateServerSilo @ 0x1408C4700 (PsTerminateServerSilo.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140612D20 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x14068736C (PspEvaluateAndNotifyEmptyJob.c)
 *     EtwTraceJob @ 0x1408F37B0 (EtwTraceJob.c)
 */

char __fastcall PspTerminateAllProcessesInJobHierarchy(PRKEVENT Event, unsigned int a2, char a3)
{
  char v3; // bl
  unsigned __int8 v6; // al
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0LL;
  _InterlockedOr((volatile signed __int32 *)&Event[54].Header.WaitListHead, 0x80u);
  LODWORD(v8) = a2;
  BYTE4(v8) = a3 != 0;
  PspEnumJobsAndProcessesInJobHierarchy(Event, 0, (int)PspTerminateProcessesJobCallback, 0, (__int64)&v8, 2);
  v6 = BYTE4(v8);
  if ( (v8 & 0x200000000LL) != 0 )
  {
    v3 = 1;
  }
  else
  {
    PspEvaluateAndNotifyEmptyJob(Event, 0, 0);
    v6 = BYTE4(v8);
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(Event, v6, a2, 1825LL);
  return v3;
}
