/*
 * XREFs of ZwGetContextThread @ 0x18009E470
 * Callers:
 *     RtlRemoteCall @ 0x1800F8C90 (RtlRemoteCall.c)
 *     sub_18010A184 @ 0x18010A184 (sub_18010A184.c)
 *     sub_180112B54 @ 0x180112B54 (sub_180112B54.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetContextThread()
{
  __int64 result; // rax

  result = 237LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
