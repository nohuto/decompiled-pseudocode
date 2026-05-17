/*
 * XREFs of ZwOpenThreadTokenEx @ 0x18009CCC0
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000E960 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180013340 (RtlCheckTokenMembershipEx.c)
 *     sub_180075CE8 @ 0x180075CE8 (sub_180075CE8.c)
 *     sub_1800E6498 @ 0x1800E6498 (sub_1800E6498.c)
 * Callees:
 *     <none>
 */

__int64 ZwOpenThreadTokenEx()
{
  __int64 result; // rax

  result = 47LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
