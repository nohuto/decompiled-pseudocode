/*
 * XREFs of ZwQueryInformationWorkerFactory @ 0x1800A2BD0
 * Callers:
 *     TpQueryPoolStackInformation @ 0x1801102B0 (TpQueryPoolStackInformation.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryInformationWorkerFactory()
{
  __int64 result; // rax

  result = 328LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
