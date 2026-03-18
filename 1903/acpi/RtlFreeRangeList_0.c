/*
 * XREFs of RtlFreeRangeList_0 @ 0x1C003174F
 * Callers:
 *     ArbTestAllocation @ 0x1C00986B0 (ArbTestAllocation.c)
 *     ArbBootAllocation @ 0x1C009B6A0 (ArbBootAllocation.c)
 *     ArbRollbackAllocation @ 0x1C00A3200 (ArbRollbackAllocation.c)
 *     ArbCommitAllocation @ 0x1C00B7460 (ArbCommitAllocation.c)
 *     ArbDeleteArbiterInstance @ 0x1C00B7490 (ArbDeleteArbiterInstance.c)
 *     ArbInitializeRangeList @ 0x1C00B7540 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1C00B7900 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C00B7CD0 (ArbRetestAllocation.c)
 *     ArbStartArbiter @ 0x1C00B8110 (ArbStartArbiter.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlFreeRangeList_0(PRTL_RANGE_LIST RangeList)
{
  RtlFreeRangeList(RangeList);
}
