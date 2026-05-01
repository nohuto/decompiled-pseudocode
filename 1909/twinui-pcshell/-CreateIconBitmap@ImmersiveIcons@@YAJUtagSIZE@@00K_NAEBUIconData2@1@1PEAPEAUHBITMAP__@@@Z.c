/*
 * XREFs of ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x180429E20
 * Callers:
 *     ?_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@1@@Z @ 0x18042DC3C (-_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_CreatePropertyBagBindCtx@PEBG@@YAJPEAUIBindCtx@@PEBG1PEAPEAU0@@Z @ 0x180428F34 (--$_CreatePropertyBagBindCtx@PEBG@@YAJPEAUIBindCtx@@PEBG1PEAPEAU0@@Z.c)
 *     _lambda_d4233ac34702ea66267579fc2626300c_::operator() @ 0x18042948C (_lambda_d4233ac34702ea66267579fc2626300c_--operator().c)
 *     ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x180429584 (-AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z.c)
 *     ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18042BFAC (-GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z @ 0x18042CD24 (-PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18042D158 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@wil@@CAX_.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18042D1B8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@wil@@CAX_NW4Rep.c)
 *     ?TryGetDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@_N1PEAKPEA_N@Z @ 0x180441E68 (-TryGetDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@_N1PEAKPEA_N@Z.c)
 *     ?_CalculateLuminosity@@YANK@Z @ 0x180441EE0 (-_CalculateLuminosity@@YANK@Z.c)
 */

__int64 __fastcall ImmersiveIcons::CreateIconBitmap(
        ImmersiveIcons *this,
        struct tagSIZE a2,
        struct tagSIZE a3,
        struct tagSIZE a4,
        char a5,
        const WCHAR *a6,
        const struct ImmersiveIcons::IconData2 *a7,
        struct tagSIZE *a8)
{
  struct tagSIZE *v8; // r15
  LONG cx; // r12d
  LONG v10; // ebx
  const WCHAR *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // r8
  int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rdx
  const struct _GUID *v18; // rcx
  int ThreadThumbnailCache; // eax
  bool v20; // zf
  struct tagSIZE *v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  int v24; // edi
  HBITMAP v25; // rdx
  bool v26; // r8
  bool v27; // al
  double v28; // xmm6_8
  double v29; // xmm0_8
  HGDIOBJ v30; // rcx
  HBITMAP v31; // rax
  HGDIOBJ v32; // rcx
  HGDIOBJ v33; // rbx
  __int64 v34; // r9
  HBITMAP v35; // rax
  HGDIOBJ v36; // rcx
  HBITMAP v37; // rbx
  DWORD SysColor; // eax
  HGDIOBJ v39; // rcx
  bool *v41; // [rsp+20h] [rbp-50h]
  HGDIOBJ ho; // [rsp+30h] [rbp-40h] BYREF
  void *v43; // [rsp+38h] [rbp-38h] BYREF
  IBindCtx *pbc; // [rsp+40h] [rbp-30h] BYREF
  void *ppv; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v46[2]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  ImmersiveIcons *v48; // [rsp+B0h] [rbp+40h] BYREF
  struct tagSIZE v49; // [rsp+B8h] [rbp+48h] BYREF
  struct tagSIZE v50; // [rsp+C0h] [rbp+50h] BYREF

  v50 = a3;
  v49 = a2;
  v48 = this;
  v8 = a8;
  cx = a4.cx;
  v10 = a3.cx;
  ppv = 0LL;
  pbc = 0LL;
  *a8 = 0LL;
  wil::Feature<__WilFeatureTraits_Feature_TaskbarSuggestions>::ReportUsageToService();
  v11 = a6;
  if ( *PathFindExtensionW(a6 + 8)
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pbc),
        v15 = _CreatePropertyBagBindCtx<unsigned short const *>(v13, v12, v14, &pbc),
        v16 = v15,
        v15 >= 0) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    v15 = SHCreateItemFromParsingName(v11 + 8, pbc, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv);
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = 487LL;
      goto LABEL_6;
    }
    v43 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v43);
    ThreadThumbnailCache = GetThreadThumbnailCache(v18, &v43);
    v16 = ThreadThumbnailCache;
    if ( ThreadThumbnailCache < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EA,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)ThreadThumbnailCache);
