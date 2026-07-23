/*
 * XREFs of NtQueryInformationFile @ 0x18009D0B0
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089D30 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpResFileSize @ 0x1800E25F0 (LdrpResFileSize.c)
 *     LdrpResValidateFileHandle @ 0x1800E32D0 (LdrpResValidateFileHandle.c)
 *     RtlpGetFileSize @ 0x1800F6EF4 (RtlpGetFileSize.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x1800F8F10 (RtlIsPartialPlaceholderFileHandle.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  NTSTATUS result; // eax

  result = 17;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
