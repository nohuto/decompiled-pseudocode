/*
 * XREFs of NtWriteFile @ 0x1800A03E0
 * Callers:
 *     EtwpWriteBufferCompressed @ 0x180001E58 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x180002904 (EtwpWriteRemainingCompressedData.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800514D0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFlushBuffer @ 0x18005A324 (EtwpFlushBuffer.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005A560 (EtwpFinalizeLogFileHeader.c)
 *     RtlCreateBootStatusDataFile @ 0x1800ED9E0 (RtlCreateBootStatusDataFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EDCE0 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x1800EE048 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     <none>
 */

__int64 NtWriteFile()
{
  __int64 result; // rax

  result = 8LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
