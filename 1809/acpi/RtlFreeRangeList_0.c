/*
 * XREFs of RtlFreeRangeList_0 @ 0x1C0030ACF
 * Callers:
 *     ArbBootAllocation @ 0x1C0092C90 (ArbBootAllocation.c)
 *     ArbTestAllocation @ 0x1C0093120 (ArbTestAllocation.c)
 *     ArbRollbackAllocation @ 0x1C00A01F0 (ArbRollbackAllocation.c)
 *     ArbCommitAllocation @ 0x1C00B3AA0 (ArbCommitAllocation.c)
 *     ArbDeleteArbiterInstance @ 0x1C00B3AD0 (ArbDeleteArbiterInstance.c)
 *     ArbInitializeRangeList @ 0x1C00B3B80 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1C00B3F10 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C00B42D0 (ArbRetestAllocation.c)
 *     ArbStartArbiter @ 0x1C00B4700 (ArbStartArbiter.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlFreeRangeList_0(PRTL_RANGE_LIST RangeList)
{
  RtlFreeRangeList(RangeList);
}
