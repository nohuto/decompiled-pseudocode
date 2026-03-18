/*
 * XREFs of BitBltSysBmp @ 0x1C000B87C
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C000B548 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     xxxDrawCaptionBar @ 0x1C000CB10 (xxxDrawCaptionBar.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C008C884 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241CA8 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0241F54 (DrawSize.c)
 *     xxxTrackCaptionButton @ 0x1C02444F0 (xxxTrackCaptionButton.c)
 *     MNDrawArrow @ 0x1C024A2A8 (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C024B514 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GetOemBitmapInfoForDpi @ 0x1C000BAC8 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C000BBD8 (PrepareHDCBITSBitmap.c)
 *     IS_UI_LANGID @ 0x1C000BC6C (IS_UI_LANGID.c)
 *     GreGetDCDpiScaleValue @ 0x1C000BD58 (GreGetDCDpiScaleValue.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C0071658 (GreStretchBltInternal.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     GreGetLayout @ 0x1C00C7E90 (GreGetLayout.c)
 */

__int64 __fastcall BitBltSysBmp(HDC a1, __int64 a2, unsigned int a3, unsigned int a4, int a5)
{
  __int16 *v6; // rdi
  unsigned int v8; // r12d
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // rsi
  HDC v12; // r14
  unsigned int v13; // eax
  unsigned int v14; // ebx
  int DCDpiScaleValue; // eax
  unsigned int v17; // r15d
  __int64 v18; // r8

  v6 = 0LL;
  v8 = a2;
  DpiForSystem = GetDpiForSystem(a1, a2);
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
  if ( v6 )
    v13 = GreStretchBltInternal(a1, v8, a3, OemBitmapInfoForDpi[3], v12, *v6, v6[1], v6[2], v6[3], 13369376, 0, 0);
  else
    v13 = NtGdiBitBltInternal(
            a1,
            v8,
            a3,
            (unsigned int)OemBitmapInfoForDpi[2],
            OemBitmapInfoForDpi[3],
            v12,
            *OemBitmapInfoForDpi,
            OemBitmapInfoForDpi[1],
            13369376,
            0,
            0);
  v14 = v13;
  if ( v13
    && ((unsigned int)IS_UI_LANGID() || *(_WORD *)(gpsi + 7012LL) == 1037)
    && (GreGetLayout(a1) & 1) != 0
    && a4 - 11 <= 2 )
  {
    v17 = v8 + 2;
    if ( a4 != 12 )
      v17 = v8;
    v18 = a3 + 2;
    if ( v6 )
      return (unsigned int)GreStretchBltInternal(
                             a1,
                             v17,
                             v18,
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
                             v17,
                             v18,
                             (unsigned int)(OemBitmapInfoForDpi[2] - 4),
                             OemBitmapInfoForDpi[3] - 4,
                             v12,
                             *OemBitmapInfoForDpi + 2,
                             OemBitmapInfoForDpi[1] + 2,
                             -2134114272,
                             0,
                             0);
  }
  return v14;
}
