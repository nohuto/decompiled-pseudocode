/*
 * XREFs of NtOpenProcessToken @ 0x1800A2710
 * Callers:
 *     RtlpGetDefaultsSubjectContext @ 0x180045B8C (RtlpGetDefaultsSubjectContext.c)
 *     RtlpValidOwnerSubjectContext @ 0x18006E2FC (RtlpValidOwnerSubjectContext.c)
 *     RtlCheckSandboxedToken @ 0x180071FC0 (RtlCheckSandboxedToken.c)
 *     RtlpSetSecurityObject @ 0x18007C610 (RtlpSetSecurityObject.c)
 *     RtlAdjustPrivilege @ 0x18007E580 (RtlAdjustPrivilege.c)
 *     WerEscalationLazyInit @ 0x1800DF484 (WerEscalationLazyInit.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenProcessToken()
{
  __int64 result; // rax

  result = 290LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
