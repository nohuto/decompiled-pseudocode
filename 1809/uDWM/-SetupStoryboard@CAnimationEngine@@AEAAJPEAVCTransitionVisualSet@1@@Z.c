/*
 * XREFs of ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x18000FB54
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x18000C924 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z @ 0x18000CBFC (-SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z.c)
 *     ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z @ 0x18000CF68 (-_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z.c)
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x18000DA60 (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180013998 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180014F80 (-RoundToNearestInt@@YAHM@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::SetupStoryboard(
        CAnimationEngine *this,
        struct CAnimationEngine::CTransitionVisualSet *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  struct TA_TIMINGFUNCTION *v6; // r14
  int v7; // eax
  unsigned int ThemeAnimationTransform; // ebx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  int ThemeTimingFunction; // eax
  float v13; // xmm10_4
  __int64 v14; // rcx
  void *Theme; // rax
  unsigned int v16; // esi
  CAnimationEngine *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rbx
  __int64 v22; // rax
  double v23; // xmm6_8
  double v24; // xmm7_8
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // r12d
  int v29; // esi
  int v30; // eax
  int v31; // r14d
  int v32; // r15d
  int v33; // edx
  int v34; // eax
  int v35; // esi
  int v36; // r11d
  int v37; // r10d
  int v38; // ecx
  int v39; // eax
  int v40; // edx
  int v41; // r9d
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  float v45; // xmm0_4
  float v46; // xmm1_4
  unsigned int v47; // r8d
  struct IUIAnimationStoryboard2 *v48; // rdx
  __int64 v50; // rdx
  CAnimationEngine *v51; // r12
  int v52; // xmm1_4
  __int64 v53; // rcx
  int v54; // eax
  int v55; // eax
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  double v59; // xmm1_8
  double v60; // xmm2_8
  double v61; // xmm0_8
  double v62; // xmm3_8
  double v63; // xmm4_8
  double v64; // xmm5_8
  __m128 v65; // xmm1
  __int64 v66; // rcx
  int v67; // eax
  int v68; // xmm1_4
  __int64 v69; // rcx
  int v70; // eax
  unsigned int v71; // r8d
  __m128i v72; // xmm0
  struct IUIAnimationStoryboard2 *v73; // rdx
  unsigned int v74; // eax
  int v75; // ecx
  double v76; // xmm0_8
  double v77; // xmm0_8
  float v78; // xmm0_4
  unsigned int v79; // r8d
  struct IUIAnimationStoryboard2 *v80; // rdx
  double v81; // xmm0_8
  double v82; // xmm1_8
  double v83; // xmm2_8
  double v84; // xmm3_8
  __int64 v85; // rax
  __m128 v86; // xmm1
  __m128 v87; // xmm0
  __int64 v88; // rcx
  float v89; // xmm1_4
  float v90; // xmm1_4
  double v91; // xmm0_8
  double v92; // xmm0_8
  __int64 j; // rax
  __int64 k; // rax
  unsigned int v95; // [rsp+28h] [rbp-E0h]
  unsigned int v96; // [rsp+28h] [rbp-E0h]
  struct TA_TIMINGFUNCTION *v97; // [rsp+58h] [rbp-B0h]
  struct TA_TIMINGFUNCTION *v98; // [rsp+58h] [rbp-B0h]
  struct TA_TIMINGFUNCTION *v99; // [rsp+58h] [rbp-B0h]
  struct TA_TIMINGFUNCTION *v100; // [rsp+58h] [rbp-B0h]
  char v101; // [rsp+88h] [rbp-80h]
  char v102; // [rsp+89h] [rbp-7Fh]
  bool v103; // [rsp+8Ah] [rbp-7Eh]
  bool v104; // [rsp+8Bh] [rbp-7Dh]
  unsigned int v105; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v106; // [rsp+90h] [rbp-78h]
  unsigned int v107; // [rsp+94h] [rbp-74h] BYREF
  double v108; // [rsp+98h] [rbp-70h] BYREF
  double v109; // [rsp+A0h] [rbp-68h]
  struct TA_TIMINGFUNCTION *v110; // [rsp+A8h] [rbp-60h]
  int v111; // [rsp+B0h] [rbp-58h] BYREF
  int v112; // [rsp+B4h] [rbp-54h]
  CAnimationEngine *v113; // [rsp+B8h] [rbp-50h]
  double v114; // [rsp+C0h] [rbp-48h] BYREF
  double v115; // [rsp+C8h] [rbp-40h]
  float v116; // [rsp+D0h] [rbp-38h] BYREF
  float v117; // [rsp+D4h] [rbp-34h] BYREF
  int v118; // [rsp+D8h] [rbp-30h]
  int v119; // [rsp+DCh] [rbp-2Ch]
  unsigned int i; // [rsp+E0h] [rbp-28h]
  unsigned int v121; // [rsp+E4h] [rbp-24h] BYREF
  float v122; // [rsp+E8h] [rbp-20h] BYREF
  float v123; // [rsp+ECh] [rbp-1Ch] BYREF
  struct IUIAnimationStoryboard2 *v124; // [rsp+F0h] [rbp-18h] BYREF
  int v125; // [rsp+F8h] [rbp-10h]
  __int64 v126; // [rsp+100h] [rbp-8h]
  int v127; // [rsp+108h] [rbp+0h]
  __int64 v128; // [rsp+110h] [rbp+8h]
  int v129; // [rsp+118h] [rbp+10h]
  __int64 v130; // [rsp+120h] [rbp+18h]
  double v131; // [rsp+128h] [rbp+20h] BYREF
  double v132; // [rsp+130h] [rbp+28h] BYREF
  unsigned int v133; // [rsp+138h] [rbp+30h] BYREF
  unsigned int v134; // [rsp+13Ch] [rbp+34h] BYREF
  float v135; // [rsp+140h] [rbp+38h] BYREF
  double v136; // [rsp+148h] [rbp+40h] BYREF
  double v137; // [rsp+150h] [rbp+48h] BYREF
  double v138[2]; // [rsp+158h] [rbp+50h] BYREF
  int v139; // [rsp+168h] [rbp+60h]
  int v140; // [rsp+178h] [rbp+70h]
  __int64 v141; // [rsp+180h] [rbp+78h] BYREF
  __int64 v142; // [rsp+188h] [rbp+80h]
  __int64 v143; // [rsp+190h] [rbp+88h] BYREF
  __int64 v144; // [rsp+198h] [rbp+90h]
  _QWORD v145[2]; // [rsp+1A0h] [rbp+98h] BYREF
  _QWORD v146[2]; // [rsp+1B0h] [rbp+A8h] BYREF
  double v147; // [rsp+1C0h] [rbp+B8h] BYREF
  double v148; // [rsp+1C8h] [rbp+C0h]
  double v149; // [rsp+1D0h] [rbp+C8h]
  __int128 v150; // [rsp+1D8h] [rbp+D0h] BYREF
  double v151; // [rsp+1E8h] [rbp+E0h]
  double v152[4]; // [rsp+1F0h] [rbp+E8h] BYREF
  double v153[4]; // [rsp+210h] [rbp+108h] BYREF

  v105 = *((_DWORD *)a2 + 7);
  v113 = this;
  v4 = *((_QWORD *)this + 1);
  v5 = 0LL;
  v124 = 0LL;
  v6 = 0LL;
  v110 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, struct IUIAnimationStoryboard2 **))(*(_QWORD *)v4 + 48LL))(v4, &v124);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v95 = 626;
LABEL_81:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v95);
    goto LABEL_57;
  }
  CAnimationEngine::CTransitionVisualSet::SetStoryboard(a2, v124);
  v7 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, _QWORD))v124->lpVtbl->SetTag)(
         v124,
         0LL,
         *((unsigned int *)a2 + 4));
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v95 = 630;
    goto LABEL_81;
  }
  v7 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, CAnimationEngine *, _QWORD, _QWORD))v124->lpVtbl->SetStoryboardEventHandler)(
         v124,
         this,
         0LL,
         0LL);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v95 = 631;
    goto LABEL_81;
  }
  v9 = 0LL;
  v106 = 0;
  if ( *((_DWORD *)a2 + 5) )
  {
    while ( 1 )
    {
      v141 = 0LL;
      v142 = 0LL;
      v143 = 0LL;
      v144 = 0LL;
      v145[0] = 0LL;
      v145[1] = 0LL;
      v146[0] = 0LL;
      v146[1] = 0LL;
      v10 = *((_QWORD *)a2 + 5);
      v130 = (unsigned int)v9;
      v11 = **(_QWORD **)(v10 + 8 * v9);
      v101 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 256LL))(v11);
      v102 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 136LL))(v11);
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 16LL))(v11, &v141);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
        break;
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v143);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v96 = 652;
        goto LABEL_161;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 32LL))(v11, &v117);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v96 = 653;
        goto LABEL_161;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 40LL))(v11, &v116);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v96 = 654;
        goto LABEL_161;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 48LL))(v11, &v123);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v96 = 655;
        goto LABEL_161;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 56LL))(v11, &v135);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v96 = 656;
        goto LABEL_161;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 64LL))(v11, &v133);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v96 = 657;
        goto LABEL_161;
      }
      if ( (*(int (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 112LL))(v11, &v122) < 0 )
        v122 = 0.0;
      if ( v101 )
      {
        ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 72LL))(v11, v145);
        ThemeAnimationTransform = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          v96 = 664;
          goto LABEL_161;
        }
        ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 80LL))(v11, v146);
        ThemeAnimationTransform = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          v96 = 665;
          goto LABEL_161;
        }
      }
      v132 = 0.0;
      v131 = 0.0;
      v13 = fmaxf(0.0099999998, 1.0 - v122);
      v103 = 0;
      v104 = 0;
      if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 88LL))(v11, &v134) >= 0 )
      {
        v103 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v11 + 96LL))(v11, &v132) >= 0;
        v104 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v11 + 104LL))(v11, &v131) >= 0;
      }
      v14 = **(_QWORD **)(*((_QWORD *)a2 + 5) + 8 * v9);
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 128LL))(v14, &v111);
      v121 = 0;
      v136 = 0.0;
      Theme = (void *)CDesktopManager::GetTheme(3LL);
      v16 = v105;
      CAnimationEngine::_CalculateStaggerDelay(v17, Theme, v105, v111, v133, &v136);
      v18 = CDesktopManager::GetTheme(3LL);
      if ( (int)GetThemeAnimationProperty(v18, v105, (unsigned int)v111, 1LL, &v121, 4, &v107) >= 0 )
      {
        for ( i = 0; i < v121; ++i )
        {
          v19 = CDesktopManager::GetTheme(3LL);
          ThemeAnimationTransform = GetThemeAnimationTransform(v19, v16, (unsigned int)v111, v20, 0LL, 0, &v107);
          if ( ThemeAnimationTransform != -2147024662 )
            continue;
          v21 = v107;
          if ( v5 )
            (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v5);
          v5 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                 WPF::g_pProcessHeap,
                 v21);
          if ( !v5 )
          {
            ThemeAnimationTransform = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2C8u);
            goto LABEL_55;
          }
          v22 = CDesktopManager::GetTheme(3LL);
          ThemeTimingFunction = GetThemeAnimationTransform(v22, v16, (unsigned int)v111, i, v5, v21, &v107);
          ThemeAnimationTransform = ThemeTimingFunction;
          if ( ThemeTimingFunction < 0 )
          {
            v96 = 715;
            goto LABEL_161;
          }
          v23 = ((float)((float)*(int *)(v5 + 8) / 1000.0) + v136) * v13;
          v24 = (float)((float)((float)*(int *)(v5 + 12) / 1000.0) * v13);
          v25 = CDesktopManager::GetTheme(4LL);
          if ( (unsigned int)GetThemeTimingFunction(v25, *(unsigned int *)(v5 + 4), 0LL, 0LL, &v107) == -2147024662 )
          {
            v26 = v107;
            if ( v6 )
              (*(void (__fastcall **)(WPF::HeapBase *, struct TA_TIMINGFUNCTION *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                WPF::g_pProcessHeap,
                v6);
            v110 = (struct TA_TIMINGFUNCTION *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                 WPF::g_pProcessHeap,
                                                 v26);
            v6 = v110;
            if ( !v110 )
            {
              ThemeAnimationTransform = -2147024882;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2E2u);
              goto LABEL_53;
            }
            v27 = CDesktopManager::GetTheme(4LL);
            ThemeTimingFunction = GetThemeTimingFunction(v27, *(unsigned int *)(v5 + 4), v6, (unsigned int)v26, &v107);
            ThemeAnimationTransform = ThemeTimingFunction;
            if ( ThemeTimingFunction < 0 )
            {
              v96 = 740;
              goto LABEL_161;
            }
          }
          v108 = 0.0;
          v109 = 0.0;
          v114 = 0.0;
          v115 = 0.0;
          v150 = 0uLL;
          v151 = 0.0;
          v147 = 0.0;
          v148 = 0.0;
          v149 = 0.0;
          memset_0(v153, 0, sizeof(v153));
          memset_0(v152, 0, sizeof(v152));
          v28 = v142;
          v29 = v141;
          v118 = RoundToNearestInt((float)(v142 + v141) * 0.5);
          v112 = HIDWORD(v142);
          v30 = RoundToNearestInt((float)(HIDWORD(v142) + HIDWORD(v141)) * 0.5);
          v31 = HIDWORD(v144);
          v32 = v144;
          v119 = v30;
          if ( v101 )
            goto LABEL_35;
          v33 = 0;
          if ( (int)v144 - (int)v143 >= 0 )
            v33 = v144 - v143;
          v34 = 0;
          if ( v28 - v29 >= 0 )
            v34 = v28 - v29;
          if ( v34 == v33 )
          {
LABEL_35:
            v35 = v143 + v118 - v141;
            if ( v101 )
            {
              v37 = HIDWORD(v141);
              v36 = HIDWORD(v143);
              goto LABEL_41;
            }
          }
          else
          {
            v35 = RoundToNearestInt((float)(v144 + v143) * 0.5);
          }
          v36 = HIDWORD(v143);
          v37 = HIDWORD(v141);
          v38 = 0;
          if ( v31 - HIDWORD(v143) >= 0 )
            v38 = v31 - HIDWORD(v143);
          v39 = 0;
          if ( v112 - HIDWORD(v141) >= 0 )
            v39 = v112 - HIDWORD(v141);
          if ( v39 != v38 )
          {
            v55 = RoundToNearestInt((float)(v31 + HIDWORD(v143)) * 0.5);
            v37 = HIDWORD(v141);
            v40 = v55;
            v36 = HIDWORD(v143);
            goto LABEL_42;
          }
LABEL_41:
          v40 = v36 + v119 - v37;
LABEL_42:
          v41 = *(_DWORD *)(v5 + 16);
          v42 = *(_DWORD *)v5;
          v125 = v41 & 4;
          if ( v42 )
          {
            v43 = v42 - 1;
            if ( v43 )
            {
              v44 = v43 - 1;
              if ( v44 )
              {
                v56 = v44 - 254;
                if ( v56 )
                {
                  v57 = v56 - 2;
                  if ( v57 )
                  {
                    v58 = v57 - 1;
                    if ( v58 )
                    {
                      if ( v58 == 1 )
                      {
                        if ( (v41 & 2) != 0 )
                        {
                          v59 = *(float *)(v5 + 32);
                          *(double *)&v150 = v59;
                          v60 = *(float *)(v5 + 36);
                          *((double *)&v150 + 1) = v60;
                          v61 = *(float *)(v5 + 40);
                        }
                        else
                        {
                          v150 = 0LL;
                          v60 = 0.0;
                          v61 = 0.0;
                          v59 = 0.0;
                        }
                        v151 = v61;
                        v62 = *(float *)(v5 + 20);
                        v147 = v62;
                        v63 = *(float *)(v5 + 24);
                        v148 = v63;
                        v64 = *(float *)(v5 + 28);
                        v149 = v64;
                        if ( v102 )
                        {
                          *(_QWORD *)&v150 = *(_QWORD *)&v59 ^ _xmm;
                          *((_QWORD *)&v150 + 1) = *(_QWORD *)&v60 ^ _xmm;
                          *(_QWORD *)&v151 = *(_QWORD *)&v61 ^ _xmm;
                          *(_QWORD *)&v147 = *(_QWORD *)&v62 ^ _xmm;
                          *(_QWORD *)&v148 = *(_QWORD *)&v63 ^ _xmm;
                          *(_QWORD *)&v149 = *(_QWORD *)&v64 ^ _xmm;
                        }
                        v65 = (__m128)*(unsigned int *)(v5 + 48);
                        v6 = v110;
                        LODWORD(v9) = v106;
                        v98 = v110;
                        v66 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * v130);
                        v139 = *(_DWORD *)(v5 + 52);
                        v67 = v139;
                        *(_QWORD *)(v66 + 76) = _mm_unpacklo_ps((__m128)*(unsigned int *)(v5 + 44), v65).m128_u64[0];
                        *(_DWORD *)(v66 + 84) = v67;
                        ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                                (__int64)v113,
                                                *((struct IUIAnimationStoryboard2 **)a2 + 4),
                                                *((_DWORD *)a2 + 4),
                                                v106,
                                                3,
                                                v23,
                                                v24,
                                                (double *)&v150,
                                                &v147,
                                                3u,
                                                v98,
                                                0,
                                                0LL,
                                                0LL,
                                                0);
                        ThemeAnimationTransform = ThemeTimingFunction;
                        if ( ThemeTimingFunction < 0 )
                        {
                          v96 = 1110;
                          goto LABEL_161;
                        }
                      }
                      else
                      {
                        v6 = v110;
                        LODWORD(v9) = v106;
                      }
                    }
                    else
                    {
                      if ( (v41 & 1) != 0 )
                      {
                        v151 = v117;
                        *(double *)&v150 = (double)(v28 - (int)v141);
                        *((double *)&v150 + 1) = (double)(v112 - v37);
                        v149 = v116;
                        v147 = (double)(v32 - (int)v143);
                        v148 = (double)(v31 - v36);
                      }
                      else
                      {
                        if ( (v41 & 2) != 0 )
                        {
                          *(double *)&v150 = *(float *)(v5 + 32);
                          *((double *)&v150 + 1) = *(float *)(v5 + 36);
                          v151 = *(float *)(v5 + 40);
                        }
                        else
                        {
                          v150 = _xmm;
                          v151 = DOUBLE_1_0;
                        }
                        v147 = *(float *)(v5 + 20);
                        v148 = *(float *)(v5 + 24);
                        v149 = *(float *)(v5 + 28);
                      }
                      if ( v125 )
                      {
                        v68 = *(_DWORD *)(v5 + 48);
                        LODWORD(v126) = *(_DWORD *)(v5 + 44);
                        v127 = *(_DWORD *)(v5 + 52);
                        HIDWORD(v126) = v68;
                      }
                      else
                      {
                        v127 = 0;
                        v126 = 0x3F0000003F000000LL;
                      }
                      v6 = v110;
                      LODWORD(v9) = v106;
                      v99 = v110;
                      v69 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * v130);
                      v70 = v127;
                      *(_QWORD *)(v69 + 64) = v126;
                      *(_DWORD *)(v69 + 72) = v70;
                      ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                              (__int64)v113,
                                              *((struct IUIAnimationStoryboard2 **)a2 + 4),
                                              *((_DWORD *)a2 + 4),
                                              v106,
                                              4,
                                              v23,
                                              v24,
                                              (double *)&v150,
                                              &v147,
                                              3u,
                                              v99,
                                              0,
                                              0LL,
                                              0LL,
                                              0);
                      ThemeAnimationTransform = ThemeTimingFunction;
                      if ( ThemeTimingFunction < 0 )
                      {
                        v96 = 1067;
                        goto LABEL_161;
                      }
                    }
                  }
                  else
                  {
                    v151 = 0.0;
                    v150 = 0LL;
                    if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
                    {
                      v6 = v110;
                      LODWORD(v9) = v106;
                      v71 = *((_DWORD *)a2 + 4);
                      v147 = (double)(v35 - v118);
                      v72 = _mm_cvtsi32_si128(v40 - v119);
                      v73 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 4);
                      *(_QWORD *)&v148 = *(_OWORD *)&_mm_cvtepi32_pd(v72);
                      v149 = (float)(v116 - v117);
                      ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                              (__int64)v113,
                                              v73,
                                              v71,
                                              v106,
                                              0,
                                              v23,
                                              v24,
                                              (double *)&v150,
                                              &v147,
                                              3u,
                                              v110,
                                              0,
                                              0LL,
                                              0LL,
                                              0);
                      ThemeAnimationTransform = ThemeTimingFunction;
                      if ( ThemeTimingFunction < 0 )
                      {
                        v96 = 961;
                        goto LABEL_161;
                      }
                    }
                    else
                    {
                      v74 = 1;
                      v75 = 0;
                      if ( (*(_DWORD *)(v5 + 16) & 0x1000) != 0 )
                      {
                        v74 = 2;
                        v76 = (double)(((int)v143 + v32 - v28 - (int)v141) / 2);
                      }
                      else
                      {
                        v76 = *(float *)(v5 + 20);
                      }
                      v147 = v76;
                      if ( (*(_DWORD *)(v5 + 16) & 0x2000) != 0 )
                      {
                        v74 = 3;
                        v77 = (double)((v36 + v31 - v112 - v37) / 2);
                        v75 = 1;
                      }
                      else
                      {
                        v77 = *(float *)(v5 + 24);
                      }
                      v148 = v77;
                      if ( (*(_DWORD *)(v5 + 16) & 0x4000) != 0 )
                      {
                        v74 = 4;
                        v78 = v116 - v117;
                        v75 = 2;
                      }
                      else
                      {
                        v78 = *(float *)(v5 + 28);
                      }
                      v6 = v110;
                      LODWORD(v9) = v106;
                      v79 = *((_DWORD *)a2 + 4);
                      v80 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 4);
                      v149 = v78;
                      ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                              (__int64)v113,
                                              v80,
                                              v79,
                                              v106,
                                              v75,
                                              v23,
                                              v24,
                                              (double *)&v150,
                                              &v147,
                                              3u,
                                              v110,
                                              v74,
                                              0LL,
                                              0LL,
                                              0);
                      ThemeAnimationTransform = ThemeTimingFunction;
                      if ( ThemeTimingFunction < 0 )
                      {
                        v96 = 1013;
                        goto LABEL_161;
                      }
                    }
                  }
                }
                else
                {
                  if ( (v41 & 2) != 0 )
                  {
                    v81 = *(float *)(v5 + 28);
                    v108 = v81;
                    v82 = *(float *)(v5 + 32);
                    v109 = v82;
                  }
                  else
                  {
                    v108 = 0.0;
                    v109 = 0.0;
                    v82 = 0.0;
                    v81 = 0.0;
                  }
                  v83 = *(float *)(v5 + 20);
                  v114 = v83;
                  v84 = *(float *)(v5 + 24);
                  v115 = v84;
                  if ( v102 )
                  {
                    *(_QWORD *)&v108 = *(_QWORD *)&v81 ^ _xmm;
                    *(_QWORD *)&v109 = *(_QWORD *)&v82 ^ _xmm;
                    *(_QWORD *)&v114 = *(_QWORD *)&v83 ^ _xmm;
                    *(_QWORD *)&v115 = *(_QWORD *)&v84 ^ _xmm;
                  }
                  v85 = *((_QWORD *)a2 + 5);
                  v86 = (__m128)*(unsigned int *)(v5 + 40);
                  v87 = (__m128)*(unsigned int *)(v5 + 36);
                  v140 = 0;
                  v6 = v110;
                  LODWORD(v9) = v106;
                  v88 = *(_QWORD *)(v85 + 8 * v130);
                  v100 = v110;
                  *(_QWORD *)(v88 + 76) = _mm_unpacklo_ps(v87, v86).m128_u64[0];
                  *(_DWORD *)(v88 + 84) = 0;
                  ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                          (__int64)v113,
                                          *((struct IUIAnimationStoryboard2 **)a2 + 4),
                                          *((_DWORD *)a2 + 4),
                                          v106,
                                          3,
                                          v23,
                                          v24,
                                          &v108,
                                          &v114,
                                          2u,
                                          v100,
                                          0,
                                          0LL,
                                          0LL,
                                          0);
                  ThemeAnimationTransform = ThemeTimingFunction;
                  if ( ThemeTimingFunction < 0 )
                  {
                    v96 = 931;
                    goto LABEL_161;
                  }
                }
              }
              else
              {
                if ( (v41 & 1) != 0 )
                {
                  v46 = v135;
                  v45 = v123;
                }
                else
                {
                  if ( (v41 & 2) != 0 )
                    v45 = *(float *)(v5 + 24);
                  else
                    v45 = v123;
                  v46 = *(float *)(v5 + 20);
                }
                v6 = v110;
                LODWORD(v9) = v106;
                v47 = *((_DWORD *)a2 + 4);
                v48 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 4);
                v138[0] = v45;
                v137 = v46;
                ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                        (__int64)v113,
                                        v48,
                                        v47,
                                        v106,
                                        5,
                                        v23,
                                        v24,
                                        v138,
                                        &v137,
                                        1u,
                                        v110,
                                        0,
                                        0LL,
                                        0LL,
                                        0);
                ThemeAnimationTransform = ThemeTimingFunction;
                if ( ThemeTimingFunction < 0 )
                {
                  v96 = 1132;
                  goto LABEL_161;
                }
              }
            }
            else
            {
              if ( (v41 & 1) != 0 )
              {
                v108 = 1.0;
                v109 = 1.0;
                if ( v28 == (_DWORD)v141 )
                  v89 = FLOAT_1_0;
                else
                  v89 = (float)(v32 - v143) / (float)(v28 - v141);
                v114 = v89;
                if ( v112 == v37 )
                  v90 = FLOAT_1_0;
                else
                  v90 = (float)(v31 - v36) / (float)(v112 - v37);
                v115 = v90;
              }
              else
              {
                if ( (v41 & 2) != 0 )
                {
                  v108 = *(float *)(v5 + 28);
                  v109 = *(float *)(v5 + 32);
                }
                else
                {
                  v108 = 1.0;
                  v109 = 1.0;
                }
                v114 = *(float *)(v5 + 20);
                v115 = *(float *)(v5 + 24);
              }
              v129 = 0;
              if ( v125 )
              {
                v52 = *(_DWORD *)(v5 + 40);
                LODWORD(v128) = *(_DWORD *)(v5 + 36);
                HIDWORD(v128) = v52;
              }
              else
              {
                v128 = 0x3F0000003F000000LL;
              }
              v6 = v110;
              LODWORD(v9) = v106;
              v97 = v110;
              v53 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * v130);
              v54 = v129;
              *(_QWORD *)(v53 + 64) = v128;
              *(_DWORD *)(v53 + 72) = v54;
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      (__int64)v113,
                                      *((struct IUIAnimationStoryboard2 **)a2 + 4),
                                      *((_DWORD *)a2 + 4),
                                      v106,
                                      4,
                                      v23,
                                      v24,
                                      &v108,
                                      &v114,
                                      2u,
                                      v97,
                                      0,
                                      0LL,
                                      0LL,
                                      0);
              ThemeAnimationTransform = ThemeTimingFunction;
              if ( ThemeTimingFunction < 0 )
              {
                v96 = 893;
                goto LABEL_161;
              }
            }
          }
          else
          {
            if ( (v41 & 1) != 0 )
            {
              v108 = 0.0;
              v109 = 0.0;
              v114 = (double)(v35 - v118);
              v115 = (double)(v40 - v119);
            }
            v50 = v134;
            if ( v103 )
            {
              v91 = v132 + *(&v108 + v134);
              v132 = 0.0;
              *(&v108 + v134) = v91;
            }
            if ( v104 )
            {
              v92 = *(&v114 + v50) + v131;
              v131 = *(&v114 + v50);
              *(&v114 + v50) = v92;
            }
            v6 = v110;
            v51 = v113;
            LODWORD(v9) = v106;
            ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                    (__int64)v113,
                                    *((struct IUIAnimationStoryboard2 **)a2 + 4),
                                    *((_DWORD *)a2 + 4),
                                    v106,
                                    0,
                                    v23,
                                    v24,
                                    &v108,
                                    &v114,
                                    2u,
                                    v110,
                                    0,
                                    (double *)((unsigned __int64)&v132 & -(__int64)v103),
                                    (double *)((unsigned __int64)&v131 & -(__int64)v104),
                                    v50);
            ThemeAnimationTransform = ThemeTimingFunction;
            if ( ThemeTimingFunction < 0 )
            {
              v96 = 823;
              goto LABEL_161;
            }
            if ( v101 )
            {
              for ( j = 0LL; j < 4; ++j )
                v153[j] = (double)*((int *)v145 + j);
              for ( k = 0LL; k < 4; ++k )
                v152[k] = (double)*((int *)v146 + k);
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      (__int64)v51,
                                      *((struct IUIAnimationStoryboard2 **)a2 + 4),
                                      *((_DWORD *)a2 + 4),
                                      v106,
                                      6,
                                      v23,
                                      v24,
                                      v153,
                                      v152,
                                      4u,
                                      v6,
                                      0,
                                      0LL,
                                      0LL,
                                      0);
              ThemeAnimationTransform = ThemeTimingFunction;
              if ( ThemeTimingFunction < 0 )
              {
                v96 = 844;
                goto LABEL_161;
              }
            }
          }
          v16 = v105;
        }
      }
      v9 = (unsigned int)(v9 + 1);
      v106 = v9;
      if ( (unsigned int)v9 >= *((_DWORD *)a2 + 5) )
        goto LABEL_53;
    }
    v96 = 651;
LABEL_161:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeTimingFunction, v96);
LABEL_53:
    if ( v5 )
      (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v5);
LABEL_55:
    if ( v6 )
      (*(void (__fastcall **)(WPF::HeapBase *, struct TA_TIMINGFUNCTION *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v6);
  }
LABEL_57:
  if ( v124 )
    ((void (__fastcall *)(struct IUIAnimationStoryboard2 *))v124->lpVtbl->Release)(v124);
  return ThemeAnimationTransform;
}
