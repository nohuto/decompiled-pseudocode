/*
 * XREFs of ZwQueryDefaultLocale @ 0x18009C980
 * Callers:
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 *     sub_180058950 @ 0x180058950 (sub_180058950.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryDefaultLocale()
{
  __int64 result; // rax

  result = 21LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
