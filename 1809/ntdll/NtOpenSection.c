/*
 * XREFs of NtOpenSection @ 0x1800A09E0
 * Callers:
 *     LdrpFindKnownDll @ 0x1800298B4 (LdrpFindKnownDll.c)
 *     CsrpConnectToServer @ 0x18005D994 (CsrpConnectToServer.c)
 *     LdrGetKnownDllSectionHandle @ 0x180087AE0 (LdrGetKnownDllSectionHandle.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 55;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
