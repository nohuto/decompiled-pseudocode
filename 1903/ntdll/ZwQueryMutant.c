/*
 * XREFs of ZwQueryMutant @ 0x18009F0B0
 * Callers:
 *     sub_1801120C0 @ 0x1801120C0 (sub_1801120C0.c)
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
