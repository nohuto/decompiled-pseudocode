/*
 * XREFs of RtlpLogHeapFailure @ 0x1402FB838
 * Callers:
 *     RtlpHpVsContextFree @ 0x1400079BC (RtlpHpVsContextFree.c)
 *     RtlpHpFreeHeap @ 0x140007BC0 (RtlpHpFreeHeap.c)
 *     RtlpHpSegFree @ 0x140007CDC (RtlpHpSegFree.c)
 *     RtlpHpLargeFree @ 0x140007D8C (RtlpHpLargeFree.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x1400097E0 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x14000C54C (RtlpHpHeapCheckCommitLimit.c)
 *     ExAllocateHeapPool @ 0x1400BA170 (ExAllocateHeapPool.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1400BEE30 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlFreeHeap @ 0x14011EE90 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x14011EEF0 (RtlpFreeHeapInternal.c)
 *     RtlAllocateHeap @ 0x14011EF60 (RtlAllocateHeap.c)
 *     RtlpHpFixedVsFree @ 0x140141BE0 (RtlpHpFixedVsFree.c)
 *     RtlpHpVsContextAllocateInternal @ 0x1401B66BC (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextFreeInternal @ 0x1401B6A1C (RtlpHpVsContextFreeInternal.c)
 *     RtlSizeHeap @ 0x1402ED990 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x1402EFD30 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1402F0774 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1402F0B64 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1402F12A8 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1402F13E8 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1402F1C60 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x1402F1EC8 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1402F2434 (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x1402F26E4 (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x1402F2A30 (RtlpInsertUCRBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x1402F2AF8 (RtlpProbeUserBufferSafe.c)
 *     RtlpRemoveUCRBlock @ 0x1402F2B88 (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x1402F2DA4 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402FB88C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x1402FC2DC (RtlpHeapListCompare.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlZeroHeap @ 0x140895F30 (RtlZeroHeap.c)
 *     RtlpDestroyHeapSegment @ 0x1408963FC (RtlpDestroyHeapSegment.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x1402FBBFC (RtlpHpHeapHandleError.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( qword_140404420 != a2 )
  {
    qword_140404438 = a5;
    qword_140404440 = a6;
    dword_140404418 = a1;
    qword_140404420 = a2;
    qword_140404428 = a3;
    qword_140404430 = a4;
    RtlpHpHeapHandleError();
  }
}
