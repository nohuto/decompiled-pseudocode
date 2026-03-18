/*
 * XREFs of CleanupGDI @ 0x1C00B6D00
 * Callers:
 *     CleanupResources @ 0x1C00B6C74 (CleanupResources.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     GreDeleteObject @ 0x1C0016C60 (GreDeleteObject.c)
 *     DelayedDestroyCacheDC @ 0x1C001788C (DelayedDestroyCacheDC.c)
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 *     HmgShareLockCheck @ 0x1C001C500 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     GreGetStockObject @ 0x1C0022890 (GreGetStockObject.c)
 *     HmgSetOwner @ 0x1C002A580 (HmgSetOwner.c)
 *     DestroyCacheDCEntries @ 0x1C0064DA8 (DestroyCacheDCEntries.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C00B7050 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00B7078 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00B70AC (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     DestroyMonitor @ 0x1C00B70F0 (DestroyMonitor.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C00B72E0 (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C00B7324 (DrvCleanupAndDestroyMDEV.c)
 */

__int64 CleanupGDI()
{
  int v0; // edx
  __int64 v1; // r8
  int v2; // edx
  __int64 v3; // r8
  __int64 v4; // rsi
  __int64 v5; // rdi
  struct OBJECT *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 result; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  void *StockObject; // rax

  DestroyDC((HDC *)(gpDispInfo + 56));
  DestroyDC((HDC *)(gpDispInfo + 64));
  DestroyDC((HDC *)(gpDispInfo + 72));
  DestroyDC(&ghdcMem);
  DestroyDC(&ghdcMem2);
  if ( gfade && (int)IsDeleteFadeSpriteSupported() >= 0 )
    DeleteFadeSprite();
  DestroyDC(&qword_1C0218868);
  if ( qword_1C0218940 )
  {
    StockObject = GreGetStockObject(21);
    hbmSelectBitmap((__int64)qword_1C0218948, StockObject, 0, 0);
    GreDeleteObject(qword_1C0218940);
    qword_1C0218940 = 0LL;
  }
  DestroyDC(&qword_1C0218948);
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
    GreDeleteObject(*(HPALETTE *)(v4 + 80));
    *(_QWORD *)(v4 + 80) = 0LL;
  }
  if ( (int)IsCleanupOEMBitmapsSupported() >= 0 )
    CleanupOEMBitmaps();
  DestroyFont(&ghbrHungApp);
  DestroyFont((HFONT *)gpsi + 618);
  DestroyFont(&ghbrWhite);
  DestroyFont(&ghbrBlack);
  v7 = 4696LL;
  v8 = 31LL;
  do
  {
    DestroyFont((HFONT *)((char *)gpsi + v7));
    v7 += 8LL;
    --v8;
  }
  while ( v8 );
  DestroyRegion((HRGN *)(gpDispInfo + 120));
  DestroyRegion(&ghrgnInvalidSum);
  DestroyRegion(&ghrgnVisNew);
  DestroyRegion(&ghrgnSWP1);
  DestroyRegion(&ghrgnValid);
  DestroyRegion(&ghrgnValidSum);
  DestroyRegion(&ghrgnInvalid);
  DestroyRegion(&ghrgnInv0);
  DestroyRegion(&ghrgnInv1);
  DestroyRegion(&ghrgnInv2);
  DestroyRegion(&ghrgnGDC);
  DestroyRegion(&ghrgnSCR);
  DestroyRegion(&ghrgnSPB1);
  DestroyRegion(&ghrgnSPB2);
  DestroyRegion(&ghrgnSW);
  DestroyRegion(&ghrgnScrl1);
  DestroyRegion(&ghrgnScrl2);
  DestroyRegion(&ghrgnScrlVis);
  DestroyRegion(&ghrgnScrlSrc);
  DestroyRegion(&ghrgnScrlDst);
  DestroyRegion(&ghrgnScrlValid);
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
