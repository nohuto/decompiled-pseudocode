/*
 * XREFs of ZwSetInformationFile @ 0x18009D370
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180004BA8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpCreateFile @ 0x180005268 (EtwpCreateFile.c)
 *     TpBindFileToDirect @ 0x180062B90 (TpBindFileToDirect.c)
 *     EtwpFinalizeLogFileHeader @ 0x1800878A0 (EtwpFinalizeLogFileHeader.c)
 *     LdrpResSetFilePointer @ 0x1800E328C (LdrpResSetFilePointer.c)
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
