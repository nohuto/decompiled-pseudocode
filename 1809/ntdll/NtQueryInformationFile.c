/*
 * XREFs of NtQueryInformationFile @ 0x1800A0520
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008C7C0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpResFileSize @ 0x1800E5280 (LdrpResFileSize.c)
 *     LdrpResValidateFileHandle @ 0x1800E5F64 (LdrpResValidateFileHandle.c)
 *     RtlpGetFileSize @ 0x1800F92BC (RtlpGetFileSize.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x1800FB270 (RtlIsPartialPlaceholderFileHandle.c)
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
