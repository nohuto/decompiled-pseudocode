/*
 * XREFs of NtReadFile @ 0x18009CF50
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180004BA8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x1800878A0 (EtwpFinalizeLogFileHeader.c)
 *     LdrpResReadFile @ 0x1800E2AD8 (LdrpResReadFile.c)
 *     RtlCheckBootStatusIntegrity @ 0x1800EAA10 (RtlCheckBootStatusIntegrity.c)
 *     RtlpGetSetBootStatusData @ 0x1800EB21C (RtlpGetSetBootStatusData.c)
 * Callees:
 *     <none>
 */

__int64 NtReadFile()
{
  __int64 result; // rax

  result = 6LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
