/*
 * XREFs of NtReadFile @ 0x1800A03A0
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x1800514D0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005A560 (EtwpFinalizeLogFileHeader.c)
 *     LdrpResReadFile @ 0x1800E5768 (LdrpResReadFile.c)
 *     RtlCheckBootStatusIntegrity @ 0x1800ED810 (RtlCheckBootStatusIntegrity.c)
 *     RtlpGetSetBootStatusData @ 0x1800EE048 (RtlpGetSetBootStatusData.c)
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
