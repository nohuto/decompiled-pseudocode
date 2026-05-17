/*
 * XREFs of ZwGetNextThread @ 0x18009E530
 * Callers:
 *     sub_180112808 @ 0x180112808 (sub_180112808.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetNextThread()
{
  __int64 result; // rax

  result = 243LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
