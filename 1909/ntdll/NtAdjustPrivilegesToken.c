/*
 * XREFs of NtAdjustPrivilegesToken @ 0x18009D6B0
 * Callers:
 *     TppCritSetThread @ 0x1800300DC (TppCritSetThread.c)
 *     RtlAcquirePrivilege @ 0x180075F50 (RtlAcquirePrivilege.c)
 *     RtlAdjustPrivilege @ 0x180078910 (RtlAdjustPrivilege.c)
 *     RtlReleasePrivilege @ 0x180080210 (RtlReleasePrivilege.c)
 *     RtlpSysVolTakeOwnership @ 0x180086964 (RtlpSysVolTakeOwnership.c)
 *     RtlRemovePrivileges @ 0x18008A750 (RtlRemovePrivileges.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 65;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
