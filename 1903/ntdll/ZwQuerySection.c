/*
 * XREFs of ZwQuerySection @ 0x18009D100
 * Callers:
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 *     sub_180112180 @ 0x180112180 (sub_180112180.c)
 * Callees:
 *     <none>
 */

__int64 ZwQuerySection()
{
  __int64 result; // rax

  result = 81LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
