/*
 * XREFs of ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180044D00
 * Callers:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800039BC (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180003AD8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z @ 0x18001FF10 (-InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18002D790 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x180036350 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x18003A040 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003C7C0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180041660 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180043690 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x180224EC4 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x1802250DC (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x180012488 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180029548 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18002E49C (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18003066C (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180032B60 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180041420 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x1800454C0 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180047744 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?RoundOffsets@CMILMatrix@@QEAAXXZ @ 0x1800607A0 (-RoundOffsets@CMILMatrix@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800DA754 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800DB270 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x1801E2780 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
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
  _BYTE *v8; // rsi
  char v9; // r12
  CTransform3D *v10; // r13
  bool v11; // zf
  __m128 v13; // xmm6
  __int64 v14; // rsi
  __int64 v15; // rax
  bool v16; // r15
  bool v17; // r14
  __int64 v18; // rsi
  char v19; // al
  float *v20; // rdx
  char v21; // al
  int v22; // eax
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  char v27; // cl
  char v28; // al
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm3_4
  float v32; // xmm0_4
  float v33; // xmm4_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  float v36; // xmm5_4
  float v37; // xmm2_4
  float v38; // xmm6_4
  float v39; // xmm2_4
  float v40; // xmm6_4
  float v41; // xmm2_4
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
  __m128 v54; // xmm6
  __m128 v55; // xmm6
  char v56; // al
  __m128 v57; // xmm6
  char v58; // cl
  struct CEffect *v59; // rax
  __int128 *v60; // rax
  __int128 v61; // xmm1
  float v62; // xmm2_4
  float v63; // xmm1_4
  char v64; // cl
  const struct CMILMatrix *Matrix; // rax
  unsigned int v66; // r9d
  struct CInteraction *InteractionInternal; // rax
  int v68; // xmm0_4
  int v69; // xmm0_4
  int v70; // xmm0_4
  int v71; // xmm0_4
  int v72; // xmm0_4
  int v73; // xmm0_4
  int v74; // xmm0_4
  int v75; // xmm0_4
  int v76; // xmm0_4
  int v77; // xmm0_4
  int v78; // xmm0_4
  int v79; // xmm0_4
  int v80; // xmm0_4
  int v81; // xmm0_4
  int v82; // xmm0_4
  int v83; // xmm0_4
  struct CInteraction *v84; // rax
  int *v85; // r10
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
  int v101; // xmm0_4
  bool v102; // [rsp+38h] [rbp-D0h]
  _BYTE *v103; // [rsp+40h] [rbp-C8h] BYREF
  int v104; // [rsp+48h] [rbp-C0h] BYREF
  int v105; // [rsp+4Ch] [rbp-BCh] BYREF
  int v106; // [rsp+50h] [rbp-B8h] BYREF
  int v107; // [rsp+54h] [rbp-B4h] BYREF
  int v108; // [rsp+58h] [rbp-B0h] BYREF
  int v109; // [rsp+5Ch] [rbp-ACh] BYREF
  int v110; // [rsp+60h] [rbp-A8h] BYREF
  int v111; // [rsp+64h] [rbp-A4h] BYREF
  int v112; // [rsp+68h] [rbp-A0h] BYREF
  int v113; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v114; // [rsp+70h] [rbp-98h] BYREF
  int v115; // [rsp+74h] [rbp-94h] BYREF
  int v116; // [rsp+78h] [rbp-90h] BYREF
  int v117; // [rsp+7Ch] [rbp-8Ch] BYREF
  struct CEffect *EffectInternal; // [rsp+80h] [rbp-88h] BYREF
  __int64 v119; // [rsp+88h] [rbp-80h]
  struct CInteraction *v120; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v121[2]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v122; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v123; // [rsp+B8h] [rbp-50h]
  __int128 v124; // [rsp+C8h] [rbp-40h]
  __int128 v125; // [rsp+D8h] [rbp-30h]
  int v126; // [rsp+E8h] [rbp-20h]
  char v127[48]; // [rsp+F8h] [rbp-10h] BYREF
  __m128 v128; // [rsp+128h] [rbp+20h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+138h] [rbp+30h] BYREF
  struct CInteraction **v130; // [rsp+158h] [rbp+50h]
  __int64 v131; // [rsp+160h] [rbp+58h]
  struct CInteraction **v132; // [rsp+168h] [rbp+60h]
  __int64 v133; // [rsp+170h] [rbp+68h]
  int *v134; // [rsp+178h] [rbp+70h]
  __int64 v135; // [rsp+180h] [rbp+78h]
  struct CEffect **v136; // [rsp+188h] [rbp+80h]
  __int64 v137; // [rsp+190h] [rbp+88h]
  int *v138; // [rsp+198h] [rbp+90h]
  __int64 v139; // [rsp+1A0h] [rbp+98h]
  int *v140; // [rsp+1A8h] [rbp+A0h]
  __int64 v141; // [rsp+1B0h] [rbp+A8h]
  int *v142; // [rsp+1B8h] [rbp+B0h]
  __int64 v143; // [rsp+1C0h] [rbp+B8h]
  int *v144; // [rsp+1C8h] [rbp+C0h]
  __int64 v145; // [rsp+1D0h] [rbp+C8h]
  int *v146; // [rsp+1D8h] [rbp+D0h]
  __int64 v147; // [rsp+1E0h] [rbp+D8h]
  int *v148; // [rsp+1E8h] [rbp+E0h]
  __int64 v149; // [rsp+1F0h] [rbp+E8h]
  int *v150; // [rsp+1F8h] [rbp+F0h]
  __int64 v151; // [rsp+200h] [rbp+F8h]
  int *v152; // [rsp+208h] [rbp+100h]
  __int64 v153; // [rsp+210h] [rbp+108h]
  int *v154; // [rsp+218h] [rbp+110h]
  __int64 v155; // [rsp+220h] [rbp+118h]
  int *v156; // [rsp+228h] [rbp+120h]
  __int64 v157; // [rsp+230h] [rbp+128h]
  int *v158; // [rsp+238h] [rbp+130h]
  __int64 v159; // [rsp+240h] [rbp+138h]
  int *v160; // [rsp+248h] [rbp+140h]
  __int64 v161; // [rsp+250h] [rbp+148h]
  struct CEffect **p_EffectInternal; // [rsp+258h] [rbp+150h]
  __int64 v163; // [rsp+260h] [rbp+158h]
  int *v164; // [rsp+268h] [rbp+160h]
  __int64 v165; // [rsp+270h] [rbp+168h]

  v8 = a4;
  v9 = 0;
  v10 = 0LL;
  v11 = (**(_DWORD **)(a1 + 224) & 0x200000) == 0;
  v103 = a4;
  v119 = a3;
  if ( !v11 )
  {
    EffectInternal = CVisual::GetEffectInternal((CVisual *)a1);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
           EffectInternal,
           149LL) )
    {
      v10 = EffectInternal;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
                EffectInternal,
                51LL) )
    {
      v10 = (CTransform3D *)*((_QWORD *)EffectInternal + 11);
    }
    a3 = v119;
  }
  *v8 = 0;
  if ( a2 == 3 )
  {
    *v8 = 1;
    goto LABEL_13;
  }
  if ( a2 == 4 && !a7 )
  {
LABEL_34:
    *v8 = 1;
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
    v9 = 1;
    *(_OWORD *)a5 = *(_OWORD *)a3;
    *((_OWORD *)a5 + 1) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)a5 + 2) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)a5 + 3) = *(_OWORD *)(a3 + 48);
    *((_DWORD *)a5 + 16) = *(_DWORD *)(a3 + 64);
  }
  if ( !a6 || !*(_BYTE *)(a6 + 34) || a1 != *(_QWORD *)(a6 + 24) )
  {
    v13 = (__m128)*(unsigned int *)(a1 + 116);
    if ( v13.m128_f32[0] != 0.0 || *(float *)(a1 + 120) != 0.0 || *(float *)(a1 + 112) != 0.0 )
    {
      if ( v9 )
      {
        v23 = *(float *)(a1 + 120);
        v24 = *(float *)(a1 + 112);
        v25 = v13.m128_f32[0] * *(float *)a5;
        v26 = v23 * *((float *)a5 + 4);
        v27 = *((_BYTE *)a5 + 64) & 0xFC;
        v28 = *((_BYTE *)a5 + 65);
        v29 = v24 * *((float *)a5 + 8);
        *((_BYTE *)a5 + 64) = v27;
        v30 = (float)(v26 + v25) + v29;
        v31 = (float)(v13.m128_f32[0] * *((float *)a5 + 1)) + (float)(v23 * *((float *)a5 + 5));
        v32 = v23 * *((float *)a5 + 6);
        v33 = v23 * *((float *)a5 + 7);
        v34 = v31 + (float)(v24 * *((float *)a5 + 9));
        v35 = v24 * *((float *)a5 + 10);
        v36 = v24 * *((float *)a5 + 11);
        *((float *)a5 + 12) = v30 + *((float *)a5 + 12);
        v37 = v13.m128_f32[0];
        v38 = (float)(v13.m128_f32[0] * *((float *)a5 + 3)) + v33;
        v39 = (float)(v37 * *((float *)a5 + 2)) + v32;
        *((float *)a5 + 13) = v34 + *((float *)a5 + 13);
        v40 = (float)(v38 + v36) + *((float *)a5 + 15);
        v41 = (float)(v39 + v35) + *((float *)a5 + 14);
        *((float *)a5 + 15) = v40;
        *((float *)a5 + 14) = v41;
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v40 - 1.0)) & _xmm) >= 0.000081380211 )
        {
          v28 |= 0x3Fu;
          *((_BYTE *)a5 + 64) = v27 | 0xF0;
          *((_BYTE *)a5 + 65) = v28;
        }
      }
      else
      {
        v9 = 1;
        v54 = _mm_shuffle_ps(v13, v13, 225);
        v54.m128_f32[0] = *(float *)(a1 + 120);
        v55 = _mm_shuffle_ps(v54, v54, 198);
        v55.m128_f32[0] = *(float *)(a1 + 112);
        *((_BYTE *)a5 + 64) = 84;
        v56 = *((_BYTE *)a5 + 65);
        *(_OWORD *)a5 = _xmm;
        v57 = _mm_shuffle_ps(v55, v55, 39);
        v28 = v56 & 0xC0 | 0x3D;
        *((_OWORD *)a5 + 1) = _xmm;
        *((_BYTE *)a5 + 65) = v28;
        v57.m128_f32[0] = 1.0;
        *((_OWORD *)a5 + 2) = _xmm;
        v128 = _mm_shuffle_ps(v57, v57, 57);
        *((__m128 *)a5 + 3) = v128;
      }
      *((_BYTE *)a5 + 65) = v28 & 0x3F;
      *v8 = 1;
    }
    v14 = *(_QWORD *)(a1 + 240);
    if ( !v14 )
    {
      v8 = v103;
      goto LABEL_13;
    }
    v20 = (float *)(a1 + 132);
    v21 = *(_BYTE *)(v14 + 32) & 1;
    if ( !v9 )
    {
      if ( a1 != -132 )
      {
        if ( !v21
          && *(_BYTE *)(v14 + 148)
          && (*(float *)(v14 + 140) != *v20 || *(float *)(v14 + 144) != *(float *)(a1 + 136)) )
        {
          v21 = 1;
        }
        *(_QWORD *)(v14 + 140) = *(_QWORD *)v20;
      }
      if ( v21 )
      {
        (*(void (__fastcall **)(__int64, float *, __int64))(*(_QWORD *)v14 + 168LL))(v14, v20, v14 + 72);
        *(_DWORD *)(v14 + 32) &= ~1u;
      }
      v9 = 1;
      *(_OWORD *)a5 = *(_OWORD *)(v14 + 72);
      *((_OWORD *)a5 + 1) = *(_OWORD *)(v14 + 88);
      *((_OWORD *)a5 + 2) = *(_OWORD *)(v14 + 104);
      *((_OWORD *)a5 + 3) = *(_OWORD *)(v14 + 120);
      v22 = *(_DWORD *)(v14 + 136);
      v8 = v103;
      *((_DWORD *)a5 + 16) = v22;
      *v8 = 1;
      goto LABEL_13;
    }
    if ( a1 != -132 )
    {
      if ( !v21
        && *(_BYTE *)(v14 + 148)
        && (*(float *)(v14 + 140) != *v20 || *(float *)(v14 + 144) != *(float *)(a1 + 136)) )
      {
        v21 = 1;
      }
      *(_QWORD *)(v14 + 140) = *(_QWORD *)v20;
    }
    if ( v21 )
    {
      (*(void (__fastcall **)(__int64, float *, __int64))(*(_QWORD *)v14 + 168LL))(v14, v20, v14 + 72);
      *(_DWORD *)(v14 + 32) &= ~1u;
    }
    v42 = *(_OWORD *)(v14 + 72);
    v43 = *(_OWORD *)(v14 + 88);
    v126 = *(_DWORD *)(v14 + 136);
    v122 = v42;
    v44 = *(_OWORD *)(v14 + 104);
    v123 = v43;
    v45 = *(_OWORD *)(v14 + 120);
    v124 = v44;
    v125 = v45;
    if ( CMILMatrix::IsIdentity<1>((__int64)&v122) )
    {
      v46 = *(_OWORD *)a5;
      v47 = *((_OWORD *)a5 + 1);
      v126 = *((_DWORD *)a5 + 16);
      v122 = v46;
      v48 = *((_OWORD *)a5 + 2);
      v123 = v47;
      v49 = *((_OWORD *)a5 + 3);
LABEL_62:
      v125 = v49;
      v124 = v48;
LABEL_63:
      v50 = v123;
      v8 = v103;
      v51 = v126;
      *(_OWORD *)a5 = v122;
      v52 = v124;
      *((_OWORD *)a5 + 1) = v50;
      v53 = v125;
      *((_OWORD *)a5 + 2) = v52;
      *((_OWORD *)a5 + 3) = v53;
      *((_DWORD *)a5 + 16) = v51;
      *v8 = 1;
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
        v62 = *((float *)a5 + 5);
        v63 = *(float *)a5;
      }
      else
      {
        if ( (*((_BYTE *)a5 + 65) & 0xC) != 4 )
        {
          v60 = Windows::Foundation::Numerics::operator*((__int64)v127, &v122, a5);
          v126 = 0;
          v61 = v60[1];
          v122 = *v60;
          v48 = v60[2];
          v123 = v61;
          v49 = v60[3];
          goto LABEL_62;
        }
        CMILMatrix::Rotate90((CMILMatrix *)&v122);
        LODWORD(v63) = *((_DWORD *)a5 + 4) ^ _xmm;
        v62 = *((float *)a5 + 1);
      }
      CMILMatrix::Scale((CMILMatrix *)&v122, v63, v62, *((float *)a5 + 10));
    }
    CMILMatrix::Translate((CMILMatrix *)&v122, *((float *)a5 + 12), *((float *)a5 + 13), *((float *)a5 + 14));
    goto LABEL_63;
  }
LABEL_13:
  if ( a7 )
  {
    if ( v9 )
    {
      *(_OWORD *)a7 = *(_OWORD *)a5;
      *(_OWORD *)(a7 + 16) = *((_OWORD *)a5 + 1);
      *(_OWORD *)(a7 + 32) = *((_OWORD *)a5 + 2);
      *(_OWORD *)(a7 + 48) = *((_OWORD *)a5 + 3);
      *(_DWORD *)(a7 + 64) = *((_DWORD *)a5 + 16);
    }
    else
    {
      *(_OWORD *)a7 = _xmm;
      *(_WORD *)(a7 + 64) = 32085;
      *(_OWORD *)(a7 + 16) = _xmm;
      *(_OWORD *)(a7 + 32) = _xmm;
      *(_OWORD *)(a7 + 48) = _xmm;
    }
  }
  if ( a2 == 4 )
    goto LABEL_34;
  if ( !v10 || *(_DWORD *)(a1 + 100) == 2 )
  {
    v15 = *(_QWORD *)(a1 + 80);
    v16 = *(_DWORD *)(a1 + 100) != 1;
    v17 = v15 && *(_DWORD *)(v15 + 100) == 1;
    v18 = *(_QWORD *)(a1 + 72);
    if ( (v18 & 2) != 0 )
      v18 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v18) = v18 & 1;
    v102 = 0;
    if ( (**(_DWORD **)(a1 + 224) & 0x200000) != 0 )
    {
      v59 = CVisual::GetEffectInternal((CVisual *)a1);
      if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v59 + 48LL))(v59, 54LL) )
        v102 = 1;
    }
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 176LL))(a1);
    if ( !v16 )
      goto LABEL_93;
    if ( !v17 )
    {
      v8 = v103;
      goto LABEL_28;
    }
    if ( (_DWORD)v18 )
    {
      v8 = v103;
    }
    else
    {
LABEL_93:
      v8 = v103;
      if ( !v17 || !v102 && !v19 )
        goto LABEL_28;
    }
  }
  v64 = *((_BYTE *)a5 + 64);
  if ( !v9 )
  {
    *(_OWORD *)a5 = _xmm;
    v64 = 85;
    *((_OWORD *)a5 + 1) = _xmm;
    *((_BYTE *)a5 + 64) = 85;
    *((_OWORD *)a5 + 2) = _xmm;
    *((_BYTE *)a5 + 65) = 125;
    v9 = 1;
    *((_OWORD *)a5 + 3) = _xmm;
  }
  *((_QWORD *)a5 + 4) = 0LL;
  *((_BYTE *)a5 + 64) = v64 | 0xF;
  *((_QWORD *)a5 + 5) = 0LL;
  *v8 = 1;
LABEL_28:
  if ( v10 )
  {
    Matrix = CTransform3D::GetMatrix(v10, (const struct D2D_SIZE_F *)(a1 + 132));
    if ( v9 )
    {
      CMILMatrix::Multiply(Matrix, a5, a5);
    }
    else
    {
      v9 = 1;
      *(_OWORD *)a5 = *(_OWORD *)Matrix;
      *((_OWORD *)a5 + 1) = *((_OWORD *)Matrix + 1);
      *((_OWORD *)a5 + 2) = *((_OWORD *)Matrix + 2);
      *((_OWORD *)a5 + 3) = *((_OWORD *)Matrix + 3);
      *((_DWORD *)a5 + 16) = *((_DWORD *)Matrix + 16);
    }
    *v8 = 1;
  }
  if ( !v9 )
    goto LABEL_35;
  if ( (*(_BYTE *)(a1 + 94) & 4) != 0 && (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(a5) )
  {
    CMILMatrix::RoundOffsets(a5);
    *v8 = 1;
  }
LABEL_31:
  if ( (*(_BYTE *)(a1 + 272) & 4) != 0 )
  {
    v66 = dword_180305E40;
    if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
    {
      v120 = (struct CInteraction *)a1;
      v130 = &v120;
      v131 = 8LL;
      InteractionInternal = CVisual::GetInteractionInternal((CVisual *)a1);
      v68 = *(_DWORD *)a5;
      v121[0] = InteractionInternal;
      v132 = (struct CInteraction **)v121;
      v104 = v68;
      v69 = *((_DWORD *)a5 + 1);
      v134 = &v104;
      v105 = v69;
      v70 = *((_DWORD *)a5 + 2);
      v136 = (struct CEffect **)&v105;
      v106 = v70;
      v71 = *((_DWORD *)a5 + 3);
      v138 = &v106;
      v107 = v71;
      v72 = *((_DWORD *)a5 + 4);
      v140 = &v107;
      v108 = v72;
      v73 = *((_DWORD *)a5 + 5);
      v142 = &v108;
      v109 = v73;
      v74 = *((_DWORD *)a5 + 6);
      v144 = &v109;
      v110 = v74;
      v75 = *((_DWORD *)a5 + 7);
      v146 = &v110;
      v111 = v75;
      v76 = *((_DWORD *)a5 + 8);
      v148 = &v111;
      v112 = v76;
      v77 = *((_DWORD *)a5 + 9);
      v150 = &v112;
      v113 = v77;
      v78 = *((_DWORD *)a5 + 10);
      v152 = &v113;
      v114 = v78;
      v79 = *((_DWORD *)a5 + 11);
      v154 = &v114;
      v115 = v79;
      v80 = *((_DWORD *)a5 + 12);
      v156 = &v115;
      v116 = v80;
      v81 = *((_DWORD *)a5 + 13);
      v158 = &v116;
      v117 = v81;
      v82 = *((_DWORD *)a5 + 14);
      v160 = &v117;
      v133 = 8LL;
      v135 = 4LL;
      v137 = 4LL;
      v139 = 4LL;
      v141 = 4LL;
      v143 = 4LL;
      v145 = 4LL;
      v147 = 4LL;
      v149 = 4LL;
      v151 = 4LL;
      v153 = 4LL;
      v155 = 4LL;
      v157 = 4LL;
      v159 = 4LL;
      v161 = 4LL;
      LODWORD(EffectInternal) = v82;
      v83 = *((_DWORD *)a5 + 15);
      p_EffectInternal = &EffectInternal;
      v164 = (int *)&v103;
      LODWORD(v103) = v83;
      v163 = 4LL;
      v165 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B5A8B, 0LL, 0LL, 0x14u, &pData);
      v66 = dword_180305E40;
    }
    if ( v119 && v66 > 4 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
      {
        v121[0] = a1;
        v130 = (struct CInteraction **)v121;
        v131 = 8LL;
        v84 = CVisual::GetInteractionInternal((CVisual *)a1);
        v86 = *v85;
        v120 = v84;
        v132 = &v120;
        LODWORD(v103) = v86;
        v87 = v85[1];
        v134 = (int *)&v103;
        LODWORD(EffectInternal) = v87;
        v88 = v85[2];
        v136 = &EffectInternal;
        v117 = v88;
        v89 = v85[3];
        v138 = &v117;
        v116 = v89;
        v90 = v85[4];
        v140 = &v116;
        v115 = v90;
        v91 = v85[5];
        v142 = &v115;
        v114 = v91;
        v92 = v85[6];
        v144 = &v114;
        v113 = v92;
        v93 = v85[7];
        v146 = &v113;
        v112 = v93;
        v94 = v85[8];
        v148 = &v112;
        v111 = v94;
        v95 = v85[9];
        v150 = &v111;
        v110 = v95;
        v96 = v85[10];
        v152 = &v110;
        v109 = v96;
        v97 = v85[11];
        v154 = &v109;
        v108 = v97;
        v98 = v85[12];
        v156 = &v108;
        v107 = v98;
        v99 = v85[13];
        v158 = &v107;
        v106 = v99;
        v100 = v85[14];
        v160 = &v106;
        v133 = 8LL;
        v135 = 4LL;
        v137 = 4LL;
        v139 = 4LL;
        v141 = 4LL;
        v143 = 4LL;
        v145 = 4LL;
        v147 = 4LL;
        v149 = 4LL;
        v151 = 4LL;
        v153 = 4LL;
        v155 = 4LL;
        v157 = 4LL;
        v159 = 4LL;
        v161 = 4LL;
        v105 = v100;
        v101 = v85[15];
        p_EffectInternal = (struct CEffect **)&v105;
        v164 = &v104;
        v104 = v101;
        v163 = 4LL;
        v165 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B5C0A, 0LL, 0LL, 0x14u, &pData);
      }
    }
  }
}
