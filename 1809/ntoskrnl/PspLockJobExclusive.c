/*
 * XREFs of PspLockJobExclusive @ 0x1405FF100
 * Callers:
 *     PspJobDelete @ 0x14008FD50 (PspJobDelete.c)
 *     PspCallJobHierarchyCallbacks @ 0x1405FEBF8 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1405FED20 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x1405FF8F0 (NtQueryInformationJobObject.c)
 *     PspLockRootJobFromProcess @ 0x140601738 (PspLockRootJobFromProcess.c)
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140604DE8 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspAssignProcessToJob @ 0x140606664 (PspAssignProcessToJob.c)
 *     PspJobClose @ 0x1406075F0 (PspJobClose.c)
 *     PspGetNextJobProcess @ 0x14068E660 (PspGetNextJobProcess.c)
 *     PspJobNotificationWorker @ 0x1406BA850 (PspJobNotificationWorker.c)
 *     PspNotificationPacketCallback @ 0x1406C3A60 (PspNotificationPacketCallback.c)
 *     PspConvertSiloToServerSilo @ 0x140888064 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140888200 (PspCreateSilo.c)
 *     PspQuitNextJobProcess @ 0x14088B25C (PspQuitNextJobProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobExclusive(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
