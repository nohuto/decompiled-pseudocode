/*
 * XREFs of PspScheduleEnforcementWorker @ 0x14068CAC8
 * Callers:
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14068C750 (PspChangeJobMemoryUsageByProcess.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 */

void __fastcall PspScheduleEnforcementWorker(__int64 a1)
{
  _InterlockedOr((volatile signed __int32 *)(a1 + 1304), 0x100000u);
  _m_prefetchw(&PspJobTimeLimitsWorkItemFlags);
  if ( (_InterlockedOr(&PspJobTimeLimitsWorkItemFlags, 6u) & 4) == 0 )
    ExQueueWorkItem(&PspJobTimeLimitsWorkItem, DelayedWorkQueue);
}
