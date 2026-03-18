/*
 * XREFs of RtlAddRange_0 @ 0x1C0030AF3
 * Callers:
 *     ArbAddAllocation @ 0x1C00B35F0 (ArbAddAllocation.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1C00B3640 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00B383C (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbInitializeRangeList @ 0x1C00B3B80 (ArbInitializeRangeList.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlAddRange_0(
        PRTL_RANGE_LIST RangeList,
        ULONGLONG Start,
        ULONGLONG End,
        UCHAR Attributes,
        ULONG Flags,
        PVOID UserData,
        PVOID Owner)
{
  return RtlAddRange(RangeList, Start, End, Attributes, Flags, UserData, Owner);
}
