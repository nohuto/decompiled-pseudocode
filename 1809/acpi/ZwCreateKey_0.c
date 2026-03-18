/*
 * XREFs of ZwCreateKey_0 @ 0x1C0030B71
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1C009C884 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwCreateKey_0(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        PULONG Disposition)
{
  return ZwCreateKey(KeyHandle, DesiredAccess, ObjectAttributes, TitleIndex, Class, CreateOptions, Disposition);
}
