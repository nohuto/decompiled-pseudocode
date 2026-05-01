/*
 * XREFs of s_DrawThemeTextPPIAware @ 0x180436980
 * Callers:
 *     s_OnDrawItem @ 0x180436F44 (s_OnDrawItem.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034DA4 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180136190 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z @ 0x180436328 (--0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180436390 (--1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalClose@?$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x180436520 (-InternalClose@-$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Micro.c)
 *     ?DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAUtagRECT@@PEAU_DTTOPTS@@@Z @ 0x180438DDC (-DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEA.c)
 *     ?GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAU_DTTOPTS@@PEAUtagRECT@@7@Z @ 0x180438F30 (-GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHK.c)
 */

__int64 __fastcall s_DrawThemeTextPPIAware(HTHEME hTheme, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128i *a6)
{
  HDC v8; // rdx
  HDC v9; // rcx
  signed int Error; // edi
  __int32 v11; // edx
  int v12; // r12d
  int v13; // edi
  HBITMAP v14; // rax
  HGDIOBJ v15; // rax
  __m128i v16; // xmm0
  int v17; // ecx
  int v18; // eax
  HFONT v19; // rbx
  __int16 *v20; // r12
  unsigned int v21; // r14d
  __int16 v22; // ax
  __int16 *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  int LastError; // eax
  char v28[8]; // [rsp+78h] [rbp-88h] BYREF
  HDC hdc; // [rsp+80h] [rbp-80h]
  __int32 v30; // [rsp+88h] [rbp-78h]
  int yoriginDest; // [rsp+8Ch] [rbp-74h]
  int wDest; // [rsp+90h] [rbp-70h]
  int xoriginDest; // [rsp+94h] [rbp-6Ch]
  HTHEME v34; // [rsp+98h] [rbp-68h]
  __int64 v35; // [rsp+A0h] [rbp-60h]
  __int128 v36; // [rsp+A8h] [rbp-58h]
  void **v37; // [rsp+B8h] [rbp-48h] BYREF
  HBITMAP v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  HGDIOBJ h; // [rsp+D0h] [rbp-30h]
  HDC v41; // [rsp+D8h] [rbp-28h]
  HGDIOBJ v42; // [rsp+E0h] [rbp-20h]
  HDC v43; // [rsp+E8h] [rbp-18h]
  void *ppvBits; // [rsp+F0h] [rbp-10h] BYREF
  int v45; // [rsp+100h] [rbp+0h]
  int v46[19]; // [rsp+104h] [rbp+4h] BYREF
  int v47; // [rsp+150h] [rbp+50h]
  int v48; // [rsp+154h] [rbp+54h]
  int v49; // [rsp+158h] [rbp+58h]
  int v50; // [rsp+15Ch] [rbp+5Ch]
  BITMAPINFO pbmi; // [rsp+160h] [rbp+60h] BYREF
  LOGFONTW pFont; // [rsp+190h] [rbp+90h] BYREF
  int pvParam; // [rsp+1F0h] [rbp+F0h] BYREF
  char v54[220]; // [rsp+1F4h] [rbp+F4h] BYREF
  LOGFONTW v55; // [rsp+2D0h] [rbp+1D0h]

  v8 = *(HDC *)(a4 + 32);
  v34 = hTheme;
  v39 = a4;
  v35 = a3;
  Microsoft::WRL::Wrappers::CompatibleDC::CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)v28, v8);
  v9 = hdc;
  if ( !hdc )
  {
    Error = ResultFromKnownLastError();
    if ( Error < 0 )
      goto LABEL_40;
    v9 = hdc;
  }
  v11 = a6->m128i_i32[3];
  v12 = a6->m128i_i32[0];
  v13 = a6->m128i_i32[1];
  wDest = a6->m128i_i32[2] - a6->m128i_i32[0];
  pbmi.bmiHeader.biWidth = wDest;
  v30 = v11;
  pbmi.bmiHeader.biHeight = v13 - v11;
  memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
  pbmi.bmiHeader.biSize = 44;
  xoriginDest = v12;
  yoriginDest = v13;
  *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
  v14 = CreateDIBSection(v9, &pbmi, 0, &ppvBits, 0LL, 0);
  v38 = v14;
  v37 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::`vftable';
  if ( v14 )
  {
    v43 = hdc;
    v15 = SelectObject(hdc, v14);
    v16 = *a6;
    v17 = _mm_cvtsi128_si32(*a6);
    v49 = a6->m128i_i64[1] - v12;
    v50 = v16.m128i_i32[3] - v13;
    v48 = v16.m128i_i32[1] - v13;
    v47 = v17 - v12;
    v42 = v15;
    memset_0(v54, 0, 0x1F4uLL);
    pvParam = 504;
    if ( !SystemParametersInfoW(0x29u, 0x1F8u, &pvParam, 0) )
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
        goto LABEL_34;
    }
    v45 = 72;
    memset_0(v46, 0, 0x44uLL);
    if ( GetThemeFont(hTheme, hdc, 14, 0, 210, &pFont) < 0 )
    {
      pFont = v55;
      v18 = v46[0];
    }
    else
    {
      v18 = v46[0] | 0x40;
      v46[0] |= 0x40u;
      if ( v55.lfHeight <= 0 )
      {
        if ( v55.lfHeight >= pFont.lfHeight )
          goto LABEL_15;
      }
      else if ( v55.lfHeight <= pFont.lfHeight )
      {
        goto LABEL_15;
      }
      pFont.lfHeight = v55.lfHeight;
    }
LABEL_15:
    if ( (*(_BYTE *)(a4 + 16) & 0x20) != 0 )
    {
      pFont.lfWeight = 700;
      v46[0] = v18 | 0x40;
    }
    v19 = CreateFontIndirectW(&pFont);
    if ( !v19 )
    {
      Error = -2147467259;
      goto LABEL_34;
    }
    Error = 0;
    v20 = *(__int16 **)a5;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount((_QWORD *)a5);
    v21 = 0;
    v22 = *v20;
    *(_QWORD *)&v36 = *(_QWORD *)(a5 + 8);
    v23 = v20;
    while ( v22 && v22 != 9 )
    {
      ++v23;
      ++v21;
      v22 = *v23;
    }
    v41 = hdc;
    h = SelectObject(hdc, v19);
    if ( v21 )
      Error = DPIToPPIHelpers::DrawThemeTextExPPI(v35, *(unsigned int *)(a5 + 60), a5 + 64, v34, hdc);
    if ( Error >= 0 )
    {
      if ( v21 >= (unsigned __int64)(v36 - 1) )
        goto LABEL_28;
      v24 = *(unsigned int *)(a5 + 60);
      v36 = 0LL;
      Error = DPIToPPIHelpers::GetThemeTextExtentPPI(v35, v24, a5 + 64, v34, hdc);
      if ( Error >= 0 )
      {
        v25 = *(unsigned int *)(a5 + 60);
        v47 = v49 + v36 - DWORD2(v36);
        Error = DPIToPPIHelpers::DrawThemeTextExPPI(v35, v25, a5 + 64, v34, hdc);
LABEL_28:
        if ( Error >= 0 )
        {
          if ( GdiAlphaBlend(
                 *(HDC *)(v39 + 32),
                 xoriginDest,
                 yoriginDest,
                 wDest,
                 v30 - yoriginDest,
                 hdc,
                 0,
                 0,
                 wDest,
                 v30 - yoriginDest,
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
    DeleteObject(v19);
LABEL_34:
    SelectObject(v43, v42);
    v14 = v38;
    goto LABEL_35;
  }
  Error = -2147024882;
LABEL_35:
  v37 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::`vftable';
  if ( v14
    && !Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::InternalClose((__int64)&v37) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    RaiseException(LastError, 1u, 0, 0LL);
    __debugbreak();
  }
LABEL_40:
  Microsoft::WRL::Wrappers::CompatibleDC::~CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)v28);
  return (unsigned int)Error;
}
