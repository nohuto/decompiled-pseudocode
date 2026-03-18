/*
 * XREFs of ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0068160
 * Callers:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C001A510 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C000EFB0 (PushThreadGuardedObject.c)
 *     GreDeleteSemaphore @ 0x1C00109E0 (GreDeleteSemaphore.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     bDeleteSurface @ 0x1C0015C30 (bDeleteSurface.c)
 *     PopThreadGuardedObject @ 0x1C00172F0 (PopThreadGuardedObject.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C001A380 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C001A3C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00684F0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     HmgSafeNextObjt @ 0x1C0069750 (HmgSafeNextObjt.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0069900 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C0069A58 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C0069C04 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ldevUnloadImage @ 0x1C006B200 (ldevUnloadImage.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0072010 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

void __fastcall vUnreferencePdevWorker(struct tagUNREFDATA *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r12d
  unsigned int v4; // r14d
  int v5; // r15d
  int v6; // r15d
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rax
  struct OBJECT *v22; // rcx
  __int64 v23; // rax
  struct _ERESOURCE *v24; // rcx
  int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 *Objt; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 *v31; // rbx
  __int64 v32; // rsi
  __int64 v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v36[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v37; // [rsp+90h] [rbp+40h] BYREF
  __int64 v38; // [rsp+98h] [rbp+48h] BYREF
  __int64 v39; // [rsp+A0h] [rbp+50h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *((_DWORD *)a1 + 3);
  v4 = *((_DWORD *)a1 + 2);
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  *((_DWORD *)a1 + 3) = 0;
  v6 = v5 & 0x8000;
  v37 = v1;
  memset(v36, 0, sizeof(v36));
  PushThreadGuardedObject(v36, (__int64)a1, (__int64)vUnreferencePdevWorker);
  while ( 1 )
  {
    v8 = *(_QWORD *)(v1 + 1528);
    if ( !v8 )
      break;
    v38 = *(_QWORD *)(v1 + 1528);
    v35 = *(_QWORD *)(v8 + 128);
    if ( (int)IsRFONTOBJ_vDeleteRFONTSupported(v7) >= 0 )
      RFONTOBJ_vDeleteRFONTWrap(&v38, &v37, &v35, v2);
    v38 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v38);
  }
  PopThreadGuardedObject(v36);
  if ( *(_DWORD *)(v1 + 2104) && (*(_DWORD *)(v37 + 40) & 0x40) != 0 )
  {
    v33 = 0LL;
    v38 = 0LL;
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
    if ( (int)IsGetgpPFTDeviceSupported() >= 0 )
      v39 = *(_QWORD *)GetgpPFTDeviceWrap();
    if ( (int)IsDEVICE_PFTOBJ_pPFFGetSupported() >= 0 )
      v33 = DEVICE_PFTOBJ_pPFFGetWrap(&v39, v37, &v38);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 )
      PFTOBJ_bUnloadWorkhorseWrap(&v39, v33, v38, 0LL);
  }
  v9 = *(_QWORD *)(v1 + 1712);
  while ( v9 )
  {
    v34 = v9;
    *(_DWORD *)(v9 + 228) = 1;
    if ( (int)IsvUnmapRemoteFontsSupported() >= 0 )
      vUnmapRemoteFonts(v9 + 128);
    v9 = *(_QWORD *)(v9 + 248);
    Win32FreePool(v34);
  }
  if ( (int)IsvCleanupOwnedRedirectionDeviceBitmapsSupported() >= 0 )
    vCleanupOwnedRedirectionDeviceBitmapsWrap(v1, v4);
  v12 = *(_QWORD *)(v1 + 1688);
  if ( v12 )
  {
    Win32FreePool(v12);
    *(_QWORD *)(v1 + 1688) = 0LL;
  }
  v13 = *(_QWORD *)(v1 + 1696);
  if ( v13 )
  {
    Win32FreePool(v13);
    *(_QWORD *)(v1 + 1696) = 0LL;
  }
  v14 = *(_QWORD *)(v1 + 1704);
  if ( v14 )
  {
    Win32FreePool(v14);
    *(_QWORD *)(v1 + 1704) = 0LL;
  }
  v15 = *(_QWORD *)(v1 + 2592);
  if ( v15 )
    Win32FreePool(v15);
  if ( (*(_DWORD *)(v37 + 40) & 0x80000) == 0 )
  {
    v16 = *(void **)(v1 + 1432);
    if ( v16 != gahStockObjects[13] )
      bDeleteFont(v16, 1LL);
    v17 = *(void **)(v1 + 1440);
    if ( v17 != gahStockObjects[13] )
      bDeleteFont(v17, 1LL);
    v18 = *(void **)(v1 + 1448);
    if ( v18 != gahStockObjects[16] )
      bDeleteFont(v18, 1LL);
    if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
    {
      v31 = (__int64 *)(v1 + 1456);
      v32 = 6LL;
      do
      {
        bDeleteSurface(*v31++, v10);
        --v32;
      }
      while ( v32 );
    }
  }
  LOBYTE(v11) = 1;
  PDEVOBJ::vDisableSurface(&v37, v4, v11);
  if ( *(_QWORD *)(v1 + 1512) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 )
    PDEVOBJ_bDisableHalftoneWrap(&v37);
  if ( !v4 )
    PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)&v37);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)(v37 + 1544));
  v21 = v37;
  if ( (*(_DWORD *)(v37 + 40) & 0x80000) == 0 )
  {
    if ( v4 != 2 )
    {
      v22 = *(struct OBJECT **)(v1 + 1808);
      if ( v22 )
        HmgDecrementShareReferenceCountEx(v22, 0LL);
      v23 = *(_QWORD *)(v1 + 1816);
      if ( v23 )
      {
        HmgDecrementShareReferenceCountEx(*(struct OBJECT **)(v1 + 1816), 0LL);
        v23 = *(_QWORD *)(v1 + 1816);
      }
      v38 = v23;
      XEPALOBJ::bDeletePalette(&v38, 1LL);
      v21 = v37;
    }
    if ( *(_QWORD *)(v21 + 2704) != *(_QWORD *)(v21 + 2688) && (!v6 || !v4) && v2 )
      (*(void (__fastcall **)(_QWORD))(v21 + 2704))(*(_QWORD *)(v1 + 1800));
    if ( v6 )
    {
      if ( (int)IsUMPD_ldevUnloadImageSupported() >= 0 )
        UMPD_ldevUnloadImageWrap(*(_QWORD *)(v1 + 1792));
    }
    else
    {
      ldevUnloadImage(*(_QWORD *)(v1 + 1792));
    }
  }
  v24 = *(struct _ERESOURCE **)(v1 + 56);
  if ( v24 )
    GreDeleteSemaphore(v24);
  v25 = *(_DWORD *)(v1 + 40);
  if ( (v25 & 0x10000) == 0 )
  {
    v24 = *(struct _ERESOURCE **)(v1 + 48);
    if ( v24 )
    {
      GreDeleteSemaphore(v24);
      v25 = *(_DWORD *)(v1 + 40);
    }
  }
  if ( (v25 & 1) != 0 )
    GreDeleteSemaphore(*(PERESOURCE *)(v1 + 64));
  v26 = 0LL;
  GreAcquireHmgrSemaphore((int)v24, v19, v20);
  while ( 1 )
  {
    LOBYTE(v27) = 5;
    Objt = (__int64 *)HmgSafeNextObjt(v26, v27);
    if ( !Objt )
      break;
    v26 = *Objt;
    if ( Objt[6] == v1 )
      Objt[6] = 0LL;
  }
  GreReleaseHmgrSemaphore(v29, v27, v30);
  PDEV::Free((struct PDEV *)v1, v6);
}
