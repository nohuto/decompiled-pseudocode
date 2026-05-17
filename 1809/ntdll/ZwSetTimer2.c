/*
 * XREFs of ZwSetTimer2 @ 0x1800A37B0
 * Callers:
 *     TppTimerQueueExpiration @ 0x18002CAB0 (TppTimerQueueExpiration.c)
 *     TppUpdateSubQueueTimer @ 0x18002D104 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetTimer2()
{
  __int64 result; // rax

  result = 423LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
