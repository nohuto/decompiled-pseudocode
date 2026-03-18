/*
 * XREFs of BitBltSysBmp @ 0x1C000D26C
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C00110A4 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     xxxDrawCaptionBar @ 0x1C00C2CE4 (xxxDrawCaptionBar.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C012F608 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02007D0 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0200A70 (DrawSize.c)
 *     xxxTrackCaptionButton @ 0x1C0202AE0 (xxxTrackCaptionButton.c)
 *     MNDrawArrow @ 0x1C0208444 (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C02095E4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreGetDCDpiScaleValue @ 0x1C000C580 (GreGetDCDpiScaleValue.c)
 *     GetOemBitmapInfoForDpi @ 0x1C000D3C0 (GetOemBitmapInfoForDpi.c)
 *     IS_UI_LANGID @ 0x1C000D4D0 (IS_UI_LANGID.c)
 *     PrepareHDCBITSBitmap @ 0x1C000D504 (PrepareHDCBITSBitmap.c)
 *     GreGetLayout @ 0x1C002D278 (GreGetLayout.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 */

__int64 __fastcall BitBltSysBmp(HDC a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int16 *v6; // rdi
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // rsi
  HDC v12; // r14
  __int64 v13; // r9
  unsigned int v14; // eax
  unsigned int v15; // ebx
  BOOL v16; // eax
  int DCDpiScaleValue; // eax
  unsigned int v19; // r15d
  __int64 v20; // r9
  __int64 v21; // r8

  v6 = 0LL;
  DpiForSystem = GetDpiForSystem();
  OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, DpiForSystem);
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
    if ( DCDpiScaleValue > 1 )
      v6 = (__int16 *)GetOemBitmapInfoForDpi(a4, (unsigned int)(96 * DCDpiScaleValue));
  }
  if ( a5 )
    v12 = (HDC)PrepareHDCBITSBitmap((HDC)((unsigned __int64)a1 & -(__int64)(v6 != 0LL)));
  else
    v12 = *(HDC *)(gpDispInfo + 64LL);
  if ( !v12 )
    return 0LL;
  v13 = (unsigned int)OemBitmapInfoForDpi[2];
  if ( v6 )
    v14 = GreStretchBltInternal(a1, a2, a3, v13, OemBitmapInfoForDpi[3], v12, *v6, v6[1], v6[2], v6[3], 13369376, 0, 0);
  else
    v14 = NtGdiBitBltInternal(
            a1,
            a2,
            a3,
            v13,
            OemBitmapInfoForDpi[3],
            v12,
            *OemBitmapInfoForDpi,
            OemBitmapInfoForDpi[1],
            13369376,
            0,
            0);
  v15 = v14;
  if ( v14 )
  {
    v16 = (unsigned int)IS_UI_LANGID() || *(_WORD *)(gpsi + 7012LL) == 1037;
    if ( v16 && (GreGetLayout(a1) & 1) != 0 && a4 - 11 <= 2 )
    {
      v19 = a2 + 2;
      if ( a4 != 12 )
        v19 = a2;
      v20 = (unsigned int)(OemBitmapInfoForDpi[2] - 4);
      v21 = a3 + 2;
      if ( v6 )
        return (unsigned int)GreStretchBltInternal(
                               a1,
                               v19,
                               v21,
                               v20,
                               OemBitmapInfoForDpi[3] - 4,
                               v12,
                               *v6 + 2,
                               v6[1] + 2,
                               v6[2] - 4,
                               v6[3] - 4,
                               -2134114272,
                               0,
                               0);
      else
        return (unsigned int)NtGdiBitBltInternal(
                               a1,
                               v19,
                               v21,
                               v20,
                               OemBitmapInfoForDpi[3] - 4,
                               v12,
                               *OemBitmapInfoForDpi + 2,
                               OemBitmapInfoForDpi[1] + 2,
                               -2134114272,
                               0,
                               0);
    }
  }
  return v15;
}
