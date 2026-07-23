/*
 * XREFs of ExfTryAcquirePushLockShared @ 0x140103CD0
 * Callers:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140036320 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x1400390D0 (MiCoalesceFreePages.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x14004E6D0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009D110 (MiQueueLargeFreeZeroRebuild.c)
 *     PfLockSharedTryAcquire @ 0x1400E2138 (PfLockSharedTryAcquire.c)
 *     ExTryAcquirePushLockSharedEx @ 0x140103B30 (ExTryAcquirePushLockSharedEx.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140166880 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x140166940 (ExpTryAcquireFannedOutPushLockShared.c)
 *     IopProcessIoTracking @ 0x140285B04 (IopProcessIoTracking.c)
 *     MiProcessTransitionHeatBatch @ 0x1402CF164 (MiProcessTransitionHeatBatch.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14031B0C0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     TryLockShutdownShared @ 0x1407FA7F0 (TryLockShutdownShared.c)
 * Callees:
 *     <none>
 */

char __fastcall ExfTryAcquirePushLockShared(unsigned __int64 *a1)
{
  char v2; // r9
  unsigned __int64 v3; // rax
  __int64 v4; // r8
  signed __int64 v5; // rcx
  unsigned __int64 v6; // rtt

  v2 = 0;
  _m_prefetchw(a1);
  v3 = *a1;
  while ( 1 )
  {
    v4 = (v3 >> 1) & 1;
    if ( (v3 & 1) != 0 && (v4 || (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      break;
    v5 = (v3 | 1) + 16;
    if ( v4 )
      v5 = v3 | 1;
    v6 = v3;
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v5, v3);
    if ( v6 == v3 )
      return 1;
  }
  return v2;
}
