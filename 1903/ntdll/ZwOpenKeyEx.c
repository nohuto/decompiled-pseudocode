/*
 * XREFs of ZwOpenKeyEx @ 0x18009EA30
 * Callers:
 *     sub_1800CC464 @ 0x1800CC464 (sub_1800CC464.c)
 *     sub_1800CF6FC @ 0x1800CF6FC (sub_1800CF6FC.c)
 * Callees:
 *     <none>
 */

__int64 ZwOpenKeyEx()
{
  __int64 result; // rax

  result = 283LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
