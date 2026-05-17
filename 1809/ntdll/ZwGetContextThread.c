/*
 * XREFs of ZwGetContextThread @ 0x1800A2050
 * Callers:
 *     RtlRemoteCall @ 0x1800FB0D0 (RtlRemoteCall.c)
 *     RtlpSaveUmsDebugRegisterState @ 0x18010C094 (RtlpSaveUmsDebugRegisterState.c)
 *     PsspDumpThread @ 0x180113E04 (PsspDumpThread.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetContextThread()
{
  __int64 result; // rax

  result = 236LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
