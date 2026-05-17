/*
 * XREFs of NtPowerInformation @ 0x18009DA60
 * Callers:
 *     RtlpSystemBootStatusRequest @ 0x180084E60 (RtlpSystemBootStatusRequest.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x1800EAB70 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x1800EAFC0 (RtlRestoreSystemBootStatusDefaults.c)
 *     RtlUnlockBootStatusData @ 0x1800EB020 (RtlUnlockBootStatusData.c)
 *     RtlpRecordBootStatusData @ 0x1800EB34C (RtlpRecordBootStatusData.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1801043D4 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x1801044D4 (RtlpDestroyExecutionRequiredRequest.c)
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
