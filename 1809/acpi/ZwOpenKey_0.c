/*
 * XREFs of ZwOpenKey_0 @ 0x1C0030B95
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1C009C884 (ArbBuildAssignmentOrdering.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1C00B3640 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00B383C (ArbAddMmConfigRangeAsBootReserved.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwOpenKey_0(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ZwOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
