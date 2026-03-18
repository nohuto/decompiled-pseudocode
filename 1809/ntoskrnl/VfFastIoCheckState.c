/*
 * XREFs of VfFastIoCheckState @ 0x140928F74
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1400DA8EC (IopCompleteUnloadOrDelete.c)
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1405FA000 (NtLockFile.c)
 *     NtWriteFile @ 0x140638C40 (NtWriteFile.c)
 *     IopCloseFile @ 0x140639B10 (IopCloseFile.c)
 *     NtReadFile @ 0x14063A140 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x14063AA10 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     IopGetBasicInformationFile @ 0x14068BC90 (IopGetBasicInformationFile.c)
 *     IopQueryInformation @ 0x140697F30 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x14069B660 (NtUnlockFile.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400922D8 (ExFreeToNPagedLookasideList.c)
 *     KeAreInterruptsEnabled @ 0x1400CACE4 (KeAreInterruptsEnabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfFastIoCheckState(_DWORD *Entry, ULONG_PTR a2)
{
  ULONG_PTR v4; // rdx

  if ( (MmVerifierData & 0x10) != 0 && !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0xC3uLL, v4, 0LL, 0LL);
  if ( (MmVerifierData & 0x10) != 0 && *(_BYTE *)Entry != KeGetCurrentIrql() )
    VerifierBugCheckIfAppropriate(0xC9u, 0x11uLL, a2, *(unsigned __int8 *)Entry, KeGetCurrentIrql());
  if ( (MmVerifierData & 0x10) != 0 && Entry[1] != KeGetCurrentThread()->WaitBlock[3].SpareLong )
    VerifierBugCheckIfAppropriate(0xC4u, 0xC6uLL, a2, KeGetCurrentThread()->CombinedApcDisable, (unsigned int)Entry[1]);
  ExFreeToNPagedLookasideList(&ViIoCallbackStateLookaside, Entry);
}
