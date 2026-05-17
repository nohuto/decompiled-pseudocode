/*
 * XREFs of NtIsUILanguageComitted @ 0x1800A2270
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x18003C708 (LdrpMergeLangFallbackLists.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180046030 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EF6F0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800F05E0 (RtlpSetInstallLanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1801026E8 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180102A28 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180102F30 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

__int64 NtIsUILanguageComitted()
{
  __int64 result; // rax

  result = 253LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
