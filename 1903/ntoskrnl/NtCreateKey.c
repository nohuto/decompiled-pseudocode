/*
 * XREFs of NtCreateKey @ 0x14063B530
 * Callers:
 *     <none>
 * Callees:
 *     CmCreateKey @ 0x14063B570 (CmCreateKey.c)
 */

NTSTATUS __stdcall NtCreateKey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        PULONG Disposition)
{
  return CmCreateKey(KeyHandle, DesiredAccess, ObjectAttributes, TitleIndex, Class, CreateOptions, Disposition, 0LL);
}
