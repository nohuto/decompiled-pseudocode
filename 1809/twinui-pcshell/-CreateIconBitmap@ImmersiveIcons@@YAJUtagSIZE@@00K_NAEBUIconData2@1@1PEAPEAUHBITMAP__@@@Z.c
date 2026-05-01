/*
 * XREFs of ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1803A94B0
 * Callers:
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x1803AB054 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CoTaskMemFree_0 @ 0x18008553F (CoTaskMemFree_0.c)
 *     ??$_CreatePropertyBagBindCtx@PEBG@@YAJPEAUIBindCtx@@PEBG1PEAPEAU0@@Z @ 0x1803A8958 (--$_CreatePropertyBagBindCtx@PEBG@@YAJPEAUIBindCtx@@PEBG1PEAPEAU0@@Z.c)
 *     _lambda_42f6b374ed133d7c28245ae2e9b30f6b_::operator() @ 0x1803A8B4C (_lambda_42f6b374ed133d7c28245ae2e9b30f6b_--operator().c)
 *     ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x1803A8D2C (-AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z.c)
 *     ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803AAEC0 (-GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z @ 0x1803AB5F4 (-PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1803AB9E4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@wil@@CAX_.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1803ABA44 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@wil@@CAX_NW4Rep.c)
 *     ?GetInfoFor32BitHBITMAP@@YAJPEAUHBITMAP__@@PEAH1PEAPEAUtagRGBQUAD@@1@Z @ 0x1803BFD5C (-GetInfoFor32BitHBITMAP@@YAJPEAUHBITMAP__@@PEAH1PEAPEAUtagRGBQUAD@@1@Z.c)
 *     ?_CalculateLuminosity@@YANK@Z @ 0x1803BFF38 (-_CalculateLuminosity@@YANK@Z.c)
 *     ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x1803C0010 (-_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z.c)
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
  LONG cx; // ebx
  const WCHAR *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *v13; // r8
  int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rdx
  const struct _GUID *v17; // rcx
  int ThreadThumbnailCache; // eax
  bool v19; // zf
  struct tagSIZE *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  int v23; // edi
  HBITMAP v24; // rdx
  bool v25; // r8
  bool v26; // al
  bool NthMostDominantColorFromBits; // di
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
  unsigned int v41; // [rsp+28h] [rbp-69h]
  bool v42; // [rsp+30h] [rbp-61h]
  bool v43; // [rsp+38h] [rbp-59h]
  int v44; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v45; // [rsp+4Ch] [rbp-45h] BYREF
  HGDIOBJ ho; // [rsp+50h] [rbp-41h] BYREF
  void *v47; // [rsp+58h] [rbp-39h] BYREF
  IBindCtx *pbc; // [rsp+60h] [rbp-31h] BYREF
  void *ppv; // [rsp+68h] [rbp-29h] BYREF
  LPVOID pv; // [rsp+70h] [rbp-21h] BYREF
  __int64 *v51[10]; // [rsp+78h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+3Fh]
  ImmersiveIcons *v53; // [rsp+D8h] [rbp+47h] BYREF
  struct tagSIZE v54; // [rsp+E0h] [rbp+4Fh] BYREF
  struct tagSIZE v55; // [rsp+E8h] [rbp+57h] BYREF
  struct HBITMAP__ v56; // [rsp+F0h] [rbp+5Fh] BYREF

  v56.unused = a4.cx;
  v55 = a3;
  v54 = a2;
  v53 = this;
  v8 = a8;
  cx = a3.cx;
  ppv = 0LL;
  pbc = 0LL;
  *a8 = 0LL;
  wil::Feature<__WilFeatureTraits_Feature_TaskbarSuggestions>::ReportUsageToService();
  v10 = a6;
  if ( *PathFindExtensionW(a6 + 6)
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pbc),
        v14 = _CreatePropertyBagBindCtx<unsigned short const *>(v12, v11, v13, &pbc),
        v15 = v14,
        v14 >= 0) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    v14 = SHCreateItemFromParsingName(v10 + 6, pbc, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv);
    v15 = v14;
    if ( v14 < 0 )
    {
      v16 = 357LL;
      goto LABEL_6;
    }
    v47 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v47);
    ThreadThumbnailCache = GetThreadThumbnailCache(v17, &v47);
    v15 = ThreadThumbnailCache;
    if ( ThreadThumbnailCache < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x168,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)ThreadThumbnailCache);
LABEL_45:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v47);
      goto LABEL_46;
    }
    v19 = *(_DWORD *)v10 == 1;
    v20 = &v55;
    ho = 0LL;
    if ( !v19 )
      v20 = &v54;
    a8 = (struct tagSIZE *)*v20;
    v51[0] = (__int64 *)&v47;
    v51[1] = (__int64 *)&ppv;
    v21 = lambda_42f6b374ed133d7c28245ae2e9b30f6b_::operator()(v51, (unsigned int)a8, (__int64)&a7, (__int64)&ho);
    v15 = v21;
    if ( v21 < 0 )
    {
      v22 = 376LL;
LABEL_41:
      v34 = (unsigned int)v21;
      goto LABEL_42;
    }
    v23 = *(_DWORD *)v10;
    wil::Feature<__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles>::ReportUsageToService();
    v26 = v23 != 2;
    if ( *(_DWORD *)v10 == 3 )
    {
      if ( (int)GetInfoFor32BitHBITMAP((HBITMAP)ho, &v44, (int *)&a8, (struct tagRGBQUAD **)&pv, &v56.unused) >= 0 )
      {
        NthMostDominantColorFromBits = _GetNthMostDominantColorFromBits(
                                         (struct tagRGBQUAD *)pv,
                                         v44,
                                         (int)a8,
                                         v56.unused,
                                         v41,
                                         v42,
                                         v43,
                                         &v45);
        CoTaskMemFree_0(pv);
        if ( NthMostDominantColorFromBits )
        {
          v28 = _CalculateLuminosity(0);
          v29 = _CalculateLuminosity(v45);
          if ( (fmax(v28, v29) + 0.05) / (fmin(v28, v29) + 0.05) >= 2.5 )
            goto LABEL_23;
        }
      }
      v30 = ho;
      ho = 0LL;
      if ( v30 )
        DeleteObject(v30);
      v21 = lambda_42f6b374ed133d7c28245ae2e9b30f6b_::operator()(v51, cx, (__int64)&a7, (__int64)&ho);
      v15 = v21;
      if ( v21 < 0 )
      {
        v22 = 387LL;
        goto LABEL_41;
      }
      v26 = 1;
    }
    if ( v26 )
    {
      if ( (_DWORD)a7 != 2 )
        goto LABEL_49;
      v35 = GDIHelpers::PremultiplyAlphaChannel((GDIHelpers *)ho, v24, v25);
      v36 = ho;
      v37 = v35;
      ho = 0LL;
      if ( v36 )
        DeleteObject(v36);
      ho = v37;
      if ( v37 )
      {
LABEL_49:
        if ( *((_BYTE *)v10 + 4) )
          SysColor = GetSysColor(5);
        else
          SysColor = *((_DWORD *)v10 + 2);
        v56.unused = SysColor;
        v21 = GDIHelpers::AddBackgroundForIcon(ho, &v56.unused, (LONG *)&v53, &v54, &v55, v8);
        v15 = v21;
        if ( v21 >= 0 )
          goto LABEL_43;
        v22 = 424LL;
        goto LABEL_41;
      }
      v15 = -2147024882;
      v22 = 410LL;
      v34 = 2147942414LL;
LABEL_42:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)v34);
LABEL_43:
      v39 = ho;
      ho = 0LL;
      if ( v39 )
        DeleteObject(v39);
      goto LABEL_45;
    }
LABEL_23:
    if ( a5 && (_DWORD)a7 == 2 )
    {
      v31 = GDIHelpers::PremultiplyAlphaChannel((GDIHelpers *)ho, v24, v25);
      v32 = ho;
      v33 = v31;
      ho = 0LL;
      if ( v32 )
        DeleteObject(v32);
      ho = v33;
      if ( !v33 )
      {
        v15 = -2147024882;
        v22 = 398LL;
        v34 = 2147942414LL;
        goto LABEL_42;
      }
    }
    else
    {
      v33 = ho;
    }
    ho = 0LL;
    v15 = 0;
    *v8 = (struct tagSIZE)v33;
    goto LABEL_43;
  }
  v16 = 354LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v14);
LABEL_46:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pbc);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v15;
}
