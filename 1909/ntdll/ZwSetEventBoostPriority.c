/*
 * XREFs of ZwSetEventBoostPriority @ 0x18009D430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetEventBoostPriority()
{
  __int64 result; // rax

  result = 45LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
