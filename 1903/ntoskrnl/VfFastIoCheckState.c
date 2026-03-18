/*
 * XREFs of VfFastIoCheckState @ 0x1409675F4
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1400B40A4 (IopCompleteUnloadOrDelete.c)
 *     NtLockFile @ 0x1405D4830 (NtLockFile.c)
 *     IopCloseFile @ 0x1405D8630 (IopCloseFile.c)
 *     NtReadFile @ 0x1405EF450 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x1405EFFA0 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1405F1C90 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     NtWriteFile @ 0x140629160 (NtWriteFile.c)
 *     IopQueryInformation @ 0x1406BB8D0 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x1406C1390 (NtUnlockFile.c)
 *     IopGetBasicInformationFile @ 0x1406DE1AC (IopGetBasicInformationFile.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     KeAreInterruptsEnabled @ 0x1400C31C0 (KeAreInterruptsEnabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
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
