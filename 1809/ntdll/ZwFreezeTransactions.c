/*
 * XREFs of ZwFreezeTransactions @ 0x1800A1FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwFreezeTransactions()
{
  __int64 result; // rax

  result = 233LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
