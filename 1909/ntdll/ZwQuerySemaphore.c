/*
 * XREFs of ZwQuerySemaphore @ 0x18009F960
 * Callers:
 *     PsspDumpObject_Semaphore @ 0x180112320 (PsspDumpObject_Semaphore.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySemaphore(
        HANDLE SemaphoreHandle,
        SEMAPHORE_INFORMATION_CLASS SemaphoreInformationClass,
        PVOID SemaphoreInformation,
        ULONG SemaphoreInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 343;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
