/*
 * XREFs of ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001D9C0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B210 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180023D40 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z @ 0x180035B90 (-SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z.c)
 *     ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180035CA0 (-wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x180038A2C (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x18003A184 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ??$max@H@@YAHHH@Z @ 0x18003A558 (--$max@H@@YAHHH@Z.c)
 *     ?GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z @ 0x18003A660 (-GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D4A0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA-AW4w.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D5C4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wi.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004E888 (IsOpenThemeDataPresent.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_2011c_29716884@@@wil@@SA_NXZ @ 0x18004F998 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_Servicing_2011c_29716884@@@wil@@SA_NX.c)
 *     ceil_0 @ 0x18004FD56 (ceil_0.c)
 *     floor_0 @ 0x18004FD7A (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?RectHeight@@YAHAEBUtagRECT@@@Z @ 0x180079698 (-RectHeight@@YAHAEBUtagRECT@@@Z.c)
 *     ?RectWidth@@YAHAEBUtagRECT@@@Z @ 0x1800796B0 (-RectWidth@@YAHAEBUtagRECT@@@Z.c)
 */

_BOOL8 __fastcall CTopLevelWindow::UpdateMarginsDependentOnStyle(CTopLevelWindow *this)
{
  int v1; // ebx
  __int64 v3; // rdi
  char v4; // r15
  int SystemMetricsForDpi; // ebx
  __int64 v6; // rcx
  double v7; // xmm6_8
  double v8; // xmm0_8
  int v9; // r14d
  double v10; // xmm0_8
  int v11; // ecx
  int v12; // r8d
  char v13; // bl
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ebx
  signed __int32 v22; // r14d
  char v23; // bl
  int v24; // ebx
  signed __int32 v25; // r14d
  bool v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  struct tagRECT v30; // xmm6
  int v31; // eax
  __int64 v32; // r9
  int v33; // eax
  __int64 v34; // r9
  CTopLevelWindow *v35; // rcx
  int v36; // r9^4
  int v37; // r8^4
  int v38; // eax
  int v39; // r9d
  int v40; // r10d
  int v41; // r11d
  int v42; // edx
  int v43; // r8d
  int v44; // ecx
  int v45; // eax
  int v46; // edx
  __int128 v47; // xmm0
  int v48; // eax
  __int64 v49; // r9
  struct tagRECT v50; // xmm6
  int v51; // eax
  __int64 v52; // r9
  int v53; // eax
  __int64 v54; // r9
  CTopLevelWindow *v55; // rcx
  int v56; // r9^4
  int v57; // r8^4
  int v58; // ecx
  int v59; // eax
  const struct _MARGINS *v60; // rbx
  bool v61; // r14
  CAtlasedRectsVisual *v62; // rcx
  char v63; // al
  int v65; // [rsp+58h] [rbp-B0h] BYREF
  int v66; // [rsp+5Ch] [rbp-ACh]
  signed __int32 v67; // [rsp+60h] [rbp-A8h] BYREF
  signed __int32 v68; // [rsp+64h] [rbp-A4h] BYREF
  int v69[4]; // [rsp+68h] [rbp-A0h]
  _DWORD v70[3]; // [rsp+78h] [rbp-90h] BYREF
  int v71; // [rsp+84h] [rbp-84h] BYREF
  __int16 v72; // [rsp+88h] [rbp-80h]
  int v73; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int16 v74; // [rsp+90h] [rbp-78h]
  __int128 v75; // [rsp+98h] [rbp-70h] BYREF
  __int64 v76; // [rsp+A8h] [rbp-60h]
  __int128 v77; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v78; // [rsp+C0h] [rbp-48h]
  int v79; // [rsp+C8h] [rbp-40h]
  int v80; // [rsp+CCh] [rbp-3Ch]
  int v81; // [rsp+D0h] [rbp-38h]
  int v82; // [rsp+D4h] [rbp-34h]
  __int128 *v83; // [rsp+D8h] [rbp-30h] BYREF
  int v84; // [rsp+E0h] [rbp-28h]
  int v85; // [rsp+E4h] [rbp-24h]
  __int128 *v86; // [rsp+E8h] [rbp-20h] BYREF
  int v87; // [rsp+F0h] [rbp-18h]
  int v88; // [rsp+F4h] [rbp-14h]
  struct tagRECT v89; // [rsp+F8h] [rbp-10h] BYREF
  struct tagRECT v90; // [rsp+108h] [rbp+0h] BYREF
  __int128 v91; // [rsp+118h] [rbp+10h]
  int v92[2]; // [rsp+128h] [rbp+20h]
  int v93[2]; // [rsp+130h] [rbp+28h]
  struct tagRECT v94; // [rsp+138h] [rbp+30h] BYREF
  struct tagRECT v95; // [rsp+148h] [rbp+40h] BYREF
  __int64 v96; // [rsp+158h] [rbp+50h] BYREF
  int v97; // [rsp+160h] [rbp+58h]
  __int64 v98; // [rsp+164h] [rbp+5Ch]
  int v99; // [rsp+16Ch] [rbp+64h]
  __int64 v100; // [rsp+170h] [rbp+68h] BYREF
  int v101; // [rsp+178h] [rbp+70h]
  __int64 v102; // [rsp+17Ch] [rbp+74h]
  int v103; // [rsp+184h] [rbp+7Ch]
  __int128 v104; // [rsp+188h] [rbp+80h] BYREF
  __int64 v105; // [rsp+198h] [rbp+90h]
  __int128 v106; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 v107; // [rsp+1B0h] [rbp+A8h]

  v1 = *((_DWORD *)this + 146);
  v3 = *((_QWORD *)this + 90);
  v4 = 0;
  *(_OWORD *)v69 = 0uLL;
  v91 = 0uLL;
  *(_QWORD *)v92 = 0LL;
  *(_QWORD *)v93 = 0LL;
  if ( (unsigned __int8)IsOpenThemeDataPresent()
    && (v1 & 6) != 0
    && *(_DWORD *)(v3 + 64) >= CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth
    && *(_DWORD *)(v3 + 68) >= dword_1800DBE2C
    && *(_DWORD *)(v3 + 72) >= dword_1800DBE30
    && *(_DWORD *)(v3 + 76) >= dword_1800DBE34
    && (*(_DWORD *)(v3 + 104) & 0x800000) == 0
    && (int)GetSystemMetricsForDpi(92LL, *(unsigned int *)(v3 + 324)) > 0 )
  {
    SystemMetricsForDpi = 0;
    if ( (*(_BYTE *)(v3 + 102) & 0xC0) == 0xC0 )
    {
      v6 = 51LL;
      if ( *(char *)(v3 + 104) >= 0 )
        v6 = 4LL;
      SystemMetricsForDpi = GetSystemMetricsForDpi(v6, *(unsigned int *)(v3 + 324));
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
    v12 = v9 + SystemMetricsForDpi;
    v13 = `wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetFeaturePropertyCache'::`2'::data;
    v14 = v11;
    v81 = v12;
    v82 = v9;
    v79 = (int)v10;
    v80 = (int)v10;
    if ( v11 <= (int)v10 )
      v14 = (int)v10;
    v92[0] = v11 - v14;
    v15 = *(_DWORD *)(v3 + 68);
    v16 = v15;
    if ( v15 <= (int)v10 )
      v16 = (int)v10;
    v92[1] = v15 - v16;
    v17 = *(_DWORD *)(v3 + 72);
    v18 = v17;
    if ( v17 <= v12 )
      v18 = v12;
    v93[0] = v17 - v18;
    v19 = *(_DWORD *)(v3 + 76);
    v20 = v19;
    if ( v19 <= v9 )
      v20 = v9;
    v93[1] = v19 - v20;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    {
      wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetCachedFeatureEnabledState();
      v13 = `wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetFeaturePropertyCache'::`2'::data;
    }
    LOBYTE(v66) = 1;
    v71 = 1;
    v21 = v13 & 0x30;
    v72 = v66;
    v75 = 0uLL;
    v76 = 0LL;
    v83 = &v75;
    v67 = 0x20000;
    v84 = 0x20000;
    v85 = 0;
    v65 = 1;
    v70[0] = 3;
    while ( 1 )
    {
      v68 = `wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetFeaturePropertyCache'::`2'::data;
      v22 = `wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetFeaturePropertyCache'::`2'::data;
      if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v68, &v83) )
        break;
      if ( v22 == _InterlockedCompareExchange(
                    (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetFeaturePropertyCache'::`2'::data,
                    v68,
                    v22) )
      {
        LODWORD(v76) = 0;
        goto LABEL_34;
      }
    }
    LODWORD(v76) = 1;
LABEL_34:
    v105 = v76;
    v104 = v75;
    if ( g_wil_details_recordFeatureUsage )
    {
      g_wil_details_recordFeatureUsage(
        16460108LL,
        6LL,
        1LL,
        &`wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetFeaturePropertyCache'::`2'::data,
        &v104);
      if ( v21 == 32 )
      {
        v96 = 0LL;
        v99 = (`wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
        v98 = 0LL;
        v97 = 6;
        g_wil_details_recordFeatureUsage(16460108LL, 6LL, 1LL, 0LL, &v96);
      }
    }
    if ( !(_DWORD)v105 && g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xFB294Cu,
        (const struct FEATURE_LOGGED_TRAITS *)&v71,
        0LL,
        0,
        (const enum wil_ReportingKind *)v70,
        0LL,
        0,
        1uLL);
  }
  v23 = `wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetCachedFeatureEnabledState();
    v23 = `wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data;
  }
  LOBYTE(v66) = 0;
  v73 = 1;
  v24 = v23 & 0x30;
  v74 = v66;
  v77 = 0uLL;
  v78 = 0LL;
  v70[2] = 0x20000;
  v86 = &v77;
  v87 = 0x20000;
  v88 = 0;
  v65 = 3;
  while ( 1 )
  {
    v67 = `wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data;
    v25 = `wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data;
    if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v67, &v86) )
      break;
    if ( v25 == _InterlockedCompareExchange(
                  (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data,
                  v67,
                  v25) )
    {
      LODWORD(v78) = 0;
      goto LABEL_47;
    }
  }
  LODWORD(v78) = 1;
LABEL_47:
  v107 = v78;
  v106 = v77;
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      1470244LL,
      6LL,
      1LL,
      &`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data,
      &v106);
    if ( v24 == 32 )
    {
      v100 = 0LL;
      v103 = (`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      v102 = 0LL;
      v101 = 6;
      g_wil_details_recordFeatureUsage(1470244LL, 6LL, 1LL, 0LL, &v100);
    }
  }
  if ( !(_DWORD)v107 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0x166F24u,
      (const struct FEATURE_LOGGED_TRAITS *)&v73,
      0LL,
      0,
      (const enum wil_ReportingKind *)&v65,
      0LL,
      0,
      1uLL);
  v26 = SetMargin(
          (struct _MARGINS *)((char *)this + 620),
          v92[0],
          v92[1],
          v93[0],
          v93[1],
          (const struct _MARGINS *)((char *)this + 604));
  if ( (*((_DWORD *)this + 146) & 0x200020) != 0 )
  {
    if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_Servicing_2011c_29716884>::__private_IsEnabled() )
    {
      v29 = *((_QWORD *)this + 90);
      v94 = *(struct tagRECT *)(v29 + 48);
      v30 = v94;
      v31 = RectWidth((const struct tagRECT *)(v29 + 180));
      v94.right = _mm_cvtsi128_si32((__m128i)v30) + (int)((double)v31 * *(double *)(v32 + 312));
      v33 = RectHeight((const struct tagRECT *)(v32 + 180));
      v94.bottom = v94.top + (int)((double)v33 * *(double *)(v34 + 312));
      if ( !CTopLevelWindow::GetMonitorRect(v35, &v94, &v89) )
        v89 = v94;
      max<int>(0LL, (unsigned int)(v89.left - v94.left));
      max<int>(0LL, (unsigned int)(v94.right - v89.right));
      max<int>(0LL, (unsigned int)(v36 - v94.top));
      v38 = max<int>(0LL, (unsigned int)(v94.bottom - v37));
      v42 = *(_DWORD *)(v3 + 96);
      v43 = v38;
      if ( v41 > v42 - *((_DWORD *)this + 155) )
        v41 = 0;
      v44 = *(_DWORD *)(v3 + 96) - *((_DWORD *)this + 156);
      v69[0] = v41;
      if ( v40 > v44 )
        v40 = 0;
      v45 = v42 - *((_DWORD *)this + 157);
      v69[1] = v40;
      if ( v39 > v45 )
        v39 = 0;
      v46 = v42 - *((_DWORD *)this + 158);
      v69[2] = v39;
      if ( v43 > v46 )
        v43 = 0;
      v69[3] = v43;
      v47 = *(_OWORD *)v69;
    }
    else
    {
      if ( (*((_DWORD *)this + 146) & 0x200000) != 0 )
      {
        LODWORD(v91) = *(_DWORD *)(v3 + 96);
        DWORD1(v91) = *(_DWORD *)(v3 + 96);
        DWORD2(v91) = *(_DWORD *)(v3 + 96);
        v48 = *(_DWORD *)(v3 + 96);
      }
      else
      {
        LOBYTE(v27) = 3;
        wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v28, v27);
        v49 = *((_QWORD *)this + 90);
        v95 = *(struct tagRECT *)(v49 + 48);
        v50 = v95;
        v51 = RectWidth((const struct tagRECT *)(v49 + 180));
        v95.right = _mm_cvtsi128_si32((__m128i)v50) + (int)((double)v51 * *(double *)(v52 + 296));
        v53 = RectHeight((const struct tagRECT *)(v52 + 180));
        v95.bottom = v95.top + (int)((double)v53 * *(double *)(v54 + 296));
        if ( !CTopLevelWindow::GetMonitorRect(v55, &v95, &v90) )
          v90 = v95;
        LODWORD(v91) = max<int>(0LL, (unsigned int)(v90.left - v95.left));
        DWORD1(v91) = max<int>(0LL, (unsigned int)(v95.right - v90.right));
        DWORD2(v91) = max<int>(0LL, (unsigned int)(v56 - v95.top));
        v48 = max<int>(0LL, (unsigned int)(v95.bottom - v57));
      }
      LOBYTE(v27) = 3;
      HIDWORD(v91) = v48;
      wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v28, v27);
      v58 = *(_DWORD *)(v3 + 96);
      if ( (int)v91 > v58 - *((_DWORD *)this + 155) )
      {
        LODWORD(v91) = 0;
        v58 = *(_DWORD *)(v3 + 96);
      }
      if ( SDWORD1(v91) > v58 - *((_DWORD *)this + 156) )
      {
        DWORD1(v91) = 0;
        v58 = *(_DWORD *)(v3 + 96);
      }
      if ( SDWORD2(v91) > v58 - *((_DWORD *)this + 157) )
      {
        DWORD2(v91) = 0;
        v58 = *(_DWORD *)(v3 + 96);
      }
      v59 = HIDWORD(v91);
      if ( SHIDWORD(v91) > v58 - *((_DWORD *)this + 158) )
        v59 = 0;
      HIDWORD(v91) = v59;
      v47 = v91;
      *(_OWORD *)v69 = v91;
    }
    v4 = 1;
    *(_OWORD *)(*((_QWORD *)this + 90) + 280LL) = v47;
  }
  v60 = (const struct _MARGINS *)((char *)this + 636);
  v61 = SetMargin((struct _MARGINS *)((char *)this + 636), v69[0], v69[1], v69[2], v69[3], 0LL) || v26;
  if ( v4 || (*((_BYTE *)this + 240) & 4) != 0 )
  {
    v62 = (CAtlasedRectsVisual *)*((_QWORD *)this + 34);
    v63 = (4 * v4) | *((_BYTE *)this + 240) & 0xFB;
    *((_BYTE *)this + 240) = v63;
    if ( (v63 & 4) == 0 )
      v60 = 0LL;
    CAtlasedRectsVisual::SetClipMargins(v62, v60);
    CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
  }
  return v61;
}
