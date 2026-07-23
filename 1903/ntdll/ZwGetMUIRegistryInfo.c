/*
 * XREFs of ZwGetMUIRegistryInfo @ 0x18009E4F0
 * Callers:
 *     sub_1800085C8 @ 0x1800085C8 (sub_1800085C8.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008AB10 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2E0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDBE0 (RtlpSetUserPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800FF3C0 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetMUIRegistryInfo(ULONG Flags, PULONG DataSize, PVOID Data)
{
  NTSTATUS result; // eax

  result = 241;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
