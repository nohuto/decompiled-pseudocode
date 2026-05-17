/*
 * XREFs of ZwCompareSigningLevels @ 0x18009DA10
 * Callers:
 *     sub_180082D20 @ 0x180082D20 (sub_180082D20.c)
 *     sub_18008BAD0 @ 0x18008BAD0 (sub_18008BAD0.c)
 * Callees:
 *     <none>
 */

__int64 ZwCompareSigningLevels()
{
  __int64 result; // rax

  result = 154LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
