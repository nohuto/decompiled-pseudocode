/*
 * XREFs of ZwReleaseMutant @ 0x18009CAE0
 * Callers:
 *     sub_1800351D0 @ 0x1800351D0 (sub_1800351D0.c)
 * Callees:
 *     <none>
 */

__int64 ZwReleaseMutant()
{
  __int64 result; // rax

  result = 32LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
