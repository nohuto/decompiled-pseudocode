/*
 * XREFs of VfFastIoCheckState @ 0x140929F74
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1400DA98C (IopCompleteUnloadOrDelete.c)
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1405FB000 (NtLockFile.c)
 *     NtWriteFile @ 0x140639C60 (NtWriteFile.c)
 *     IopCloseFile @ 0x14063AB30 (IopCloseFile.c)
 *     NtReadFile @ 0x14063B160 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x14063BA30 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     IopGetBasicInformationFile @ 0x14068CE30 (IopGetBasicInformationFile.c)
 *     IopQueryInformation @ 0x1406990D0 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x14069C800 (NtUnlockFile.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     KeAreInterruptsEnabled @ 0x1400CADE4 (KeAreInterruptsEnabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
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
