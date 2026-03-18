/*
 * XREFs of RtlpHpAcquireLockExclusive @ 0x14001F3C0
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x14001D800 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x14001E120 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegLockAcquire @ 0x14001F398 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x14001FC18 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpLfhSlotAllocate @ 0x140038A80 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x14010DD20 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpVaMgrCtxFree @ 0x14010E80C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x14010F224 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140110150 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpLargeLockAcquire @ 0x14011087C (RtlpHpLargeLockAcquire.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140111FE4 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x140119FA4 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1401201B4 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14012044C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpHeapExtendContext @ 0x140136818 (RtlpHpHeapExtendContext.c)
 *     RtlpHpFixedVsAllocate @ 0x14013C130 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpFixedVsFree @ 0x14015C870 (RtlpHpFixedVsFree.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x14031B850 (RtlpHpSegMgrVaCtxFree.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall RtlpHpAcquireLockExclusive(volatile LONG *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a2 )
    return ExAcquireSpinLockExclusive(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)a1, 0LL);
  return -1;
}
