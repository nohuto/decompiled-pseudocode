/*
 * XREFs of PspScheduleEnforcementWorker @ 0x1406AFA30
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406AF6C0 (PspChangeJobMemoryUsageByProcess.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 */

void __fastcall PspScheduleEnforcementWorker(__int64 a1)
{
  _InterlockedOr((volatile signed __int32 *)(a1 + 1304), 0x100000u);
  _m_prefetchw(&PspJobTimeLimitsWorkItemFlags);
  if ( (_InterlockedOr(&PspJobTimeLimitsWorkItemFlags, 6u) & 4) == 0 )
    ExQueueWorkItem(&PspJobTimeLimitsWorkItem, DelayedWorkQueue);
}
