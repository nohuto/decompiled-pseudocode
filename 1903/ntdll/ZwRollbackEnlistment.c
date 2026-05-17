/*
 * XREFs of ZwRollbackEnlistment @ 0x18009F5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwRollbackEnlistment()
{
  __int64 result; // rax

  result = 376LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
