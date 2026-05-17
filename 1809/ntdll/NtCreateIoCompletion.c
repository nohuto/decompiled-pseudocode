/*
 * XREFs of NtCreateIoCompletion @ 0x1800A17B0
 * Callers:
 *     TpAllocPoolInternal @ 0x180030848 (TpAllocPoolInternal.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateIoCompletion()
{
  __int64 result; // rax

  result = 167LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
