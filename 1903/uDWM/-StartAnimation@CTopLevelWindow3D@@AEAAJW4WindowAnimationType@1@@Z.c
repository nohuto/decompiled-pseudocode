/*
 * XREFs of ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18000DFD0
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001A160 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18001F300 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x1800232FC (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180023B40 (-OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180026C70 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180027100 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180039FE0 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18008E44C (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z @ 0x18000D118 (-GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x18000D504 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x18000D56C (-BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18000E9B8 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4InterpolationMode@@@Z @ 0x18000EA24 (-CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4Interpolat.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18000EB84 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?ConvertTimingFunctionToInterpolationMode@CTopLevelWindow3D@@AEAA?AW4InterpolationMode@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x18000EC00 (-ConvertTimingFunctionToInterpolationMode@CTopLevelWindow3D@@AEAA-AW4InterpolationMode@@PEAUTA_T.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18000EC64 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18000ECFC (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z @ 0x18000ED48 (-GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x18000EDBC (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180014440 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800273D4 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qp @ 0x18007E89C (McTemplateU0qp.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartAnimation(__int64 a1, unsigned int a2)
{
  float v4; // xmm10_4
  __int64 v5; // rcx
  __int64 v6; // rax
  CWindowList *v7; // rcx
  int TimelineForTransform; // eax
  unsigned int v9; // ebx
  __int64 v10; // r11
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rax
  int v14; // ecx
  int v15; // r10d
  __m128i v16; // xmm0
  int v17; // ecx
  int v18; // edx
  __m128i v19; // xmm0
  unsigned int v20; // eax
  int v21; // ecx
  int v22; // r8d
  unsigned __int32 v23; // xmm0_4
  __m128i v24; // xmm14
  unsigned int v25; // eax
  float v26; // xmm0_4
  int v27; // ecx
  float v28; // xmm14_4
  __m128i v29; // xmm15
  unsigned int v30; // eax
  __int64 v31; // rdx
  __m128i v32; // xmm8
  __m128i v33; // xmm9
  unsigned int v34; // eax
  __int64 v35; // rcx
  float v36; // xmm8_4
  __m128i v37; // xmm12
  int v38; // eax
  float v39; // xmm9_4
  float v40; // xmm13_4
  float v41; // xmm12_4
  float v42; // xmm15_4
  char v43; // al
  float v44; // xmm1_4
  __int64 Theme; // rax
  unsigned int v46; // r13d
  __int64 v47; // rax
  unsigned int v48; // ebx
  int v49; // r15d
  __int64 v50; // r14
  __int64 v51; // rax
  int ThemeAnimationTransform; // eax
  float v53; // xmm7_4
  __int64 v54; // rax
  unsigned int v55; // ebx
  __int64 v56; // rsi
  __int64 v57; // rax
  int ThemeTimingFunction; // eax
  __int64 v59; // rcx
  int v60; // eax
  int v61; // eax
  float v62; // xmm1_4
  float v63; // xmm0_4
  float v64; // xmm3_4
  float v65; // xmm4_4
  float v66; // xmm0_4
  float v67; // xmm2_4
  float v68; // xmm1_4
  float v69; // xmm0_4
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdx
  _QWORD *v77; // r8
  int v79; // ecx
  int v80; // eax
  int v81; // eax
  int v82; // eax
  int v83; // eax
  int v84; // r9d
  int v85; // eax
  int v86; // eax
  float v87; // xmm2_4
  float v88; // xmm3_4
  float v89; // xmm0_4
  float v90; // xmm3_4
  float v91; // xmm1_4
  float v92; // xmm0_4
  float v93; // xmm2_4
  unsigned int v94; // [rsp+28h] [rbp-E0h]
  void *v95; // [rsp+30h] [rbp-D8h]
  unsigned int v96; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v97; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v98; // [rsp+50h] [rbp-B8h] BYREF
  float v99; // [rsp+54h] [rbp-B4h]
  unsigned int v100; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v101; // [rsp+5Ch] [rbp-ACh]
  unsigned __int64 v102; // [rsp+68h] [rbp-A0h] BYREF
  float v103; // [rsp+70h] [rbp-98h]
  float v104; // [rsp+74h] [rbp-94h]
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-90h] BYREF
  struct _GUID v106; // [rsp+80h] [rbp-88h] BYREF

  v100 = 0;
  v4 = 0.0;
  if ( CDesktopManager::CheckAnyPreference(0x10u) )
    goto LABEL_58;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp(v5, &UdwmAnimation_Start, a2);
  CTopLevelWindow3D::GetScenarioGuid(v5, a2, &v106);
  v6 = *(_QWORD *)&v106.Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&v106.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v6 = *(_QWORD *)v106.Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v6 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( (int)CWindowList::BeginTelemetryScenario(v7, &v106, PerformanceCount.QuadPart) >= 0 )
      (*(void (__fastcall **)(_QWORD, struct _GUID *, unsigned __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                       + 5)
                                                                                     + 16LL)
                                                                       + 232LL))(
        *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
        &v106,
        a1 | 0xD100000000000000uLL);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 328) + 607LL) &= ~8u;
  *(_DWORD *)(a1 + 368) = a2;
  *(_QWORD *)(a1 + 292) = 0LL;
  *(_QWORD *)(a1 + 300) = 0LL;
  TimelineForTransform = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation((CTopLevelWindow3D *)a1);
  v9 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v94 = 1016;
    goto LABEL_77;
  }
  v10 = *(_QWORD *)(a1 + 328);
  v11 = *(_DWORD *)(a1 + 308);
  v12 = *(_DWORD *)(a1 + 312);
  v13 = *(_QWORD *)(a1 + 336);
  v14 = *(_DWORD *)(a1 + 316);
  v15 = *(_DWORD *)(v13 + 88);
  HIDWORD(v102) = *(_DWORD *)(v13 + 96);
  LODWORD(v102) = v15;
  v16 = _mm_cvtsi32_si128(v15 + v11);
  v17 = v14 - v11;
  v18 = *(_DWORD *)(v10 + 48);
  PerformanceCount.LowPart = _mm_cvtepi32_ps(v16).m128_u32[0];
  v19 = _mm_cvtsi32_si128(v12 + HIDWORD(v102));
  v20 = 0;
  if ( v17 >= 0 )
    v20 = v17;
  v21 = *(_DWORD *)(a1 + 320) - v12;
  v22 = *(_DWORD *)(v10 + 52);
  v23 = _mm_cvtepi32_ps(v19).m128_u32[0];
  v24 = _mm_cvtsi32_si128(v20);
  v25 = 0;
  if ( v21 >= 0 )
    v25 = v21;
  v99 = *(float *)&v23;
  v26 = FLOAT_0_5;
  v27 = *(_DWORD *)(v10 + 56) - v18;
  LODWORD(v28) = _mm_cvtepi32_ps(v24).m128_u32[0];
  v29 = _mm_cvtsi32_si128(v25);
  v30 = v15 + v18;
  v31 = *(unsigned int *)(a1 + 368);
  v32 = _mm_cvtsi32_si128(v30);
  v33 = _mm_cvtsi32_si128(HIDWORD(v102) + v22);
  v34 = 0;
  if ( v27 >= 0 )
    v34 = v27;
  v35 = (unsigned int)(*(_DWORD *)(v10 + 60) - v22);
  LODWORD(v36) = _mm_cvtepi32_ps(v32).m128_u32[0];
  v37 = _mm_cvtsi32_si128(v34);
  v38 = 0;
  if ( (int)v35 >= 0 )
    v38 = *(_DWORD *)(v10 + 60) - v22;
  *(float *)&v101 = v36;
  LODWORD(v39) = _mm_cvtepi32_ps(v33).m128_u32[0];
  v102 = __PAIR64__(LODWORD(v39), LODWORD(v36));
  *((float *)&v101 + 1) = v39;
  v40 = (float)v38;
  LODWORD(v41) = _mm_cvtepi32_ps(v37).m128_u32[0];
  v104 = (float)v38;
  v103 = v41;
  LODWORD(v42) = _mm_cvtepi32_ps(v29).m128_u32[0];
  if ( (((_DWORD)v31 - 2) & 0xFFFFFFFD) != 0 )
  {
    v43 = 0;
    v44 = 0.0;
  }
  else
  {
    v43 = 1;
    v44 = FLOAT_0_5;
  }
  *(float *)(a1 + 468) = v44;
  if ( !v43 )
    v26 = 0.0;
  *(_DWORD *)(a1 + 476) = 0;
  *(float *)(a1 + 472) = v26;
  if ( (_DWORD)v31 == 3 || (_DWORD)v31 == 5 )
  {
    GetWindowMinimizeRect(*(_QWORD *)(v10 + 40), a1 + 292);
    if ( !IsRectEmpty((const RECT *)(a1 + 292)) )
    {
      CTopLevelWindow3D::GetFinalMinRect((struct tagRECT *)(a1 + 292), v42 / v28, (struct MilPointAndSizeF *)&v102);
      v39 = *((float *)&v102 + 1);
      LODWORD(v36) = v102;
      v31 = *(unsigned int *)(a1 + 368);
      v40 = v104;
      v41 = v103;
      v101 = v102;
      goto LABEL_26;
    }
    if ( *(_DWORD *)(a1 + 368) == 3 )
    {
      *(_DWORD *)(a1 + 368) = 6;
      v31 = 6LL;
      goto LABEL_26;
    }
LABEL_58:
    TimelineForTransform = CTopLevelWindow3D::OnZOrderUpdated((CTopLevelWindow3D *)a1, 0);
    v9 = TimelineForTransform;
    if ( TimelineForTransform >= 0 )
    {
      v56 = 0LL;
      v50 = 0LL;
      goto LABEL_60;
    }
    v94 = 1296;
    goto LABEL_77;
  }
LABEL_26:
  if ( (unsigned int)(v31 - 7) <= 2 )
  {
    v4 = *((float *)CDesktopManager::s_pDesktopManagerInstance + 182);
    LODWORD(v95) = 4;
    TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
    v9 = TimelineForTransform;
    if ( TimelineForTransform >= 0 )
      goto LABEL_51;
    v94 = 1072;
LABEL_77:
    v84 = TimelineForTransform;
LABEL_79:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v84, v94, v95);
    return v9;
  }
  TimelineForTransform = CTopLevelWindow3D::GetAnimationIds(v35, v31, &v98, &v97);
  v9 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v94 = 1077;
    goto LABEL_77;
  }
  Theme = CDesktopManager::GetTheme(3LL);
  TimelineForTransform = GetThemeAnimationProperty(Theme, v98, v97, 1LL, &v100, 4, &v96);
  v9 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v94 = 1084;
    goto LABEL_77;
  }
  v46 = 0;
  if ( !v100 )
  {
LABEL_51:
    v74 = *(_QWORD *)(a1 + 360);
    if ( v74 )
    {
      *(_QWORD *)(v74 + 48) = *(_QWORD *)(v74 + 32);
      *(_WORD *)(v74 + 72) = 256;
      CDesktopManager::s_fTimelineDirty = 1;
      *(double *)(v74 + 24) = v4;
    }
    else
    {
      v75 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
              WPF::g_pProcessHeap,
              80LL);
      if ( v75 )
      {
        CTimelineBase::CTimelineBase(v75, v76, v75);
        *v77 = &CTimeline<float>::`vftable';
      }
      else
      {
        v77 = 0LL;
      }
      *(_QWORD *)(a1 + 360) = v77;
      if ( !v77 )
      {
        v9 = -2147024882;
        v94 = 1284;
        v84 = -2147024882;
        goto LABEL_79;
      }
      if ( (int)CDesktopManager::RegisterForGlobalTimeChangeNotification((struct CVisual *)a1) >= 0 )
        ++*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8);
    }
    CVisual::SetDirtyFlags((CVisual *)a1, 0x1000u);
    goto LABEL_58;
  }
  while ( 1 )
  {
    v47 = CDesktopManager::GetTheme(3LL);
    if ( (unsigned int)GetThemeAnimationTransform(v47, v98, v97, v46, 0LL, 0, &v96) != -2147024662 )
      goto LABEL_42;
    v48 = v96;
    v49 = 0;
    v50 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            v96);
    v51 = CDesktopManager::GetTheme(3LL);
    ThemeAnimationTransform = GetThemeAnimationTransform(v51, v98, v97, v46, v50, v48, &v96);
    v9 = ThemeAnimationTransform;
    if ( ThemeAnimationTransform < 0 )
      break;
    if ( (unsigned int)(*(_DWORD *)v50 - 1) <= 1 )
    {
      v53 = (float)*(int *)(v50 + 12) / 1000.0;
      v54 = CDesktopManager::GetTheme(4LL);
      if ( (unsigned int)GetThemeTimingFunction(v54, *(unsigned int *)(v50 + 4), 0LL, 0LL, &v96) == -2147024662 )
      {
        v55 = v96;
        v56 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                v96);
        v57 = CDesktopManager::GetTheme(4LL);
        ThemeTimingFunction = GetThemeTimingFunction(v57, *(unsigned int *)(v50 + 4), v56, v55, &v96);
        v9 = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeTimingFunction, 0x465u, v95);
          goto LABEL_60;
        }
        v49 = CTopLevelWindow3D::ConvertTimingFunctionToInterpolationMode(v59, v56);
        (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      }
      if ( *(_DWORD *)v50 != 1 )
      {
        if ( *(_DWORD *)v50 == 2 )
        {
          if ( (*(_BYTE *)(v50 + 16) & 1) != 0 )
          {
            v85 = *(_DWORD *)(a1 + 368);
            if ( v85 != 3 && v85 != 5 )
            {
              v9 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x4E5u, v95);
              goto LABEL_105;
            }
            LODWORD(v95) = v49;
            v86 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
            v9 = v86;
            if ( v86 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v86, 0x4E0u, v95);
              goto LABEL_105;
            }
          }
          else
          {
            LODWORD(v95) = v49;
            v60 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
            v9 = v60;
            if ( v60 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v60, 0x4ECu, v95);
              goto LABEL_105;
            }
          }
        }
LABEL_40:
        v4 = fmaxf(v53, v4);
        goto LABEL_41;
      }
      v61 = *(_DWORD *)(v50 + 16);
      if ( (v61 & 1) != 0 )
      {
        if ( ((*(_DWORD *)(a1 + 368) - 3) & 0xFFFFFFFD) != 0 )
        {
          v9 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x492u, v95);
          goto LABEL_105;
        }
        v62 = v99 * *(float *)(v50 + 32);
        v63 = 1.0 - *(float *)(v50 + 28);
        v64 = v63 * v41;
        v65 = (float)(*(float *)&PerformanceCount.LowPart * *(float *)(v50 + 28)) + (float)(v63 * v36);
        v66 = (float)(1.0 - *(float *)(v50 + 32)) * v39;
        v67 = (float)(1.0 - *(float *)(v50 + 32)) * v40;
        *(float *)&v101 = v65;
        v68 = v62 + v66;
        v69 = v28 * *(float *)(v50 + 28);
        *((float *)&v101 + 1) = v68;
        v41 = v64 + v69;
        v40 = v67 + (float)(v42 * *(float *)(v50 + 32));
        LODWORD(v95) = v49;
        v70 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
        v9 = v70;
        if ( v70 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, 0x486u, v95);
          goto LABEL_105;
        }
        LODWORD(v95) = v49;
        v71 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
        v9 = v71;
        if ( v71 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v71, 0x487u, v95);
          goto LABEL_105;
        }
        LODWORD(v95) = v49;
        v72 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
        v9 = v72;
        if ( v72 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v72, 0x48Cu, v95);
          goto LABEL_105;
        }
        LODWORD(v95) = v49;
        v73 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
        v9 = v73;
        if ( v73 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v73, 0x48Du, v95);
          goto LABEL_105;
        }
        goto LABEL_40;
      }
      if ( v41 > 0.0 && v40 > 0.0 )
      {
        v79 = *(_DWORD *)(a1 + 368);
        if ( v79 == 2 )
        {
          v87 = *(float *)(v50 + 28);
          v90 = fmaxf(v87, v28 / v41);
          v91 = fmaxf(*(float *)(v50 + 32), v42 / v40);
          v89 = fminf(v90, v91);
          v88 = fmaxf(v90, v91);
        }
        else
        {
          if ( v79 != 4 )
            goto LABEL_69;
          v87 = *(float *)(v50 + 28);
          v88 = fminf(fminf(v87, v28 / v41), fminf(*(float *)(v50 + 32), v42 / v40));
          v89 = v88;
        }
        v92 = v89 - *(float *)(v50 + 20);
        v93 = v87 - *(float *)(v50 + 20);
        *(float *)(v50 + 28) = v88;
        *(float *)(v50 + 32) = v88;
        v53 = fmaxf(0.0, (float)(v92 * v53) / v93);
      }
LABEL_69:
      if ( (v61 & 4) != 0 )
      {
        LODWORD(v95) = v49;
        v80 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
        v9 = v80;
        if ( v80 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v80, 0x4CDu, v95);
          goto LABEL_105;
        }
        LODWORD(v95) = v49;
        v81 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
        v9 = v81;
        if ( v81 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v81, 0x4CEu, v95);
          goto LABEL_105;
        }
      }
      LODWORD(v95) = v49;
      v82 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
      v9 = v82;
      if ( v82 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v82, 0x4D1u, v95);
        goto LABEL_105;
      }
      LODWORD(v95) = v49;
      v83 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
      v9 = v83;
      if ( v83 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v83, 0x4D2u, v95);
        goto LABEL_105;
      }
      goto LABEL_40;
    }
LABEL_41:
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v50);
LABEL_42:
    if ( ++v46 >= v100 )
      goto LABEL_51;
    LODWORD(v36) = v101;
    v39 = *((float *)&v101 + 1);
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeAnimationTransform, 0x452u, v95);
LABEL_105:
  v56 = 0LL;
LABEL_60:
  if ( v50 )
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v50);
  if ( v56 )
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v56);
  return v9;
}
