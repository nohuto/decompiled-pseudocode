/*
 * XREFs of RtlpHpReleaseQueuedLockExclusive @ 0x1401B636C
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x1400BC2F0 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsChunkSplit @ 0x1400BC850 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkDecommit @ 0x1400BE800 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14010EBB0 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsContextAllocateInternal @ 0x1401B66BC (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextFreeInternal @ 0x1401B6A1C (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsContextFreeList @ 0x1401B6BB0 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsContextMultiAlloc @ 0x1401B6C40 (RtlpHpVsContextMultiAlloc.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x1400167C0 (KeLeaveGuardedRegion.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 */

void __fastcall RtlpHpReleaseQueuedLockExclusive(int a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  volatile signed __int64 *Lock; // rbx

  if ( a1 )
  {
    KeReleaseInStackQueuedSpinLock(a2);
  }
  else
  {
    Lock = (volatile signed __int64 *)a2->LockQueue.Lock;
    if ( (_InterlockedExchangeAdd64(Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(Lock);
    KeAbPostRelease((ULONG_PTR)Lock);
    KeLeaveGuardedRegion();
  }
  a2->LockQueue.Lock = 0LL;
}
