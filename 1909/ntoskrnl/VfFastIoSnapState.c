/*
 * XREFs of VfFastIoSnapState @ 0x1409676CC
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1400F10C4 (IopCompleteUnloadOrDelete.c)
 *     NtLockFile @ 0x1405D4D30 (NtLockFile.c)
 *     IopCloseFile @ 0x1405D8DF0 (IopCloseFile.c)
 *     NtReadFile @ 0x1405EFC20 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x1405F0890 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     NtWriteFile @ 0x14062CFB0 (NtWriteFile.c)
 *     IopQueryInformation @ 0x1406B70F0 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x1406C02D0 (NtUnlockFile.c)
 *     IopGetBasicInformationFile @ 0x1406DF59C (IopGetBasicInformationFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400A3040 (KeAreInterruptsEnabled.c)
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
