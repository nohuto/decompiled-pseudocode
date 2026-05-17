/*
 * XREFs of ZwWaitForWorkViaWorkerFactory @ 0x1800A3C50
 * Callers:
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 * Callees:
 *     <none>
 */

__int64 ZwWaitForWorkViaWorkerFactory()
{
  __int64 result; // rax

  result = 460LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
