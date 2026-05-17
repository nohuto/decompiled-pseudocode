/*
 * XREFs of ZwQuerySecurityAttributesToken @ 0x18009F150
 * Callers:
 *     sub_180069E84 @ 0x180069E84 (sub_180069E84.c)
 *     RtlQueryTokenHostIdAsUlong64 @ 0x180081780 (RtlQueryTokenHostIdAsUlong64.c)
 * Callees:
 *     <none>
 */

__int64 ZwQuerySecurityAttributesToken()
{
  __int64 result; // rax

  result = 340LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
