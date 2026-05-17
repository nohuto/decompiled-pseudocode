/*
 * XREFs of NtOpenThreadTokenEx @ 0x18009D470
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000E960 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180013340 (RtlCheckTokenMembershipEx.c)
 *     RtlpOpenThreadToken @ 0x180076168 (RtlpOpenThreadToken.c)
 *     RtlpIsAppContainer @ 0x1800E6588 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenThreadTokenEx()
{
  __int64 result; // rax

  result = 47LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
