/*
 * XREFs of ZwReleaseWorkerFactoryWorker @ 0x18009F3F0
 * Callers:
 *     sub_1800318A8 @ 0x1800318A8 (sub_1800318A8.c)
 *     sub_1800356E0 @ 0x1800356E0 (sub_1800356E0.c)
 *     sub_180038510 @ 0x180038510 (sub_180038510.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax

  result = 361;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
