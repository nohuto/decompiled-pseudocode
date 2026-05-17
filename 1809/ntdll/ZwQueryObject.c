/*
 * XREFs of ZwQueryObject @ 0x1800A04E0
 * Callers:
 *     PsspWalkHandleTable @ 0x1801137F0 (PsspWalkHandleTable.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryObject()
{
  __int64 result; // rax

  result = 16LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
