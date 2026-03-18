/*
 * XREFs of NtOpenProcessToken @ 0x1406487A0
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenProcessTokenEx @ 0x140646F20 (NtOpenProcessTokenEx.c)
 */

NTSTATUS __stdcall NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  return NtOpenProcessTokenEx(ProcessHandle, DesiredAccess, 0, TokenHandle);
}
