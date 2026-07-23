/*
 * XREFs of ZwSetValueKey @ 0x1800A0EF0
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180079278 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RXactpCommit @ 0x180082D94 (RXactpCommit.c)
 *     RtlpNtSetValueKey @ 0x18008C4F0 (RtlpNtSetValueKey.c)
 *     RtlApplyRXact @ 0x18008C530 (RtlApplyRXact.c)
 *     RtlInitializeRXact @ 0x18008DDB0 (RtlInitializeRXact.c)
 *     RtlWriteRegistryValue @ 0x18008E790 (RtlWriteRegistryValue.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008EA80 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D6C5C (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E38F0 (RtlSetImageMitigationPolicy.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800F0B3C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0D10 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  NTSTATUS result; // eax

  result = 96;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
