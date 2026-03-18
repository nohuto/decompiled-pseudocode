/*
 * XREFs of ZwClose_0 @ 0x1C0030B17
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1C009C884 (ArbBuildAssignmentOrdering.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1C00B3640 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00B383C (ArbAddMmConfigRangeAsBootReserved.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwClose_0(HANDLE Handle)
{
  return ZwClose(Handle);
}
