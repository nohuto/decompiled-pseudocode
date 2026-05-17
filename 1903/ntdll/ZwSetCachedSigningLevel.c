/*
 * XREFs of ZwSetCachedSigningLevel @ 0x18009F730
 * Callers:
 *     sub_18008BAD0 @ 0x18008BAD0 (sub_18008BAD0.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetCachedSigningLevel()
{
  __int64 result; // rax

  result = 387LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
