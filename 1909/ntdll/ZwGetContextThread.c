/*
 * XREFs of ZwGetContextThread @ 0x18009EC20
 * Callers:
 *     RtlRemoteCall @ 0x1800F8D70 (RtlRemoteCall.c)
 *     RtlpSaveUmsDebugRegisterState @ 0x18010A2B4 (RtlpSaveUmsDebugRegisterState.c)
 *     PsspDumpThread @ 0x180112C84 (PsspDumpThread.c)
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
