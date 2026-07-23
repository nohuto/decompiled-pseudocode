/*
 * XREFs of RtlpHpAcquireLockExclusive @ 0x1400BC3E0
 * Callers:
 *     RtlpHpSegMgrVaCtxInsert @ 0x14000780C (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpVaMgrCtxFree @ 0x140008234 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpLargeLockAcquire @ 0x1400097B4 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpSegLockAcquire @ 0x14000B57C (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x14000C958 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpVaMgrAlloc @ 0x14000D358 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x14000DAB0 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpLfhSlotAllocate @ 0x1400BADE0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14010E1B0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14012C530 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpHeapExtendContext @ 0x1401363A8 (RtlpHpHeapExtendContext.c)
 *     RtlpHpFixedVsAllocate @ 0x140139570 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x14014154C (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpFixedVsFree @ 0x140141CE0 (RtlpHpFixedVsFree.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x14015931C (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1402FCFF0 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402FD8EC (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402FDDF0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
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
