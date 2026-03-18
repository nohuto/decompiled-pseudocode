/*
 * XREFs of ExfTryAcquirePushLockShared @ 0x14009DCF0
 * Callers:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140027570 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x14002B760 (MiCoalesceFreePages.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x14003E7D0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     PfLockSharedTryAcquire @ 0x140097378 (PfLockSharedTryAcquire.c)
 *     ExTryAcquirePushLockSharedEx @ 0x14009DB40 (ExTryAcquirePushLockSharedEx.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009FE80 (MiQueueLargeFreeZeroRebuild.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14016CC00 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x14016CCC0 (ExpTryAcquireFannedOutPushLockShared.c)
 *     IopProcessIoTracking @ 0x14029AAD8 (IopProcessIoTracking.c)
 *     MiProcessTransitionHeatBatch @ 0x1402EBFE8 (MiProcessTransitionHeatBatch.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140339BA0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     TryLockShutdownShared @ 0x140832AD4 (TryLockShutdownShared.c)
 * Callees:
 *     <none>
 */

char __fastcall ExfTryAcquirePushLockShared(unsigned __int64 *a1)
{
  char v2; // r9
  unsigned __int64 v3; // rax
  __int64 v4; // r8
  signed __int64 v6; // rcx
  unsigned __int64 v7; // rtt

  v2 = 0;
  _m_prefetchw(a1);
  v3 = *a1;
  while ( 1 )
  {
    v4 = (v3 >> 1) & 1;
    if ( (v3 & 1) != 0 && (v4 || (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      break;
    v6 = (v3 | 1) + 16;
    if ( v4 )
      v6 = v3 | 1;
    v7 = v3;
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v6, v3);
    if ( v7 == v3 )
      return 1;
  }
  return v2;
}
