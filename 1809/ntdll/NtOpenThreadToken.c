/*
 * XREFs of NtOpenThreadToken @ 0x1800A0780
 * Callers:
 *     RtlpTpRevertCapture @ 0x18002F218 (RtlpTpRevertCapture.c)
 *     RtlCheckSandboxedToken @ 0x180071FC0 (RtlCheckSandboxedToken.c)
 *     RtlAdjustPrivilege @ 0x18007E590 (RtlAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 36;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
