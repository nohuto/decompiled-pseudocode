/*
 * XREFs of ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007FEC8
 * Callers:
 *     GdiProcessCallout @ 0x1C007FB20 (GdiProcessCallout.c)
 *     MultiUserNtGreCleanup @ 0x1C00B59E8 (MultiUserNtGreCleanup.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0018218 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0041CE8 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C005272C (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00527BC (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     HmgNextOwned @ 0x1C0052850 (HmgNextOwned.c)
 *     bDeleteBrush @ 0x1C0052910 (bDeleteBrush.c)
 *     bDeletePalette @ 0x1C0058600 (bDeletePalette.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0058824 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C005B2A0 (--1EPALOBJ@@QEAA@XZ.c)
 *     HmgSetLock @ 0x1C007A008 (HmgSetLock.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C009B19C (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C00A67C4 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C00A7370 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C00A991C (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00AE2E0 (-vCleanupDCs@@YAXK@Z.c)
 *     HmgIsProcessCleanupRequired @ 0x1C00BE234 (HmgIsProcessCleanupRequired.c)
 *     HmgNextGarbageCollectible @ 0x1C00BE29C (HmgNextGarbageCollectible.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF1E8 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF2DC (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0125FCC (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     EngDeleteDriverObj @ 0x1C0131D50 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C0131E70 (EngLockDriverObj.c)
 */

__int64 __fastcall NtGdiCloseProcess(unsigned int a1, unsigned int a2)
{
  unsigned int v4; // r12d
  unsigned int i; // ecx
  unsigned int Owned; // edi
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int j; // ecx
  unsigned int GarbageCollectible; // edi
  unsigned int k; // ecx
  unsigned int v12; // edi
  unsigned int m; // ecx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // edi
  int v17; // edi
  unsigned int n; // ecx
  HDRVOBJ v19; // r14
  char v20; // cl
  unsigned int v21; // r15d
  struct _ERESOURCE *v23[2]; // [rsp+20h] [rbp-10h] BYREF
  HDRVOBJ hdo; // [rsp+80h] [rbp+50h] BYREF
  struct OBJECT *v25; // [rsp+88h] [rbp+58h] BYREF

  v4 = 1;
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x12u);
    if ( (int)IsCleanupHLSURFSupported() >= 0 )
      CleanupHLSURF(2LL);
  }
  vCleanupDCs(a1);
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0xAu);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0xAu);
  }
  if ( (int)IsvCleanupFontsSupported() >= 0 )
    vCleanupFonts(a1);
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x10u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0x10u);
  }
  hdo = 0LL;
  for ( i = 0; ; i = Owned )
  {
    Owned = HmgNextOwned(i, a1, (unsigned __int64 *)&hdo);
    if ( !Owned )
      break;
    if ( (BYTE2(hdo) & 0x1F) == 0x10 )
      bDeleteBrush((struct HOBJ__ *)hdo, 1);
  }
  DxLddmCleanupAtProcessDestroy(a1);
  if ( (int)IsvCleanupUMWindowlessSpriteSupported() >= 0 )
    vCleanupUMWindowlessSprite(a1);
  if ( a2 == 2 )
  {
    vReleaseCurrentpMapProcForSurfaces(2LL);
    SURFACE::pdibDefault = 0LL;
    ppalDefault = 0LL;
    ppalMono = 0LL;
    hpalMono = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(5u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(5u);
  }
  vCleanupSurfaces(a1, a2);
  if ( gGarbageCollectionPendingCount )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( (unsigned int)HmgIsProcessCleanupRequired(CurrentProcessWin32Process) )
    {
      hdo = 0LL;
      for ( j = 0; ; j = GarbageCollectible )
      {
        GarbageCollectible = HmgNextGarbageCollectible(j);
        if ( !GarbageCollectible )
          break;
      }
    }
  }
  if ( a2 == 2 )
  {
    hrgnDefault = 0LL;
    prgnDefault = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(4u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(4u);
  }
  vCleanupRegions(a1);
  if ( a2 == 2 )
  {
    ghStockColorSpace = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(9u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(9u);
  }
  hdo = 0LL;
  for ( k = 0; ; k = v12 )
  {
    v12 = HmgNextOwned(k, a1, (unsigned __int64 *)&hdo);
    if ( !v12 )
      break;
    if ( (BYTE2(hdo) & 0x1F) == 9 )
      bDeleteColorSpace((HCOLORSPACE)hdo);
  }
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x15u);
    if ( (int)IsvCleanupMetaTypeSupported() >= 0 )
      vCleanupMetaType(a1);
    MultiUserGreCleanupHmgRemoveAllLocks(0);
    if ( (int)IsGetgpniFontsDirectoryAndScratchSupported() >= 0 )
    {
      GetgpniFontsDirectoryAndScratch(&hdo, &v25, v23);
      if ( *(_QWORD *)hdo )
        Win32FreePool(*(_QWORD *)hdo);
      if ( *(_QWORD *)v25 )
        Win32FreePool(*(_QWORD *)v25);
      if ( v23[0] )
        Win32FreePool((__int64)v23[0]);
    }
    UmfdSessionUninitialize();
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0);
    if ( (int)IsvCleanupPrivateFontsSupported() >= 0 )
      vCleanupPrivateFonts();
  }
  hdo = 0LL;
  for ( m = 0; ; m = v16 )
  {
    v16 = HmgNextOwned(m, a1, (unsigned __int64 *)&hdo);
    if ( !v16 )
      break;
    if ( (BYTE2(hdo) & 0x1F) == 8 )
    {
      v23[0] = ghsemPalette;
      EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v25, (HPALETTE)hdo);
      if ( v25 )
        XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v25);
      EPALOBJ::~EPALOBJ(&v25);
      SEMOBJ::vUnlock(v23, v14, v15);
    }
  }
  v17 = 0;
  hdo = 0LL;
  for ( n = 0; ; n = v21 )
  {
    v21 = HmgNextOwned(n, a1, (unsigned __int64 *)&hdo);
    if ( !v21 )
      break;
    v19 = hdo;
    v20 = BYTE2(hdo) & 0x1F;
    if ( (BYTE2(hdo) & 0x1F) == 6 )
    {
      if ( (int)IsGreDeleteClientObjSupported() >= 0 )
        GreDeleteClientObj(v19);
    }
    else if ( v20 == 8 )
    {
      v4 = bDeletePalette((HPALETTE)hdo, 1u);
      if ( !v4 && !v17 )
        v17 = 1;
    }
    else if ( v20 == 28 )
    {
      HmgSetLock((unsigned int)hdo);
      EngLockDriverObj(v19);
      EngDeleteDriverObj(v19, 1, 1);
    }
    else
    {
      v4 = 0;
      if ( !v17 )
        v17 = 1;
    }
  }
  return v4;
}
