/*
 * XREFs of VfFastIoSnapState @ 0x14092A04C
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
 *     KeAreInterruptsEnabled @ 0x1400CADE4 (KeAreInterruptsEnabled.c)
 *     ViIoCallbackSnapState @ 0x14092A144 (ViIoCallbackSnapState.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 */

__int64 VfFastIoSnapState()
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC9u, 0xC2uLL, 0LL, 0LL, 0LL);
  return ViIoCallbackSnapState();
}
