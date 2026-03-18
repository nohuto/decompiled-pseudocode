/*
 * XREFs of RtlDeleteRange_0 @ 0x1C00317CD
 * Callers:
 *     AcpiPortarbBacktrackAllocation @ 0x1C00B1900 (AcpiPortarbBacktrackAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C00B67C0 (IrqArbBacktrackAllocation.c)
 *     ArbBacktrackAllocation @ 0x1C00B7430 (ArbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlDeleteRange_0(PRTL_RANGE_LIST RangeList, ULONGLONG Start, ULONGLONG End, PVOID Owner)
{
  return RtlDeleteRange(RangeList, Start, End, Owner);
}
