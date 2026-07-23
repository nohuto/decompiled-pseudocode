/*
 * XREFs of PopFreeHiberContext @ 0x1406E1240
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14056D5F0 (PopUnlockAfterSleepWorker.c)
 *     PopAllocateHiberContext @ 0x1406E07D4 (PopAllocateHiberContext.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     MmFreePagesFromMdl @ 0x1401374D0 (MmFreePagesFromMdl.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopInternalAddToDumpFile @ 0x1402D3514 (PopInternalAddToDumpFile.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BgkResumeFinished @ 0x14056D684 (BgkResumeFinished.c)
 *     MmReleaseDumpHibernateResources @ 0x1406E141C (MmReleaseDumpHibernateResources.c)
 *     MmUnlockPreChargedPagedPool @ 0x1406E1460 (MmUnlockPreChargedPagedPool.c)
 *     PopBcdClearPendingResume @ 0x140712248 (PopBcdClearPendingResume.c)
 *     BcdCloseStore @ 0x140712CA8 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140713508 (BcdOpenStore.c)
 *     PopClearHiberFileSignature @ 0x14071FED4 (PopClearHiberFileSignature.c)
 *     VslFreeSecureHibernateResources @ 0x140819894 (VslFreeSecureHibernateResources.c)
 */

void __fastcall PopFreeHiberContext(UNICODE_STRING *a1)
{
  ULONG_PTR v1; // rbx
  void *v2; // rcx
  __int64 v3; // rdi
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  void *v8; // rcx
  __int64 v9; // rcx
  HANDLE BcdStoreHandle; // [rsp+40h] [rbp+8h] BYREF

  v1 = BugCheckParameter4;
  if ( BugCheckParameter4 )
  {
    if ( BcdOpenStore(a1, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, &BcdStoreHandle) >= 0 )
    {
      PopBcdClearPendingResume(BcdStoreHandle);
      BcdCloseStore(BcdStoreHandle);
    }
    v2 = *(void **)(v1 + 240);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0);
      *(_QWORD *)(v1 + 240) = 0LL;
    }
    while ( 1 )
    {
      v3 = *(_QWORD *)(v1 + 128);
      if ( !v3 )
        break;
      *(_QWORD *)(v1 + 128) = *(_QWORD *)v3;
      *(_QWORD *)(v1 + 136) -= (unsigned __int64)*(unsigned int *)(v3 + 40) >> 12;
      if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
        MmUnmapLockedPages(*(PVOID *)(v3 + 24), (PMDL)v3);
      MmFreePagesFromMdl((PMDL)v3);
      ExFreePoolWithTag((PVOID)v3, 0);
    }
    *(_QWORD *)(v1 + 232) = 0LL;
    v4 = (_QWORD **)(v1 + 64);
    *(_QWORD *)(v1 + 224) = 0LL;
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 == v4 )
        break;
      v6 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      ExFreePoolWithTag(v5, 0);
      --*(_DWORD *)(v1 + 80);
    }
    if ( *(_QWORD *)(v1 + 168) && CrashdmpImageEntry && qword_14043D8A0 )
      qword_14043D8A0();
    if ( *(_QWORD *)(v1 + 136) )
    {
      PopInternalAddToDumpFile(v1, 0x1C8u, 0LL);
      KeBugCheckEx(0xA0u, 0x103uLL, 0xAuLL, v1, 0LL);
    }
    if ( *(_DWORD *)(v1 + 188) == 1073742484 )
      PopClearHiberFileSignature();
    *(_BYTE *)(v1 + 28) = 0;
    MmUnlockPreChargedPagedPool(qword_140418910, Length);
    v8 = *(void **)(v1 + 288);
    if ( v8 )
      ExFreePoolWithTag(v8, 0x72626968u);
    v9 = *(_QWORD *)(v1 + 304);
    if ( v9 )
      MmReleaseDumpHibernateResources(v9, (unsigned int)(*(_DWORD *)(v1 + 256) << 16));
    if ( PopBgkResumePrepared )
    {
      BgkResumeFinished();
      PopBgkResumePrepared = 0;
    }
    if ( *(_BYTE *)(v1 + 452) )
      VslFreeSecureHibernateResources();
    if ( (HvlpFlags & 2) != 0 && HvlpHibernateScratchPage )
    {
      ExFreePoolWithTag(HvlpHibernateScratchPage, 0x204C5648u);
      HvlpHibernateScratchPage = 0LL;
    }
    memset((void *)v1, 0, 0x1C8uLL);
    BugCheckParameter4 = 0LL;
  }
}
