/*
 * XREFs of ZwSetSecurityObject @ 0x18009FAF0
 * Callers:
 *     sub_1800862C4 @ 0x1800862C4 (sub_1800862C4.c)
 *     sub_180086A04 @ 0x180086A04 (sub_180086A04.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetSecurityObject()
{
  __int64 result; // rax

  result = 417LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
