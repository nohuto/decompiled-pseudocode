/*
 * XREFs of NtFlushInstallUILanguage @ 0x1800A1EF0
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008EA70 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetInstallLanguage @ 0x1800F05E0 (RtlpSetInstallLanguage.c)
 *     RtlpRefreshCachedUILanguage @ 0x180101D00 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     <none>
 */

__int64 NtFlushInstallUILanguage()
{
  __int64 result; // rax

  result = 225LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
