/*
 * XREFs of ZwQueryEvent @ 0x18009D1A0
 * Callers:
 *     sub_180112080 @ 0x180112080 (sub_180112080.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryEvent()
{
  __int64 result; // rax

  result = 86LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
