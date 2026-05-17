/*
 * XREFs of ZwQueryMutant @ 0x18009F860
 * Callers:
 *     PsspDumpObject_Mutant @ 0x1801121F0 (PsspDumpObject_Mutant.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryMutant()
{
  __int64 result; // rax

  result = 335LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
