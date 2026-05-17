/*
 * XREFs of ZwMapViewOfSectionEx @ 0x18009E8B0
 * Callers:
 *     sub_18002A0B0 @ 0x18002A0B0 (sub_18002A0B0.c)
 * Callees:
 *     <none>
 */

__int64 ZwMapViewOfSectionEx()
{
  __int64 result; // rax

  result = 271LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
