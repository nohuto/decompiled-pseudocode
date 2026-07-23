/*
 * XREFs of ZwDuplicateToken @ 0x18009CF20
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000E960 (RtlCheckTokenCapability.c)
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 *     RtlCheckTokenMembershipEx @ 0x180013340 (RtlCheckTokenMembershipEx.c)
 *     sub_1800300DC @ 0x1800300DC (sub_1800300DC.c)
 *     sub_180030DFC @ 0x180030DFC (sub_180030DFC.c)
 *     RtlImpersonateSelfEx @ 0x180075D40 (RtlImpersonateSelfEx.c)
 *     sub_1800E6498 @ 0x1800E6498 (sub_1800E6498.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE Type,
        PHANDLE NewTokenHandle)
{
  NTSTATUS result; // eax

  result = 66;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
