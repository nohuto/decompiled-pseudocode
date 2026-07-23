/*
 * XREFs of RtlpHpReleaseQueuedLockExclusive @ 0x1401B64D4
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x1400BC230 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsChunkSplit @ 0x1400BC790 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkDecommit @ 0x1400BE740 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14010EC30 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsContextAllocateInternal @ 0x1401B6824 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextFreeInternal @ 0x1401B6B84 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsContextFreeList @ 0x1401B6D18 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsContextMultiAlloc @ 0x1401B6DA8 (RtlpHpVsContextMultiAlloc.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x1400167C0 (KeLeaveGuardedRegion.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
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
