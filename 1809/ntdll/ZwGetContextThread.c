/*
 * XREFs of ZwGetContextThread @ 0x1800A2070
 * Callers:
 *     RtlRemoteCall @ 0x1800FB0D0 (RtlRemoteCall.c)
 *     RtlpSaveUmsDebugRegisterState @ 0x18010C094 (RtlpSaveUmsDebugRegisterState.c)
 *     PsspDumpThread @ 0x180113E04 (PsspDumpThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  NTSTATUS result; // eax

  result = 236;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
