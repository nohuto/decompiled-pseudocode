/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x18009F9D0
 * Callers:
 *     sub_180055288 @ 0x180055288 (sub_180055288.c)
 *     sub_180069854 @ 0x180069854 (sub_180069854.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationVirtualMemory()
{
  __int64 result; // rax

  result = 408LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
