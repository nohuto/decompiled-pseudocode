/*
 * XREFs of ZwCancelWaitCompletionPacket @ 0x18009D930
 * Callers:
 *     sub_180031458 @ 0x180031458 (sub_180031458.c)
 *     sub_180036320 @ 0x180036320 (sub_180036320.c)
 * Callees:
 *     <none>
 */

__int64 ZwCancelWaitCompletionPacket()
{
  __int64 result; // rax

  result = 147LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
