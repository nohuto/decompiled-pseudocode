/*
 * XREFs of ZwPrivilegeCheck @ 0x18009F4C0
 * Callers:
 *     RtlpNewSecurityObject @ 0x1800100C4 (RtlpNewSecurityObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x180066FB8 (RtlpValidOwnerSubjectContext.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D6F60 (RtlNewSecurityGrantedAccess.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E66D8 (RtlpValidLabelSubjectContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPrivilegeCheck(HANDLE ClientToken, PPRIVILEGE_SET RequiredPrivileges, PBOOLEAN Result)
{
  NTSTATUS result; // eax

  result = 306;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
