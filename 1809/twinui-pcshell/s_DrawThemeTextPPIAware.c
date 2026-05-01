/*
 * XREFs of s_DrawThemeTextPPIAware @ 0x1803B4AE0
 * Callers:
 *     s_OnDrawItem @ 0x1803B50DC (s_OnDrawItem.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D420 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z @ 0x1803B4488 (--0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1803B44F0 (--1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalClose@?$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x1803B4680 (-InternalClose@-$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Micro.c)
 *     ?DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAUtagRECT@@PEAU_DTTOPTS@@@Z @ 0x1803B6E3C (-DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEA.c)
 *     ?GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAU_DTTOPTS@@PEAUtagRECT@@7@Z @ 0x1803B6F90 (-GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHK.c)
 */

__int64 __fastcall s_DrawThemeTextPPIAware(HTHEME hTheme, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int *a6)
{
  HDC v8; // rdx
  HDC v9; // rbx
  signed int Error; // edi
  LONG v11; // eax
  HBITMAP v12; // rcx
  HBITMAP v13; // r8
  char v14; // dl
  HGDIOBJ v15; // rax
  __m128i v16; // xmm0
  int v17; // r8d
  int v18; // edx
  int v19; // r8d
  int v20; // eax
  HFONT v21; // rbx
  __int16 *v22; // r13
  __int16 v23; // ax
  unsigned int v24; // r14d
  __int16 *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rdx
  int LastError; // eax
  _BYTE v32[8]; // [rsp+78h] [rbp-88h] BYREF
  HDC hdc; // [rsp+80h] [rbp-80h]
  HTHEME v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int128 v36; // [rsp+98h] [rbp-68h]
  void **v37; // [rsp+A8h] [rbp-58h] BYREF
  HBITMAP v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  HGDIOBJ h; // [rsp+C0h] [rbp-40h]
  HDC v41; // [rsp+C8h] [rbp-38h]
  HGDIOBJ v42; // [rsp+D0h] [rbp-30h]
  HDC v43; // [rsp+D8h] [rbp-28h]
  void *ppvBits; // [rsp+E0h] [rbp-20h] BYREF
  int v45; // [rsp+F0h] [rbp-10h]
  int v46[19]; // [rsp+F4h] [rbp-Ch] BYREF
  __m128i v47; // [rsp+140h] [rbp+40h]
  BITMAPINFO pbmi; // [rsp+150h] [rbp+50h] BYREF
  LOGFONTW pFont; // [rsp+180h] [rbp+80h] BYREF
  _DWORD pvParam[56]; // [rsp+1E0h] [rbp+E0h] BYREF
  LOGFONTW v51; // [rsp+2C0h] [rbp+1C0h]

  v8 = *(HDC *)(a4 + 32);
  v34 = hTheme;
  v39 = a4;
  v35 = a3;
  Microsoft::WRL::Wrappers::CompatibleDC::CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)v32, v8);
  v9 = hdc;
  if ( !hdc )
  {
    Error = ResultFromKnownLastError();
    if ( Error < 0 )
      goto LABEL_42;
    v9 = hdc;
  }
  memset_0(&pbmi, 0, sizeof(pbmi));
  pbmi.bmiHeader.biWidth = a6[2] - *a6;
  v11 = a6[1] - a6[3];
  pbmi.bmiHeader.biSize = 44;
  pbmi.bmiHeader.biHeight = v11;
  *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
  v12 = CreateDIBSection(v9, &pbmi, 0, &ppvBits, 0LL, 0);
  v37 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::`vftable';
  v38 = v12;
  if ( v12 )
  {
    v13 = v12;
    v14 = 1;
  }
  else
  {
    v13 = 0LL;
    v14 = 0;
  }
  Error = v14 == 0 ? 0x8007000E : 0;
  if ( v14 )
  {
    v43 = hdc;
    v15 = SelectObject(hdc, v13);
    v17 = a6[1];
    v18 = -*a6;
    v47 = *(__m128i *)a6;
    v16 = v47;
    v47.m128i_i32[2] += v18;
    v19 = -v17;
    v47.m128i_i32[3] += v19;
    v47.m128i_i32[1] += v19;
    v42 = v15;
    v47.m128i_i32[0] = v18 + _mm_cvtsi128_si32(v16);
    memset_0(pvParam, 0, 0x1F8uLL);
    pvParam[0] = 504;
    if ( !SystemParametersInfoW(0x29u, 0x1F8u, pvParam, 0) )
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
        goto LABEL_36;
    }
    v45 = 72;
    memset_0(v46, 0, 0x44uLL);
    if ( GetThemeFont(hTheme, hdc, 14, 0, 210, &pFont) < 0 )
    {
      pFont = v51;
      v20 = v46[0];
    }
    else
    {
      v20 = v46[0] | 0x40;
      v46[0] |= 0x40u;
      if ( v51.lfHeight <= 0 )
      {
        if ( v51.lfHeight >= pFont.lfHeight )
          goto LABEL_17;
      }
      else if ( v51.lfHeight <= pFont.lfHeight )
      {
        goto LABEL_17;
      }
      pFont.lfHeight = v51.lfHeight;
    }
LABEL_17:
    if ( (*(_BYTE *)(a4 + 16) & 0x20) != 0 )
    {
      pFont.lfWeight = 700;
      v46[0] = v20 | 0x40;
    }
    v21 = CreateFontIndirectW(&pFont);
    if ( !v21 )
    {
      Error = -2147467259;
      goto LABEL_36;
    }
    Error = 0;
    v22 = *(__int16 **)a5;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount((_QWORD *)a5);
    v23 = *v22;
    v24 = 0;
    *(_QWORD *)&v36 = *(_QWORD *)(a5 + 8);
    v25 = v22;
    while ( v23 && v23 != 9 )
    {
      ++v25;
      ++v24;
      v23 = *v25;
    }
    v41 = hdc;
    h = SelectObject(hdc, v21);
    v26 = a5 + 64;
    if ( v24 )
    {
      Error = DPIToPPIHelpers::DrawThemeTextExPPI(v35, *(unsigned int *)(a5 + 60), a5 + 64, v34, hdc);
      v26 = a5 + 64;
    }
    if ( Error >= 0 )
    {
      if ( v24 >= (unsigned __int64)(v36 - 1) )
        goto LABEL_30;
      v27 = v26;
      v28 = *(unsigned int *)(a5 + 60);
      v36 = 0LL;
      Error = DPIToPPIHelpers::GetThemeTextExtentPPI(v35, v28, v27, v34, hdc);
      if ( Error >= 0 )
      {
        v29 = *(unsigned int *)(a5 + 60);
        v47.m128i_i32[0] = v47.m128i_i32[2] + v36 - DWORD2(v36);
        Error = DPIToPPIHelpers::DrawThemeTextExPPI(v35, v29, a5 + 64, v34, hdc);
LABEL_30:
        if ( Error >= 0 )
        {
          if ( GdiAlphaBlend(
                 *(HDC *)(v39 + 32),
                 *a6,
                 a6[1],
                 a6[2] - *a6,
                 a6[3] - a6[1],
                 hdc,
                 0,
                 0,
                 a6[2] - *a6,
                 a6[3] - a6[1],
                 (BLENDFUNCTION)33488896) )
          {
            Error = 0;
          }
          else
          {
            Error = ResultFromKnownLastError();
          }
        }
      }
    }
    SelectObject(v41, h);
    DeleteObject(v21);
LABEL_36:
    SelectObject(v43, v42);
    v12 = v38;
  }
  v37 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::`vftable';
  if ( v12
    && !Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::InternalClose((__int64)&v37) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    RaiseException(LastError, 1u, 0, 0LL);
    __debugbreak();
  }
LABEL_42:
  Microsoft::WRL::Wrappers::CompatibleDC::~CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)v32);
  return (unsigned int)Error;
}
