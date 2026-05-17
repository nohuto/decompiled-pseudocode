/*
 * XREFs of ZwCreateThreadEx @ 0x18009DE70
 * Callers:
 *     sub_180005760 @ 0x180005760 (sub_180005760.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateThreadEx()
{
  __int64 result; // rax

  result = 189LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
