/*
 * XREFs of ZwCreateKey @ 0x1800A0680
 * Callers:
 *     RtlpGetRegistryHandle @ 0x180053FCC (RtlpGetRegistryHandle.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180079268 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x180079424 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RXactpOpenTargetKey @ 0x18008B47C (RXactpOpenTargetKey.c)
 *     RtlpNtCreateKey @ 0x18008C4A0 (RtlpNtCreateKey.c)
 *     RtlInitializeRXact @ 0x18008DDA0 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008EA70 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800E47CC (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800F0B3C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0D10 (RtlpSetPreferredUILanguages.c)
 *     OpenOrCreateKeyWithFlags @ 0x180116E1C (OpenOrCreateKeyWithFlags.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateKey()
{
  __int64 result; // rax

  result = 29LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
