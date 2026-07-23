/*
 * XREFs of NtOpenProcessToken @ 0x140649940
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenProcessTokenEx @ 0x140647F20 (NtOpenProcessTokenEx.c)
 */

NTSTATUS __stdcall NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  return NtOpenProcessTokenEx(ProcessHandle, DesiredAccess, 0, TokenHandle);
}
