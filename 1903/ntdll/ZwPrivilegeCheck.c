/*
 * XREFs of ZwPrivilegeCheck @ 0x18009ED10
 * Callers:
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 *     sub_180066D68 @ 0x180066D68 (sub_180066D68.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D6EA0 (RtlNewSecurityGrantedAccess.c)
 *     sub_1800E65E8 @ 0x1800E65E8 (sub_1800E65E8.c)
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
