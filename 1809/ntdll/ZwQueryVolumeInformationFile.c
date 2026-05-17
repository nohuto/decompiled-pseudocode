/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x1800A0C00
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x1800514D0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005A560 (EtwpFinalizeLogFileHeader.c)
 *     RtlpCreateNewDirectoryReference @ 0x18007BC24 (RtlpCreateNewDirectoryReference.c)
 *     LdrpCheckAppDirType @ 0x1800D266C (LdrpCheckAppDirType.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x180115220 (RtlpQueryDiskSpacePolicyByHandle.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryVolumeInformationFile()
{
  __int64 result; // rax

  result = 73LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
