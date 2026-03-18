/*
 * XREFs of PspLockJobShared @ 0x140611978
 * Callers:
 *     PspGetNextChildJob @ 0x140610F78 (PspGetNextChildJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140611210 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspCallJobHierarchyCallbacks @ 0x140611414 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140611540 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x140612130 (NtQueryInformationJobObject.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1406157D4 (PspQueryJobHierarchyProcessIdList.c)
 *     PsInsertPermanentSiloContextEx @ 0x14077C438 (PsInsertPermanentSiloContextEx.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1408C50E0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1408C7D8C (PspQueryJobHierarchyInterferenceCount.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall PspLockJobShared(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
}
