/*
 * XREFs of ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0061E50
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00603B0 (MultiUserNtGreCleanup.c)
 *     GdiProcessCallout @ 0x1C0108800 (GdiProcessCallout.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     HmgNextOwned @ 0x1C00200E0 (HmgNextOwned.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C003F198 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00449E0 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     bDeletePalette @ 0x1C00713D0 (bDeletePalette.c)
 *     ?vCleanupBrushes@@YAXK@Z @ 0x1C007DE28 (-vCleanupBrushes@@YAXK@Z.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C007E7FC (-vCleanupRegions@@YAXK@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C00801B8 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x1C0080270 (-vCleanupLCSPs@@YAXK@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0082B34 (-vCleanupDCs@@YAXK@Z.c)
 *     HmgSetLock @ 0x1C0082FE0 (HmgSetLock.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C0085CE8 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C009179C (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     ?LogCurrentProcessCHSFontFallback@@YAXPEAU_W32PROCESS@@@Z @ 0x1C00ACA7C (-LogCurrentProcessCHSFontFallback@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00ACB28 (-vGarbageCollectObjects@@YAXXZ.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C00F9BAC (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     EngDeleteDriverObj @ 0x1C0107A40 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C0107B70 (EngLockDriverObj.c)
 */

__int64 __fastcall NtGdiCloseProcess(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  unsigned int v4; // r15d
  struct _W32PROCESS *CurrentProcessWin32Process; // rax
  struct _W32PROCESS *v6; // rsi
  int v8; // esi
  __int64 i; // rcx
  HDRVOBJ v10; // rbp
  char v11; // al
  unsigned int Owned; // r14d
  __int64 v13[7]; // [rsp+20h] [rbp-38h] BYREF
  HDRVOBJ hdo; // [rsp+70h] [rbp+18h] BYREF
  __int64 *v15; // [rsp+78h] [rbp+20h] BYREF

  v3 = a1;
  v4 = 1;
  if ( a2 == 1 )
  {
    CurrentProcessWin32Process = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(a1);
    v6 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      LogCurrentProcessCHSFontFallback(CurrentProcessWin32Process);
      if ( (*((_DWORD *)v6 + 74) & 1) == 0 && !*((_DWORD *)v6 + 16) )
        return 1LL;
    }
  }
  else if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x12u);
    if ( (int)IsCleanupHLSURFSupported() >= 0 )
      CleanupHLSURF(2LL);
  }
  vCleanupDCs(v3);
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0xAu);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0xAu);
  }
  if ( (int)IsvCleanupFontsSupported() >= 0 )
    vCleanupFonts(v3);
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x10u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0x10u);
  }
  vCleanupBrushes(v3);
  DxLddmCleanupAtProcessDestroy(v3);
  if ( (int)IsvCleanupUMWindowlessSpriteSupported() >= 0 )
    vCleanupUMWindowlessSprite(v3);
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
  vCleanupSurfaces(v3, a2);
  if ( gGarbageCollectionPendingCount )
    vGarbageCollectObjects();
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
  vCleanupRegions(v3);
  if ( a2 == 2 )
  {
    ghStockColorSpace = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(9u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(9u);
  }
  vCleanupLCSPs(v3);
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x15u);
    if ( (int)IsvCleanupMetaTypeSupported() >= 0 )
      vCleanupMetaType(v3);
    MultiUserGreCleanupHmgRemoveAllLocks(0);
    if ( (int)IsGetgpniFontsDirectoryAndScratchSupported() >= 0 )
    {
      GetgpniFontsDirectoryAndScratch(&hdo, &v15, v13);
      if ( *(_QWORD *)hdo )
        Win32FreePool(*(_QWORD *)hdo);
      if ( *v15 )
        Win32FreePool(*v15);
      if ( v13[0] )
        Win32FreePool(v13[0]);
    }
    UmfdSessionUninitialize();
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0);
    if ( (int)IsvCleanupPrivateFontsSupported() >= 0 )
      vCleanupPrivateFonts();
  }
  vRemoveRefPalettes(v3);
  v8 = 0;
  hdo = 0LL;
  for ( i = 0LL; ; i = Owned )
  {
    Owned = HmgNextOwned(i, v3, (unsigned __int64 *)&hdo);
    if ( !Owned )
      break;
    v10 = hdo;
    v11 = BYTE2(hdo) & 0x1F;
    if ( (BYTE2(hdo) & 0x1F) == 6 )
    {
      if ( (int)IsGreDeleteClientObjSupported() >= 0 )
        GreDeleteClientObj(v10);
    }
    else if ( v11 == 8 )
    {
      v4 = bDeletePalette(hdo, 1LL, a2);
      if ( !v4 && !v8 )
        v8 = 1;
    }
    else if ( v11 == 28 )
    {
      HmgSetLock(hdo);
      EngLockDriverObj(v10);
      EngDeleteDriverObj(v10, 1, 1);
    }
    else
    {
      if ( !v8 )
        v8 = 1;
      v4 = 0;
    }
  }
  return v4;
}