LABEL_44:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v43);
      goto LABEL_45;
    }
    v20 = *(_DWORD *)v11 == 1;
    v21 = &v50;
    ho = 0LL;
    if ( !v20 )
      v21 = &v49;
    a8 = (struct tagSIZE *)*v21;
    v46[0] = (__int64 *)&v43;
    v46[1] = (__int64 *)&ppv;
    v22 = lambda_d4233ac34702ea66267579fc2626300c_::operator()(v46, (unsigned int)a8, (__int64)&a7, (__int64)&ho);
    v16 = v22;
    if ( v22 < 0 )
    {
      v23 = 506LL;
LABEL_40:
      v34 = (unsigned int)v22;
      goto LABEL_41;
    }
    v24 = *(_DWORD *)v11;
    wil::Feature<__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles>::ReportUsageToService();
    v27 = v24 != 2;
    if ( *(_DWORD *)v11 == 3 )
    {
      if ( TryGetDominantColorFromHBITMAP((HBITMAP)ho, (bool)v25, v26, (unsigned int *)&a8, v41) )
      {
        v28 = _CalculateLuminosity(cx);
        v29 = _CalculateLuminosity((unsigned int)a8);
        if ( (fmax(v28, v29) + 0.05) / (fmin(v28, v29) + 0.05) >= 2.5 )
          goto LABEL_22;
      }
      v30 = ho;
      ho = 0LL;
      if ( v30 )
        DeleteObject(v30);
      v22 = lambda_d4233ac34702ea66267579fc2626300c_::operator()(v46, v10, (__int64)&a7, (__int64)&ho);
      v16 = v22;
      if ( v22 < 0 )
      {
        v23 = 517LL;
        goto LABEL_40;
      }
      v27 = 1;
    }
    if ( v27 )
    {
      if ( (_DWORD)a7 != 2 )
        goto LABEL_48;
      v35 = GDIHelpers::PremultiplyAlphaChannel((GDIHelpers *)ho, v25, v26);
      v36 = ho;
      v37 = v35;
      ho = 0LL;
      if ( v36 )
        DeleteObject(v36);
      ho = v37;
      if ( v37 )
      {
LABEL_48:
        if ( *((_BYTE *)v11 + 8) )
          SysColor = GetSysColor(5);
        else
          SysColor = *((_DWORD *)v11 + 3);
        LODWORD(a8) = SysColor;
        v22 = GDIHelpers::AddBackgroundForIcon(ho, (int *)&a8, (LONG *)&v48, &v49, &v50, v8);
        v16 = v22;
        if ( v22 >= 0 )
          goto LABEL_42;
        v23 = 554LL;
        goto LABEL_40;
      }
      v16 = -2147024882;
      v23 = 540LL;
      v34 = 2147942414LL;
LABEL_41:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)v34);
LABEL_42:
      v39 = ho;
      ho = 0LL;
      if ( v39 )
        DeleteObject(v39);
      goto LABEL_44;
    }
LABEL_22:
    if ( a5 && (_DWORD)a7 == 2 )
    {
      v31 = GDIHelpers::PremultiplyAlphaChannel((GDIHelpers *)ho, v25, v26);
      v32 = ho;
      v33 = v31;
      ho = 0LL;
      if ( v32 )
        DeleteObject(v32);
      ho = v33;
      if ( !v33 )
      {
        v16 = -2147024882;
        v23 = 528LL;
        v34 = 2147942414LL;
        goto LABEL_41;
      }
    }
    else
    {
      v33 = ho;
    }
    ho = 0LL;
    v16 = 0;
    *v8 = (struct tagSIZE)v33;
    goto LABEL_42;
  }
  v17 = 484LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v15);
LABEL_45:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pbc);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v16;
}
