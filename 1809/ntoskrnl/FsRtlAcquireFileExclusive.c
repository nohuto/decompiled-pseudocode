/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x1405DE920
 * Callers:
 *     CcZeroEndOfLastPage @ 0x14001C250 (CcZeroEndOfLastPage.c)
 *     CcWriteBehindInternal @ 0x14007D2F0 (CcWriteBehindInternal.c)
 * Callees:
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405DEB10 (FsRtlAcquireFileExclusiveCommon.c)
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject);
}
