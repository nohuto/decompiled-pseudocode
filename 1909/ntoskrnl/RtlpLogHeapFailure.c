/*
 * XREFs of RtlpLogHeapFailure @ 0x140319BCC
 * Callers:
 *     RtlpHpFreeHeap @ 0x140003214 (RtlpHpFreeHeap.c)
 *     RtlpHpSegFree @ 0x14001D8B4 (RtlpHpSegFree.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x14001DBF0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1400201E0 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x14002232C (RtlpHpHeapCheckCommitLimit.c)
 *     ExAllocateHeapPool @ 0x140037CE0 (ExAllocateHeapPool.c)
 *     RtlpHpVsContextAllocateInternal @ 0x140061C80 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextFree @ 0x140062FC0 (RtlpHpVsContextFree.c)
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     RtlpHpVsContextFreeInternal @ 0x14010AFFC (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpLargeFree @ 0x14010D6C0 (RtlpHpLargeFree.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x140110384 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlFreeHeap @ 0x1401108B0 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x140110910 (RtlpFreeHeapInternal.c)
 *     RtlAllocateHeap @ 0x140110990 (RtlAllocateHeap.c)
 *     RtlpHpFixedVsFree @ 0x14015CF10 (RtlpHpFixedVsFree.c)
 *     RtlSizeHeap @ 0x14030BBC0 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x14030E330 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x14030ED6C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x14030F154 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x14030F880 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14030F9C0 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14031021C (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x140310478 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1403109D0 (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x140310C80 (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x140310FCC (RtlpInsertUCRBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x140311094 (RtlpProbeUserBufferSafe.c)
 *     RtlpRemoveUCRBlock @ 0x140311124 (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x140311330 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x140319C20 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x14031A678 (RtlpHeapListCompare.c)
 *     RtlZeroHeap @ 0x1408D37C0 (RtlZeroHeap.c)
 *     RtlpDestroyHeapSegment @ 0x1408D3C88 (RtlpDestroyHeapSegment.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x140319F90 (RtlpHpHeapHandleError.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( qword_14042AA40 != a2 )
  {
    qword_14042AA58 = a5;
    qword_14042AA60 = a6;
    dword_14042AA38 = a1;
    qword_14042AA40 = a2;
    qword_14042AA48 = a3;
    qword_14042AA50 = a4;
    RtlpHpHeapHandleError();
  }
}
