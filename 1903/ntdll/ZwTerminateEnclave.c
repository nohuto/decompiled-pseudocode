/*
 * XREFs of ZwTerminateEnclave @ 0x18009FDD0
 * Callers:
 *     LdrInitializeEnclave @ 0x1800CD500 (LdrInitializeEnclave.c)
 *     sub_1800CDAC4 @ 0x1800CDAC4 (sub_1800CDAC4.c)
 * Callees:
 *     <none>
 */

__int64 ZwTerminateEnclave()
{
  __int64 result; // rax

  result = 440LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
