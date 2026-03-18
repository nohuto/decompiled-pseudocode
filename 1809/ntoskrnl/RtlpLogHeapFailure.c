/*
 * XREFs of RtlpLogHeapFailure @ 0x1402FB738
 * Callers:
 *     RtlpHpVsContextFree @ 0x1400079BC (RtlpHpVsContextFree.c)
 *     RtlpHpFreeHeap @ 0x140007BC0 (RtlpHpFreeHeap.c)
 *     RtlpHpSegFree @ 0x140007CDC (RtlpHpSegFree.c)
 *     RtlpHpLargeFree @ 0x140007D8C (RtlpHpLargeFree.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x1400097E0 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x14000C54C (RtlpHpHeapCheckCommitLimit.c)
 *     ExAllocateHeapPool @ 0x1400BA150 (ExAllocateHeapPool.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1400BEE10 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlFreeHeap @ 0x14011EE70 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x14011EED0 (RtlpFreeHeapInternal.c)
 *     RtlAllocateHeap @ 0x14011EF40 (RtlAllocateHeap.c)
 *     RtlpHpFixedVsFree @ 0x140141BC0 (RtlpHpFixedVsFree.c)
 *     RtlpHpVsContextAllocateInternal @ 0x1401B669C (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextFreeInternal @ 0x1401B69FC (RtlpHpVsContextFreeInternal.c)
 *     RtlSizeHeap @ 0x1402ED890 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x1402EFC30 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1402F0674 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1402F0A64 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1402F11A8 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1402F12E8 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1402F1B60 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x1402F1DC8 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1402F2334 (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x1402F25E4 (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x1402F2930 (RtlpInsertUCRBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x1402F29F8 (RtlpProbeUserBufferSafe.c)
 *     RtlpRemoveUCRBlock @ 0x1402F2A88 (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x1402F2CA4 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402FB78C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x1402FC1DC (RtlpHeapListCompare.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlZeroHeap @ 0x140895F50 (RtlZeroHeap.c)
 *     RtlpDestroyHeapSegment @ 0x14089641C (RtlpDestroyHeapSegment.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x1402FBAFC (RtlpHpHeapHandleError.c)
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
