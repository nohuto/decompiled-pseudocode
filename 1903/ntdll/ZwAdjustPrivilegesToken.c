/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x18009CF00
 * Callers:
 *     sub_1800300DC @ 0x1800300DC (sub_1800300DC.c)
 *     RtlAcquirePrivilege @ 0x180075AD0 (RtlAcquirePrivilege.c)
 *     RtlAdjustPrivilege @ 0x180078490 (RtlAdjustPrivilege.c)
 *     RtlReleasePrivilege @ 0x18007FB70 (RtlReleasePrivilege.c)
 *     sub_1800862C4 @ 0x1800862C4 (sub_1800862C4.c)
 *     RtlRemovePrivileges @ 0x18008A0B0 (RtlRemovePrivileges.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAdjustPrivilegesToken(
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
