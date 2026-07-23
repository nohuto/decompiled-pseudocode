/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x18009D7B0
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180004BA8 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpCreateNewDirectoryReference @ 0x180076E84 (RtlpCreateNewDirectoryReference.c)
 *     EtwpFinalizeLogFileHeader @ 0x1800878A0 (EtwpFinalizeLogFileHeader.c)
 *     LdrpCheckAppDirType @ 0x1800D0E3C (LdrpCheckAppDirType.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x1801145B4 (RtlpQueryDiskSpacePolicyByHandle.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FSINFOCLASS FsInformationClass)
{
  NTSTATUS result; // eax

  result = 73;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
