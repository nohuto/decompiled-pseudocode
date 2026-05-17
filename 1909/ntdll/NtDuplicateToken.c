/*
 * XREFs of NtDuplicateToken @ 0x18009D6D0
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000E960 (RtlCheckTokenCapability.c)
 *     RtlpNewSecurityObject @ 0x1800100C4 (RtlpNewSecurityObject.c)
 *     RtlCheckTokenMembershipEx @ 0x180013340 (RtlCheckTokenMembershipEx.c)
 *     TppCritSetThread @ 0x1800300DC (TppCritSetThread.c)
 *     RtlpTpInitializeData @ 0x180030DFC (RtlpTpInitializeData.c)
 *     RtlImpersonateSelfEx @ 0x1800761C0 (RtlImpersonateSelfEx.c)
 *     RtlpIsAppContainer @ 0x1800E6588 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

__int64 NtDuplicateToken()
{
  __int64 result; // rax

  result = 66LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
