/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x1405D5600
 * Callers:
 *     CcZeroEndOfLastPage @ 0x140009CBC (CcZeroEndOfLastPage.c)
 *     CcWriteBehindInternal @ 0x14007E1E0 (CcWriteBehindInternal.c)
 * Callees:
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405D5810 (FsRtlAcquireFileExclusiveCommon.c)
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject);
}
