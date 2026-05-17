/*
 * XREFs of ZwConnectPort @ 0x18009DA90
 * Callers:
 *     sub_18004B7B4 @ 0x18004B7B4 (sub_18004B7B4.c)
 * Callees:
 *     <none>
 */

__int64 ZwConnectPort()
{
  __int64 result; // rax

  result = 158LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
