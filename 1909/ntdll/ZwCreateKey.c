/*
 * XREFs of ZwCreateKey @ 0x18009D230
 * Callers:
 *     RtlpGetRegistryHandle @ 0x180003D40 (RtlpGetRegistryHandle.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800736F0 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1800738AC (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RXactpOpenTargetKey @ 0x180088A4C (RXactpOpenTargetKey.c)
 *     RtlpNtCreateKey @ 0x180089BD0 (RtlpNtCreateKey.c)
 *     RtlInitializeRXact @ 0x18008AAC0 (RtlInitializeRXact.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800E1B6C (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800EDAF8 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCD0 (RtlpSetPreferredUILanguages.c)
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
