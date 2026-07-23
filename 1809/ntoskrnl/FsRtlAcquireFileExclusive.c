/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x1405DF920
 * Callers:
 *     CcZeroEndOfLastPage @ 0x14001C250 (CcZeroEndOfLastPage.c)
 *     CcWriteBehindInternal @ 0x14007D2E0 (CcWriteBehindInternal.c)
 * Callees:
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405DFB10 (FsRtlAcquireFileExclusiveCommon.c)
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject);
}
