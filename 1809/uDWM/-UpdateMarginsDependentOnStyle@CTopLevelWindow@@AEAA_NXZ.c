/*
 * XREFs of ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180018510
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180016B10 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z @ 0x180034440 (-SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x180037668 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x180038090 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z @ 0x180038404 (-GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004AFD8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA-AW4w.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004B0F8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wi.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004C598 (IsOpenThemeDataPresent.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18004D640 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ceil_0 @ 0x18004E236 (ceil_0.c)
 *     floor_0 @ 0x18004E25A (floor_0.c)
 */

_BOOL8 __fastcall CTopLevelWindow::UpdateMarginsDependentOnStyle(CTopLevelWindow *this)
{
  int v1; // esi
  __int64 v3; // rbx
  char v4; // r14
  __int64 v5; // rdx
  LONG SystemMetricsForDpi; // esi
  double v7; // xmm6_8
  double v8; // xmm0_8
  int v9; // r15d
  double v10; // xmm0_8
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  bool v19; // si
  __int64 v20; // rdx
  int v21; // eax
  struct tagRECT v22; // xmm1
  LONG v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // r10d
  int v27; // r8d
  int v28; // edx
  int v29; // r9d
  int v30; // eax
  bool v31; // cc
  __int64 v32; // rax
  int v33; // ecx
  const struct _MARGINS *v34; // rcx
  bool v35; // si
  char v36; // al
  __int16 v38; // [rsp+3Ch] [rbp-55h]
  int v39; // [rsp+40h] [rbp-51h] BYREF
  __int16 v40; // [rsp+44h] [rbp-4Dh]
  int v41[4]; // [rsp+48h] [rbp-49h] BYREF
  struct tagRECT v42; // [rsp+58h] [rbp-39h] BYREF
  int v43[2]; // [rsp+68h] [rbp-29h]
  int v44[2]; // [rsp+70h] [rbp-21h]
  struct tagRECT v45; // [rsp+78h] [rbp-19h] BYREF

  v1 = *((_DWORD *)this + 146);
  v3 = *((_QWORD *)this + 90);
  v4 = 0;
  memset(v41, 0, sizeof(v41));
  *(_QWORD *)v43 = 0LL;
  *(_QWORD *)v44 = 0LL;
  if ( (unsigned __int8)IsOpenThemeDataPresent()
    && (v1 & 6) != 0
    && *(_DWORD *)(v3 + 64) >= CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth
    && *(_DWORD *)(v3 + 68) >= dword_1800D4E1C
    && *(_DWORD *)(v3 + 72) >= dword_1800D4E20
    && *(_DWORD *)(v3 + 76) >= dword_1800D4E24
    && (*(_DWORD *)(v3 + 104) & 0x800000) == 0
    && (int)GetSystemMetricsForDpi(92LL, *(unsigned int *)(v3 + 324)) > 0 )
  {
    *(_QWORD *)&v42.left = 0LL;
    *(_QWORD *)&v42.right = 0LL;
    if ( (*(_BYTE *)(v3 + 102) & 0xC0) == 0xC0 )
    {
      v5 = *(unsigned int *)(v3 + 324);
      if ( *(char *)(v3 + 104) >= 0 )
        SystemMetricsForDpi = GetSystemMetricsForDpi(4LL, v5);
      else
        SystemMetricsForDpi = GetSystemMetricsForDpi(51LL, v5);
    }
    else
    {
      SystemMetricsForDpi = v42.right;
    }
    v7 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 60);
    if ( v7 < 0.0 )
      v8 = ceil_0(v7 - 0.5);
    else
      v8 = floor_0(v7 + 0.5);
    v9 = (int)v8;
    if ( v7 < 0.0 )
      v10 = ceil_0(v7 - 0.5);
    else
      v10 = floor_0(v7 + 0.5);
    v11 = *(_DWORD *)(v3 + 64);
    v12 = v11;
    if ( v11 <= (int)v10 )
      v12 = (int)v10;
    v43[0] = v11 - v12;
    v13 = *(_DWORD *)(v3 + 68);
    v14 = v13;
    if ( v13 <= (int)v10 )
      v14 = (int)v10;
    v43[1] = v13 - v14;
    v15 = *(_DWORD *)(v3 + 72);
    v16 = v15;
    if ( v15 <= v9 + SystemMetricsForDpi )
      v16 = v9 + SystemMetricsForDpi;
    v44[0] = v15 - v16;
    v17 = *(_DWORD *)(v3 + 76);
    v18 = v17;
    if ( v17 <= v9 )
      v18 = v9;
    v44[1] = v17 - v18;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetCachedFeatureEnabledState();
    v39 = 1;
    LOBYTE(v38) = 1;
    v40 = v38;
    wil::details::ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetFeaturePropertyCache'::`2'::data,
      16460108LL,
      &v39,
      0LL,
      3);
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetCachedFeatureEnabledState();
  v39 = 1;
  LOBYTE(v38) = 0;
  v40 = v38;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data,
    1470244LL,
    &v39,
    0LL,
    3);
  v19 = SetMargin(
          (struct _MARGINS *)((char *)this + 620),
          v43[0],
          v43[1],
          v44[0],
          v44[1],
          (const struct _MARGINS *)((char *)this + 604));
  if ( (*((_DWORD *)this + 146) & 0x200020) != 0 )
  {
    v20 = *((_QWORD *)this + 90);
    v21 = 0;
    v22 = *(struct tagRECT *)(v20 + 48);
    v45 = v22;
    if ( *(_DWORD *)(v20 + 188) - *(_DWORD *)(v20 + 180) >= 0 )
      v21 = *(_DWORD *)(v20 + 188) - *(_DWORD *)(v20 + 180);
    v23 = _mm_cvtsi128_si32((__m128i)v22) + (int)((double)v21 * *(double *)(v20 + 312));
    v24 = 0;
    v45.right = v23;
    if ( *(_DWORD *)(v20 + 192) - *(_DWORD *)(v20 + 184) >= 0 )
      v24 = *(_DWORD *)(v20 + 192) - *(_DWORD *)(v20 + 184);
    v45.bottom = v45.top + (int)((double)v24 * *(double *)(v20 + 312));
    if ( !CTopLevelWindow::GetMonitorRect((CTopLevelWindow *)(unsigned int)v45.bottom, &v45, &v42) )
      v42 = v45;
    v25 = *(_DWORD *)(v3 + 96);
    v4 = 1;
    v26 = v42.left - v45.left;
    if ( v42.left - v45.left < 0 )
      v26 = 0;
    v27 = v45.right - v42.right;
    if ( v45.right - v42.right < 0 )
      v27 = 0;
    v28 = v42.top - v45.top;
    if ( v42.top - v45.top < 0 )
      v28 = 0;
    v29 = v45.bottom - v42.bottom;
    if ( v45.bottom - v42.bottom < 0 )
      v29 = 0;
    if ( v26 > v25 - *((_DWORD *)this + 155) )
      v26 = 0;
    v30 = v25 - *((_DWORD *)this + 156);
    v41[0] = v26;
    if ( v27 > v30 )
      v27 = 0;
    v31 = v28 <= v25 - *((_DWORD *)this + 157);
    v41[1] = v27;
    v32 = *((_QWORD *)this + 90);
    if ( !v31 )
      v28 = 0;
    v33 = v25 - *((_DWORD *)this + 158);
    v41[2] = v28;
    if ( v29 > v33 )
      v29 = 0;
    v41[3] = v29;
    *(_OWORD *)(v32 + 280) = *(_OWORD *)v41;
  }
  else
  {
    v29 = v41[3];
    v28 = v41[2];
    v27 = v41[1];
    v26 = v41[0];
  }
  v35 = SetMargin((struct _MARGINS *)((char *)this + 636), v26, v27, v28, v29, 0LL) || v19;
  if ( v4 || (*((_BYTE *)this + 240) & 8) != 0 )
  {
    v36 = (8 * v4) | *((_BYTE *)this + 240) & 0xF7;
    *((_BYTE *)this + 240) = v36;
    if ( (v36 & 8) == 0 )
      v34 = 0LL;
    CAtlasedRectsVisual::SetClipMargins(*((CAtlasedRectsVisual **)this + 34), v34);
    CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
  }
  return v35;
}
