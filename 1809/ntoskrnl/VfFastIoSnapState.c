/*
 * XREFs of VfFastIoSnapState @ 0x14092904C
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1400DA90C (IopCompleteUnloadOrDelete.c)
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1405FA000 (NtLockFile.c)
 *     NtWriteFile @ 0x140638C40 (NtWriteFile.c)
 *     IopCloseFile @ 0x140639B10 (IopCloseFile.c)
 *     NtReadFile @ 0x14063A140 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x14063AA10 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     IopGetBasicInformationFile @ 0x14068BC70 (IopGetBasicInformationFile.c)
 *     IopQueryInformation @ 0x140697F10 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x14069B640 (NtUnlockFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400CAD04 (KeAreInterruptsEnabled.c)
 *     ViIoCallbackSnapState @ 0x140929144 (ViIoCallbackSnapState.c)
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 */

__int64 VfFastIoSnapState()
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC9u, 0xC2uLL, 0LL, 0LL, 0LL);
  return ViIoCallbackSnapState();
}
