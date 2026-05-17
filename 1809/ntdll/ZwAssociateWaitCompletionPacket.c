/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x1800A1490
 * Callers:
 *     TppSetupNextWait @ 0x18002C320 (TppSetupNextWait.c)
 *     TppTimerQueueExpiration @ 0x18002CAB0 (TppTimerQueueExpiration.c)
 *     TppInitializeTimerSubQueue @ 0x1800300B8 (TppInitializeTimerSubQueue.c)
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
