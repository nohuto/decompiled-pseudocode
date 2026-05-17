/*
 * XREFs of NtOpenProcessTokenEx @ 0x1800A08E0
 * Callers:
 *     TppCritSetThread @ 0x180029604 (TppCritSetThread.c)
 *     RtlCheckTokenMembershipEx @ 0x180041770 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180046140 (RtlCheckTokenCapability.c)
 *     RtlAcquirePrivilege @ 0x18007C220 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x18007C490 (RtlImpersonateSelfEx.c)
 *     RtlpSysVolTakeOwnership @ 0x18008F800 (RtlpSysVolTakeOwnership.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800DB92C (AVrfpAppendCurrentUserSid.c)
 *     RtlpIsAppContainer @ 0x1800E91EC (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenProcessTokenEx()
{
  __int64 result; // rax

  result = 48LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
