/*
 * XREFs of NtOpenProcessTokenEx @ 0x1800A0900
 * Callers:
 *     TppCritSetThread @ 0x180029604 (TppCritSetThread.c)
 *     RtlCheckTokenMembershipEx @ 0x180041770 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180046140 (RtlCheckTokenCapability.c)
 *     RtlAcquirePrivilege @ 0x18007C230 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x18007C4A0 (RtlImpersonateSelfEx.c)
 *     RtlpSysVolTakeOwnership @ 0x18008F810 (RtlpSysVolTakeOwnership.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800DB92C (AVrfpAppendCurrentUserSid.c)
 *     RtlpIsAppContainer @ 0x1800E91EC (RtlpIsAppContainer.c)
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
