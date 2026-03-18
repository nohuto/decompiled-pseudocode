/*
 * XREFs of CleanupGDI @ 0x1C00B4220
 * Callers:
 *     CleanupResources @ 0x1C00B4194 (CleanupResources.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     HmgSetOwner @ 0x1C0016200 (HmgSetOwner.c)
 *     GreDeleteObject @ 0x1C0018180 (GreDeleteObject.c)
 *     HmgShareLockCheck @ 0x1C001D840 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 *     GreGetStockObject @ 0x1C0022DB0 (GreGetStockObject.c)
 *     DelayedDestroyCacheDC @ 0x1C002B920 (DelayedDestroyCacheDC.c)
 *     DestroyCacheDCEntries @ 0x1C007E6B4 (DestroyCacheDCEntries.c)
 *     hbmSelectBitmap @ 0x1C0085340 (hbmSelectBitmap.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C00B4570 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00B4598 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00B45CC (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     DestroyMonitor @ 0x1C00B4610 (DestroyMonitor.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C00B4800 (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C00B4844 (DrvCleanupAndDestroyMDEV.c)
 */

__int64 CleanupGDI()
{
  int v0; // edx
  __int64 v1; // r8
  int v2; // edx
  __int64 v3; // r8
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  struct OBJECT *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 result; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // rdx

  DestroyDC((HDC *)(gpDispInfo + 56));
  DestroyDC((HDC *)(gpDispInfo + 64));
  DestroyDC((HDC *)(gpDispInfo + 72));
  DestroyDC(&ghdcMem);
  DestroyDC(&ghdcMem2);
  if ( gfade && (int)IsDeleteFadeSpriteSupported() >= 0 )
    DeleteFadeSprite();
  DestroyDC(&qword_1C0215868);
  if ( qword_1C0215940 )
  {
    GreGetStockObject(21);
    hbmSelectBitmap(qword_1C0215948);
    GreDeleteObject((struct HOBJ__ *)qword_1C0215940, v14);
    qword_1C0215940 = 0LL;
  }
  DestroyDC(&qword_1C0215948);
  DestroyCacheDCEntries((__int64)gptiCurrent, v0, v1);
  DestroyCacheDCEntries(0LL, v2, v3);
  DelayedDestroyCacheDC(1);
  v4 = gpDispInfo;
  v5 = *(_QWORD *)(gpDispInfo + 80);
  if ( v5 )
  {
    v7 = (struct OBJECT *)HmgShareLockCheck(*(_QWORD *)(gpDispInfo + 80), 5);
    if ( v7 )
    {
      if ( (v5 & 0x800000) == 0 )
        HmgSetOwner(v5, -2147483646, 5);
      HmgDecrementShareReferenceCountEx(v7, 0LL);
    }
    GreDeleteObject(*(struct HOBJ__ **)(v4 + 80), v6);
    *(_QWORD *)(v4 + 80) = 0LL;
  }
  if ( (int)IsCleanupOEMBitmapsSupported() >= 0 )
    CleanupOEMBitmaps();
  DestroyFont(&ghbrHungApp);
  DestroyFont((HFONT *)gpsi + 618);
  DestroyFont(&ghbrWhite);
  DestroyFont(&ghbrBlack);
  v8 = 4696LL;
  v9 = 31LL;
  do
  {
    DestroyFont((HFONT *)((char *)gpsi + v8));
    v8 += 8LL;
    --v9;
  }
  while ( v9 );
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
    GreDeleteObject((struct HOBJ__ *)g_hbmDesktopPattern, v10);
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
  v12 = *(_QWORD **)(gpDispInfo + 104);
  if ( v12 )
  {
    do
    {
      v13 = (_QWORD *)v12[7];
      result = DestroyMonitor(v12);
      v12 = v13;
    }
    while ( v13 );
  }
  if ( gpMonitorCached )
    return DestroyMonitor(gpMonitorCached);
  return result;
}
