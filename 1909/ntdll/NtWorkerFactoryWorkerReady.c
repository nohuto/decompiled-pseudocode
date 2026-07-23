/*
 * XREFs of NtWorkerFactoryWorkerReady @ 0x18009CEB0
 * Callers:
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWorkerFactoryWorkerReady(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax

  result = 1;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
