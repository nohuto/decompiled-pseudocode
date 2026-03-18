/*
 * XREFs of RtlDeleteRange_0 @ 0x1C0030B4D
 * Callers:
 *     AcpiPortarbBacktrackAllocation @ 0x1C00AE100 (AcpiPortarbBacktrackAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C00B2D30 (IrqArbBacktrackAllocation.c)
 *     ArbBacktrackAllocation @ 0x1C00B3A70 (ArbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlDeleteRange_0(PRTL_RANGE_LIST RangeList, ULONGLONG Start, ULONGLONG End, PVOID Owner)
{
  return RtlDeleteRange(RangeList, Start, End, Owner);
}
