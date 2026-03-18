/*
 * XREFs of CleanupGDI @ 0x1C00A9D70
 * Callers:
 *     CleanupResources @ 0x1C00B15B4 (CleanupResources.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     GreDeleteObject @ 0x1C001E0C0 (GreDeleteObject.c)
 *     HmgSetOwner @ 0x1C001E630 (HmgSetOwner.c)
 *     GreGetStockObject @ 0x1C001F590 (GreGetStockObject.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheck @ 0x1C002CA80 (HmgShareLockCheck.c)
 *     DelayedDestroyCacheDC @ 0x1C0033300 (DelayedDestroyCacheDC.c)
 *     DestroyCacheDCEntries @ 0x1C0034AD8 (DestroyCacheDCEntries.c)
 *     hbmSelectBitmap @ 0x1C00638E0 (hbmSelectBitmap.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C00A8D10 (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C00A8D54 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00A8D7C (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00A8EC0 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     DestroyMonitor @ 0x1C00BBE90 (DestroyMonitor.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C00D3734 (DrvCleanupAndDestroyMDEV.c)
 */

__int64 CleanupGDI()
{
  int v0; // edx
  int v1; // r8d
  int v2; // edx
  int v3; // r8d
  __int64 v4; // rsi
  __int64 v5; // rdi
  struct OBJECT *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 result; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx

  DestroyDC((HDC *)(gpDispInfo + 56));
  DestroyDC((HDC *)(gpDispInfo + 64));
  DestroyDC((HDC *)(gpDispInfo + 72));
  DestroyDC(&ghdcMem);
  DestroyDC(&ghdcMem2);
  if ( gfade && (int)IsDeleteFadeSpriteSupported() >= 0 )
    DeleteFadeSprite();
  DestroyDC(&qword_1C01A2330);
  if ( qword_1C01A2260 )
  {
    GreGetStockObject(21);
    hbmSelectBitmap(qword_1C01A2268);
    GreDeleteObject(qword_1C01A2260);
    qword_1C01A2260 = 0LL;
  }
  DestroyDC(&qword_1C01A2268);
  DestroyCacheDCEntries((__int64)gptiCurrent, v0, v1);
  DestroyCacheDCEntries(0LL, v2, v3);
  DelayedDestroyCacheDC(1);
  v4 = gpDispInfo;
  v5 = *(_QWORD *)(gpDispInfo + 80);
  if ( v5 )
  {
    v6 = (struct OBJECT *)HmgShareLockCheck(*(_QWORD *)(gpDispInfo + 80), 5);
    if ( v6 )
    {
      if ( (v5 & 0x800000) == 0 )
        HmgSetOwner(v5, -2147483646, 5);
      HmgDecrementShareReferenceCountEx(v6, 0LL);
    }
    GreDeleteObject(*(HBRUSH *)(v4 + 80));
    *(_QWORD *)(v4 + 80) = 0LL;
  }
  if ( (int)IsCleanupOEMBitmapsSupported() >= 0 )
    CleanupOEMBitmaps();
  DestroyFont((HBRUSH *)&ghbrHungApp);
  DestroyFont((HBRUSH *)gpsi + 618);
  DestroyFont((HBRUSH *)&ghbrWhite);
  DestroyFont((HBRUSH *)&ghbrBlack);
  v7 = 4696LL;
  v8 = 31LL;
  do
  {
    DestroyFont((HBRUSH *)((char *)gpsi + v7));
    v7 += 8LL;
    --v8;
  }
  while ( v8 );
  DestroyRegion((HBRUSH *)(gpDispInfo + 120));
  DestroyRegion((HBRUSH *)&ghrgnInvalidSum);
  DestroyRegion((HBRUSH *)&ghrgnVisNew);
  DestroyRegion((HBRUSH *)&ghrgnSWP1);
  DestroyRegion((HBRUSH *)&ghrgnValid);
  DestroyRegion((HBRUSH *)&ghrgnValidSum);
  DestroyRegion((HBRUSH *)&ghrgnInvalid);
  DestroyRegion((HBRUSH *)&ghrgnInv0);
  DestroyRegion((HBRUSH *)&ghrgnInv1);
  DestroyRegion((HBRUSH *)&ghrgnInv2);
  DestroyRegion((HBRUSH *)&ghrgnGDC);
  DestroyRegion((HBRUSH *)&ghrgnSCR);
  DestroyRegion((HBRUSH *)&ghrgnSPB1);
  DestroyRegion((HBRUSH *)&ghrgnSPB2);
  DestroyRegion((HBRUSH *)&ghrgnSW);
  DestroyRegion((HBRUSH *)&ghrgnScrl1);
  DestroyRegion((HBRUSH *)&ghrgnScrl2);
  DestroyRegion((HBRUSH *)&ghrgnScrlVis);
  DestroyRegion((HBRUSH *)&ghrgnScrlSrc);
  DestroyRegion((HBRUSH *)&ghrgnScrlDst);
  DestroyRegion((HBRUSH *)&ghrgnScrlValid);
  DestroyAllDPIMETRICSFonts(&gSessionDpiMetrics);
  DestroyAllDPIMETRICSFonts(&g96DpiMetrics);
  if ( g_pWallpaperSettings )
  {
    if ( (int)IsReleaseWallpaperSettingsSupported() >= 0 )
      ReleaseWallpaperSettings(g_pWallpaperSettings);
    g_pWallpaperSettings = 0LL;
  }
  if ( g_hbmDesktopPattern )
  {
    GreDeleteObject(g_hbmDesktopPattern);
    g_hbmDesktopPattern = 0LL;
  }
  if ( *(_QWORD *)(gpDispInfo + 16) )
  {
    DrvCleanupAndDestroyMDEV();
    Win32FreePool(*(_QWORD *)(gpDispInfo + 16));
    *(_QWORD *)(gpDispInfo + 16) = 0LL;
    *(_QWORD *)(gpDispInfo + 40) = 0LL;
  }
  result = gpDispInfo;
  v10 = *(_QWORD **)(gpDispInfo + 104);
  if ( v10 )
  {
    do
    {
      v11 = (_QWORD *)v10[7];
      result = DestroyMonitor(v10);
      v10 = v11;
    }
    while ( v11 );
  }
  if ( gpMonitorCached )
    return DestroyMonitor(gpMonitorCached);
  return result;
}
