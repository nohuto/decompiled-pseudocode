/*
 * XREFs of NtAdjustPrivilegesToken @ 0x1800A0B00
 * Callers:
 *     TppCritSetThread @ 0x180029604 (TppCritSetThread.c)
 *     RtlAcquirePrivilege @ 0x18007C220 (RtlAcquirePrivilege.c)
 *     RtlAdjustPrivilege @ 0x18007E580 (RtlAdjustPrivilege.c)
 *     RtlReleasePrivilege @ 0x180084C20 (RtlReleasePrivilege.c)
 *     RtlRemovePrivileges @ 0x18008D8B0 (RtlRemovePrivileges.c)
 *     RtlpSysVolTakeOwnership @ 0x18008F800 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

__int64 NtAdjustPrivilegesToken()
{
  __int64 result; // rax

  result = 65LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
