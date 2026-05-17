/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x18009E040
 * Callers:
 *     TppInitializeTimerSubQueue @ 0x18002EBF0 (TppInitializeTimerSubQueue.c)
 *     TppSetupNextWait @ 0x180031544 (TppSetupNextWait.c)
 *     TppTimerQueueExpiration @ 0x180035FA0 (TppTimerQueueExpiration.c)
 * Callees:
 *     <none>
 */

__int64 ZwAssociateWaitCompletionPacket()
{
  __int64 result; // rax

  result = 142LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
