/*
 * XREFs of ZwCreateWorkerFactory @ 0x18009DFD0
 * Callers:
 *     sub_180062F34 @ 0x180062F34 (sub_180062F34.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateWorkerFactory(
        PHANDLE WorkerFactoryHandleReturn,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE CompletionPortHandle,
        HANDLE WorkerProcessHandle,
        PVOID StartRoutine,
        PVOID StartParameter,
        ULONG MaxThreadCount,
        SIZE_T StackReserve,
        SIZE_T StackCommit)
{
  NTSTATUS result; // eax

  result = 200;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
