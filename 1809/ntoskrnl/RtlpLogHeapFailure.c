/*
 * XREFs of RtlpLogHeapFailure @ 0x1402FBA28
 * Callers:
 *     RtlpHpVsContextFree @ 0x1400079BC (RtlpHpVsContextFree.c)
 *     RtlpHpFreeHeap @ 0x140007BC0 (RtlpHpFreeHeap.c)
 *     RtlpHpSegFree @ 0x140007CDC (RtlpHpSegFree.c)
 *     RtlpHpLargeFree @ 0x140007D8C (RtlpHpLargeFree.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x1400097E0 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x14000C54C (RtlpHpHeapCheckCommitLimit.c)
 *     ExAllocateHeapPool @ 0x1400BA0B0 (ExAllocateHeapPool.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1400BED70 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlFreeHeap @ 0x14011EF00 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x14011EF60 (RtlpFreeHeapInternal.c)
 *     RtlAllocateHeap @ 0x14011EFD0 (RtlAllocateHeap.c)
 *     RtlpHpFixedVsFree @ 0x140141CE0 (RtlpHpFixedVsFree.c)
 *     RtlpHpVsContextAllocateInternal @ 0x1401B6824 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextFreeInternal @ 0x1401B6B84 (RtlpHpVsContextFreeInternal.c)
 *     RtlSizeHeap @ 0x1402EDB80 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x1402EFF20 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1402F0964 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1402F0D54 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1402F1498 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1402F15D8 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1402F1E50 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x1402F20B8 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1402F2624 (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x1402F28D4 (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x1402F2C20 (RtlpInsertUCRBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x1402F2CE8 (RtlpProbeUserBufferSafe.c)
 *     RtlpRemoveUCRBlock @ 0x1402F2D78 (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x1402F2F94 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402FBA7C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x1402FC4CC (RtlpHeapListCompare.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlZeroHeap @ 0x140897190 (RtlZeroHeap.c)
 *     RtlpDestroyHeapSegment @ 0x14089765C (RtlpDestroyHeapSegment.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x1402FBDEC (RtlpHpHeapHandleError.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( qword_140405420 != a2 )
  {
    qword_140405438 = a5;
    qword_140405440 = a6;
    dword_140405418 = a1;
    qword_140405420 = a2;
    qword_140405428 = a3;
    qword_140405430 = a4;
    RtlpHpHeapHandleError();
  }
}
