/*
 * XREFs of ZwSetContextThread @ 0x18009F770
 * Callers:
 *     RtlRemoteCall @ 0x1800F8C90 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetContextThread()
{
  __int64 result; // rax

  result = 389LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
