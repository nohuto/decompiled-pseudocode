/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x18009FBA0
 * Callers:
 *     TpPostTask @ 0x1800318A8 (TpPostTask.c)
 *     TppPrepareDirectParams @ 0x1800356E0 (TppPrepareDirectParams.c)
 *     TppWorkPost @ 0x180038510 (TppWorkPost.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax

  result = 361;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
