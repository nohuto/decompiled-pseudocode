/*
 * XREFs of ZwCancelTimer2 @ 0x18009E0C0
 * Callers:
 *     TppUpdateSubQueueTimer @ 0x1800327D4 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     <none>
 */

__int64 ZwCancelTimer2()
{
  __int64 result; // rax

  result = 146LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
