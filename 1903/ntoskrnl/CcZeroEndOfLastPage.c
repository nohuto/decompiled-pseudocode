/*
 * XREFs of CcZeroEndOfLastPage @ 0x140009CBC
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1400E1DB0 (FsRtlCreateSectionForDataScan.c)
 *     MiCreateSystemSection @ 0x140154C34 (MiCreateSystemSection.c)
 *     MiCreateSectionCommon @ 0x1405D6500 (MiCreateSectionCommon.c)
 *     MmCreateSpecialImageSection @ 0x140618DD8 (MmCreateSpecialImageSection.c)
 *     MiCreateImageFileMap @ 0x14068AE6C (MiCreateImageFileMap.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     CcFlushCachePriv @ 0x140077160 (CcFlushCachePriv.c)
 *     CcPurgeCacheSection @ 0x1400DF560 (CcPurgeCacheSection.c)
 *     FsRtlAcquireFileExclusive @ 0x1405D5600 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x1405D5620 (FsRtlReleaseFile.c)
 */

void __fastcall CcZeroEndOfLastPage(PFILE_OBJECT FileObject)
{
  char v1; // di
  PVOID FsContext; // rcx
  char v4; // al
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  v5[0] = 0LL;
  v5[1] = 0LL;
  if ( !KeGetCurrentThread()[1].TrapFrame )
  {
    v1 = 1;
    KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
    FsRtlAcquireFileExclusive(FileObject);
  }
  FsContext = FileObject->FsContext;
  v4 = *((_BYTE *)FsContext + 4);
  if ( (v4 & 0x40) != 0 )
  {
    ExAcquireFastMutex(*((PFAST_MUTEX *)FsContext + 6));
    *((_BYTE *)FileObject->FsContext + 4) |= 0x20u;
    KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)FileObject->FsContext + 6));
  }
  else
  {
    *((_BYTE *)FsContext + 4) = v4 | 0x20;
  }
  if ( (*((_BYTE *)FileObject->FsContext + 6) & 4) != 0 )
  {
    CcFlushCachePriv(FileObject->SectionObjectPointer, 0, 0, 0, 0, (__int64)v5);
    if ( !LODWORD(v5[0]) )
      CcPurgeCacheSection(FileObject->SectionObjectPointer, 0LL, 0, 0);
  }
  if ( v1 )
  {
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    FsRtlReleaseFile(FileObject);
  }
}
