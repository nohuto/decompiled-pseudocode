/*
 * XREFs of NtPowerInformation @ 0x1800A0EB0
 * Callers:
 *     RtlpSystemBootStatusRequest @ 0x1800887F0 (RtlpSystemBootStatusRequest.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x1800ED970 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x1800EDDD0 (RtlRestoreSystemBootStatusDefaults.c)
 *     RtlUnlockBootStatusData @ 0x1800EDE40 (RtlUnlockBootStatusData.c)
 *     RtlpRecordBootStatusData @ 0x1800EE178 (RtlpRecordBootStatusData.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x180106CF4 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x180106DF4 (RtlpDestroyExecutionRequiredRequest.c)
 * Callees:
 *     <none>
 */

__int64 NtPowerInformation()
{
  __int64 result; // rax

  result = 95LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
