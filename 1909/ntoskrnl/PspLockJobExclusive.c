/*
 * XREFs of PspLockJobExclusive @ 0x140613460
 * Callers:
 *     PspJobDelete @ 0x1400EB730 (PspJobDelete.c)
 *     PspCallJobHierarchyCallbacks @ 0x140612F24 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140613050 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x140613C40 (NtQueryInformationJobObject.c)
 *     PspLockRootJobFromProcess @ 0x1406151A8 (PspLockRootJobFromProcess.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x14068736C (PspEvaluateAndNotifyEmptyJob.c)
 *     PspAssignProcessToJob @ 0x14068917C (PspAssignProcessToJob.c)
 *     PspGetNextJobProcess @ 0x14068A0A0 (PspGetNextJobProcess.c)
 *     PspJobNotificationWorker @ 0x1406B3190 (PspJobNotificationWorker.c)
 *     PspJobClose @ 0x1406E2430 (PspJobClose.c)
 *     PspNotificationPacketCallback @ 0x1406E2640 (PspNotificationPacketCallback.c)
 *     PspConvertSiloToServerSilo @ 0x1408C4AA4 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x1408C4C40 (PspCreateSilo.c)
 *     PspQuitNextJobProcess @ 0x1408C7818 (PspQuitNextJobProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobExclusive(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
