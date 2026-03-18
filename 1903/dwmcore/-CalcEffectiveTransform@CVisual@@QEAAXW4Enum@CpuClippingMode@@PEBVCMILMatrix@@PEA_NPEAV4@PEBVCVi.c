/*
 * XREFs of ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180063A50
 * Callers:
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x18000440C (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800051AC (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800057C4 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D110 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180061D00 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064C20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180066580 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x18006D9E0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800873F0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z @ 0x1801FDA80 (-InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180255040 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180255298 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x180015690 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180060B60 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800638F0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x1800644B0 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18006E200 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18006FC34 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180071850 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180071D5C (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180087C04 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18008AA9C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18021CBFC (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CVisual::CalcEffectiveTransform(
        __int64 a1,
        int a2,
        __int64 a3,
        _BYTE *a4,
        CMILMatrix *a5,
        __int64 a6,
        __int64 a7)
{
  __m128 v7; // xmm2
  CTransform3D *v9; // r12
  char v10; // r13
  bool v11; // zf
  _BYTE *v13; // r15
  __m128 v14; // xmm7
  __int64 v15; // r15
  __int64 v16; // rax
  bool v17; // r15
  bool v18; // r14
  __int64 v19; // rsi
  _DWORD *v20; // r8
  char v21; // al
  float *v22; // rdx
  bool v23; // al
  int v24; // eax
  float v25; // xmm4_4
  float v26; // xmm5_4
  float v27; // xmm0_4
  float v28; // xmm2_4
  char v29; // al
  float v30; // xmm1_4
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm0_4
  float v34; // xmm4_4
  float v35; // xmm3_4
  float v36; // xmm1_4
  float v37; // xmm5_4
  float v38; // xmm7_4
  float v39; // xmm7_4
  char v40; // al
  char v41; // al
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm1
  int v51; // eax
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __m128 v54; // xmm7
  __m128 v55; // xmm7
  char v56; // al
  __m128 v57; // xmm7
  char v58; // cl
  char v59; // dl
  float v60; // xmm1_4
  float v61; // xmm1_4
  float v62; // xmm0_4
  int v63; // eax
  float v64; // xmm1_4
  int v65; // eax
  float v66; // xmm1_4
  int v67; // eax
  __int64 v68; // rax
  _BYTE *v69; // rdx
  __int64 i; // rcx
  _QWORD *v71; // rcx
  __int128 *v72; // rax
  __int128 v73; // xmm1
  float v74; // xmm2_4
  float v75; // xmm1_4
  char v76; // cl
  const struct CMILMatrix *Matrix; // rax
  float v78; // xmm1_4
  float v79; // xmm1_4
  __m128 v80; // rt1
  __m128 v81; // rt1
  __m128 v82; // rt1
  unsigned int v83; // r9d
  struct CInteraction *InteractionInternal; // rax
  float v85; // xmm0_4
  int v86; // xmm0_4
  int v87; // xmm0_4
  int v88; // xmm0_4
  int v89; // xmm0_4
  int v90; // xmm0_4
  int v91; // xmm0_4
  int v92; // xmm0_4
  int v93; // xmm0_4
  int v94; // xmm0_4
  int v95; // xmm0_4
  int v96; // xmm0_4
  int v97; // xmm0_4
  int v98; // xmm0_4
  int v99; // xmm0_4
  int v100; // xmm0_4
  struct CInteraction *v101; // rax
  float *v102; // r10
  float v103; // xmm0_4
  int v104; // xmm0_4
  int v105; // xmm0_4
  int v106; // xmm0_4
  int v107; // xmm0_4
  int v108; // xmm0_4
  int v109; // xmm0_4
  int v110; // xmm0_4
  int v111; // xmm0_4
  int v112; // xmm0_4
  int v113; // xmm0_4
  int v114; // xmm0_4
  int v115; // xmm0_4
  int v116; // xmm0_4
  int v117; // xmm0_4
  float v118; // xmm0_4
  unsigned __int32 v119; // [rsp+38h] [rbp-D0h] BYREF
  char v120; // [rsp+40h] [rbp-C8h]
  _BYTE *v121; // [rsp+48h] [rbp-C0h] BYREF
  int v122; // [rsp+50h] [rbp-B8h] BYREF
  int v123; // [rsp+54h] [rbp-B4h] BYREF
  int v124; // [rsp+58h] [rbp-B0h] BYREF
  int v125; // [rsp+5Ch] [rbp-ACh] BYREF
  int v126; // [rsp+60h] [rbp-A8h] BYREF
  int v127; // [rsp+64h] [rbp-A4h] BYREF
  int v128; // [rsp+68h] [rbp-A0h] BYREF
  int v129; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v130; // [rsp+70h] [rbp-98h] BYREF
  int v131; // [rsp+74h] [rbp-94h] BYREF
  int v132; // [rsp+78h] [rbp-90h] BYREF
  int v133; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v134; // [rsp+80h] [rbp-88h] BYREF
  struct CEffect *EffectInternal; // [rsp+88h] [rbp-80h] BYREF
  __int64 v136; // [rsp+90h] [rbp-78h]
  struct CInteraction *v137; // [rsp+98h] [rbp-70h] BYREF
  struct CInteraction *v138; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v139; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v140; // [rsp+B8h] [rbp-50h]
  __int128 v141; // [rsp+C8h] [rbp-40h]
  __int128 v142; // [rsp+D8h] [rbp-30h]
  int v143; // [rsp+E8h] [rbp-20h]
  char v144[48]; // [rsp+F8h] [rbp-10h] BYREF
  __m128 v145; // [rsp+128h] [rbp+20h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+138h] [rbp+30h] BYREF
  struct CInteraction **v147; // [rsp+158h] [rbp+50h]
  __int64 v148; // [rsp+160h] [rbp+58h]
  struct CInteraction **v149; // [rsp+168h] [rbp+60h]
  __int64 v150; // [rsp+170h] [rbp+68h]
  unsigned __int32 *v151; // [rsp+178h] [rbp+70h]
  __int64 v152; // [rsp+180h] [rbp+78h]
  struct CEffect **v153; // [rsp+188h] [rbp+80h]
  __int64 v154; // [rsp+190h] [rbp+88h]
  int *v155; // [rsp+198h] [rbp+90h]
  __int64 v156; // [rsp+1A0h] [rbp+98h]
  int *v157; // [rsp+1A8h] [rbp+A0h]
  __int64 v158; // [rsp+1B0h] [rbp+A8h]
  int *v159; // [rsp+1B8h] [rbp+B0h]
  __int64 v160; // [rsp+1C0h] [rbp+B8h]
  int *v161; // [rsp+1C8h] [rbp+C0h]
  __int64 v162; // [rsp+1D0h] [rbp+C8h]
  int *v163; // [rsp+1D8h] [rbp+D0h]
  __int64 v164; // [rsp+1E0h] [rbp+D8h]
  int *v165; // [rsp+1E8h] [rbp+E0h]
  __int64 v166; // [rsp+1F0h] [rbp+E8h]
  int *v167; // [rsp+1F8h] [rbp+F0h]
  __int64 v168; // [rsp+200h] [rbp+F8h]
  int *v169; // [rsp+208h] [rbp+100h]
  __int64 v170; // [rsp+210h] [rbp+108h]
  int *v171; // [rsp+218h] [rbp+110h]
  __int64 v172; // [rsp+220h] [rbp+118h]
  int *v173; // [rsp+228h] [rbp+120h]
  __int64 v174; // [rsp+230h] [rbp+128h]
  int *v175; // [rsp+238h] [rbp+130h]
  __int64 v176; // [rsp+240h] [rbp+138h]
  int *v177; // [rsp+248h] [rbp+140h]
  __int64 v178; // [rsp+250h] [rbp+148h]
  struct CEffect **p_EffectInternal; // [rsp+258h] [rbp+150h]
  __int64 v180; // [rsp+260h] [rbp+158h]
  unsigned __int32 *v181; // [rsp+268h] [rbp+160h]
  __int64 v182; // [rsp+270h] [rbp+168h]

  v9 = 0LL;
  v10 = 0;
  v11 = (**(_DWORD **)(a1 + 224) & 0x200000) == 0;
  v13 = a4;
  v121 = a4;
  v136 = a3;
  if ( !v11 )
  {
    EffectInternal = CVisual::GetEffectInternal((CVisual *)a1);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
           EffectInternal,
           180LL) )
    {
      v9 = EffectInternal;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
                EffectInternal,
                53LL) )
    {
      v9 = (CTransform3D *)*((_QWORD *)EffectInternal + 10);
    }
    a3 = v136;
  }
  *v13 = 0;
  if ( a2 == 3 )
  {
    *v13 = 1;
    goto LABEL_13;
  }
  if ( a2 == 4 && !a7 )
  {
LABEL_34:
    *v13 = 1;
LABEL_35:
    *((_BYTE *)a5 + 64) = 85;
    *(_OWORD *)a5 = _xmm;
    *((_OWORD *)a5 + 1) = _xmm;
    *((_OWORD *)a5 + 2) = _xmm;
    *((_BYTE *)a5 + 65) = 125;
    *((_OWORD *)a5 + 3) = _xmm;
    goto LABEL_31;
  }
  if ( a3 )
  {
    v10 = 1;
    *(_OWORD *)a5 = *(_OWORD *)a3;
    *((_OWORD *)a5 + 1) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)a5 + 2) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)a5 + 3) = *(_OWORD *)(a3 + 48);
    *((_DWORD *)a5 + 16) = *(_DWORD *)(a3 + 64);
  }
  if ( !a6 || !*(_BYTE *)(a6 + 34) || a1 != *(_QWORD *)(a6 + 24) )
  {
    v14 = (__m128)*(unsigned int *)(a1 + 116);
    if ( v14.m128_f32[0] != 0.0 || *(float *)(a1 + 120) != 0.0 || *(float *)(a1 + 112) != 0.0 )
    {
      if ( v10 )
      {
        v25 = *(float *)(a1 + 120);
        v26 = *(float *)(a1 + 112);
        v27 = v14.m128_f32[0] * *(float *)a5;
        v28 = v25 * *((float *)a5 + 4);
        v29 = *((_BYTE *)a5 + 64) & 0xFC;
        v30 = v26 * *((float *)a5 + 8);
        *((_BYTE *)a5 + 64) = v29;
        v31 = (float)(v28 + v27) + v30;
        v32 = (float)(v14.m128_f32[0] * *((float *)a5 + 1)) + (float)(v25 * *((float *)a5 + 5));
        v33 = v25 * *((float *)a5 + 6);
        v34 = v25 * *((float *)a5 + 7);
        v35 = v32 + (float)(v26 * *((float *)a5 + 9));
        v36 = v26 * *((float *)a5 + 10);
        v37 = v26 * *((float *)a5 + 11);
        *((float *)a5 + 12) = v31 + *((float *)a5 + 12);
        v7 = v14;
        v38 = (float)(v14.m128_f32[0] * *((float *)a5 + 3)) + v34;
        v7.m128_f32[0] = (float)(v7.m128_f32[0] * *((float *)a5 + 2)) + v33;
        *((float *)a5 + 13) = v35 + *((float *)a5 + 13);
        v39 = (float)(v38 + v37) + *((float *)a5 + 15);
        v7.m128_f32[0] = (float)(v7.m128_f32[0] + v36) + *((float *)a5 + 14);
        *((float *)a5 + 15) = v39;
        *((_DWORD *)a5 + 14) = v7.m128_i32[0];
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v39 - 1.0)) & _xmm) >= 0.000081380211 )
        {
          *((_BYTE *)a5 + 64) = v29 | 0xF0;
          v40 = *((_BYTE *)a5 + 65) | 0x3F;
          *((_BYTE *)a5 + 65) = v40;
        }
        else
        {
          v40 = *((_BYTE *)a5 + 65);
        }
      }
      else
      {
        v10 = 1;
        v7 = (__m128)_xmm;
        v54 = _mm_shuffle_ps(v14, v14, 225);
        v54.m128_f32[0] = *(float *)(a1 + 120);
        v55 = _mm_shuffle_ps(v54, v54, 198);
        v55.m128_f32[0] = *(float *)(a1 + 112);
        *((_BYTE *)a5 + 64) = 84;
        v56 = *((_BYTE *)a5 + 65);
        *(_OWORD *)a5 = _xmm;
        v57 = _mm_shuffle_ps(v55, v55, 39);
        v40 = v56 & 0xC0 | 0x3D;
        *((_OWORD *)a5 + 1) = _xmm;
        *((_BYTE *)a5 + 65) = v40;
        v57.m128_f32[0] = 1.0;
        *((_OWORD *)a5 + 2) = _xmm;
        v145 = _mm_shuffle_ps(v57, v57, 57);
        *((__m128 *)a5 + 3) = v145;
      }
      *((_BYTE *)a5 + 65) = v40 & 0x3F;
      *v13 = 1;
    }
    v15 = *(_QWORD *)(a1 + 240);
    if ( !v15 )
    {
      v13 = v121;
      goto LABEL_13;
    }
    v22 = (float *)(a1 + 132);
    if ( !v10 )
    {
      v23 = (*(_BYTE *)(v15 + 32) & 1) != 0;
      if ( a1 != -132 )
      {
        if ( (*(_BYTE *)(v15 + 32) & 1) == 0
          && *(_BYTE *)(v15 + 148)
          && (*(float *)(v15 + 140) != *v22 || *(float *)(v15 + 144) != *(float *)(a1 + 136)) )
        {
          v23 = 1;
        }
        *(_QWORD *)(v15 + 140) = *(_QWORD *)v22;
      }
      if ( v23 )
      {
        (*(void (__fastcall **)(__int64, float *, __int64))(*(_QWORD *)v15 + 208LL))(v15, v22, v15 + 72);
        *(_DWORD *)(v15 + 32) &= ~1u;
      }
      v10 = 1;
      *(_OWORD *)a5 = *(_OWORD *)(v15 + 72);
      *((_OWORD *)a5 + 1) = *(_OWORD *)(v15 + 88);
      *((_OWORD *)a5 + 2) = *(_OWORD *)(v15 + 104);
      *((_OWORD *)a5 + 3) = *(_OWORD *)(v15 + 120);
      v24 = *(_DWORD *)(v15 + 136);
      v13 = v121;
      *((_DWORD *)a5 + 16) = v24;
      *v13 = 1;
      goto LABEL_13;
    }
    v41 = *(_BYTE *)(v15 + 32) & 1;
    if ( a1 != -132 )
    {
      if ( !v41
        && *(_BYTE *)(v15 + 148)
        && (*(float *)(v15 + 140) != *v22 || *(float *)(v15 + 144) != *(float *)(a1 + 136)) )
      {
        v41 = 1;
      }
      *(_QWORD *)(v15 + 140) = *(_QWORD *)v22;
    }
    if ( v41 )
    {
      (*(void (__fastcall **)(__int64, float *, __int64))(*(_QWORD *)v15 + 208LL))(v15, v22, v15 + 72);
      *(_DWORD *)(v15 + 32) &= ~1u;
    }
    v42 = *(_OWORD *)(v15 + 72);
    v43 = *(_OWORD *)(v15 + 88);
    v143 = *(_DWORD *)(v15 + 136);
    v139 = v42;
    v44 = *(_OWORD *)(v15 + 104);
    v140 = v43;
    v45 = *(_OWORD *)(v15 + 120);
    v141 = v44;
    v142 = v45;
    if ( CMILMatrix::IsIdentity<1>((__int64)&v139) )
    {
      v46 = *(_OWORD *)a5;
      v47 = *((_OWORD *)a5 + 1);
      v143 = *((_DWORD *)a5 + 16);
      v139 = v46;
      v48 = *((_OWORD *)a5 + 2);
      v140 = v47;
      v49 = *((_OWORD *)a5 + 3);
LABEL_62:
      v142 = v49;
      v141 = v48;
LABEL_63:
      v50 = v140;
      v13 = v121;
      v51 = v143;
      *(_OWORD *)a5 = v139;
      v52 = v141;
      *((_OWORD *)a5 + 1) = v50;
      v53 = v142;
      *((_OWORD *)a5 + 2) = v52;
      *((_OWORD *)a5 + 3) = v53;
      *((_DWORD *)a5 + 16) = v51;
      *v13 = 1;
      goto LABEL_13;
    }
    CMILMatrix::Ensure3DFlags(a5);
    v58 = *((_BYTE *)a5 + 64);
    if ( (v58 & 3) == 1 )
      goto LABEL_63;
    if ( (v58 & 0xC) != 4 )
    {
      if ( (v58 & 0xC0) == 0x40 )
      {
        v74 = *((float *)a5 + 5);
        v75 = *(float *)a5;
      }
      else
      {
        if ( (*((_BYTE *)a5 + 65) & 0xC) != 4 )
        {
          v72 = Windows::Foundation::Numerics::operator*((__int64)v144, &v139, a5);
          v143 = 0;
          v73 = v72[1];
          v139 = *v72;
          v48 = v72[2];
          v140 = v73;
          v49 = v72[3];
          goto LABEL_62;
        }
        CMILMatrix::Rotate90((CMILMatrix *)&v139);
        LODWORD(v75) = *((_DWORD *)a5 + 4) ^ _xmm;
        v74 = *((float *)a5 + 1);
      }
      CMILMatrix::Scale((CMILMatrix *)&v139, v75, v74, *((float *)a5 + 10));
    }
    v7 = (__m128)*((unsigned int *)a5 + 13);
    CMILMatrix::Translate((CMILMatrix *)&v139, *((float *)a5 + 12), v7.m128_f32[0], *((float *)a5 + 14));
    goto LABEL_63;
  }
LABEL_13:
  if ( a7 )
  {
    if ( v10 )
    {
      *(_OWORD *)a7 = *(_OWORD *)a5;
      *(_OWORD *)(a7 + 16) = *((_OWORD *)a5 + 1);
      *(_OWORD *)(a7 + 32) = *((_OWORD *)a5 + 2);
      *(_OWORD *)(a7 + 48) = *((_OWORD *)a5 + 3);
      *(_DWORD *)(a7 + 64) = *((_DWORD *)a5 + 16);
    }
    else
    {
      v7 = (__m128)_xmm;
      *(_OWORD *)a7 = _xmm;
      *(_WORD *)(a7 + 64) = 32085;
      *(_OWORD *)(a7 + 16) = _xmm;
      *(_OWORD *)(a7 + 32) = _xmm;
      *(_OWORD *)(a7 + 48) = _xmm;
    }
  }
  if ( a2 == 4 )
    goto LABEL_34;
  if ( !v9 || *(_DWORD *)(a1 + 100) == 2 )
  {
    v16 = *(_QWORD *)(a1 + 80);
    v17 = *(_DWORD *)(a1 + 100) != 1;
    v18 = v16 && *(_DWORD *)(v16 + 100) == 1;
    v19 = *(_QWORD *)(a1 + 72);
    if ( (v19 & 2) != 0 )
      v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v19) = v19 & 1;
    v20 = *(_DWORD **)(a1 + 224);
    if ( (*v20 & 0x200000) == 0 )
      goto LABEL_24;
    v68 = (unsigned int)v20[1];
    v69 = v20 + 2;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v68; ++v69 )
    {
      if ( *v69 == 11 )
        break;
      i = (unsigned int)(i + 1);
    }
    v71 = (unsigned int)i >= (unsigned int)v68
        ? 0LL
        : (_QWORD *)((char *)v20 + 8 * i - (((_BYTE)v68 + 15) & 7) + v68 + 15);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v71 + 48LL))(*v71, 56LL) )
      v120 = 1;
    else
LABEL_24:
      v120 = 0;
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL))(a1);
    if ( !v17 )
      goto LABEL_109;
    if ( !v18 )
    {
      v13 = v121;
      goto LABEL_28;
    }
    if ( (_DWORD)v19 )
    {
      v13 = v121;
    }
    else
    {
LABEL_109:
      v13 = v121;
      if ( !v18 || !v120 && !v21 )
        goto LABEL_28;
    }
  }
  v76 = *((_BYTE *)a5 + 64);
  if ( !v10 )
  {
    v7 = (__m128)_xmm;
    *(_OWORD *)a5 = _xmm;
    *((_OWORD *)a5 + 1) = _xmm;
    *((_OWORD *)a5 + 2) = _xmm;
    v76 = 85;
    *((_BYTE *)a5 + 65) = 125;
    *((_OWORD *)a5 + 3) = _xmm;
    v10 = 1;
  }
  *((_QWORD *)a5 + 4) = 0LL;
  *((_BYTE *)a5 + 64) = v76 | 0xF;
  *((_QWORD *)a5 + 5) = 0LL;
  *v13 = 1;
LABEL_28:
  if ( v9 )
  {
    Matrix = CTransform3D::GetMatrix(v9, (const struct D2D_SIZE_F *)(a1 + 132));
    if ( v10 )
    {
      CMILMatrix::Multiply(Matrix, a5, a5);
    }
    else
    {
      v10 = 1;
      *(_OWORD *)a5 = *(_OWORD *)Matrix;
      *((_OWORD *)a5 + 1) = *((_OWORD *)Matrix + 1);
      *((_OWORD *)a5 + 2) = *((_OWORD *)Matrix + 2);
      *((_OWORD *)a5 + 3) = *((_OWORD *)Matrix + 3);
      *((_DWORD *)a5 + 16) = *((_DWORD *)Matrix + 16);
    }
    *v13 = 1;
  }
  if ( !v10 )
    goto LABEL_35;
  if ( (*(_BYTE *)(a1 + 94) & 4) != 0 )
  {
    if ( CMILMatrix::Is2DAffine<1>((__int64)a5, 1)
      && (v60 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a5 + 1) - 0.0)) & _xmm), v60 < 0.000081380211)
      && (v61 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a5 + 4) - 0.0)) & _xmm), v61 < 0.000081380211)
      || (v78 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)a5 - 0.0)) & _xmm), v78 < 0.000081380211)
      && (v79 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a5 + 5) - 0.0)) & _xmm), v79 < 0.000081380211) )
    {
      v62 = *((float *)a5 + 12);
      if ( (LODWORD(v62) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v7.m128_f32[0] = (float)(int)v62 - v62;
        v80.m128_f32[0] = FLOAT_N0_5;
        v7 = _mm_cmple_ss(v7, v80);
        v119 = v7.m128_u32[0];
        v63 = (int)v62 - v7.m128_i32[0];
      }
      else
      {
        *(float *)&v119 = v62 + 6291456.25;
        v63 = (int)(v119 << 10) >> 11;
      }
      v64 = *((float *)a5 + 13);
      *((float *)a5 + 12) = (float)v63;
      if ( (LODWORD(v64) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v7.m128_f32[0] = (float)(int)v64 - v64;
        v81.m128_f32[0] = FLOAT_N0_5;
        v7 = _mm_cmple_ss(v7, v81);
        v119 = v7.m128_u32[0];
        v65 = (int)v64 - v7.m128_i32[0];
      }
      else
      {
        *(float *)&v119 = v64 + 6291456.25;
        v65 = (int)(v119 << 10) >> 11;
      }
      v66 = *((float *)a5 + 14);
      *((float *)a5 + 13) = (float)v65;
      if ( (LODWORD(v66) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v7.m128_f32[0] = (float)(int)v66 - v66;
        v82.m128_f32[0] = FLOAT_N0_5;
        v119 = _mm_cmple_ss(v7, v82).m128_u32[0];
        v67 = (int)v66 - v119;
      }
      else
      {
        *(float *)&v119 = v66 + 6291456.25;
        v67 = (int)(v119 << 10) >> 11;
      }
      *((float *)a5 + 14) = (float)v67;
      *v13 = v59;
    }
  }
LABEL_31:
  if ( (*(_BYTE *)(a1 + 272) & 4) != 0 )
  {
    v83 = dword_18033A240;
    if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
    {
      v137 = (struct CInteraction *)a1;
      v147 = &v137;
      v148 = 8LL;
      InteractionInternal = CVisual::GetInteractionInternal((CVisual *)a1);
      v85 = *(float *)a5;
      v138 = InteractionInternal;
      v149 = &v138;
      *(float *)&v119 = v85;
      v86 = *((_DWORD *)a5 + 1);
      v151 = &v119;
      v122 = v86;
      v87 = *((_DWORD *)a5 + 2);
      v153 = (struct CEffect **)&v122;
      v123 = v87;
      v88 = *((_DWORD *)a5 + 3);
      v155 = &v123;
      v124 = v88;
      v89 = *((_DWORD *)a5 + 4);
      v157 = &v124;
      v125 = v89;
      v90 = *((_DWORD *)a5 + 5);
      v159 = &v125;
      v126 = v90;
      v91 = *((_DWORD *)a5 + 6);
      v161 = &v126;
      v127 = v91;
      v92 = *((_DWORD *)a5 + 7);
      v163 = &v127;
      v128 = v92;
      v93 = *((_DWORD *)a5 + 8);
      v165 = &v128;
      v129 = v93;
      v94 = *((_DWORD *)a5 + 9);
      v167 = &v129;
      v130 = v94;
      v95 = *((_DWORD *)a5 + 10);
      v169 = &v130;
      v131 = v95;
      v96 = *((_DWORD *)a5 + 11);
      v171 = &v131;
      v132 = v96;
      v97 = *((_DWORD *)a5 + 12);
      v173 = &v132;
      v133 = v97;
      v98 = *((_DWORD *)a5 + 13);
      v175 = &v133;
      v134 = v98;
      v99 = *((_DWORD *)a5 + 14);
      v177 = &v134;
      v150 = 8LL;
      v152 = 4LL;
      v154 = 4LL;
      v156 = 4LL;
      v158 = 4LL;
      v160 = 4LL;
      v162 = 4LL;
      v164 = 4LL;
      v166 = 4LL;
      v168 = 4LL;
      v170 = 4LL;
      v172 = 4LL;
      v174 = 4LL;
      v176 = 4LL;
      v178 = 4LL;
      LODWORD(EffectInternal) = v99;
      v100 = *((_DWORD *)a5 + 15);
      p_EffectInternal = &EffectInternal;
      v181 = (unsigned __int32 *)&v121;
      LODWORD(v121) = v100;
      v180 = 4LL;
      v182 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DBD09, 0LL, 0LL, 0x14u, &pData);
      v83 = dword_18033A240;
    }
    if ( v136 && v83 > 4 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
      {
        v138 = (struct CInteraction *)a1;
        v147 = &v138;
        v148 = 8LL;
        v101 = CVisual::GetInteractionInternal((CVisual *)a1);
        v103 = *v102;
        v137 = v101;
        v149 = &v137;
        *(float *)&v121 = v103;
        v104 = *((_DWORD *)v102 + 1);
        v151 = (unsigned __int32 *)&v121;
        LODWORD(EffectInternal) = v104;
        v105 = *((_DWORD *)v102 + 2);
        v153 = &EffectInternal;
        v134 = v105;
        v106 = *((_DWORD *)v102 + 3);
        v155 = &v134;
        v133 = v106;
        v107 = *((_DWORD *)v102 + 4);
        v157 = &v133;
        v132 = v107;
        v108 = *((_DWORD *)v102 + 5);
        v159 = &v132;
        v131 = v108;
        v109 = *((_DWORD *)v102 + 6);
        v161 = &v131;
        v130 = v109;
        v110 = *((_DWORD *)v102 + 7);
        v163 = &v130;
        v129 = v110;
        v111 = *((_DWORD *)v102 + 8);
        v165 = &v129;
        v128 = v111;
        v112 = *((_DWORD *)v102 + 9);
        v167 = &v128;
        v127 = v112;
        v113 = *((_DWORD *)v102 + 10);
        v169 = &v127;
        v126 = v113;
        v114 = *((_DWORD *)v102 + 11);
        v171 = &v126;
        v125 = v114;
        v115 = *((_DWORD *)v102 + 12);
        v173 = &v125;
        v124 = v115;
        v116 = *((_DWORD *)v102 + 13);
        v175 = &v124;
        v123 = v116;
        v117 = *((_DWORD *)v102 + 14);
        v177 = &v123;
        v150 = 8LL;
        v152 = 4LL;
        v154 = 4LL;
        v156 = 4LL;
        v158 = 4LL;
        v160 = 4LL;
        v162 = 4LL;
        v164 = 4LL;
        v166 = 4LL;
        v168 = 4LL;
        v170 = 4LL;
        v172 = 4LL;
        v174 = 4LL;
        v176 = 4LL;
        v178 = 4LL;
        v122 = v117;
        v118 = v102[15];
        p_EffectInternal = (struct CEffect **)&v122;
        v181 = &v119;
        *(float *)&v119 = v118;
        v180 = 4LL;
        v182 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DBB14, 0LL, 0LL, 0x14u, &pData);
      }
    }
  }
}
