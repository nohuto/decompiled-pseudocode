/*
 * XREFs of ZwQuerySemaphore @ 0x1800A2D90
 * Callers:
 *     PsspDumpObject_Semaphore @ 0x180113480 (PsspDumpObject_Semaphore.c)
 * Callees:
 *     <none>
 */

__int64 ZwQuerySemaphore()
{
  __int64 result; // rax

  result = 342LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
