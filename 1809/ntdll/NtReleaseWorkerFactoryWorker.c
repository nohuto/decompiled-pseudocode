/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x1800A2FD0
 * Callers:
 *     TpPostTask @ 0x1800159A0 (TpPostTask.c)
 *     TppPrepareDirectParams @ 0x180017430 (TppPrepareDirectParams.c)
 * Callees:
 *     <none>
 */

__int64 NtReleaseWorkerFactoryWorker()
{
  __int64 result; // rax

  result = 360LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
