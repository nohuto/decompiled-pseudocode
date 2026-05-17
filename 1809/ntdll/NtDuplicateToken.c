/*
 * XREFs of NtDuplicateToken @ 0x1800A0B20
 * Callers:
 *     TppCritSetThread @ 0x180029604 (TppCritSetThread.c)
 *     RtlpTpInitializeData @ 0x18002F1A4 (RtlpTpInitializeData.c)
 *     RtlCheckTokenMembershipEx @ 0x180041770 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x1800428C0 (RtlpNewSecurityObject.c)
 *     RtlCheckTokenCapability @ 0x180046140 (RtlCheckTokenCapability.c)
 *     RtlCheckSandboxedToken @ 0x180071FC0 (RtlCheckSandboxedToken.c)
 *     RtlImpersonateSelfEx @ 0x18007C490 (RtlImpersonateSelfEx.c)
 *     RtlpIsAppContainer @ 0x1800E91EC (RtlpIsAppContainer.c)
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
