/*
 * XREFs of ZwSetInformationFile @ 0x1800A07C0
 * Callers:
 *     TpBindFileToDirect @ 0x180030EA8 (TpBindFileToDirect.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800514D0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpCreateFile @ 0x180051BEC (EtwpCreateFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005A560 (EtwpFinalizeLogFileHeader.c)
 *     LdrpResSetFilePointer @ 0x1800E5F20 (LdrpResSetFilePointer.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationFile()
{
  __int64 result; // rax

  result = 39LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
