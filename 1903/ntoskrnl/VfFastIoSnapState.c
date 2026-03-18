/*
 * XREFs of VfFastIoSnapState @ 0x1409676CC
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
 *     KeAreInterruptsEnabled @ 0x1400C31C0 (KeAreInterruptsEnabled.c)
 *     ViIoCallbackSnapState @ 0x1409677C4 (ViIoCallbackSnapState.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 */

__int64 VfFastIoSnapState()
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC9u, 0xC2uLL, 0LL, 0LL, 0LL);
  return ViIoCallbackSnapState();
}
