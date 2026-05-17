/*
 * XREFs of ZwSetTimer2 @ 0x1800A0380
 * Callers:
 *     TppUpdateSubQueueTimer @ 0x1800327D4 (TppUpdateSubQueueTimer.c)
 *     TppTimerQueueExpiration @ 0x180035FA0 (TppTimerQueueExpiration.c)
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
