/*
 * XREFs of NtOpenProcessToken @ 0x1405D0FE0
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenProcessTokenEx @ 0x1405CFF00 (NtOpenProcessTokenEx.c)
 */

NTSTATUS __stdcall NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  return NtOpenProcessTokenEx(ProcessHandle, DesiredAccess, 0, TokenHandle);
}
