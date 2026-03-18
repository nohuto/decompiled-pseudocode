/*
 * XREFs of ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C009C000
 * Callers:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0029A20 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     HmgSafeNextObjt @ 0x1C001FB50 (HmgSafeNextObjt.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0022720 (DEC_SHARE_REF_CNT.c)
 *     PushThreadGuardedObject @ 0x1C00243F0 (PushThreadGuardedObject.c)
 *     PopThreadGuardedObject @ 0x1C00251C0 (PopThreadGuardedObject.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     GreDeleteSemaphore @ 0x1C002D330 (GreDeleteSemaphore.c)
 *     bDeleteSurface @ 0x1C0044990 (bDeleteSurface.c)
 *     ldevUnloadImage @ 0x1C0053EB0 (ldevUnloadImage.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C0060C7C (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0062DDC (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C008C470 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C009137C (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C009EA10 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C00F84C0 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
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
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rcx
  int v25; // edx
  int v26; // r8d
  _DWORD *v27; // rax
  struct OBJECT *v28; // rcx
  __int64 v29; // rax
  struct _ERESOURCE *v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 *Objt; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // [rsp+20h] [rbp-40h] BYREF
  int v38; // [rsp+28h] [rbp-38h]
  __int64 v39; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v40[4]; // [rsp+40h] [rbp-20h] BYREF
  _DWORD *v41; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v42; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v43; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v44; // [rsp+B8h] [rbp+58h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *((_DWORD *)a1 + 3);
  v4 = *((_DWORD *)a1 + 2);
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  *((_DWORD *)a1 + 3) = 0;
  v6 = v5 & 0x8000;
  v41 = (_DWORD *)v1;
  memset(v40, 0, sizeof(v40));
  PushThreadGuardedObject(v40, (__int64)a1, (__int64)vUnreferencePdevWorker);
  while ( 1 )
  {
    v10 = *(_QWORD *)(v1 + 1528);
    if ( !v10 )
      break;
    v38 = 0;
    v37 = v10;
    v39 = *(_QWORD *)(v10 + 128);
    if ( (int)IsRFONTOBJ_vDeleteRFONTSupported(v8, v7, v9) >= 0 )
      RFONTOBJ_vDeleteRFONTWrap(&v37, &v41, &v39, v2);
    v37 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v37);
  }
  PopThreadGuardedObject(v40);
  if ( v41[892] )
  {
    v11 = 0LL;
    v42 = 0LL;
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 15);
    if ( (int)IsGetgpPFTDeviceSupported() >= 0 )
      v43 = *(_QWORD *)GetgpPFTDeviceWrap();
    if ( (int)IsDEVICE_PFTOBJ_pPFFGetSupported() >= 0 )
      v11 = DEVICE_PFTOBJ_pPFFGetWrap(&v43, v41, &v42);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 )
      PFTOBJ_bUnloadWorkhorseWrap(&v43, v11, v42, 0LL);
  }
  v12 = *(_QWORD *)(v1 + 1712);
  while ( v12 )
  {
    v13 = v12;
    *(_DWORD *)(v12 + 228) = 1;
    if ( (int)IsvUnmapRemoteFontsSupported() >= 0 )
      vUnmapRemoteFonts(v12 + 128);
    v12 = *(_QWORD *)(v12 + 248);
    Win32FreePool(v13);
  }
  if ( (int)IsvCleanupOwnedRedirectionDeviceBitmapsSupported() >= 0 )
    vCleanupOwnedRedirectionDeviceBitmapsWrap(v1, v4);
  v14 = *(_QWORD *)(v1 + 1688);
  if ( v14 )
  {
    Win32FreePool(v14);
    *(_QWORD *)(v1 + 1688) = 0LL;
  }
  v15 = *(_QWORD *)(v1 + 1696);
  if ( v15 )
  {
    Win32FreePool(v15);
    *(_QWORD *)(v1 + 1696) = 0LL;
  }
  v16 = *(_QWORD *)(v1 + 1704);
  if ( v16 )
  {
    Win32FreePool(v16);
    *(_QWORD *)(v1 + 1704) = 0LL;
  }
  v17 = *(_QWORD *)(v1 + 2592);
  if ( v17 )
    Win32FreePool(v17);
  v18 = *(_QWORD *)(v1 + 3560);
  if ( v18 )
  {
    Win32FreePool(v18);
    *(_QWORD *)(v1 + 3560) = 0LL;
  }
  if ( (v41[10] & 0x80000) == 0 )
  {
    v19 = *(void **)(v1 + 1432);
    if ( v19 != gahStockObjects[13] )
      bDeleteFont(v19, 1LL);
    v20 = *(void **)(v1 + 1440);
    if ( v20 != gahStockObjects[13] )
      bDeleteFont(v20, 1LL);
    v21 = *(void **)(v1 + 1448);
    if ( v21 != gahStockObjects[16] )
      bDeleteFont(v21, 1LL);
    if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
    {
      v22 = (_QWORD *)(v1 + 1456);
      v23 = 6LL;
      do
      {
        bDeleteSurface(*v22++);
        --v23;
      }
      while ( v23 );
    }
  }
  PDEVOBJ::vDisableSurface(&v41, v4, 1);
  if ( *(_QWORD *)(v1 + 1512) && (int)IsPDEVOBJ_bDisableHalftoneSupported(v24) >= 0 )
    PDEVOBJ_bDisableHalftoneWrap(&v41);
  if ( !v4 )
    PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)&v41);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)(v41 + 386));
  v27 = v41;
  if ( (v41[10] & 0x80000) == 0 )
  {
    if ( v4 != 2 )
    {
      v28 = *(struct OBJECT **)(v1 + 1808);
      if ( v28 )
        DEC_SHARE_REF_CNT(v28);
      v29 = *(_QWORD *)(v1 + 1816);
      if ( v29 )
      {
        DEC_SHARE_REF_CNT(*(struct OBJECT **)(v1 + 1816));
        v29 = *(_QWORD *)(v1 + 1816);
      }
      v44 = v29;
      XEPALOBJ::bDeletePalette(&v44, 1LL, 0LL);
      v27 = v41;
    }
    if ( *((_QWORD *)v27 + 338) != *((_QWORD *)v27 + 336) && (!v6 || !v4) && v2 )
      (*((void (__fastcall **)(_QWORD))v27 + 338))(*(_QWORD *)(v1 + 1800));
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
  v30 = *(struct _ERESOURCE **)(v1 + 56);
  if ( v30 )
    GreDeleteSemaphore(v30);
  v31 = *(_DWORD *)(v1 + 40);
  if ( (v31 & 0x10000) == 0 )
  {
    v30 = *(struct _ERESOURCE **)(v1 + 48);
    if ( v30 )
    {
      GreDeleteSemaphore(v30);
      v31 = *(_DWORD *)(v1 + 40);
    }
  }
  if ( (v31 & 1) != 0 )
    GreDeleteSemaphore(*(PERESOURCE *)(v1 + 64));
  GreAcquireHmgrSemaphore((__int64)v30, v25, v26);
  LODWORD(v32) = 0;
  while ( 1 )
  {
    Objt = (__int64 *)HmgSafeNextObjt(v32, 5);
    if ( !Objt )
      break;
    v32 = *Objt;
    if ( Objt[6] == v1 )
      Objt[6] = 0LL;
  }
  GreReleaseHmgrSemaphore(v35, v34, v36);
  PDEV::Free((struct PDEV *)v1, v6);
}
