/*
 * XREFs of BitBltSysBmp @ 0x1C01066B8
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C007B8B0 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C01061C8 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02291FC (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C02294A8 (DrawSize.c)
 *     xxxTrackCaptionButton @ 0x1C022B4B4 (xxxTrackCaptionButton.c)
 *     MNDrawArrow @ 0x1C0231664 (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C0232894 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     GreGetLayout @ 0x1C007BE5C (GreGetLayout.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0106800 (GetOemBitmapInfoForDpi.c)
 *     IS_UI_LANGID @ 0x1C0106910 (IS_UI_LANGID.c)
 *     PrepareHDCBITSBitmap @ 0x1C0106948 (PrepareHDCBITSBitmap.c)
 *     GreGetDCDpiScaleValue @ 0x1C0106A90 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall BitBltSysBmp(HDC a1, int a2, int a3, unsigned int a4, int a5)
{
  __int16 *v6; // rdi
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  HDC v14; // r14
  int v15; // r9d
  unsigned int v16; // eax
  unsigned int v17; // ebx
  int DCDpiScaleValue; // eax
  int v20; // r15d
  int v21; // r9d
  int v22; // r8d

  v6 = 0LL;
  DpiForSystem = GetDpiForSystem();
  OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, DpiForSystem);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v13, v12) & 0xF) == 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
    if ( DCDpiScaleValue > 1 )
      v6 = (__int16 *)GetOemBitmapInfoForDpi(a4, (unsigned int)(96 * DCDpiScaleValue));
  }
  if ( a5 )
    v14 = (HDC)PrepareHDCBITSBitmap((HDC)((unsigned __int64)a1 & -(__int64)(v6 != 0LL)));
  else
    v14 = *(HDC *)(gpDispInfo + 64LL);
  if ( !v14 )
    return 0LL;
  v15 = OemBitmapInfoForDpi[2];
  if ( v6 )
    v16 = GreStretchBltInternal(a1, a2, a3, v15, OemBitmapInfoForDpi[3], v14, *v6, v6[1], v6[2], v6[3], 13369376, 0, 0);
  else
    v16 = NtGdiBitBltInternal(
            a1,
            a2,
            a3,
            v15,
            OemBitmapInfoForDpi[3],
            v14,
            *OemBitmapInfoForDpi,
            OemBitmapInfoForDpi[1],
            13369376,
            0,
            0);
  v17 = v16;
  if ( v16
    && ((unsigned int)IS_UI_LANGID() || *(_WORD *)(gpsi + 7012LL) == 1037)
    && (GreGetLayout(a1) & 1) != 0
    && a4 - 11 <= 2 )
  {
    v20 = a2 + 2;
    if ( a4 != 12 )
      v20 = a2;
    v21 = OemBitmapInfoForDpi[2] - 4;
    v22 = a3 + 2;
    if ( v6 )
      return (unsigned int)GreStretchBltInternal(
                             a1,
                             v20,
                             v22,
                             v21,
                             OemBitmapInfoForDpi[3] - 4,
                             v14,
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
                             v20,
                             v22,
                             v21,
                             OemBitmapInfoForDpi[3] - 4,
                             v14,
                             *OemBitmapInfoForDpi + 2,
                             OemBitmapInfoForDpi[1] + 2,
                             -2134114272,
                             0,
                             0);
  }
  return v17;
}
