/*
 * XREFs of ZwOpenEvent @ 0x18009CEE0
 * Callers:
 *     sub_1800DC5E8 @ 0x1800DC5E8 (sub_1800DC5E8.c)
 * Callees:
 *     <none>
 */

__int64 ZwOpenEvent()
{
  __int64 result; // rax

  result = 64LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
