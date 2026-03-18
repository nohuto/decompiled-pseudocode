/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x1405D5DC0
 * Callers:
 *     CcZeroEndOfLastPage @ 0x140009D4C (CcZeroEndOfLastPage.c)
 *     CcWriteBehindInternal @ 0x14007E5E0 (CcWriteBehindInternal.c)
 * Callees:
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405D5FD0 (FsRtlAcquireFileExclusiveCommon.c)
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject);
}
