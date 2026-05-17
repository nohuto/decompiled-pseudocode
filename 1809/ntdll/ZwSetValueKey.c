/*
 * XREFs of ZwSetValueKey @ 0x1800A0ED0
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180079268 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RXactpCommit @ 0x180082D84 (RXactpCommit.c)
 *     RtlpNtSetValueKey @ 0x18008C4E0 (RtlpNtSetValueKey.c)
 *     RtlApplyRXact @ 0x18008C520 (RtlApplyRXact.c)
 *     RtlInitializeRXact @ 0x18008DDA0 (RtlInitializeRXact.c)
 *     RtlWriteRegistryValue @ 0x18008E780 (RtlWriteRegistryValue.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008EA70 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D6C5C (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E38F0 (RtlSetImageMitigationPolicy.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800F0B3C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0D10 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetValueKey()
{
  __int64 result; // rax

  result = 96LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
