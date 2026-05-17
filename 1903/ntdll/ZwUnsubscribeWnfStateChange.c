/*
 * XREFs of ZwUnsubscribeWnfStateChange @ 0x18009FFB0
 * Callers:
 *     sub_180006ECC @ 0x180006ECC (sub_180006ECC.c)
 * Callees:
 *     <none>
 */

__int64 ZwUnsubscribeWnfStateChange()
{
  __int64 result; // rax

  result = 455LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
