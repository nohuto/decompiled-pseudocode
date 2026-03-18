/*
 * XREFs of CleanupGDI @ 0x1C00423AC
 * Callers:
 *     CleanupResources @ 0x1C0095DB8 (CleanupResources.c)
 * Callees:
 *     GreDeleteObject @ 0x1C001CBF0 (GreDeleteObject.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     HmgSetOwner @ 0x1C001E160 (HmgSetOwner.c)
 *     HmgShareLockCheck @ 0x1C0021790 (HmgShareLockCheck.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     GreGetStockObject @ 0x1C0023EA0 (GreGetStockObject.c)
 *     DestroyCacheDCEntries @ 0x1C002D480 (DestroyCacheDCEntries.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0042700 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0042728 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C004275C (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     DestroyMonitor @ 0x1C0063C60 (DestroyMonitor.c)
 *     hbmSelectBitmap @ 0x1C0073B90 (hbmSelectBitmap.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C0082808 (DrvCleanupAndDestroyMDEV.c)
 *     DelayedDestroyCacheDC @ 0x1C008CA40 (DelayedDestroyCacheDC.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C009285C (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00FEFEC (--0SURFREF@@QEAA@XZ.c)
 */

__int64 CleanupGDI()
{
  int v0; // edx
  __int64 v1; // r8
  int v2; // edx
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 result; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  _BYTE v11[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  DestroyDC((HDC *)(gpDispInfo + 56));
  DestroyDC((HDC *)(gpDispInfo + 64));
  DestroyDC((HDC *)(gpDispInfo + 72));
  DestroyDC(&ghdcMem);
  DestroyDC(&ghdcMem2);
  if ( gfade && (int)IsDeleteFadeSpriteSupported() >= 0 )
    DeleteFadeSprite();
  DestroyDC(&qword_1C01CFE08);
  if ( qword_1C01CFD30 )
  {
    GreGetStockObject(21);
    hbmSelectBitmap(qword_1C01CFD38);
    GreDeleteObject(qword_1C01CFD30);
    qword_1C01CFD30 = 0LL;
  }
  DestroyDC(&qword_1C01CFD38);
  DestroyCacheDCEntries((__int64)gptiCurrent, v0, v1);
  DestroyCacheDCEntries(0LL, v2, v3);
  DelayedDestroyCacheDC(1LL);
  v4 = gpDispInfo;
  v5 = *(_QWORD *)(gpDispInfo + 80);
  if ( v5 )
  {
    SURFREF::SURFREF((SURFREF *)v11);
    v12 = HmgShareLockCheck(v5, 5);
    if ( v12 && (v5 & 0x800000) == 0 )
      HmgSetOwner(v5, -2147483646, 5);
    SURFREF::~SURFREF((SURFREF *)v11);
    GreDeleteObject(*(HRGN *)(v4 + 80));
    *(_QWORD *)(v4 + 80) = 0LL;
  }
  if ( (int)IsCleanupOEMBitmapsSupported() >= 0 )
    CleanupOEMBitmaps();
  DestroyFont(&ghbrHungApp);
  DestroyFont((HFONT *)gpsi + 618);
  DestroyFont(&ghbrWhite);
  DestroyFont(&ghbrBlack);
  v6 = 4696LL;
  v7 = 31LL;
  do
  {
    DestroyFont((HFONT *)((char *)gpsi + v6));
    v6 += 8LL;
    --v7;
  }
  while ( v7 );
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
  v9 = *(_QWORD **)(gpDispInfo + 104);
  if ( v9 )
  {
    do
    {
      v10 = (_QWORD *)v9[7];
      result = DestroyMonitor(v9);
      v9 = v10;
    }
    while ( v10 );
  }
  if ( gpMonitorCached )
    return DestroyMonitor(gpMonitorCached);
  return result;
}
