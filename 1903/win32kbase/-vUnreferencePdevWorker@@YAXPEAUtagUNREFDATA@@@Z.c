/*
 * XREFs of ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0054DA0
 * Callers:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003BFD0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00145B0 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     PopThreadGuardedObject @ 0x1C0015E80 (PopThreadGuardedObject.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     ldevUnloadImage @ 0x1C0048B20 (ldevUnloadImage.c)
 *     PushThreadGuardedObject @ 0x1C00538B0 (PushThreadGuardedObject.c)
 *     bDeleteSurface @ 0x1C0054290 (bDeleteSurface.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0055128 (--1RFONTOBJ@@QEAA@XZ.c)
 *     GreDeleteSemaphore @ 0x1C0056B40 (GreDeleteSemaphore.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00570E0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     HmgSafeNextObjt @ 0x1C0058340 (HmgSafeNextObjt.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C00584F0 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0058520 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C0058678 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C0058850 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
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
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rax
  struct OBJECT *v21; // rcx
  __int64 v22; // rax
  struct _ERESOURCE *v23; // rcx
  int v24; // eax
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 *Objt; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rbx
  __int64 v31; // rsi
  __int64 v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v35[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v36; // [rsp+90h] [rbp+40h] BYREF
  __int64 v37; // [rsp+98h] [rbp+48h] BYREF
  __int64 v38; // [rsp+A0h] [rbp+50h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *((_DWORD *)a1 + 3);
  v4 = *((_DWORD *)a1 + 2);
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  *((_DWORD *)a1 + 3) = 0;
  v6 = v5 & 0x8000;
  v36 = v1;
  memset(v35, 0, sizeof(v35));
  PushThreadGuardedObject(v35, (__int64)a1, (__int64)vUnreferencePdevWorker);
  while ( 1 )
  {
    v8 = *(_QWORD *)(v1 + 1528);
    if ( !v8 )
      break;
    v37 = *(_QWORD *)(v1 + 1528);
    v34 = *(_QWORD *)(v8 + 128);
    if ( (int)IsRFONTOBJ_vDeleteRFONTSupported(v7) >= 0 )
      RFONTOBJ_vDeleteRFONTWrap(&v37, &v36, &v34, v2);
    v37 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v37);
  }
  PopThreadGuardedObject(v35);
  if ( *(_DWORD *)(v1 + 2104) && (*(_DWORD *)(v36 + 40) & 0x40) != 0 )
  {
    v32 = 0LL;
    v37 = 0LL;
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
    if ( (int)IsGetgpPFTDeviceSupported() >= 0 )
      v38 = *(_QWORD *)GetgpPFTDeviceWrap();
    if ( (int)IsDEVICE_PFTOBJ_pPFFGetSupported() >= 0 )
      v32 = DEVICE_PFTOBJ_pPFFGetWrap(&v38, v36, &v37);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 )
      PFTOBJ_bUnloadWorkhorseWrap(&v38, v32, v37, 0LL);
  }
  v9 = *(_QWORD *)(v1 + 1712);
  while ( v9 )
  {
    v33 = v9;
    *(_DWORD *)(v9 + 228) = 1;
    if ( (int)IsvUnmapRemoteFontsSupported() >= 0 )
      vUnmapRemoteFonts(v9 + 128);
    v9 = *(_QWORD *)(v9 + 248);
    Win32FreePool(v33);
  }
  if ( (int)IsvCleanupOwnedRedirectionDeviceBitmapsSupported() >= 0 )
    vCleanupOwnedRedirectionDeviceBitmapsWrap(v1, v4);
  v11 = *(_QWORD *)(v1 + 1688);
  if ( v11 )
  {
    Win32FreePool(v11);
    *(_QWORD *)(v1 + 1688) = 0LL;
  }
  v12 = *(_QWORD *)(v1 + 1696);
  if ( v12 )
  {
    Win32FreePool(v12);
    *(_QWORD *)(v1 + 1696) = 0LL;
  }
  v13 = *(_QWORD *)(v1 + 1704);
  if ( v13 )
  {
    Win32FreePool(v13);
    *(_QWORD *)(v1 + 1704) = 0LL;
  }
  v14 = *(_QWORD *)(v1 + 2592);
  if ( v14 )
    Win32FreePool(v14);
  if ( (*(_DWORD *)(v36 + 40) & 0x80000) == 0 )
  {
    v15 = *(void **)(v1 + 1432);
    if ( v15 != gahStockObjects[13] )
      bDeleteFont(v15, 1LL);
    v16 = *(void **)(v1 + 1440);
    if ( v16 != gahStockObjects[13] )
      bDeleteFont(v16, 1LL);
    v17 = *(void **)(v1 + 1448);
    if ( v17 != gahStockObjects[16] )
      bDeleteFont(v17, 1LL);
    if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
    {
      v30 = (_QWORD *)(v1 + 1456);
      v31 = 6LL;
      do
      {
        bDeleteSurface(*v30++);
        --v31;
      }
      while ( v31 );
    }
  }
  LOBYTE(v10) = 1;
  PDEVOBJ::vDisableSurface(&v36, v4, v10);
  if ( *(_QWORD *)(v1 + 1512) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 )
    PDEVOBJ_bDisableHalftoneWrap(&v36);
  if ( !v4 )
    PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)&v36);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)(v36 + 1544));
  v20 = v36;
  if ( (*(_DWORD *)(v36 + 40) & 0x80000) == 0 )
  {
    if ( v4 != 2 )
    {
      v21 = *(struct OBJECT **)(v1 + 1808);
      if ( v21 )
        HmgDecrementShareReferenceCountEx(v21, 0LL);
      v22 = *(_QWORD *)(v1 + 1816);
      if ( v22 )
      {
        HmgDecrementShareReferenceCountEx(*(struct OBJECT **)(v1 + 1816), 0LL);
        v22 = *(_QWORD *)(v1 + 1816);
      }
      v37 = v22;
      XEPALOBJ::bDeletePalette(&v37, 1LL);
      v20 = v36;
    }
    if ( *(_QWORD *)(v20 + 2704) != *(_QWORD *)(v20 + 2688) && (!v6 || !v4) && v2 )
      (*(void (__fastcall **)(_QWORD))(v20 + 2704))(*(_QWORD *)(v1 + 1800));
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
  v23 = *(struct _ERESOURCE **)(v1 + 56);
  if ( v23 )
    GreDeleteSemaphore(v23);
  v24 = *(_DWORD *)(v1 + 40);
  if ( (v24 & 0x10000) == 0 )
  {
    v23 = *(struct _ERESOURCE **)(v1 + 48);
    if ( v23 )
    {
      GreDeleteSemaphore(v23);
      v24 = *(_DWORD *)(v1 + 40);
    }
  }
  if ( (v24 & 1) != 0 )
    GreDeleteSemaphore(*(PERESOURCE *)(v1 + 64));
  v25 = 0LL;
  GreAcquireHmgrSemaphore((int)v23, v18, v19);
  while ( 1 )
  {
    LOBYTE(v26) = 5;
    Objt = (__int64 *)HmgSafeNextObjt(v25, v26);
    if ( !Objt )
      break;
    v25 = *Objt;
    if ( Objt[6] == v1 )
      Objt[6] = 0LL;
  }
  GreReleaseHmgrSemaphore(v28, v26, v29);
  PDEV::Free((struct PDEV *)v1, v6);
}
