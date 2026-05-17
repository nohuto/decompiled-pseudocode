/*
 * XREFs of ZwSetDebugFilterState @ 0x18009FF40
 * Callers:
 *     DbgSetDebugFilterState @ 0x1800DFC20 (DbgSetDebugFilterState.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetDebugFilterState()
{
  __int64 result; // rax

  result = 390LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
