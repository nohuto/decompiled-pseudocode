/*
 * XREFs of ZwSetValueKey @ 0x18009DA80
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800736F0 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RXactpCommit @ 0x18007F0C4 (RXactpCommit.c)
 *     RtlpNtSetValueKey @ 0x180089C10 (RtlpNtSetValueKey.c)
 *     RtlApplyRXact @ 0x180089C80 (RtlApplyRXact.c)
 *     RtlInitializeRXact @ 0x18008AAC0 (RtlInitializeRXact.c)
 *     RtlWriteRegistryValue @ 0x18008B800 (RtlWriteRegistryValue.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D4AE8 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E0C90 (RtlSetImageMitigationPolicy.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800EDAF8 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCD0 (RtlpSetPreferredUILanguages.c)
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
