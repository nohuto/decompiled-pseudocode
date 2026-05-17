/*
 * XREFs of NtQueryInstallUILanguage @ 0x1800A2BF0
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x18003C708 (LdrpMergeLangFallbackLists.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180046030 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008EA70 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0D10 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x180101D00 (RtlpRefreshCachedUILanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1801026E8 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180102A28 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180102F30 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInstallUILanguage()
{
  __int64 result; // rax

  result = 329LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
