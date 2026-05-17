/*
 * XREFs of ZwCreateTimer2 @ 0x18009DEB0
 * Callers:
 *     sub_18002EBF0 @ 0x18002EBF0 (sub_18002EBF0.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateTimer2()
{
  __int64 result; // rax

  result = 191LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
