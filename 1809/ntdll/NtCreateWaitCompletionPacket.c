/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x1800A1B50
 * Callers:
 *     TpAllocWait @ 0x18002BF10 (TpAllocWait.c)
 *     TppInitializeTimerSubQueue @ 0x1800300B8 (TppInitializeTimerSubQueue.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateWaitCompletionPacket()
{
  __int64 result; // rax

  result = 196LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
