/*
 * XREFs of ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00483C0
 * Callers:
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002E210 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031F30 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     PopThreadGuardedObject @ 0x1C001E1D0 (PopThreadGuardedObject.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C0031CA8 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0032090 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0033650 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     GreDeleteSemaphore @ 0x1C00348B0 (GreDeleteSemaphore.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C003DBD0 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C003E880 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     PushThreadGuardedObject @ 0x1C0044C70 (PushThreadGuardedObject.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00486F8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C0048760 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     HmgSafeNextObjt @ 0x1C0049980 (HmgSafeNextObjt.c)
 *     ldevUnloadImage @ 0x1C0052F40 (ldevUnloadImage.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     bDeleteSurface @ 0x1C0063570 (bDeleteSurface.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

void __fastcall vUnreferencePdevWorker(struct tagUNREFDATA *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r12d
  unsigned int v4; // r14d
  int v5; // r15d
  int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  int v19; // edx
  struct _ERESOURCE *v20; // rcx
  int v21; // r8d
  __int64 v22; // rax
  struct OBJECT *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 *Objt; // rax
  int v29; // ecx
  int v30; // r8d
  _QWORD *v31; // rbx
  __int64 v32; // rsi
  __int64 v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // [rsp+20h] [rbp-40h] BYREF
  int v36; // [rsp+28h] [rbp-38h]
  __int64 v37; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v38[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v39; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v40; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v41; // [rsp+B0h] [rbp+50h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *((_DWORD *)a1 + 3);
  v4 = *((_DWORD *)a1 + 2);
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  *((_DWORD *)a1 + 3) = 0;
  v6 = v5 & 0x8000;
  v39 = v1;
  memset(v38, 0, sizeof(v38));
  PushThreadGuardedObject(v38, (__int64)a1, (__int64)vUnreferencePdevWorker);
  while ( 1 )
  {
    v10 = *(_QWORD *)(v1 + 1520);
    if ( !v10 )
      break;
    v36 = 0;
    v35 = v10;
    v37 = *(_QWORD *)(v10 + 112);
    if ( (int)IsRFONTOBJ_vDeleteRFONTSupported(v8, v7, v9) >= 0 )
      RFONTOBJ_vDeleteRFONTWrap(&v35, &v39, &v37, v2);
    v35 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v35);
  }
  PopThreadGuardedObject(v38);
  if ( *(_DWORD *)(v1 + 2096) && (*(_DWORD *)(v39 + 40) & 0x40) != 0 )
  {
    v33 = 0LL;
    v40 = 0LL;
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    if ( (int)IsGetgpPFTDeviceSupported() >= 0 )
      v41 = *(_QWORD *)GetgpPFTDeviceWrap();
    if ( (int)IsDEVICE_PFTOBJ_pPFFGetSupported() >= 0 )
      v33 = DEVICE_PFTOBJ_pPFFGetWrap(&v41, v39, &v40);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 )
      PFTOBJ_bUnloadWorkhorseWrap(&v41, v33, v40, 0LL);
  }
  v11 = *(_QWORD *)(v1 + 1704);
  while ( v11 )
  {
    v34 = v11;
    *(_DWORD *)(v11 + 228) = 1;
    if ( (int)IsvUnmapRemoteFontsSupported() >= 0 )
      vUnmapRemoteFonts(v11 + 128);
    v11 = *(_QWORD *)(v11 + 248);
    Win32FreePool(v34);
  }
  if ( (int)IsvCleanupOwnedRedirectionDeviceBitmapsSupported() >= 0 )
    vCleanupOwnedRedirectionDeviceBitmapsWrap(v1, v4);
  v12 = *(_QWORD *)(v1 + 1680);
  if ( v12 )
  {
    Win32FreePool(v12);
    *(_QWORD *)(v1 + 1680) = 0LL;
  }
  v13 = *(_QWORD *)(v1 + 1688);
  if ( v13 )
  {
    Win32FreePool(v13);
    *(_QWORD *)(v1 + 1688) = 0LL;
  }
  v14 = *(_QWORD *)(v1 + 1696);
  if ( v14 )
  {
    Win32FreePool(v14);
    *(_QWORD *)(v1 + 1696) = 0LL;
  }
  v15 = *(_QWORD *)(v1 + 2584);
  if ( v15 )
    Win32FreePool(v15);
  if ( (*(_DWORD *)(v39 + 40) & 0x80000) == 0 )
  {
    v16 = *(void **)(v1 + 1424);
    if ( v16 != gahStockObjects[13] )
      bDeleteFont(v16, 1LL);
    v17 = *(void **)(v1 + 1432);
    if ( v17 != gahStockObjects[13] )
      bDeleteFont(v17, 1LL);
    v18 = *(void **)(v1 + 1440);
    if ( v18 != gahStockObjects[16] )
      bDeleteFont(v18, 1LL);
    if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
    {
      v31 = (_QWORD *)(v1 + 1448);
      v32 = 6LL;
      do
      {
        bDeleteSurface(*v31++);
        --v32;
      }
      while ( v32 );
    }
  }
  PDEVOBJ::vDisableSurface(&v39, v4, 1);
  if ( *(_QWORD *)(v1 + 1504) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 )
    PDEVOBJ_bDisableHalftoneWrap(&v39);
  if ( !v4 )
    PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)&v39);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)(v39 + 1536));
  v22 = v39;
  if ( (*(_DWORD *)(v39 + 40) & 0x80000) == 0 )
  {
    if ( v4 != 2 )
    {
      v23 = *(struct OBJECT **)(v1 + 1800);
      if ( v23 )
        HmgDecrementShareReferenceCountEx(v23, 0LL);
      v24 = *(_QWORD *)(v1 + 1808);
      if ( v24 )
      {
        HmgDecrementShareReferenceCountEx(*(struct OBJECT **)(v1 + 1808), 0LL);
        v24 = *(_QWORD *)(v1 + 1808);
      }
      v40 = v24;
      XEPALOBJ::bDeletePalette((XEPALOBJ *)&v40, 1, 0);
      v22 = v39;
    }
    if ( *(_QWORD *)(v22 + 2696) != *(_QWORD *)(v22 + 2680) && (!v6 || !v4) && v2 )
      (*(void (__fastcall **)(_QWORD))(v22 + 2696))(*(_QWORD *)(v1 + 1792));
    if ( v6 )
    {
      if ( (int)IsUMPD_ldevUnloadImageSupported() >= 0 )
        UMPD_ldevUnloadImageWrap(*(_QWORD *)(v1 + 1784));
    }
    else
    {
      ldevUnloadImage(*(_QWORD *)(v1 + 1784));
    }
  }
  v25 = *(_DWORD *)(v1 + 40);
  if ( (v25 & 0x10000) == 0 )
  {
    v20 = *(struct _ERESOURCE **)(v1 + 48);
    if ( v20 )
    {
      GreDeleteSemaphore(v20);
      v25 = *(_DWORD *)(v1 + 40);
    }
  }
  if ( (v25 & 1) != 0 )
    GreDeleteSemaphore(*(PERESOURCE *)(v1 + 56));
  v26 = 0LL;
  GreAcquireHmgrSemaphore((int)v20, v19, v21);
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
