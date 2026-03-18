/*
 * XREFs of ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18005D0C0
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18005C990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x18000680C (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180050F4C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x18005C8C8 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DCD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18007B0E0 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18007D9D4 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18007DF3C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AF4EC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800AFA64 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4Reporting.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800E5664 (--0CThreadContext@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x18016BAF0 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@XZ @ 0x18016E3BC (-GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimat.c)
 *     ?SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@@Z @ 0x1801C3198 (-SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnima.c)
 *     ?_Tidy@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@IEAAXXZ @ 0x1801C3738 (-_Tidy@-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V-$c.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CDrawingContext>(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        int a5)
{
  __int64 v8; // r15
  void *v9; // r12
  int v10; // eax
  unsigned __int64 v11; // rcx
  int v12; // r13d
  unsigned int v13; // r9d
  CVisual *v14; // r12
  int v15; // eax
  int v16; // eax
  __int64 v17; // rbx
  int v18; // eax
  int v19; // edx
  int v20; // r8d
  int v21; // ecx
  _QWORD *v22; // rax
  unsigned int v23; // edx
  int v24; // eax
  int v25; // eax
  unsigned int v26; // r8d
  __int64 v27; // rdx
  __int64 v28; // r11
  unsigned __int64 *v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // r15
  __int64 v33; // r14
  __int64 v34; // rcx
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // ecx
  int v38; // ebx
  __int64 v39; // r8
  __int64 v40; // r11
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r9
  int v44; // eax
  int v45; // eax
  void *v46; // rdx
  int v47; // r8d
  __int64 v48; // rcx
  _QWORD *Value; // r14
  __int64 v50; // rax
  unsigned __int64 v51; // rbx
  unsigned __int64 *v52; // rsi
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  int v55; // eax
  int v56; // eax
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int128 v62; // xmm0
  __int64 v63; // xmm1_8
  int v64; // eax
  int v65; // eax
  __int128 v66; // xmm0
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // r15
  __int64 v70; // r14
  char v71; // r12
  void (__fastcall ***v72)(_QWORD, __int64); // rcx
  void (__fastcall ***v73)(_QWORD, __int64); // rcx
  __int64 v74; // rcx
  int v75; // eax
  int v76; // r8d
  int v77; // eax
  __int128 v78; // xmm6
  int v79; // eax
  __int64 v80; // r9
  __int64 v81; // r8
  __int64 v82; // rax
  _BYTE *v83; // rdx
  __int64 i; // rcx
  _QWORD **v85; // rax
  _QWORD *v86; // rax
  _QWORD *v87; // rdx
  int v88; // eax
  unsigned int v89; // ecx
  int v90; // r14d
  __int64 v91; // rbx
  __int64 v92; // rcx
  __int64 v93; // rax
  float v94; // xmm0_4
  float v95; // xmm0_4
  float v96; // xmm3_4
  float v97; // xmm0_4
  float v98; // xmm2_4
  float v99; // xmm0_4
  float v100; // xmm1_4
  unsigned int v101; // r13d
  int v102; // eax
  unsigned __int64 v103; // rax
  void *v104; // rbx
  unsigned __int64 v105; // rbx
  _QWORD *v106; // rcx
  __int64 v107; // rbx
  void *v108; // r13
  HANDLE ProcessHeap; // rax
  __int64 v110; // rcx
  int v111; // eax
  unsigned int v112; // ecx
  int v113; // eax
  _QWORD *DirtyRegionVisualizationData; // r14
  int v115; // r11d
  CThreadContext *v116; // rax
  unsigned int v117; // ecx
  CThreadContext *v118; // rax
  int v119; // eax
  unsigned int v120; // [rsp+28h] [rbp-91h]
  bool v121; // [rsp+38h] [rbp-81h] BYREF
  void *v122; // [rsp+40h] [rbp-79h]
  __int64 v123; // [rsp+48h] [rbp-71h]
  void *lpMem[2]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v125; // [rsp+60h] [rbp-59h]
  int v126; // [rsp+68h] [rbp-51h]
  __int128 v127; // [rsp+70h] [rbp-49h]
  struct CTreeData *v128; // [rsp+80h] [rbp-39h] BYREF
  __int128 v129; // [rsp+88h] [rbp-31h] BYREF

  v8 = a2;
  v123 = a2;
  wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::ReportUsageToService();
  v9 = 0LL;
  *(_QWORD *)(a1 + 64) = v8;
  v122 = 0LL;
  *(_DWORD *)(a1 + 72) = a5;
  v10 = CThreadContext::RegisterGraphWalkRoot(a3);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x40u, 0LL);
  }
  else
  {
    v9 = a3;
    v122 = a3;
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 8) = a3;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
  }
  v13 = -1;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, 0xC5u, 0LL);
    goto LABEL_86;
  }
  v14 = *(CVisual **)(a1 + 8);
  while ( 1 )
  {
    while ( (*((_BYTE *)v14 + 95) & 4) != 0 || v14 == *(CVisual **)(v8 + 24) )
    {
      v15 = CVisual::EnsureTreeData(v14, (const struct CVisualTree *)v8, &v128);
      v12 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, v15, 0xD7u, 0LL);
        goto LABEL_85;
      }
      v16 = CDrawingContext::PreSubgraph((CDrawingContext *)a4, (const struct CVisualTree *)v8, &v121);
      v12 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, v16, 0xDBu, 0LL);
        goto LABEL_85;
      }
      if ( !v121 )
        goto LABEL_9;
      v32 = 0LL;
      v33 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
      if ( (v33 & 2) != 0 )
        v33 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v33) = v33 & 1;
      if ( !(_DWORD)v33 )
      {
        v12 = 1;
        goto LABEL_74;
      }
      v34 = *(unsigned int *)(a1 + 36);
      *(_QWORD *)&v127 = *(_QWORD *)(a1 + 16);
      DWORD2(v127) = *(_DWORD *)(a1 + 24);
      v35 = *(_DWORD *)(a1 + 32);
      lpMem[0] = 0LL;
      if ( v35 != (_DWORD)v34 )
        goto LABEL_59;
      v101 = 2 * v34;
      if ( (unsigned __int64)(2 * v34) > 0xFFFFFFFF )
      {
        v38 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, -2147024362, 0x4Cu, 0LL);
        v12 = -2147024362;
LABEL_199:
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v38, 0x8Bu, 0LL);
        goto LABEL_74;
      }
      if ( v101 <= 0x40 )
        v101 = 64;
      v102 = HrMalloc(0x10uLL, v101, lpMem);
      v38 = v102;
      if ( v102 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, v102, 0x53u, 0LL);
      }
      else
      {
        v103 = 16LL * *(unsigned int *)(a1 + 32);
        if ( v103 <= 0xFFFFFFFF )
        {
          v104 = lpMem[0];
          memcpy_0(lpMem[0], *(const void **)(a1 + 48), (unsigned int)v103);
          operator delete(*(void **)(a1 + 48));
          v35 = *(_DWORD *)(a1 + 32);
          *(_QWORD *)(a1 + 48) = v104;
          *(_DWORD *)(a1 + 36) = v101;
LABEL_59:
          *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * v35) = v127;
          v36 = *(_DWORD *)(a1 + 56);
          v37 = *(_DWORD *)(a1 + 32) + 1;
          *(_DWORD *)(a1 + 32) = v37;
          if ( v36 <= v37 )
            v36 = v37;
          v38 = 0;
          *(_DWORD *)(a1 + 56) = v36;
          goto LABEL_62;
        }
        v38 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024362, 0x55u, 0LL);
      }
      v108 = lpMem[0];
      if ( lpMem[0] )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v108);
      }
LABEL_62:
      v12 = v38;
      if ( v38 < 0 )
        goto LABEL_199;
      if ( *(_DWORD *)(a1 + 28) == 1 )
        v39 = 0LL;
      else
        v39 = (unsigned int)(v33 - 1);
      *(_DWORD *)(a1 + 24) = v39;
      v40 = *(_QWORD *)(a1 + 8);
      v41 = *(_QWORD *)(v40 + 72) & 2LL;
      v42 = *(_QWORD *)(v40 + 72) & 1LL;
      v11 = *(_QWORD *)(v40 + 72) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v41 )
        v43 = *(_QWORD *)v11;
      else
        v43 = (unsigned int)v42;
      if ( v43 <= (unsigned int)v39 )
        goto LABEL_201;
      if ( v41 )
        v42 = *(_QWORD *)v11;
      if ( (unsigned int)v39 >= v42 )
      {
LABEL_201:
        v32 = 0LL;
      }
      else if ( v42 == 1 )
      {
        v32 = *(_QWORD *)(v40 + 72) & 0xFFFFFFFFFFFFFFFCuLL;
      }
      else
      {
        v32 = *(_QWORD *)(v11 + 8 * v39 + 16);
      }
      ++*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 16) = v40;
      *(_QWORD *)(a1 + 8) = v32;
LABEL_74:
      if ( v12 < 0 )
      {
        v120 = 234;
        goto LABEL_230;
      }
      v13 = -1;
      if ( !v32 )
      {
        v8 = v123;
        break;
      }
      v14 = (CVisual *)v32;
      v8 = v123;
    }
LABEL_10:
    if ( (*((_BYTE *)v14 + 95) & 4) == 0 && v14 != *(CVisual **)(v8 + 24) )
      goto LABEL_38;
    v12 = 0;
    v17 = 0LL;
    if ( *(_BYTE *)(a4 + 6048) )
    {
      if ( *(_BYTE *)(a4 + 6049) )
        v17 = *(_QWORD *)(a4 + 3336);
      else
        v17 = *(_QWORD *)(*(_QWORD *)(a4 + 6056) + 24LL);
    }
    if ( (*(_BYTE *)(v17 + 94) & 8) == 0 && *(char *)(v17 + 88) < 0 )
    {
      if ( !v8 )
        goto LABEL_18;
      if ( *(_BYTE *)(v8 + 32) )
        goto LABEL_18;
      v80 = *(_QWORD *)(v17 + 16);
      if ( !v80 )
        goto LABEL_18;
      v81 = *(_QWORD *)(v17 + 224);
      if ( *(int *)v81 >= 0 )
        goto LABEL_18;
      v82 = *(unsigned int *)(v81 + 4);
      v83 = (_BYTE *)(v81 + 8);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v82; ++v83 )
      {
        if ( *v83 == 1 )
          break;
        i = (unsigned int)(i + 1);
      }
      v85 = (unsigned int)i >= (unsigned int)v82 ? 0LL : (_QWORD **)(v82 + 15 + v81 + 8 * i - (((_BYTE)v82 + 15) & 7));
      v86 = *v85;
      if ( !v86 )
        goto LABEL_18;
      v87 = (_QWORD *)*v86;
      if ( (_QWORD *)*v86 == v86 )
        goto LABEL_18;
      while ( 1 )
      {
        v11 = (unsigned __int64)(v87 - 28);
        if ( v87[4] == v8 )
          break;
        v87 = (_QWORD *)*v87;
        if ( v87 == v86 )
          goto LABEL_18;
      }
      if ( v87 == (_QWORD *)224 || (*(_BYTE *)(v11 + 16) & 4) == 0 || *(_QWORD *)(v11 + 216) != *(_QWORD *)(v80 + 384) )
      {
LABEL_18:
        if ( *(_BYTE *)(a4 + 6352) )
        {
          v18 = *(_DWORD *)(a4 + 3296);
          if ( v18 )
          {
            if ( *(_BYTE *)((unsigned int)(v18 - 1) + *(_QWORD *)(a4 + 3312)) )
              CVisual::RenderProjectedShadows(v17, (struct CDrawingContext *)a4, 0);
          }
        }
        if ( (*(_BYTE *)(v17 + 93) & 0x60) != 0 )
        {
          v110 = *(_QWORD *)(a4 + 32);
          v111 = *(_DWORD *)(v110 + 1104);
          if ( v111 )
            *(_DWORD *)(v110 + 1104) = v111 - 1;
        }
LABEL_23:
        v13 = -1;
        while ( 1 )
        {
          v19 = *(_DWORD *)(a4 + 448);
          if ( !v19 )
            break;
          v20 = v19 - 1;
          if ( _mm_srli_si128(*(__m128i *)(*(_QWORD *)(a4 + 464) + 16LL * (unsigned int)(v19 - 1)), 8).m128i_u64[0] != v17 )
            break;
          v44 = *(_DWORD *)(*(_QWORD *)(a4 + 464) + 16LL * (unsigned int)(v19 - 1));
          if ( v44 == 8 )
          {
            *(_DWORD *)(a4 + 448) = v20;
            v58 = *(_DWORD *)(a4 + 976);
            if ( v58 )
            {
              v59 = (unsigned int)(v58 - 1);
              v60 = 28 * v59;
              *(_DWORD *)(a4 + 976) = v59;
              v61 = *(_QWORD *)(a4 + 992);
              v62 = *(_OWORD *)(v60 + v61);
              v63 = *(_QWORD *)(v60 + v61 + 16);
              LODWORD(v61) = *(_DWORD *)(v60 + v61 + 24);
              *(_OWORD *)lpMem = v62;
              v126 = v61;
              v125 = v63;
            }
            *(_BYTE *)(a4 + 268) = v126;
            *(void **)(a4 + 248) = lpMem[0];
            *(_DWORD *)(a4 + 276) = lpMem[1];
            *(_DWORD *)(a4 + 256) = HIDWORD(lpMem[1]);
            *(_QWORD *)(a4 + 260) = v125;
          }
          else
          {
            switch ( v44 )
            {
              case 1:
                *(_DWORD *)(a4 + 448) = v20;
                v67 = *(_DWORD *)(a4 + 3232);
                if ( v67 )
                  *(_DWORD *)(a4 + 3232) = v67 - 1;
                v68 = 10LL * (unsigned int)(*(_DWORD *)(a4 + 1032) - 1);
                *(_DWORD *)(*(_QWORD *)(a4 + 1008) + 8 * v68) += v13;
                *(_BYTE *)(a4 + 6345) = 1;
                continue;
              case 2:
                *(_DWORD *)(a4 + 448) = v20;
                v69 = *(_QWORD *)(a4 + 1840);
                v70 = 136LL * (unsigned int)(*(_DWORD *)(a4 + 1864) - 1);
                v71 = *(_BYTE *)(v70 + v69 + 128);
                if ( *(_BYTE *)(v70 + v69 + 8) )
                {
                  v72 = *(void (__fastcall ****)(_QWORD, __int64))(v70 + v69);
                  if ( v72 )
                  {
                    (**v72)(v72, 1LL);
                    v13 = -1;
                  }
                }
                *(_QWORD *)(v70 + v69) = 0LL;
                *(_BYTE *)(v70 + v69 + 8) = 0;
                v73 = *(void (__fastcall ****)(_QWORD, __int64))(v70 + v69 + 88);
                if ( v73 )
                {
                  (**v73)(v73, 1LL);
                  v13 = -1;
                }
                *(_DWORD *)(a4 + 1864) += v13;
                v74 = 10LL * (unsigned int)(*(_DWORD *)(a4 + 1032) - 1);
                *(_DWORD *)(*(_QWORD *)(a4 + 1008) + 8 * v74 + 4) += v13;
                if ( !v71 )
                  continue;
                if ( *(_BYTE *)(a4 + 6346) )
                {
                  v75 = *(_DWORD *)(a4 + 1032);
                  if ( !v75
                    || !*(_DWORD *)(*(_QWORD *)(a4 + 1008) + 80LL * (unsigned int)(v75 - 1) + 4)
                    || (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(
                                          *(_QWORD *)(a4 + 1840)
                                        + 96LL
                                        + 136LL * (unsigned int)(*(_DWORD *)(a4 + 1864) - 1)) )
                  {
                    *(_BYTE *)(a4 + 6346) = 0;
                  }
                }
                v76 = *(_DWORD *)(a4 + 1032);
                if ( v76 && *(_DWORD *)(*(_QWORD *)(a4 + 1008) + 80LL * (unsigned int)(v76 - 1)) )
                {
                  v77 = *(_DWORD *)(a4 + 3232);
                  if ( v77 )
                  {
                    v78 = *(_OWORD *)(*(_QWORD *)(a4 + 3248) + 16LL * (unsigned int)(v77 - 1));
                    v129 = v78;
                    goto LABEL_136;
                  }
                  DWORD1(v129) = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
                  HIDWORD(v129) = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
                }
                else
                {
                  DWORD1(v129) = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
                  HIDWORD(v129) = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
                }
                LODWORD(v78) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                DWORD2(v129) = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
                LODWORD(v129) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
LABEL_136:
                if ( v76 && *(_DWORD *)(*(_QWORD *)(a4 + 1008) + 80LL * (unsigned int)(v76 - 1) + 4) )
                {
                  v92 = 136LL * (unsigned int)(*(_DWORD *)(a4 + 1864) - 1);
                  v93 = *(_QWORD *)(a4 + 1840);
                  v94 = *(float *)(v92 + v93 + 96);
                  if ( v94 > *(float *)&v78 )
                  {
                    LODWORD(v129) = *(_DWORD *)(v92 + v93 + 96);
                    *(float *)&v78 = v94;
                  }
                  v95 = *(float *)(v92 + v93 + 100);
                  v96 = *((float *)&v129 + 1);
                  if ( v95 > *((float *)&v129 + 1) )
                  {
                    DWORD1(v129) = *(_DWORD *)(v92 + v93 + 100);
                    v96 = v95;
                  }
                  v97 = *(float *)(v92 + v93 + 104);
                  v98 = *((float *)&v129 + 2);
                  if ( *((float *)&v129 + 2) > v97 )
                  {
                    DWORD2(v129) = *(_DWORD *)(v92 + v93 + 104);
                    v98 = v97;
                  }
                  v99 = *(float *)(v92 + v93 + 108);
                  v100 = *((float *)&v129 + 3);
                  if ( *((float *)&v129 + 3) > v99 )
                  {
                    HIDWORD(v129) = *(_DWORD *)(v92 + v93 + 108);
                    v100 = v99;
                  }
                  if ( v98 <= *(float *)&v78 || v100 <= v96 )
                    v129 = 0uLL;
                }
                if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(a4 + 144, &v129) )
                  *(_BYTE *)(a4 + 6345) = 1;
                break;
              case 3:
                *(_DWORD *)(a4 + 448) = v20;
                *(_DWORD *)(a4 + 1032) += v13;
                continue;
              case 4:
                *(_DWORD *)(a4 + 448) = v20;
                v64 = *(_DWORD *)(a4 + 480);
                if ( v64 )
                  *(_DWORD *)(a4 + 480) = v64 - 1;
                v65 = *(_DWORD *)(a4 + 512);
                if ( v65 )
                  *(_DWORD *)(a4 + 512) = v65 - 1;
                *(_BYTE *)(a4 + 6344) = 1;
                continue;
              case 5:
              case 6:
                v88 = CDrawingContext::PopLayer((CDrawingContext *)a4);
                v90 = v88;
                if ( v88 >= 0 )
                  goto LABEL_23;
                MilInstrumentationCheckHR_MaybeFailFast(v89, 0LL, 0, v88, 0x1862u, 0LL);
                MilInstrumentationCheckHR_MaybeFailFast(v112, 0LL, 0, v90, 0x1331u, 0LL);
                v13 = -1;
                goto LABEL_26;
              case 7:
                *(_DWORD *)(a4 + 448) = v20;
                v79 = *(_DWORD *)(a4 + 3264);
                if ( v79 )
                  *(_DWORD *)(a4 + 3264) = v79 - 1;
                continue;
              case 9:
                *(_DWORD *)(a4 + 448) = v20;
                v66 = *(_OWORD *)(*(_QWORD *)(a4 + 672) + 16LL * (unsigned int)--*(_DWORD *)(a4 + 696));
                if ( !(_QWORD)v66 )
                  continue;
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v66 + 16LL))(v66);
                goto LABEL_23;
              case 10:
                *(_DWORD *)(a4 + 448) = v20;
                *(_DWORD *)(a4 + 936) += v13;
                continue;
              default:
                continue;
            }
          }
        }
LABEL_26:
        if ( *(_QWORD *)(a4 + 6296) == v17 )
          *(_QWORD *)(a4 + 6296) = 0LL;
        v21 = *(_DWORD *)(a4 + 3480);
        v22 = 0LL;
        if ( v21 )
        {
          v23 = v21 - 1;
          v22 = (_QWORD *)(*(_QWORD *)(a4 + 3496) + 16LL * (unsigned int)(v21 - 1));
        }
        else
        {
          v23 = v13;
        }
        if ( *v22 == v17 && v21 )
          *(_DWORD *)(a4 + 3480) = v23;
        LODWORD(v11) = *(unsigned __int8 *)(v17 + 93);
        LOBYTE(v11) = v11 & 8;
        if ( (_BYTE)v11 && *(_BYTE *)(*(_QWORD *)(a4 + 6056) + 32LL) )
        {
          v113 = CDrawingContext::DrawDirtyRegionVisualizationForCurrentNode((CDrawingContext *)a4);
          v12 = v113;
          if ( v113 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, v113, 0x2060u, 0LL);
        }
        else
        {
          if ( (_BYTE)v11 || (**(_DWORD **)(v17 + 224) & 0x40000) == 0 )
          {
            v8 = v123;
            goto LABEL_35;
          }
          DirtyRegionVisualizationData = (_QWORD *)CVisual::GetDirtyRegionVisualizationData(v17);
          std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::_Tidy(DirtyRegionVisualizationData);
          if ( DirtyRegionVisualizationData )
          {
            std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::_Tidy(DirtyRegionVisualizationData);
            std::_Deallocate<16,0>(*DirtyRegionVisualizationData, 16LL);
            *DirtyRegionVisualizationData = 0LL;
            operator delete(DirtyRegionVisualizationData);
          }
          CVisual::SetDirtyRegionVisualizationData(v17, 0LL);
        }
        v8 = v123;
      }
      v13 = -1;
    }
LABEL_35:
    v24 = *(_DWORD *)(a4 + 3296);
    if ( v24 )
      *(_DWORD *)(a4 + 3296) = v24 - 1;
    if ( v12 < 0 )
      break;
LABEL_38:
    v11 = *(_QWORD *)(a1 + 16);
    v12 = 0;
    v14 = 0LL;
    if ( !v11 )
      goto LABEL_80;
    v25 = *(_DWORD *)(a1 + 28);
    if ( v25 == 1 )
    {
      v26 = *(_DWORD *)(a1 + 24);
      if ( v26 >= v13
        || ((v11 = *(_QWORD *)(v11 + 72), (v11 & 2) == 0)
          ? (LODWORD(v27) = v11 & 1)
          : (v27 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL)),
            v28 = v26 + 1,
            (unsigned int)v28 >= (unsigned int)v27) )
      {
LABEL_80:
        v12 = 1;
        goto LABEL_53;
      }
    }
    else
    {
      if ( v25 )
        goto LABEL_80;
      v115 = *(_DWORD *)(a1 + 24);
      if ( !v115 )
        goto LABEL_80;
      v11 = *(_QWORD *)(v11 + 72);
      v28 = (unsigned int)(v115 - 1);
    }
    if ( (v11 & 2) != 0 )
    {
      v29 = (unsigned __int64 *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
      v30 = v11 & 1;
      v31 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
    }
    else
    {
      v31 = v11 & 1;
      v30 = v31;
      v29 = (unsigned __int64 *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
    }
    if ( v31 <= (unsigned int)v28 )
      goto LABEL_228;
    if ( (v11 & 2) != 0 )
      v30 = *v29;
    if ( (unsigned int)v28 >= v30 )
    {
LABEL_228:
      v11 = 0LL;
    }
    else if ( v30 == 1 )
    {
      v11 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    else
    {
      v11 = v29[v28 + 2];
    }
    *(_QWORD *)(a1 + 8) = v11;
    v14 = (CVisual *)v11;
    *(_DWORD *)(a1 + 24) = v28;
LABEL_53:
    if ( !v14 )
    {
      v45 = *(_DWORD *)(a1 + 4);
      if ( !v45 )
        goto LABEL_85;
      LODWORD(v11) = *(_DWORD *)(a1 + 32);
      v46 = 0LL;
      v47 = 0;
      if ( (_DWORD)v11 )
      {
        v48 = (unsigned int)(v11 - 1);
        *(_DWORD *)(a1 + 32) = v48;
        v11 = 2 * v48;
        v45 = *(_DWORD *)(a1 + 4);
        *(_OWORD *)lpMem = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 8 * v11);
        v47 = (int)lpMem[1];
        v46 = lpMem[0];
      }
      v14 = *(CVisual **)(a1 + 16);
      *(_QWORD *)(a1 + 8) = v14;
      *(_QWORD *)(a1 + 16) = v46;
      *(_DWORD *)(a1 + 24) = v47;
      *(_DWORD *)(a1 + 4) = v45 - 1;
      if ( !v14 )
        goto LABEL_85;
LABEL_9:
      v13 = -1;
      goto LABEL_10;
    }
    v13 = -1;
  }
  v120 = 262;
LABEL_230:
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, v120, 0LL);
LABEL_85:
  v9 = v122;
LABEL_86:
  if ( v12 == 1 || v12 == -2147467260 )
    v12 = 0;
  if ( v9 )
  {
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( Value )
      goto LABEL_90;
    v116 = (CThreadContext *)operator new(0x138uLL);
    if ( v116 && (v118 = CThreadContext::CThreadContext(v116), (Value = v118) != 0LL) )
    {
      TlsSetValue(CThreadContext::s_dwTlsIndex, v118);
LABEL_90:
      v50 = *Value & 2LL;
      v51 = *Value & 1LL;
      v52 = (unsigned __int64 *)(*Value & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v50 )
        v53 = *v52;
      else
        v53 = (unsigned int)v51;
      v54 = v53 - 1;
      if ( v50 )
        v51 = *v52;
      if ( v54 < v51 )
      {
        if ( v51 == 1 )
        {
          *Value = 0LL;
        }
        else
        {
          v105 = v51 - 1;
          v106 = v52 + 2;
          if ( v105 == 1 )
          {
            v107 = v106[-v54 + 1];
            operator delete((void *)(*Value & 0xFFFFFFFFFFFFFFFCuLL));
            *Value = v107 | 1;
          }
          else
          {
            if ( v54 < v105 )
              memmove_0(&v106[v54], &v106[v54 + 1], 8 * (v105 - v54));
            *v52 = v105;
          }
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v117, 0LL, 0, -2147024882, 0x42u, 0LL);
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v55 = *(_DWORD *)(a1 + 40);
  if ( v55 == 10 )
  {
    v91 = 64LL;
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v91 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v91) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v91) <= *(_DWORD *)(a1 + 36) )
    {
      lpMem[0] = 0LL;
      v119 = HrMalloc(0x10uLL, (unsigned int)v91, lpMem);
      if ( v119 >= 0 )
      {
        operator delete(*(void **)(a1 + 48));
        *(void **)(a1 + 48) = lpMem[0];
        *(_DWORD *)(a1 + 36) = v91;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, v119, 0xFEu, 0LL);
      }
    }
    v56 = 0;
    *(_DWORD *)(a1 + 56) = 0;
  }
  else
  {
    v56 = v55 + 1;
  }
  *(_DWORD *)(a1 + 40) = v56;
  return (unsigned int)v12;
}
