/*
 * XREFs of RtlpLogHeapFailure @ 0x14031A17C
 * Callers:
 *     RtlpHpFreeHeap @ 0x140003214 (RtlpHpFreeHeap.c)
 *     RtlpHpSegFree @ 0x14001D4C4 (RtlpHpSegFree.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x14001D800 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14001FDF0 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x140021F3C (RtlpHpHeapCheckCommitLimit.c)
 *     ExAllocateHeapPool @ 0x1400378E0 (ExAllocateHeapPool.c)
 *     RtlpHpVsContextAllocateInternal @ 0x140061BE0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextFree @ 0x140062F20 (RtlpHpVsContextFree.c)
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     RtlpHpVsContextFreeInternal @ 0x14010B42C (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpLargeFree @ 0x14010DFD0 (RtlpHpLargeFree.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x140110C94 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlFreeHeap @ 0x1401111C0 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x140111220 (RtlpFreeHeapInternal.c)
 *     RtlAllocateHeap @ 0x1401112A0 (RtlAllocateHeap.c)
 *     RtlpHpFixedVsFree @ 0x14015C870 (RtlpHpFixedVsFree.c)
 *     RtlSizeHeap @ 0x14030C110 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x14030E8E0 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x14030F31C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x14030F704 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x14030FE30 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14030FF70 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1403107CC (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x140310A28 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x140310F80 (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x140311230 (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x14031157C (RtlpInsertUCRBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x140311644 (RtlpProbeUserBufferSafe.c)
 *     RtlpRemoveUCRBlock @ 0x1403116D4 (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x1403118E0 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x14031A1D0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x14031AC28 (RtlpHeapListCompare.c)
 *     RtlZeroHeap @ 0x1408D3EC0 (RtlZeroHeap.c)
 *     RtlpDestroyHeapSegment @ 0x1408D4388 (RtlpDestroyHeapSegment.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x14031A540 (RtlpHpHeapHandleError.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( qword_14042AA30 != a2 )
  {
    qword_14042AA48 = a5;
    qword_14042AA50 = a6;
    dword_14042AA28 = a1;
    qword_14042AA30 = a2;
    qword_14042AA38 = a3;
    qword_14042AA40 = a4;
    RtlpHpHeapHandleError();
  }
}
