/*
 * XREFs of PspLockJobExclusive @ 0x140611950
 * Callers:
 *     PspJobDelete @ 0x1400E6790 (PspJobDelete.c)
 *     PspCallJobHierarchyCallbacks @ 0x140611414 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140611540 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x140612130 (NtQueryInformationJobObject.c)
 *     PspLockRootJobFromProcess @ 0x140613698 (PspLockRootJobFromProcess.c)
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140693DFC (PspEvaluateAndNotifyEmptyJob.c)
 *     PspAssignProcessToJob @ 0x140695C0C (PspAssignProcessToJob.c)
 *     PspGetNextJobProcess @ 0x140696B30 (PspGetNextJobProcess.c)
 *     PspJobNotificationWorker @ 0x1406B1110 (PspJobNotificationWorker.c)
 *     PspJobClose @ 0x1406E0DB0 (PspJobClose.c)
 *     PspNotificationPacketCallback @ 0x1406E0FC0 (PspNotificationPacketCallback.c)
 *     PspConvertSiloToServerSilo @ 0x1408C51D4 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x1408C5370 (PspCreateSilo.c)
 *     PspQuitNextJobProcess @ 0x1408C7F38 (PspQuitNextJobProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobExclusive(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
