/*
 * XREFs of ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001D8D0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B120 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z @ 0x180035670 (-SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z.c)
 *     ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180036180 (-wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x180037DC4 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x180039714 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z @ 0x180039D18 (-GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D350 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA-AW4w.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D474 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wi.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004E738 (IsOpenThemeDataPresent.c)
 *     ceil_0 @ 0x18004FAA6 (ceil_0.c)
 *     floor_0 @ 0x18004FACA (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CTopLevelWindow::UpdateMarginsDependentOnStyle(CTopLevelWindow *this, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rsi
  char v5; // r15
  __int64 v6; // r8
  __int64 v7; // r8
  int SystemMetricsForDpi; // ebx
  __int64 v9; // rcx
  double v10; // xmm6_8
  double v11; // xmm0_8
  int v12; // r14d
  double v13; // xmm0_8
  int v14; // ecx
  int v15; // r8d
  char v16; // bl
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // ebx
  signed __int32 v25; // r14d
  char v26; // bl
  int v27; // ebx
  signed __int32 v28; // r14d
  bool v29; // bl
  __int64 v30; // rdx
  int v31; // eax
  struct tagRECT v32; // xmm1
  LONG v33; // ecx
  int v34; // eax
  int v35; // ecx
  int v36; // r10d
  int v37; // r8d
  int v38; // edx
  int v39; // r9d
  int v40; // eax
  bool v41; // cc
  __int64 v42; // rax
  int v43; // ecx
  const struct _MARGINS *v44; // rcx
  bool v45; // bl
  char v46; // al
  int v48; // [rsp+58h] [rbp-B0h] BYREF
  int v49; // [rsp+5Ch] [rbp-ACh]
  signed __int32 v50; // [rsp+60h] [rbp-A8h] BYREF
  signed __int32 v51; // [rsp+64h] [rbp-A4h] BYREF
  int v52[4]; // [rsp+68h] [rbp-A0h]
  _DWORD v53[3]; // [rsp+78h] [rbp-90h] BYREF
  int v54; // [rsp+84h] [rbp-84h] BYREF
  __int16 v55; // [rsp+88h] [rbp-80h]
  int v56; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int16 v57; // [rsp+90h] [rbp-78h]
  __int128 v58; // [rsp+98h] [rbp-70h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-60h]
  __int128 v60; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-48h]
  int v62; // [rsp+C8h] [rbp-40h]
  int v63; // [rsp+CCh] [rbp-3Ch]
  int v64; // [rsp+D0h] [rbp-38h]
  int v65; // [rsp+D4h] [rbp-34h]
  __int128 *v66; // [rsp+D8h] [rbp-30h] BYREF
  int v67; // [rsp+E0h] [rbp-28h]
  int v68; // [rsp+E4h] [rbp-24h]
  __int128 *v69; // [rsp+E8h] [rbp-20h] BYREF
  int v70; // [rsp+F0h] [rbp-18h]
  int v71; // [rsp+F4h] [rbp-14h]
  struct tagRECT v72; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v73; // [rsp+108h] [rbp+0h]
  __int64 v74; // [rsp+110h] [rbp+8h]
  int v75[2]; // [rsp+118h] [rbp+10h]
  int v76[2]; // [rsp+120h] [rbp+18h]
  struct tagRECT v77; // [rsp+128h] [rbp+20h] BYREF
  __int64 v78; // [rsp+138h] [rbp+30h] BYREF
  int v79; // [rsp+140h] [rbp+38h]
  __int64 v80; // [rsp+144h] [rbp+3Ch]
  int v81; // [rsp+14Ch] [rbp+44h]
  __int64 v82; // [rsp+150h] [rbp+48h] BYREF
  int v83; // [rsp+158h] [rbp+50h]
  __int64 v84; // [rsp+15Ch] [rbp+54h]
  int v85; // [rsp+164h] [rbp+5Ch]
  __int128 v86; // [rsp+168h] [rbp+60h] BYREF
  __int64 v87; // [rsp+178h] [rbp+70h]
  __int128 v88; // [rsp+180h] [rbp+78h] BYREF
  __int64 v89; // [rsp+190h] [rbp+88h]

  v2 = *((_DWORD *)this + 146);
  v4 = *((_QWORD *)this + 90);
  v5 = 0;
  *(_OWORD *)v52 = 0uLL;
  v73 = 0LL;
  v74 = 0LL;
  *(_QWORD *)v75 = 0LL;
  *(_QWORD *)v76 = 0LL;
  if ( (unsigned __int8)IsOpenThemeDataPresent(this, a2)
    && (v2 & 6) != 0
    && *(_DWORD *)(v4 + 64) >= CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth
    && *(_DWORD *)(v4 + 68) >= dword_1800DBE2C
    && *(_DWORD *)(v4 + 72) >= dword_1800DBE30
    && *(_DWORD *)(v4 + 76) >= dword_1800DBE34
    && (*(_DWORD *)(v4 + 104) & 0x800000) == 0
    && (int)GetSystemMetricsForDpi(92LL, *(unsigned int *)(v4 + 324), v6) > 0 )
  {
    SystemMetricsForDpi = 0;
    if ( (*(_BYTE *)(v4 + 102) & 0xC0) == 0xC0 )
    {
      v9 = 51LL;
      if ( *(char *)(v4 + 104) >= 0 )
        v9 = 4LL;
      SystemMetricsForDpi = GetSystemMetricsForDpi(v9, *(unsigned int *)(v4 + 324), v7);
    }
    v10 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 60);
    if ( v10 < 0.0 )
      v11 = ceil_0(v10 - 0.5);
    else
      v11 = floor_0(v10 + 0.5);
    v12 = (int)v11;
    if ( v10 < 0.0 )
      v13 = ceil_0(v10 - 0.5);
    else
      v13 = floor_0(v10 + 0.5);
    v14 = *(_DWORD *)(v4 + 64);
    v15 = v12 + SystemMetricsForDpi;
    v16 = `wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetFeaturePropertyCache'::`2'::data;
    v17 = v14;
    v64 = v15;
    v65 = v12;
    v62 = (int)v13;
    v63 = (int)v13;
    if ( v14 <= (int)v13 )
      v17 = (int)v13;
    v75[0] = v14 - v17;
    v18 = *(_DWORD *)(v4 + 68);
    v19 = v18;
    if ( v18 <= (int)v13 )
      v19 = (int)v13;
    v75[1] = v18 - v19;
    v20 = *(_DWORD *)(v4 + 72);
    v21 = v20;
    if ( v20 <= v15 )
      v21 = v15;
    v76[0] = v20 - v21;
    v22 = *(_DWORD *)(v4 + 76);
    v23 = v22;
    if ( v22 <= v12 )
      v23 = v12;
    v76[1] = v22 - v23;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    {
      wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetCachedFeatureEnabledState();
      v16 = `wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetFeaturePropertyCache'::`2'::data;
    }
    LOBYTE(v49) = 1;
    v54 = 1;
    v24 = v16 & 0x30;
    v55 = v49;
    v58 = 0uLL;
    v59 = 0LL;
    v66 = &v58;
    v50 = 0x20000;
    v67 = 0x20000;
    v68 = 0;
    v48 = 1;
    v53[0] = 3;
    while ( 1 )
    {
      v51 = `wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetFeaturePropertyCache'::`2'::data;
      v25 = `wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetFeaturePropertyCache'::`2'::data;
      if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v51, &v66) )
        break;
      if ( v25 == _InterlockedCompareExchange(
                    (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetFeaturePropertyCache'::`2'::data,
                    v51,
                    v25) )
      {
        LODWORD(v59) = 0;
        goto LABEL_34;
      }
    }
    LODWORD(v59) = 1;
LABEL_34:
    v87 = v59;
    v86 = v58;
    if ( g_wil_details_recordFeatureUsage )
    {
      g_wil_details_recordFeatureUsage(
        16460108LL,
        6LL,
        1LL,
        &`wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetFeaturePropertyCache'::`2'::data,
        &v86);
      if ( v24 == 32 )
      {
        v78 = 0LL;
        v81 = (`wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
        v80 = 0LL;
        v79 = 6;
        g_wil_details_recordFeatureUsage(16460108LL, 6LL, 1LL, 0LL, &v78);
      }
    }
    if ( !(_DWORD)v87 && g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xFB294Cu,
        (const struct FEATURE_LOGGED_TRAITS *)&v54,
        0LL,
        0,
        (const enum wil_ReportingKind *)v53,
        0LL,
        0,
        1uLL);
  }
  v26 = `wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetCachedFeatureEnabledState();
    v26 = `wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data;
  }
  LOBYTE(v49) = 0;
  v56 = 1;
  v27 = v26 & 0x30;
  v57 = v49;
  v60 = 0uLL;
  v61 = 0LL;
  v53[2] = 0x20000;
  v69 = &v60;
  v70 = 0x20000;
  v71 = 0;
  v48 = 3;
  while ( 1 )
  {
    v50 = `wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data;
    v28 = `wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data;
    if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v50, &v69) )
      break;
    if ( v28 == _InterlockedCompareExchange(
                  (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data,
                  v50,
                  v28) )
    {
      LODWORD(v61) = 0;
      goto LABEL_47;
    }
  }
  LODWORD(v61) = 1;
LABEL_47:
  v89 = v61;
  v88 = v60;
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      1470244LL,
      6LL,
      1LL,
      &`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data,
      &v88);
    if ( v27 == 32 )
    {
      v82 = 0LL;
      v85 = (`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      v84 = 0LL;
      v83 = 6;
      g_wil_details_recordFeatureUsage(1470244LL, 6LL, 1LL, 0LL, &v82);
    }
  }
  if ( !(_DWORD)v89 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0x166F24u,
      (const struct FEATURE_LOGGED_TRAITS *)&v56,
      0LL,
      0,
      (const enum wil_ReportingKind *)&v48,
      0LL,
      0,
      1uLL);
  v29 = SetMargin(
          (struct _MARGINS *)((char *)this + 620),
          v75[0],
          v75[1],
          v76[0],
          v76[1],
          (const struct _MARGINS *)((char *)this + 604));
  if ( (*((_DWORD *)this + 146) & 0x200020) != 0 )
  {
    v30 = *((_QWORD *)this + 90);
    v31 = 0;
    v32 = *(struct tagRECT *)(v30 + 48);
    v77 = v32;
    if ( *(_DWORD *)(v30 + 188) - *(_DWORD *)(v30 + 180) >= 0 )
      v31 = *(_DWORD *)(v30 + 188) - *(_DWORD *)(v30 + 180);
    v33 = _mm_cvtsi128_si32((__m128i)v32) + (int)((double)v31 * *(double *)(v30 + 312));
    v34 = 0;
    v77.right = v33;
    if ( *(_DWORD *)(v30 + 192) - *(_DWORD *)(v30 + 184) >= 0 )
      v34 = *(_DWORD *)(v30 + 192) - *(_DWORD *)(v30 + 184);
    v77.bottom = v77.top + (int)((double)v34 * *(double *)(v30 + 312));
    if ( !CTopLevelWindow::GetMonitorRect((CTopLevelWindow *)(unsigned int)v77.bottom, &v77, &v72) )
      v72 = v77;
    v35 = *(_DWORD *)(v4 + 96);
    v5 = 1;
    v36 = v72.left - v77.left;
    if ( v72.left - v77.left < 0 )
      v36 = 0;
    v37 = v77.right - v72.right;
    if ( v77.right - v72.right < 0 )
      v37 = 0;
    v38 = v72.top - v77.top;
    if ( v72.top - v77.top < 0 )
      v38 = 0;
    v39 = v77.bottom - v72.bottom;
    if ( v77.bottom - v72.bottom < 0 )
      v39 = 0;
    if ( v36 > v35 - *((_DWORD *)this + 155) )
      v36 = 0;
    v40 = v35 - *((_DWORD *)this + 156);
    v52[0] = v36;
    if ( v37 > v40 )
      v37 = 0;
    v41 = v38 <= v35 - *((_DWORD *)this + 157);
    v52[1] = v37;
    v42 = *((_QWORD *)this + 90);
    if ( !v41 )
      v38 = 0;
    v43 = v35 - *((_DWORD *)this + 158);
    v52[2] = v38;
    if ( v39 > v43 )
      v39 = 0;
    v52[3] = v39;
    *(_OWORD *)(v42 + 280) = *(_OWORD *)v52;
  }
  else
  {
    v39 = v52[3];
    v38 = v52[2];
    v37 = v52[1];
    v36 = v52[0];
  }
  v45 = SetMargin((struct _MARGINS *)((char *)this + 636), v36, v37, v38, v39, 0LL) || v29;
  if ( v5 || (*((_BYTE *)this + 240) & 4) != 0 )
  {
    v46 = (4 * v5) | *((_BYTE *)this + 240) & 0xFB;
    *((_BYTE *)this + 240) = v46;
    if ( (v46 & 4) == 0 )
      v44 = 0LL;
    CAtlasedRectsVisual::SetClipMargins(*((CAtlasedRectsVisual **)this + 34), v44);
    CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
  }
  return v45;
}
