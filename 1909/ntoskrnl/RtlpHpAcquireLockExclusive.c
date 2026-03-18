/*
 * XREFs of RtlpHpAcquireLockExclusive @ 0x14001F7B0
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x14001DBF0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x14001E510 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegLockAcquire @ 0x14001F788 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x140020008 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpLfhSlotAllocate @ 0x140038E80 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x14010D410 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpVaMgrCtxFree @ 0x14010DEFC (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x14010E914 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x14010F840 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpLargeLockAcquire @ 0x14010FF6C (RtlpHpLargeLockAcquire.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1401116D4 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x140118034 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x140120F04 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14012119C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpHeapExtendContext @ 0x140137198 (RtlpHpHeapExtendContext.c)
 *     RtlpHpFixedVsAllocate @ 0x14013C750 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpFixedVsFree @ 0x14015CF10 (RtlpHpFixedVsFree.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x14031B2A0 (RtlpHpSegMgrVaCtxFree.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
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
