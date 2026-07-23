/*
 * XREFs of NtOpenProcessTokenEx @ 0x18009D490
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000E960 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180013340 (RtlCheckTokenMembershipEx.c)
 *     TppCritSetThread @ 0x1800300DC (TppCritSetThread.c)
 *     RtlAcquirePrivilege @ 0x180075F50 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1800761C0 (RtlImpersonateSelfEx.c)
 *     RtlpSysVolTakeOwnership @ 0x180086964 (RtlpSysVolTakeOwnership.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800D983C (AVrfpAppendCurrentUserSid.c)
 *     RtlpIsAppContainer @ 0x1800E6588 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 48;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
