/*
 * XREFs of NtOpenThreadToken @ 0x140648880
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenThreadTokenEx @ 0x1406488A0 (NtOpenThreadTokenEx.c)
 */

NTSTATUS __stdcall NtOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  return NtOpenThreadTokenEx(ThreadHandle, DesiredAccess, OpenAsSelf, 0, TokenHandle);
}
