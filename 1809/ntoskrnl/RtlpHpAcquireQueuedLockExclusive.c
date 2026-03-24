/*
 * XREFs of RtlpHpAcquireQueuedLockExclusive @ 0x1401B6304
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x1400BC850 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkDecommit @ 0x1400BE800 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14010EBB0 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsContextAllocateInternal @ 0x1401B66BC (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextFreeInternal @ 0x1401B6A1C (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsContextFreeList @ 0x1401B6BB0 (RtlpHpVsContextFreeList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall RtlpHpAcquireQueuedLockExclusive(KSPIN_LOCK *a1, ULONG_PTR a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( (_DWORD)a2 )
  {
    KeAcquireInStackQueuedSpinLock(a1, (PKLOCK_QUEUE_HANDLE)a3);
  }
  else
  {
    *(_QWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 8) = a1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)a1, a2);
  }
}
