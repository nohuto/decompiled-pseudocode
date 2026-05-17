/*
 * XREFs of ZwSetTimer2 @ 0x18009FBD0
 * Callers:
 *     sub_1800327D4 @ 0x1800327D4 (sub_1800327D4.c)
 *     sub_180035FA0 @ 0x180035FA0 (sub_180035FA0.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetTimer2()
{
  __int64 result; // rax

  result = 424LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
