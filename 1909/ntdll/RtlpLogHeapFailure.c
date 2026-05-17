/*
 * XREFs of RtlpLogHeapFailure @ 0x18010A7C4
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x180038840 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextFree @ 0x180038C70 (RtlpHpVsContextFree.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlpAllocateHeapInternal @ 0x18003AAA0 (RtlpAllocateHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18003B6C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x18003C350 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x18003F020 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18003F9C0 (RtlpFindAndCommitPages.c)
 *     RtlSizeHeap @ 0x1800400A0 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180040830 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1800413B0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpFreeHeap @ 0x180041AB0 (RtlpFreeHeap.c)
 *     RtlReAllocateHeap @ 0x1800431F0 (RtlReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180043280 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180043550 (RtlpReAllocateHeap.c)
 *     RtlpGrowBlockInPlace @ 0x1800445F8 (RtlpGrowBlockInPlace.c)
 *     RtlpHpSegFree @ 0x180044D74 (RtlpHpSegFree.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x1800450F0 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlpDeCommitFreeBlock @ 0x180045188 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18004580C (RtlpInsertFreeBlock.c)
 *     RtlpHeapFindListLookupEntry @ 0x180045AF0 (RtlpHeapFindListLookupEntry.c)
 *     RtlpCoalesceFreeBlocks @ 0x18004622C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x180046728 (RtlpCreateSplitBlock.c)
 *     RtlpHeapListCompare @ 0x180046FB0 (RtlpHeapListCompare.c)
 *     RtlpHeapRemoveListEntry @ 0x180047014 (RtlpHeapRemoveListEntry.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180047C74 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHpHeapValidateProtection @ 0x180047CBC (RtlpHpHeapValidateProtection.c)
 *     RtlpInitializeHeapSegment @ 0x180048C68 (RtlpInitializeHeapSegment.c)
 *     RtlpCreateUCREntry @ 0x180048E88 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x180049000 (RtlpInsertUCRBlock.c)
 *     RtlpDestroyHeapSegment @ 0x18004AC2C (RtlpDestroyHeapSegment.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004D0C4 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004D7D0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1800506D4 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpLargeFree @ 0x1800507E4 (RtlpHpLargeFree.c)
 *     RtlGetUserInfoHeap @ 0x18006E580 (RtlGetUserInfoHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x18006E818 (RtlpProbeUserBufferSafe.c)
 *     RtlSetUserValueHeap @ 0x18006E8F0 (RtlSetUserValueHeap.c)
 *     RtlpRemoveUCRBlock @ 0x180080AFC (RtlpRemoveUCRBlock.c)
 *     RtlpHpVsContextGrowInPlace @ 0x18009C730 (RtlpHpVsContextGrowInPlace.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF630 (RtlSetUserFlagsHeap.c)
 *     RtlpCoalesceHeap @ 0x1800EFE6C (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1800F2A30 (RtlZeroHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180101104 (RtlpAnalyzeHeapFailure.c)
 *     RtlpValidateHeapSegment @ 0x180106A8C (RtlpValidateHeapSegment.c)
 *     RtlpHpVsContextFreeInternal @ 0x18010C14C (RtlpHpVsContextFreeInternal.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x180101780 (RtlpHpHeapHandleError.c)
 */

__int64 __fastcall RtlpLogHeapFailure(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_180162800 != a2 )
  {
    qword_180162818 = a5;
    qword_180162820 = a6;
    dword_1801627F8 = a1;
    qword_180162800 = a2;
    qword_180162808 = a3;
    qword_180162810 = a4;
    return RtlpHpHeapHandleError(a1, a2, a3);
  }
  return result;
}
