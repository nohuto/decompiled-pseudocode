/*
 * XREFs of PspLockJobExclusive @ 0x1405FE100
 * Callers:
 *     PspJobDelete @ 0x14008FE10 (PspJobDelete.c)
 *     PspCallJobHierarchyCallbacks @ 0x1405FDBF8 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1405FDD20 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x1405FE8F0 (NtQueryInformationJobObject.c)
 *     PspLockRootJobFromProcess @ 0x140600738 (PspLockRootJobFromProcess.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140603DE8 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspAssignProcessToJob @ 0x140605664 (PspAssignProcessToJob.c)
 *     PspJobClose @ 0x1406065F0 (PspJobClose.c)
 *     PspGetNextJobProcess @ 0x14068D4A0 (PspGetNextJobProcess.c)
 *     PspJobNotificationWorker @ 0x1406B95B0 (PspJobNotificationWorker.c)
 *     PspNotificationPacketCallback @ 0x1406C27C0 (PspNotificationPacketCallback.c)
 *     PspConvertSiloToServerSilo @ 0x140886E04 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140886FA0 (PspCreateSilo.c)
 *     PspQuitNextJobProcess @ 0x140889FFC (PspQuitNextJobProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobExclusive(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
