/*
 * XREFs of ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180012FC0
 * Callers:
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18000D720 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180010664 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800142F0 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180014A70 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18001F720 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180039100 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800882AC (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z @ 0x180006084 (-GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18000BC08 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?ConvertTimingFunctionToInterpolationMode@CTopLevelWindow3D@@AEAA?AW4InterpolationMode@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x18000F6BC (-ConvertTimingFunctionToInterpolationMode@CTopLevelWindow3D@@AEAA-AW4InterpolationMode@@PEAUTA_T.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180013998 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x1800214F4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4InterpolationMode@@@Z @ 0x180021944 (-CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4Interpolat.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x180027144 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x18003208C (-BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800394A4 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x180039CB0 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180039E24 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z @ 0x18003A8E0 (-GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qp @ 0x18007826C (McTemplateU0qp.c)
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
  DWORD v15; // r10d
  __m128i v16; // xmm0
  int v17; // ecx
  int v18; // edx
  __m128i v19; // xmm0
  unsigned int v20; // eax
  int v21; // ecx
  int v22; // r8d
  DWORD v23; // xmm0_4
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
  __int64 v49; // r14
  __int64 v50; // rax
  int ThemeAnimationTransform; // eax
  float v52; // xmm7_4
  __int64 v53; // rax
  unsigned int v54; // ebx
  __int64 v55; // rsi
  __int64 v56; // rax
  int ThemeTimingFunction; // eax
  __int64 v58; // rcx
  int v59; // eax
  int v60; // eax
  int v61; // ecx
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdx
  _QWORD *v69; // r8
  float v71; // xmm2_4
  float v72; // xmm1_4
  float v73; // xmm3_4
  float v74; // xmm0_4
  float v75; // xmm1_4
  float v76; // xmm0_4
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // r9d
  int v82; // eax
  float v83; // xmm2_4
  float v84; // xmm3_4
  float v85; // xmm0_4
  float v86; // xmm3_4
  float v87; // xmm1_4
  float v88; // xmm0_4
  float v89; // xmm2_4
  unsigned int v90; // [rsp+28h] [rbp-E0h]
  unsigned int v91; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v92; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v93; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v94; // [rsp+54h] [rbp-B4h] BYREF
  unsigned __int64 v95; // [rsp+58h] [rbp-B0h]
  __int64 v96; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v97; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v98; // [rsp+70h] [rbp-98h]
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-90h] BYREF
  struct _GUID v100; // [rsp+88h] [rbp-80h] BYREF

  v94 = 0;
  v97 = 0LL;
  v98 = 0LL;
  v4 = 0.0;
  if ( CDesktopManager::CheckAnyPreference(0x10u) )
    goto LABEL_60;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp(v5, &UdwmAnimation_Start, a2);
  CTopLevelWindow3D::GetScenarioGuid(v5, a2, &v100);
  v6 = *(_QWORD *)&v100.Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&v100.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v6 = *(_QWORD *)v100.Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v6 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( (int)CWindowList::BeginTelemetryScenario(v7, &v100, PerformanceCount.QuadPart) >= 0 )
      (*(void (__fastcall **)(_QWORD, struct _GUID *, unsigned __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                          + 5)
                                                                       + 224LL))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
        &v100,
        a1 | 0xD100000000000000uLL);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 328) + 599LL) &= ~8u;
  *(_DWORD *)(a1 + 368) = a2;
  *(_QWORD *)(a1 + 292) = 0LL;
  *(_QWORD *)(a1 + 300) = 0LL;
  TimelineForTransform = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation((CTopLevelWindow3D *)a1);
  v9 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v90 = 1021;
    goto LABEL_77;
  }
  v10 = *(_QWORD *)(a1 + 328);
  v11 = *(_DWORD *)(a1 + 308);
  v12 = *(_DWORD *)(a1 + 312);
  v13 = *(_QWORD *)(a1 + 336);
  v14 = *(_DWORD *)(a1 + 316);
  v15 = *(_DWORD *)(v13 + 88);
  PerformanceCount.HighPart = *(_DWORD *)(v13 + 96);
  PerformanceCount.LowPart = v15;
  v16 = _mm_cvtsi32_si128(v11 + v15);
  v17 = v14 - v11;
  v18 = *(_DWORD *)(v10 + 48);
  LODWORD(v96) = _mm_cvtepi32_ps(v16).m128_u32[0];
  v19 = _mm_cvtsi32_si128(v12 + PerformanceCount.HighPart);
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
  PerformanceCount.LowPart = v23;
  v26 = FLOAT_0_5;
  v27 = *(_DWORD *)(v10 + 56) - v18;
  LODWORD(v28) = _mm_cvtepi32_ps(v24).m128_u32[0];
  v29 = _mm_cvtsi32_si128(v25);
  v30 = v18 + v15;
  v31 = *(unsigned int *)(a1 + 368);
  v32 = _mm_cvtsi32_si128(v30);
  v33 = _mm_cvtsi32_si128(v22 + PerformanceCount.HighPart);
  v34 = 0;
  if ( v27 >= 0 )
    v34 = v27;
  v35 = (unsigned int)(*(_DWORD *)(v10 + 60) - v22);
  LODWORD(v36) = _mm_cvtepi32_ps(v32).m128_u32[0];
  v37 = _mm_cvtsi32_si128(v34);
  v38 = 0;
  if ( (int)v35 >= 0 )
    v38 = *(_DWORD *)(v10 + 60) - v22;
  *(float *)&v95 = v36;
  LODWORD(v39) = _mm_cvtepi32_ps(v33).m128_u32[0];
  v97 = __PAIR64__(LODWORD(v39), LODWORD(v36));
  *((float *)&v95 + 1) = v39;
  v40 = (float)v38;
  LODWORD(v41) = _mm_cvtepi32_ps(v37).m128_u32[0];
  *((float *)&v98 + 1) = (float)v38;
  *(float *)&v98 = v41;
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
      CTopLevelWindow3D::GetFinalMinRect((struct tagRECT *)(a1 + 292), v42 / v28, (struct MilPointAndSizeF *)&v97);
      v39 = *((float *)&v97 + 1);
      LODWORD(v36) = v97;
      v31 = *(unsigned int *)(a1 + 368);
      v40 = *((float *)&v98 + 1);
      v41 = *(float *)&v98;
      v95 = v97;
      goto LABEL_24;
    }
    if ( *(_DWORD *)(a1 + 368) == 3 )
    {
      *(_DWORD *)(a1 + 368) = 6;
      v31 = 6LL;
      goto LABEL_24;
    }
LABEL_60:
    TimelineForTransform = CTopLevelWindow3D::OnZOrderUpdated((CTopLevelWindow3D *)a1, 0);
    v9 = TimelineForTransform;
    if ( TimelineForTransform >= 0 )
    {
      v55 = 0LL;
      v49 = 0LL;
      goto LABEL_62;
    }
    v90 = 1301;
    goto LABEL_77;
  }
LABEL_24:
  if ( (unsigned int)(v31 - 7) <= 2 )
  {
    v4 = *((float *)CDesktopManager::s_pDesktopManagerInstance + 182);
    TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
    v9 = TimelineForTransform;
    if ( TimelineForTransform >= 0 )
      goto LABEL_53;
    v90 = 1077;
LABEL_77:
    v81 = TimelineForTransform;
LABEL_79:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v81, v90);
    return v9;
  }
  TimelineForTransform = CTopLevelWindow3D::GetAnimationIds(v35, v31, &v93, &v92);
  v9 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v90 = 1082;
    goto LABEL_77;
  }
  Theme = CDesktopManager::GetTheme(3LL);
  TimelineForTransform = GetThemeAnimationProperty(Theme, v93, v92, 1LL, &v94, 4, &v91);
  v9 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v90 = 1089;
    goto LABEL_77;
  }
  v46 = 0;
  if ( !v94 )
  {
LABEL_53:
    v66 = *(_QWORD *)(a1 + 360);
    if ( v66 )
    {
      *(_QWORD *)(v66 + 48) = *(_QWORD *)(v66 + 32);
      *(_WORD *)(v66 + 72) = 256;
      CDesktopManager::s_fTimelineDirty = 1;
      *(double *)(v66 + 24) = v4;
    }
    else
    {
      v67 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
              WPF::g_pProcessHeap,
              80LL);
      if ( v67 )
      {
        CTimelineBase::CTimelineBase(v67, v68, v67);
        *v69 = &CTimeline<float>::`vftable';
      }
      else
      {
        v69 = 0LL;
      }
      *(_QWORD *)(a1 + 360) = v69;
      if ( !v69 )
      {
        v9 = -2147024882;
        v90 = 1289;
        v81 = -2147024882;
        goto LABEL_79;
      }
      if ( (int)CDesktopManager::RegisterForGlobalTimeChangeNotification((struct CVisual *)a1) >= 0 )
        ++*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8);
    }
    CVisual::SetDirtyFlags((CVisual *)a1, 0x1000u);
    goto LABEL_60;
  }
  while ( 1 )
  {
    v47 = CDesktopManager::GetTheme(3LL);
    if ( (unsigned int)GetThemeAnimationTransform(v47, v93, v92, v46, 0LL, 0, &v91) != -2147024662 )
      goto LABEL_40;
    v48 = v91;
    v49 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            v91);
    v50 = CDesktopManager::GetTheme(3LL);
    ThemeAnimationTransform = GetThemeAnimationTransform(v50, v93, v92, v46, v49, v48, &v91);
    v9 = ThemeAnimationTransform;
    if ( ThemeAnimationTransform < 0 )
      break;
    if ( (unsigned int)(*(_DWORD *)v49 - 1) <= 1 )
    {
      v52 = (float)*(int *)(v49 + 12) / 1000.0;
      v53 = CDesktopManager::GetTheme(4LL);
      if ( (unsigned int)GetThemeTimingFunction(v53, *(unsigned int *)(v49 + 4), 0LL, 0LL, &v91) == -2147024662 )
      {
        v54 = v91;
        v55 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                v91);
        v56 = CDesktopManager::GetTheme(4LL);
        ThemeTimingFunction = GetThemeTimingFunction(v56, *(unsigned int *)(v49 + 4), v55, v54, &v91);
        v9 = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeTimingFunction, 0x46Au);
          goto LABEL_62;
        }
        CTopLevelWindow3D::ConvertTimingFunctionToInterpolationMode(v58, v55);
        (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      }
      if ( *(_DWORD *)v49 != 1 )
      {
        if ( *(_DWORD *)v49 == 2 )
        {
          if ( (*(_BYTE *)(v49 + 16) & 1) != 0 )
          {
            if ( ((*(_DWORD *)(a1 + 368) - 3) & 0xFFFFFFFD) != 0 )
            {
              v9 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x4EAu);
              goto LABEL_104;
            }
            v82 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
            v9 = v82;
            if ( v82 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v82, 0x4E5u);
              goto LABEL_104;
            }
          }
          else
          {
            v59 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
            v9 = v59;
            if ( v59 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0x4F1u);
              goto LABEL_104;
            }
          }
        }
LABEL_38:
        v4 = fmaxf(v52, v4);
        goto LABEL_39;
      }
      v60 = *(_DWORD *)(v49 + 16);
      if ( (v60 & 1) != 0 )
      {
        if ( ((*(_DWORD *)(a1 + 368) - 3) & 0xFFFFFFFD) != 0 )
        {
          v9 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x497u);
          goto LABEL_104;
        }
        v71 = 1.0 - *(float *)(v49 + 32);
        v72 = 1.0 - *(float *)(v49 + 28);
        v73 = v72 * v41;
        v74 = *(float *)(v49 + 32) * *(float *)&PerformanceCount.LowPart;
        *(float *)&v95 = (float)(v72 * v36) + (float)(*(float *)(v49 + 28) * *(float *)&v96);
        v75 = (float)(v71 * v39) + v74;
        v76 = v28 * *(float *)(v49 + 28);
        *((float *)&v95 + 1) = v75;
        v41 = v76 + v73;
        v40 = (float)(v42 * *(float *)(v49 + 32)) + (float)(v71 * v40);
        v77 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
        v9 = v77;
        if ( v77 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v77, 0x48Bu);
          goto LABEL_104;
        }
        v78 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
        v9 = v78;
        if ( v78 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v78, 0x48Cu);
          goto LABEL_104;
        }
        v79 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
        v9 = v79;
        if ( v79 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v79, 0x491u);
          goto LABEL_104;
        }
        v80 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
        v9 = v80;
        if ( v80 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v80, 0x492u);
          goto LABEL_104;
        }
        goto LABEL_38;
      }
      if ( v41 > 0.0 && v40 > 0.0 )
      {
        v61 = *(_DWORD *)(a1 + 368);
        if ( v61 == 2 )
        {
          v83 = *(float *)(v49 + 28);
          v86 = fmaxf(v83, v28 / v41);
          v87 = fmaxf(*(float *)(v49 + 32), v42 / v40);
          v85 = fminf(v86, v87);
          v84 = fmaxf(v86, v87);
        }
        else
        {
          if ( v61 != 4 )
            goto LABEL_47;
          v83 = *(float *)(v49 + 28);
          v84 = fminf(fminf(v83, v28 / v41), fminf(*(float *)(v49 + 32), v42 / v40));
          v85 = v84;
        }
        v88 = v85 - *(float *)(v49 + 20);
        v89 = v83 - *(float *)(v49 + 20);
        *(float *)(v49 + 28) = v84;
        *(float *)(v49 + 32) = v84;
        v52 = fmaxf(0.0, (float)(v88 * v52) / v89);
      }
LABEL_47:
      if ( (v60 & 4) != 0 )
      {
        v62 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
        v9 = v62;
        if ( v62 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0x4D2u);
          goto LABEL_104;
        }
        v63 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
        v9 = v63;
        if ( v63 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v63, 0x4D3u);
          goto LABEL_104;
        }
      }
      v64 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
      v9 = v64;
      if ( v64 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x4D6u);
        goto LABEL_104;
      }
      v65 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
      v9 = v65;
      if ( v65 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v65, 0x4D7u);
        goto LABEL_104;
      }
      goto LABEL_38;
    }
LABEL_39:
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v49);
LABEL_40:
    if ( ++v46 >= v94 )
      goto LABEL_53;
    LODWORD(v36) = v95;
    v39 = *((float *)&v95 + 1);
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeAnimationTransform, 0x457u);
LABEL_104:
  v55 = 0LL;
LABEL_62:
  if ( v49 )
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v49);
  if ( v55 )
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v55);
  return v9;
}
