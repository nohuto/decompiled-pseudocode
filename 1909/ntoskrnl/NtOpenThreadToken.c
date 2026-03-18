/*
 * XREFs of NtOpenThreadToken @ 0x1405D62B0
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenThreadTokenEx @ 0x1405D62D0 (NtOpenThreadTokenEx.c)
 */

NTSTATUS __stdcall NtOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  return NtOpenThreadTokenEx(ThreadHandle, DesiredAccess, OpenAsSelf, 0, TokenHandle);
}
