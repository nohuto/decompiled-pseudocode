/*
 * XREFs of ZwCreatePartition @ 0x1401C2290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreatePartition(
        HANDLE ParentPartitionHandle,
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG PreferredNode)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ParentPartitionHandle);
}
