/*
 * XREFs of NtQueryInformationFile @ 0x1800A0500
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008C7B0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpResFileSize @ 0x1800E5280 (LdrpResFileSize.c)
 *     LdrpResValidateFileHandle @ 0x1800E5F64 (LdrpResValidateFileHandle.c)
 *     RtlpGetFileSize @ 0x1800F92BC (RtlpGetFileSize.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x1800FB270 (RtlIsPartialPlaceholderFileHandle.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationFile()
{
  __int64 result; // rax

  result = 17LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
