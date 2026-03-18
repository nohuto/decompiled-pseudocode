/*
 * XREFs of BitBltSysBmp @ 0x1C00EA9DC
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00EA6A4 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C012AFC4 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     xxxDrawCaptionBar @ 0x1C012F140 (xxxDrawCaptionBar.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241688 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0241934 (DrawSize.c)
 *     xxxTrackCaptionButton @ 0x1C0243DB0 (xxxTrackCaptionButton.c)
 *     MNDrawArrow @ 0x1C0249B68 (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C024ADD4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     GreGetLayout @ 0x1C0069560 (GreGetLayout.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C00BB5E8 (GreStretchBltInternal.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00EAC28 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00EAD38 (PrepareHDCBITSBitmap.c)
 *     IS_UI_LANGID @ 0x1C00EADCC (IS_UI_LANGID.c)
 *     GreGetDCDpiScaleValue @ 0x1C00EAEB8 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall BitBltSysBmp(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  __int16 *v6; // rdi
  unsigned int v7; // ebx
  unsigned int v8; // r12d
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  HDC v15; // r14
  int v16; // r9d
  unsigned int v17; // eax
  unsigned int v18; // ebx
  int DCDpiScaleValue; // eax
  unsigned int v21; // r15d
  int v22; // r9d
  unsigned int v23; // r8d
  int v25; // [rsp+B0h] [rbp+18h]

  v25 = a3;
  v6 = 0LL;
  v7 = a3;
  v8 = a2;
  DpiForSystem = GetDpiForSystem(a1, a2, a3);
  OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, DpiForSystem);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14) & 0xF) == 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue((HDC)a1);
    if ( DCDpiScaleValue > 1 )
      v6 = (__int16 *)GetOemBitmapInfoForDpi(a4, (unsigned int)(96 * DCDpiScaleValue));
  }
  if ( a5 )
    v15 = (HDC)PrepareHDCBITSBitmap((HDC)(a1 & -(__int64)(v6 != 0LL)));
  else
    v15 = *(HDC *)(gpDispInfo + 64LL);
  if ( !v15 )
    return 0LL;
  v16 = OemBitmapInfoForDpi[2];
  if ( v6 )
    v17 = GreStretchBltInternal(
            (HDC)a1,
            v8,
            v7,
            v16,
            OemBitmapInfoForDpi[3],
            v15,
            *v6,
            v6[1],
            v6[2],
            v6[3],
            13369376,
            0,
            0);
  else
    v17 = NtGdiBitBltInternal(
            (HDC)a1,
            v8,
            v7,
            v16,
            OemBitmapInfoForDpi[3],
            v15,
            *OemBitmapInfoForDpi,
            OemBitmapInfoForDpi[1],
            13369376,
            0,
            0);
  v18 = v17;
  if ( v17
    && ((unsigned int)IS_UI_LANGID() || *(_WORD *)(gpsi + 7012LL) == 1037)
    && (GreGetLayout((HDC)a1) & 1) != 0
    && a4 - 11 <= 2 )
  {
    v21 = v8 + 2;
    if ( a4 != 12 )
      v21 = v8;
    v22 = OemBitmapInfoForDpi[2] - 4;
    v23 = v25 + 2;
    if ( v6 )
      return (unsigned int)GreStretchBltInternal(
                             (HDC)a1,
                             v21,
                             v23,
                             v22,
                             OemBitmapInfoForDpi[3] - 4,
                             v15,
                             *v6 + 2,
                             v6[1] + 2,
                             v6[2] - 4,
                             v6[3] - 4,
                             -2134114272,
                             0,
                             0);
    else
      return (unsigned int)NtGdiBitBltInternal(
                             (HDC)a1,
                             v21,
                             v23,
                             v22,
                             OemBitmapInfoForDpi[3] - 4,
                             v15,
                             *OemBitmapInfoForDpi + 2,
                             OemBitmapInfoForDpi[1] + 2,
                             -2134114272,
                             0,
                             0);
  }
  return v18;
}
