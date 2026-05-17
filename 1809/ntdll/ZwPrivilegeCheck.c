/*
 * XREFs of ZwPrivilegeCheck @ 0x1800A28F0
 * Callers:
 *     RtlpNewSecurityObject @ 0x1800428C0 (RtlpNewSecurityObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x18006E2FC (RtlpValidOwnerSubjectContext.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D9010 (RtlNewSecurityGrantedAccess.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E933C (RtlpValidLabelSubjectContext.c)
 * Callees:
 *     <none>
 */

__int64 ZwPrivilegeCheck()
{
  __int64 result; // rax

  result = 305LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
