/*
 * XREFs of NtWriteFile @ 0x18009CF90
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180004BA8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFlushBuffer @ 0x18006D534 (EtwpFlushBuffer.c)
 *     EtwpFinalizeLogFileHeader @ 0x1800878A0 (EtwpFinalizeLogFileHeader.c)
 *     RtlCreateBootStatusDataFile @ 0x1800EABD0 (RtlCreateBootStatusDataFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EAED0 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x1800EB21C (RtlpGetSetBootStatusData.c)
 *     EtwpWriteBufferCompressed @ 0x18010E624 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x18010E854 (EtwpWriteRemainingCompressedData.c)
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
