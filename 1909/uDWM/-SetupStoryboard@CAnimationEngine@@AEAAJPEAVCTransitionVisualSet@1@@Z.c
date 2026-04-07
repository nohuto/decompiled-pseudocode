/*
 * XREFs of ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x18000C08C
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x180011978 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z @ 0x1800098B0 (-SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z.c)
 *     ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z @ 0x18000A5C4 (-_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z.c)
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x18000A98C (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18000D424 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180020B94 (-RoundToNearestInt@@YAHM@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
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
  double *v97; // [rsp+30h] [rbp-D8h]
  struct TA_TIMINGFUNCTION *v98; // [rsp+58h] [rbp-B0h]
  struct TA_TIMINGFUNCTION *v99; // [rsp+58h] [rbp-B0h]
  struct TA_TIMINGFUNCTION *v100; // [rsp+58h] [rbp-B0h]
  struct TA_TIMINGFUNCTION *v101; // [rsp+58h] [rbp-B0h]
  char v102; // [rsp+88h] [rbp-80h]
  char v103; // [rsp+89h] [rbp-7Fh]
  bool v104; // [rsp+8Ah] [rbp-7Eh]
  bool v105; // [rsp+8Bh] [rbp-7Dh]
  unsigned int v106; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v107; // [rsp+90h] [rbp-78h]
  unsigned int v108; // [rsp+94h] [rbp-74h] BYREF
  double v109; // [rsp+98h] [rbp-70h] BYREF
  double v110; // [rsp+A0h] [rbp-68h]
  struct TA_TIMINGFUNCTION *v111; // [rsp+A8h] [rbp-60h]
  int v112; // [rsp+B0h] [rbp-58h] BYREF
  int v113; // [rsp+B4h] [rbp-54h]
  CAnimationEngine *v114; // [rsp+B8h] [rbp-50h]
  double v115; // [rsp+C0h] [rbp-48h] BYREF
  double v116; // [rsp+C8h] [rbp-40h]
  float v117; // [rsp+D0h] [rbp-38h] BYREF
  float v118; // [rsp+D4h] [rbp-34h] BYREF
  int v119; // [rsp+D8h] [rbp-30h]
  int v120; // [rsp+DCh] [rbp-2Ch]
  unsigned int i; // [rsp+E0h] [rbp-28h]
  unsigned int v122; // [rsp+E4h] [rbp-24h] BYREF
  float v123; // [rsp+E8h] [rbp-20h] BYREF
  float v124; // [rsp+ECh] [rbp-1Ch] BYREF
  struct IUIAnimationStoryboard2 *v125; // [rsp+F0h] [rbp-18h] BYREF
  int v126; // [rsp+F8h] [rbp-10h]
  __int64 v127; // [rsp+100h] [rbp-8h]
  int v128; // [rsp+108h] [rbp+0h]
  __int64 v129; // [rsp+110h] [rbp+8h]
  int v130; // [rsp+118h] [rbp+10h]
  __int64 v131; // [rsp+120h] [rbp+18h]
  double v132; // [rsp+128h] [rbp+20h] BYREF
  double v133; // [rsp+130h] [rbp+28h] BYREF
  unsigned int v134; // [rsp+138h] [rbp+30h] BYREF
  unsigned int v135; // [rsp+13Ch] [rbp+34h] BYREF
  float v136; // [rsp+140h] [rbp+38h] BYREF
  double v137; // [rsp+148h] [rbp+40h] BYREF
  double v138; // [rsp+150h] [rbp+48h] BYREF
  double v139[2]; // [rsp+158h] [rbp+50h] BYREF
  int v140; // [rsp+168h] [rbp+60h]
  int v141; // [rsp+178h] [rbp+70h]
  __int64 v142; // [rsp+180h] [rbp+78h] BYREF
  __int64 v143; // [rsp+188h] [rbp+80h]
  __int64 v144; // [rsp+190h] [rbp+88h] BYREF
  __int64 v145; // [rsp+198h] [rbp+90h]
  _QWORD v146[2]; // [rsp+1A0h] [rbp+98h] BYREF
  _QWORD v147[2]; // [rsp+1B0h] [rbp+A8h] BYREF
  double v148; // [rsp+1C0h] [rbp+B8h] BYREF
  double v149; // [rsp+1C8h] [rbp+C0h]
  double v150; // [rsp+1D0h] [rbp+C8h]
  __int128 v151; // [rsp+1D8h] [rbp+D0h] BYREF
  double v152; // [rsp+1E8h] [rbp+E0h]
  double v153[4]; // [rsp+1F0h] [rbp+E8h] BYREF
  double v154[4]; // [rsp+210h] [rbp+108h] BYREF

  v106 = *((_DWORD *)a2 + 7);
  v114 = this;
  v4 = *((_QWORD *)this + 1);
  v5 = 0LL;
  v125 = 0LL;
  v6 = 0LL;
  v111 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, struct IUIAnimationStoryboard2 **))(*(_QWORD *)v4 + 48LL))(v4, &v125);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v95 = 626;
LABEL_81:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v95, v97);
    goto LABEL_57;
  }
  CAnimationEngine::CTransitionVisualSet::SetStoryboard(a2, v125);
  v7 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, _QWORD))v125->lpVtbl->SetTag)(
         v125,
         0LL,
         *((unsigned int *)a2 + 4));
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v95 = 630;
    goto LABEL_81;
  }
  v7 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, CAnimationEngine *, _QWORD, _QWORD))v125->lpVtbl->SetStoryboardEventHandler)(
         v125,
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
  v107 = 0;
  if ( *((_DWORD *)a2 + 5) )
  {
    while ( 1 )
    {
      v142 = 0LL;
      v143 = 0LL;
      v144 = 0LL;
      v145 = 0LL;
      v146[0] = 0LL;
      v146[1] = 0LL;
      v147[0] = 0LL;
      v147[1] = 0LL;
      v10 = *((_QWORD *)a2 + 5);
      v131 = (unsigned int)v9;
      v11 = **(_QWORD **)(v10 + 8 * v9);
      v102 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 256LL))(v11);
      v103 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 136LL))(v11);
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 16LL))(v11, &v142);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
        break;
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v144);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v96 = 652;
        goto LABEL_161;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 32LL))(v11, &v118);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v96 = 653;
        goto LABEL_161;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 40LL))(v11, &v117);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v96 = 654;
        goto LABEL_161;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 48LL))(v11, &v124);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v96 = 655;
        goto LABEL_161;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 56LL))(v11, &v136);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v96 = 656;
        goto LABEL_161;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 64LL))(v11, &v134);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v96 = 657;
        goto LABEL_161;
      }
      if ( (*(int (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 112LL))(v11, &v123) < 0 )
        v123 = 0.0;
      if ( v102 )
      {
        ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 72LL))(v11, v146);
        ThemeAnimationTransform = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          v96 = 664;
          goto LABEL_161;
        }
        ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 80LL))(v11, v147);
        ThemeAnimationTransform = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          v96 = 665;
          goto LABEL_161;
        }
      }
      v133 = 0.0;
      v132 = 0.0;
      v13 = fmaxf(0.0099999998, 1.0 - v123);
      v104 = 0;
      v105 = 0;
      if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 88LL))(v11, &v135) >= 0 )
      {
        v104 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v11 + 96LL))(v11, &v133) >= 0;
        v105 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v11 + 104LL))(v11, &v132) >= 0;
      }
      v14 = **(_QWORD **)(*((_QWORD *)a2 + 5) + 8 * v9);
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 128LL))(v14, &v112);
      v122 = 0;
      v137 = 0.0;
      Theme = (void *)CDesktopManager::GetTheme(3LL);
      v16 = v106;
      CAnimationEngine::_CalculateStaggerDelay(v17, Theme, v106, v112, v134, &v137);
      v18 = CDesktopManager::GetTheme(3LL);
      if ( (int)GetThemeAnimationProperty(v18, v106, (unsigned int)v112, 1LL, &v122, 4, &v108) >= 0 )
      {
        for ( i = 0; i < v122; ++i )
        {
          v19 = CDesktopManager::GetTheme(3LL);
          ThemeAnimationTransform = GetThemeAnimationTransform(v19, v16, (unsigned int)v112, v20, 0LL, 0, &v108);
          if ( ThemeAnimationTransform != -2147024662 )
            continue;
          v21 = v108;
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
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2C8u, v97);
            goto LABEL_55;
          }
          v22 = CDesktopManager::GetTheme(3LL);
          ThemeTimingFunction = GetThemeAnimationTransform(v22, v16, (unsigned int)v112, i, v5, v21, &v108);
          ThemeAnimationTransform = ThemeTimingFunction;
          if ( ThemeTimingFunction < 0 )
          {
            v96 = 715;
            goto LABEL_161;
          }
          v23 = ((float)((float)*(int *)(v5 + 8) / 1000.0) + v137) * v13;
          v24 = (float)((float)((float)*(int *)(v5 + 12) / 1000.0) * v13);
          v25 = CDesktopManager::GetTheme(4LL);
          if ( (unsigned int)GetThemeTimingFunction(v25, *(unsigned int *)(v5 + 4), 0LL, 0LL, &v108) == -2147024662 )
          {
            v26 = v108;
            if ( v6 )
              (*(void (__fastcall **)(WPF::HeapBase *, struct TA_TIMINGFUNCTION *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                WPF::g_pProcessHeap,
                v6);
            v111 = (struct TA_TIMINGFUNCTION *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                 WPF::g_pProcessHeap,
                                                 v26);
            v6 = v111;
            if ( !v111 )
            {
              ThemeAnimationTransform = -2147024882;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2E2u, v97);
              goto LABEL_53;
            }
            v27 = CDesktopManager::GetTheme(4LL);
            ThemeTimingFunction = GetThemeTimingFunction(v27, *(unsigned int *)(v5 + 4), v6, (unsigned int)v26, &v108);
            ThemeAnimationTransform = ThemeTimingFunction;
            if ( ThemeTimingFunction < 0 )
            {
              v96 = 740;
              goto LABEL_161;
            }
          }
          v109 = 0.0;
          v110 = 0.0;
          v115 = 0.0;
          v116 = 0.0;
          v151 = 0uLL;
          v152 = 0.0;
          v148 = 0.0;
          v149 = 0.0;
          v150 = 0.0;
          memset_0(v154, 0, sizeof(v154));
          memset_0(v153, 0, sizeof(v153));
          v28 = v143;
          v29 = v142;
          v119 = RoundToNearestInt((float)(v143 + v142) * 0.5);
          v113 = HIDWORD(v143);
          v30 = RoundToNearestInt((float)(HIDWORD(v143) + HIDWORD(v142)) * 0.5);
          v31 = HIDWORD(v145);
          v32 = v145;
          v120 = v30;
          if ( v102 )
            goto LABEL_35;
          v33 = 0;
          if ( (int)v145 - (int)v144 >= 0 )
            v33 = v145 - v144;
          v34 = 0;
          if ( v28 - v29 >= 0 )
            v34 = v28 - v29;
          if ( v34 == v33 )
          {
LABEL_35:
            v35 = v144 + v119 - v142;
            if ( v102 )
            {
              v37 = HIDWORD(v142);
              v36 = HIDWORD(v144);
              goto LABEL_41;
            }
          }
          else
          {
            v35 = RoundToNearestInt((float)(v145 + v144) * 0.5);
          }
          v36 = HIDWORD(v144);
          v37 = HIDWORD(v142);
          v38 = 0;
          if ( v31 - HIDWORD(v144) >= 0 )
            v38 = v31 - HIDWORD(v144);
          v39 = 0;
          if ( v113 - HIDWORD(v142) >= 0 )
            v39 = v113 - HIDWORD(v142);
          if ( v39 != v38 )
          {
            v55 = RoundToNearestInt((float)(v31 + HIDWORD(v144)) * 0.5);
            v37 = HIDWORD(v142);
            v40 = v55;
            v36 = HIDWORD(v144);
            goto LABEL_42;
          }
LABEL_41:
          v40 = v36 + v120 - v37;
LABEL_42:
          v41 = *(_DWORD *)(v5 + 16);
          v42 = *(_DWORD *)v5;
          v126 = v41 & 4;
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
                          *(double *)&v151 = v59;
                          v60 = *(float *)(v5 + 36);
                          *((double *)&v151 + 1) = v60;
                          v61 = *(float *)(v5 + 40);
                        }
                        else
                        {
                          v151 = 0LL;
                          v60 = 0.0;
                          v61 = 0.0;
                          v59 = 0.0;
                        }
                        v152 = v61;
                        v62 = *(float *)(v5 + 20);
                        v148 = v62;
                        v63 = *(float *)(v5 + 24);
                        v149 = v63;
                        v64 = *(float *)(v5 + 28);
                        v150 = v64;
                        if ( v103 )
                        {
                          *(_QWORD *)&v151 = *(_QWORD *)&v59 ^ _xmm;
                          *((_QWORD *)&v151 + 1) = *(_QWORD *)&v60 ^ _xmm;
                          *(_QWORD *)&v152 = *(_QWORD *)&v61 ^ _xmm;
                          *(_QWORD *)&v148 = *(_QWORD *)&v62 ^ _xmm;
                          *(_QWORD *)&v149 = *(_QWORD *)&v63 ^ _xmm;
                          *(_QWORD *)&v150 = *(_QWORD *)&v64 ^ _xmm;
                        }
                        v65 = (__m128)*(unsigned int *)(v5 + 48);
                        v6 = v111;
                        LODWORD(v9) = v107;
                        v99 = v111;
                        v66 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * v131);
                        v140 = *(_DWORD *)(v5 + 52);
                        v67 = v140;
                        *(_QWORD *)(v66 + 76) = _mm_unpacklo_ps((__m128)*(unsigned int *)(v5 + 44), v65).m128_u64[0];
                        *(_DWORD *)(v66 + 84) = v67;
                        ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                                (__int64)v114,
                                                *((struct IUIAnimationStoryboard2 **)a2 + 4),
                                                *((_DWORD *)a2 + 4),
                                                v107,
                                                3,
                                                v23,
                                                v24,
                                                (double *)&v151,
                                                &v148,
                                                3u,
                                                v99,
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
                        v6 = v111;
                        LODWORD(v9) = v107;
                      }
                    }
                    else
                    {
                      if ( (v41 & 1) != 0 )
                      {
                        v152 = v118;
                        *(double *)&v151 = (double)(v28 - (int)v142);
                        *((double *)&v151 + 1) = (double)(v113 - v37);
                        v150 = v117;
                        v148 = (double)(v32 - (int)v144);
                        v149 = (double)(v31 - v36);
                      }
                      else
                      {
                        if ( (v41 & 2) != 0 )
                        {
                          *(double *)&v151 = *(float *)(v5 + 32);
                          *((double *)&v151 + 1) = *(float *)(v5 + 36);
                          v152 = *(float *)(v5 + 40);
                        }
                        else
                        {
                          v151 = _xmm;
                          v152 = DOUBLE_1_0;
                        }
                        v148 = *(float *)(v5 + 20);
                        v149 = *(float *)(v5 + 24);
                        v150 = *(float *)(v5 + 28);
                      }
                      if ( v126 )
                      {
                        v68 = *(_DWORD *)(v5 + 48);
                        LODWORD(v127) = *(_DWORD *)(v5 + 44);
                        v128 = *(_DWORD *)(v5 + 52);
                        HIDWORD(v127) = v68;
                      }
                      else
                      {
                        v128 = 0;
                        v127 = 0x3F0000003F000000LL;
                      }
                      v6 = v111;
                      LODWORD(v9) = v107;
                      v100 = v111;
                      v69 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * v131);
                      v70 = v128;
                      *(_QWORD *)(v69 + 64) = v127;
                      *(_DWORD *)(v69 + 72) = v70;
                      ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                              (__int64)v114,
                                              *((struct IUIAnimationStoryboard2 **)a2 + 4),
                                              *((_DWORD *)a2 + 4),
                                              v107,
                                              4,
                                              v23,
                                              v24,
                                              (double *)&v151,
                                              &v148,
                                              3u,
                                              v100,
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
                    v152 = 0.0;
                    v151 = 0LL;
                    if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
                    {
                      v6 = v111;
                      LODWORD(v9) = v107;
                      v71 = *((_DWORD *)a2 + 4);
                      v148 = (double)(v35 - v119);
                      v72 = _mm_cvtsi32_si128(v40 - v120);
                      v73 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 4);
                      *(_QWORD *)&v149 = *(_OWORD *)&_mm_cvtepi32_pd(v72);
                      v150 = (float)(v117 - v118);
                      ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                              (__int64)v114,
                                              v73,
                                              v71,
                                              v107,
                                              0,
                                              v23,
                                              v24,
                                              (double *)&v151,
                                              &v148,
                                              3u,
                                              v111,
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
                        v76 = (double)(((int)v144 + v32 - v28 - (int)v142) / 2);
                      }
                      else
                      {
                        v76 = *(float *)(v5 + 20);
                      }
                      v148 = v76;
                      if ( (*(_DWORD *)(v5 + 16) & 0x2000) != 0 )
                      {
                        v74 = 3;
                        v77 = (double)((v36 + v31 - v113 - v37) / 2);
                        v75 = 1;
                      }
                      else
                      {
                        v77 = *(float *)(v5 + 24);
                      }
                      v149 = v77;
                      if ( (*(_DWORD *)(v5 + 16) & 0x4000) != 0 )
                      {
                        v74 = 4;
                        v78 = v117 - v118;
                        v75 = 2;
                      }
                      else
                      {
                        v78 = *(float *)(v5 + 28);
                      }
                      v6 = v111;
                      LODWORD(v9) = v107;
                      v79 = *((_DWORD *)a2 + 4);
                      v80 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 4);
                      v150 = v78;
                      ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                              (__int64)v114,
                                              v80,
                                              v79,
                                              v107,
                                              v75,
                                              v23,
                                              v24,
                                              (double *)&v151,
                                              &v148,
                                              3u,
                                              v111,
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
                    v109 = v81;
                    v82 = *(float *)(v5 + 32);
                    v110 = v82;
                  }
                  else
                  {
                    v109 = 0.0;
                    v110 = 0.0;
                    v82 = 0.0;
                    v81 = 0.0;
                  }
                  v83 = *(float *)(v5 + 20);
                  v115 = v83;
                  v84 = *(float *)(v5 + 24);
                  v116 = v84;
                  if ( v103 )
                  {
                    *(_QWORD *)&v109 = *(_QWORD *)&v81 ^ _xmm;
                    *(_QWORD *)&v110 = *(_QWORD *)&v82 ^ _xmm;
                    *(_QWORD *)&v115 = *(_QWORD *)&v83 ^ _xmm;
                    *(_QWORD *)&v116 = *(_QWORD *)&v84 ^ _xmm;
                  }
                  v85 = *((_QWORD *)a2 + 5);
                  v86 = (__m128)*(unsigned int *)(v5 + 40);
                  v87 = (__m128)*(unsigned int *)(v5 + 36);
                  v141 = 0;
                  v6 = v111;
                  LODWORD(v9) = v107;
                  v88 = *(_QWORD *)(v85 + 8 * v131);
                  v101 = v111;
                  *(_QWORD *)(v88 + 76) = _mm_unpacklo_ps(v87, v86).m128_u64[0];
                  *(_DWORD *)(v88 + 84) = 0;
                  ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                          (__int64)v114,
                                          *((struct IUIAnimationStoryboard2 **)a2 + 4),
                                          *((_DWORD *)a2 + 4),
                                          v107,
                                          3,
                                          v23,
                                          v24,
                                          &v109,
                                          &v115,
                                          2u,
                                          v101,
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
                  v46 = v136;
                  v45 = v124;
                }
                else
                {
                  if ( (v41 & 2) != 0 )
                    v45 = *(float *)(v5 + 24);
                  else
                    v45 = v124;
                  v46 = *(float *)(v5 + 20);
                }
                v6 = v111;
                LODWORD(v9) = v107;
                v47 = *((_DWORD *)a2 + 4);
                v48 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 4);
                v139[0] = v45;
                v138 = v46;
                ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                        (__int64)v114,
                                        v48,
                                        v47,
                                        v107,
                                        5,
                                        v23,
                                        v24,
                                        v139,
                                        &v138,
                                        1u,
                                        v111,
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
                v109 = 1.0;
                v110 = 1.0;
                if ( v28 == (_DWORD)v142 )
                  v89 = FLOAT_1_0;
                else
                  v89 = (float)(v32 - v144) / (float)(v28 - v142);
                v115 = v89;
                if ( v113 == v37 )
                  v90 = FLOAT_1_0;
                else
                  v90 = (float)(v31 - v36) / (float)(v113 - v37);
                v116 = v90;
              }
              else
              {
                if ( (v41 & 2) != 0 )
                {
                  v109 = *(float *)(v5 + 28);
                  v110 = *(float *)(v5 + 32);
                }
                else
                {
                  v109 = 1.0;
                  v110 = 1.0;
                }
                v115 = *(float *)(v5 + 20);
                v116 = *(float *)(v5 + 24);
              }
              v130 = 0;
              if ( v126 )
              {
                v52 = *(_DWORD *)(v5 + 40);
                LODWORD(v129) = *(_DWORD *)(v5 + 36);
                HIDWORD(v129) = v52;
              }
              else
              {
                v129 = 0x3F0000003F000000LL;
              }
              v6 = v111;
              LODWORD(v9) = v107;
              v98 = v111;
              v53 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * v131);
              v54 = v130;
              *(_QWORD *)(v53 + 64) = v129;
              *(_DWORD *)(v53 + 72) = v54;
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      (__int64)v114,
                                      *((struct IUIAnimationStoryboard2 **)a2 + 4),
                                      *((_DWORD *)a2 + 4),
                                      v107,
                                      4,
                                      v23,
                                      v24,
                                      &v109,
                                      &v115,
                                      2u,
                                      v98,
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
              v109 = 0.0;
              v110 = 0.0;
              v115 = (double)(v35 - v119);
              v116 = (double)(v40 - v120);
            }
            v50 = v135;
            if ( v104 )
            {
              v91 = v133 + *(&v109 + v135);
              v133 = 0.0;
              *(&v109 + v135) = v91;
            }
            if ( v105 )
            {
              v92 = *(&v115 + v50) + v132;
              v132 = *(&v115 + v50);
              *(&v115 + v50) = v92;
            }
            v6 = v111;
            v51 = v114;
            LODWORD(v9) = v107;
            ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                    (__int64)v114,
                                    *((struct IUIAnimationStoryboard2 **)a2 + 4),
                                    *((_DWORD *)a2 + 4),
                                    v107,
                                    0,
                                    v23,
                                    v24,
                                    &v109,
                                    &v115,
                                    2u,
                                    v111,
                                    0,
                                    (double *)((unsigned __int64)&v133 & -(__int64)v104),
                                    (double *)((unsigned __int64)&v132 & -(__int64)v105),
                                    v50);
            ThemeAnimationTransform = ThemeTimingFunction;
            if ( ThemeTimingFunction < 0 )
            {
              v96 = 823;
              goto LABEL_161;
            }
            if ( v102 )
            {
              for ( j = 0LL; j < 4; ++j )
                v154[j] = (double)*((int *)v146 + j);
              for ( k = 0LL; k < 4; ++k )
                v153[k] = (double)*((int *)v147 + k);
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      (__int64)v51,
                                      *((struct IUIAnimationStoryboard2 **)a2 + 4),
                                      *((_DWORD *)a2 + 4),
                                      v107,
                                      6,
                                      v23,
                                      v24,
                                      v154,
                                      v153,
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
          v16 = v106;
        }
      }
      v9 = (unsigned int)(v9 + 1);
      v107 = v9;
      if ( (unsigned int)v9 >= *((_DWORD *)a2 + 5) )
        goto LABEL_53;
    }
    v96 = 651;
LABEL_161:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeTimingFunction, v96, v97);
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
  if ( v125 )
    ((void (__fastcall *)(struct IUIAnimationStoryboard2 *))v125->lpVtbl->Release)(v125);
  return ThemeAnimationTransform;
}
