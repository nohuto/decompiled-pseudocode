/*
 * XREFs of PopFreeHiberContext @ 0x1407272AC
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14059BC20 (PopUnlockAfterSleepWorker.c)
 *     PopAllocateHiberContext @ 0x140726928 (PopAllocateHiberContext.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14006AD00 (MmUnmapLockedPages.c)
 *     MmFreePagesFromMdl @ 0x1400EFC40 (MmFreePagesFromMdl.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopInternalAddToDumpFile @ 0x1402ED910 (PopInternalAddToDumpFile.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BgkResumeFinished @ 0x14059BCCC (BgkResumeFinished.c)
 *     MmReleaseDumpHibernateResources @ 0x140727488 (MmReleaseDumpHibernateResources.c)
 *     MmUnlockPreChargedPagedPool @ 0x1407274D0 (MmUnlockPreChargedPagedPool.c)
 *     PopBcdClearPendingResume @ 0x14073B4A0 (PopBcdClearPendingResume.c)
 *     PopClearHiberFileSignature @ 0x1407477F4 (PopClearHiberFileSignature.c)
 *     VslFreeSecureHibernateResources @ 0x1408523DC (VslFreeSecureHibernateResources.c)
 *     PopBcdClose @ 0x1408B67EC (PopBcdClose.c)
 *     PopBcdOpen @ 0x1408B6800 (PopBcdOpen.c)
 */

void PopFreeHiberContext()
{
  ULONG_PTR v0; // rbx
  void *v1; // rcx
  __int64 v2; // rdi
  _QWORD **v3; // rdi
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  void *v7; // rcx
  __int64 v8; // rcx
  HANDLE BcdStoreHandle; // [rsp+40h] [rbp+8h] BYREF

  v0 = qword_140443080;
  if ( qword_140443080 )
  {
    if ( (int)PopBcdOpen(&BcdStoreHandle) >= 0 )
    {
      PopBcdClearPendingResume(BcdStoreHandle);
      PopBcdClose(BcdStoreHandle);
    }
    v1 = *(void **)(v0 + 240);
    if ( v1 )
    {
      ExFreePoolWithTag(v1, 0);
      *(_QWORD *)(v0 + 240) = 0LL;
    }
    while ( 1 )
    {
      v2 = *(_QWORD *)(v0 + 128);
      if ( !v2 )
        break;
      *(_QWORD *)(v0 + 128) = *(_QWORD *)v2;
      *(_QWORD *)(v0 + 136) -= (unsigned __int64)*(unsigned int *)(v2 + 40) >> 12;
      if ( (*(_BYTE *)(v2 + 10) & 1) != 0 )
        MmUnmapLockedPages(*(PVOID *)(v2 + 24), (PMDL)v2);
      MmFreePagesFromMdl((PMDL)v2);
      ExFreePoolWithTag((PVOID)v2, 0);
    }
    *(_QWORD *)(v0 + 232) = 0LL;
    v3 = (_QWORD **)(v0 + 64);
    *(_QWORD *)(v0 + 224) = 0LL;
    while ( 1 )
    {
      v4 = *v3;
      if ( *v3 == v3 )
        break;
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      ExFreePoolWithTag(v4, 0);
      --*(_DWORD *)(v0 + 80);
    }
    if ( *(_QWORD *)(v0 + 168) && CrashdmpImageEntry && qword_140468310 )
      qword_140468310();
    if ( *(_QWORD *)(v0 + 136) )
    {
      PopInternalAddToDumpFile(v0, 0x1C8u, 0LL);
      KeBugCheckEx(0xA0u, 0x103uLL, 0xAuLL, v0, 0LL);
    }
    if ( *(_DWORD *)(v0 + 188) == 1073742484 )
      PopClearHiberFileSignature();
    *(_BYTE *)(v0 + 28) = 0;
    MmUnlockPreChargedPagedPool(qword_140443450, Length);
    v7 = *(void **)(v0 + 288);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x72626968u);
    v8 = *(_QWORD *)(v0 + 304);
    if ( v8 )
      MmReleaseDumpHibernateResources(v8, (unsigned int)(*(_DWORD *)(v0 + 256) << 16));
    if ( PopBgkResumePrepared )
    {
      BgkResumeFinished();
      PopBgkResumePrepared = 0;
    }
    if ( *(_BYTE *)(v0 + 452) )
      VslFreeSecureHibernateResources();
    if ( (HvlpFlags & 2) != 0 && HvlpHibernateScratchPage )
    {
      ExFreePoolWithTag(HvlpHibernateScratchPage, 0x204C5648u);
      HvlpHibernateScratchPage = 0LL;
    }
    memset((void *)v0, 0, 0x1C8uLL);
    qword_140443080 = 0LL;
  }
}
