/*
 * XREFs of ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003C7C0
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18003C2F0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 * Callees:
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x18000ED88 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z @ 0x1800118DC (-GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z.c)
 *     ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x180014824 (-Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180030964 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800368E0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180040650 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180044D00 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18004A9A0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180055610 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18005D39C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?HrMalloc@WPF@@YAJ_K0PEAPEAX@Z @ 0x180065014 (-HrMalloc@WPF@@YAJ_K0PEAPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18007F878 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?InvalidRedirectedTransformParent@CVisual@@QEAA_NPEBVCVisualTree@@@Z @ 0x1800EF7D0 (-InvalidRedirectedTransformParent@CVisual@@QEAA_NPEBVCVisualTree@@@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x180198010 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ?GetPrimitiveBlend@CGenericInk@@QEBAJPEAW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801992B0 (-GetPrimitiveBlend@CGenericInk@@QEBAJPEAW4D2D1_PRIMITIVE_BLEND@@@Z.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x1801EAC60 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall COcclusionContext::PreSubgraph(COcclusionContext *this, const struct CVisualTree *a2, bool *a3)
{
  int v3; // edi
  __int64 v4; // r14
  bool *v5; // r10
  struct CVisualTree *v6; // r9
  COcclusionContext *v7; // r13
  int v8; // r15d
  __int64 v9; // r11
  _QWORD *v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // r12
  bool *v14; // rcx
  unsigned int i; // eax
  COcclusionContext **v16; // rcx
  COcclusionContext *j; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned int k; // eax
  __int64 v21; // rdx
  _QWORD **v22; // rdx
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  unsigned int v25; // esi
  __int64 result; // rax
  float v27; // xmm0_4
  int v28; // ecx
  unsigned int v29; // eax
  _DWORD *v30; // r9
  _DWORD *v31; // r8
  int v32; // ecx
  __int64 v33; // rdx
  _BYTE *v34; // rcx
  unsigned int v35; // eax
  __int64 *v36; // rcx
  int v37; // eax
  int v38; // eax
  CMILMatrix *v39; // rcx
  enum D2D1_PRIMITIVE_BLEND v40; // xmm6_4
  enum D2D1_PRIMITIVE_BLEND v41; // xmm7_4
  enum D2D1_PRIMITIVE_BLEND v42; // xmm4_4
  enum D2D1_PRIMITIVE_BLEND v43; // xmm5_4
  int v44; // eax
  unsigned int v45; // r8d
  int v46; // edi
  bool v47; // bl
  _DWORD *v48; // r8
  __int64 v49; // rdx
  _BYTE *v50; // rcx
  unsigned int m; // eax
  _QWORD *v52; // rcx
  char v53; // al
  __int64 v54; // rax
  bool v55; // zf
  _DWORD *v56; // r8
  float v57; // xmm6_4
  __int64 v58; // rdx
  _BYTE *v59; // rcx
  unsigned int n; // eax
  double **v61; // rbx
  double *v62; // rbx
  __int64 v63; // rcx
  float v64; // xmm1_4
  int v65; // edx
  int *v66; // rcx
  _DWORD *v67; // r8
  __int64 v68; // rdx
  _BYTE *v69; // rcx
  unsigned int ii; // eax
  CFilterEffect **v71; // rbx
  CFilterEffect *v72; // rbx
  bool v73; // al
  __int64 v74; // rcx
  unsigned int v75; // ecx
  unsigned int v76; // eax
  void *v77; // rdi
  unsigned __int64 v78; // rax
  unsigned int v79; // ecx
  __int64 v80; // rbx
  SIZE_T v81; // r8
  int v82; // ebx
  unsigned __int64 v83; // rax
  unsigned int v84; // eax
  struct CVisualTree *v85; // r9
  _BYTE *v86; // rax
  __int64 v87; // r15
  int v88; // r12d
  __int64 *v89; // rbx
  _DWORD *v90; // r8
  struct _LIST_ENTRY *v91; // rsi
  __int64 v92; // rax
  __int64 v93; // rdi
  __int64 v94; // rdx
  _BYTE *v95; // rcx
  unsigned int kk; // eax
  __int64 *v97; // rcx
  int v98; // r9d
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rdx
  _BYTE *v102; // rcx
  unsigned int jj; // eax
  __int64 *v104; // rcx
  __int64 *v105; // rax
  CVisual *v106; // rax
  struct _LIST_ENTRY *TreeData; // rax
  __int64 v108; // rax
  __int64 v109; // r8
  __int64 v110; // rdx
  unsigned int mm; // eax
  _QWORD **v112; // rdx
  _QWORD *v113; // rdx
  _QWORD *v114; // rax
  unsigned __int64 Blink; // rax
  struct _LIST_ENTRY **p_Blink; // rdi
  _BYTE *v117; // rax
  __int64 v118; // r8
  unsigned __int8 IsEqual; // al
  _BYTE *v120; // r9
  int v121; // eax
  unsigned int Slot; // eax
  __int64 v123; // r10
  _QWORD *v124; // rdx
  __m128 v125; // xmm8
  _OWORD *v126; // rdx
  __m128 v127; // xmm10
  int v128; // esi
  __m128 v129; // xmm7
  __m128 v130; // xmm6
  __int64 v131; // rax
  __int128 v132; // xmm1
  __int128 v133; // xmm0
  __int128 v134; // xmm1
  unsigned int v135; // ecx
  char v136; // dl
  float v137; // xmm9_4
  float v138; // xmm1_4
  float v139; // xmm1_4
  float v140; // xmm1_4
  float v141; // xmm1_4
  float v142; // xmm1_4
  float v143; // xmm2_4
  float v144; // xmm1_4
  float v145; // xmm1_4
  float v146; // xmm1_4
  float v147; // xmm1_4
  float v148; // xmm1_4
  float v149; // xmm3_4
  float v150; // xmm1_4
  float v151; // xmm1_4
  float v152; // xmm1_4
  __int64 v153; // rax
  unsigned int v154; // ecx
  unsigned __int64 v155; // rax
  unsigned int v156; // edi
  int v157; // eax
  unsigned int v158; // ecx
  unsigned __int64 v159; // rcx
  unsigned int v160; // eax
  void *v161; // rbx
  __int64 v162; // rcx
  __int64 v163; // rax
  unsigned int v164; // eax
  __int64 v165; // r12
  unsigned int v166; // ecx
  unsigned int v167; // ecx
  CGeometry *v168; // rcx
  bool v169; // di
  int ShapeData; // eax
  unsigned int v171; // ecx
  void (__fastcall ***v172)(void *, __int64); // rcx
  char v173; // bl
  CGeometry *v174; // rcx
  int v175; // eax
  unsigned int v176; // ecx
  unsigned int v177; // ecx
  int v178; // eax
  int v179; // eax
  __int128 v180; // xmm0
  void **v181; // r9
  unsigned int v182; // ecx
  unsigned int v183; // eax
  unsigned __int64 v184; // rax
  unsigned int v185; // edi
  int v186; // eax
  unsigned int v187; // ecx
  unsigned __int64 v188; // rax
  void *v189; // rbx
  unsigned int v190; // eax
  unsigned int v191; // ecx
  unsigned int v192; // eax
  unsigned __int64 v193; // rax
  unsigned int v194; // edi
  int v195; // eax
  unsigned int v196; // ecx
  unsigned __int64 v197; // rax
  void *v198; // rbx
  unsigned int v199; // eax
  unsigned int v200; // ecx
  unsigned int v201; // ecx
  unsigned int v202; // ecx
  __int64 v203; // rcx
  bool v204; // si
  char v205; // bl
  int PrimitiveBlend; // eax
  int v207; // eax
  unsigned int v208; // ecx
  unsigned int v209; // eax
  unsigned __int64 v210; // rax
  unsigned int v211; // edi
  int v212; // eax
  unsigned int v213; // ecx
  void *v214; // rbx
  unsigned int v215; // eax
  unsigned int v216; // ecx
  int *v217; // r12
  int v218; // esi
  unsigned int v219; // edi
  _BYTE *LightAtNoRef; // rax
  __int64 v221; // rbx
  int v222; // eax
  unsigned int v223; // ecx
  unsigned int v224; // [rsp+20h] [rbp-E0h]
  bool v225; // [rsp+40h] [rbp-C0h]
  char v226; // [rsp+41h] [rbp-BFh] BYREF
  char v227; // [rsp+42h] [rbp-BEh]
  void *lpMem[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct CVisualTree *v229; // [rsp+58h] [rbp-A8h]
  __m128 v230; // [rsp+60h] [rbp-A0h]
  __m128 v231; // [rsp+70h] [rbp-90h]
  __m128 v232; // [rsp+80h] [rbp-80h]
  __m128 v233; // [rsp+90h] [rbp-70h]
  int v234; // [rsp+A0h] [rbp-60h]
  _BYTE v235[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v236; // [rsp+F0h] [rbp-10h]
  _BYTE v237[64]; // [rsp+100h] [rbp+0h] BYREF
  int v238; // [rsp+140h] [rbp+40h]
  _BYTE v239[64]; // [rsp+150h] [rbp+50h] BYREF
  int v240; // [rsp+190h] [rbp+90h]
  enum D2D1_PRIMITIVE_BLEND v241[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v242; // [rsp+1B8h] [rbp+B8h] BYREF
  __int128 v243; // [rsp+1C8h] [rbp+C8h] BYREF

  v3 = *((_DWORD *)this + 259);
  v4 = *((_QWORD *)this + 6);
  v5 = a3;
  lpMem[0] = a3;
  v225 = v3 == 0;
  v229 = a2;
  v6 = a2;
  v7 = this;
  v8 = 0;
  v9 = 0LL;
  *(_QWORD *)&v243 = 0LL;
  if ( *((_BYTE *)a2 + 32) )
  {
    v10 = (_QWORD *)(v4 + 328);
LABEL_3:
    if ( v10 )
    {
      v9 = v10[4];
      *(_QWORD *)&v243 = v9;
      if ( !v9 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, const struct CVisualTree *, bool *, struct CVisualTree *))(*(_QWORD *)v10[3] + 328LL))(
                v10[3],
                a2,
                a3,
                v6);
        v6 = v229;
        v9 = v11;
        v5 = (bool *)lpMem[0];
        *(_QWORD *)&v243 = v11;
        v10[4] = v11;
      }
    }
    goto LABEL_6;
  }
  a3 = *(bool **)(v4 + 224);
  if ( *(int *)a3 < 0 )
  {
    a2 = (const struct CVisualTree *)*((unsigned int *)a3 + 1);
    v14 = a3 + 8;
    for ( i = 0; i < (unsigned int)a2; ++v14 )
    {
      if ( *v14 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)a2 )
    {
      v16 = 0LL;
    }
    else
    {
      a2 = (const struct CVisualTree *)((char *)a2 + 15);
      v16 = (COcclusionContext **)((char *)a2 + 8LL * i - ((unsigned __int8)a2 & 7) + (_QWORD)a3);
    }
    this = *v16;
    if ( this )
    {
      for ( j = *(COcclusionContext **)this; j != this; j = *(COcclusionContext **)j )
      {
        v10 = (_QWORD *)((char *)j - 224);
        if ( *((struct CVisualTree **)j + 4) == v6 )
          goto LABEL_3;
      }
    }
  }
LABEL_6:
  v12 = 0LL;
  v13 = *((_QWORD *)v7 + 7);
  if ( *((_BYTE *)v6 + 32) )
  {
    v12 = (_QWORD *)(v4 + 328);
  }
  else
  {
    v18 = *(_QWORD *)(v4 + 224);
    if ( *(int *)v18 < 0 )
    {
      v19 = *(unsigned int *)(v18 + 4);
      this = (COcclusionContext *)(v18 + 8);
      for ( k = 0; k < (unsigned int)v19; this = (COcclusionContext *)((char *)this + 1) )
      {
        if ( *(_BYTE *)this == 1 )
          break;
        ++k;
      }
      if ( k >= (unsigned int)v19 )
      {
        v22 = 0LL;
      }
      else
      {
        v21 = v19 + 15;
        this = (COcclusionContext *)(8LL * k - (v21 & 7));
        v22 = (_QWORD **)((char *)this + v21 + v18);
      }
      v23 = *v22;
      if ( v23 )
      {
        v24 = (_QWORD *)*v23;
        if ( (_QWORD *)*v23 != v23 )
        {
          while ( (struct CVisualTree *)v24[4] != v6 )
          {
            v24 = (_QWORD *)*v24;
            if ( v24 == v23 )
              goto LABEL_33;
          }
          v12 = v24 - 28;
        }
      }
    }
  }
LABEL_33:
  v25 = -1;
  if ( !v9 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024882, 0x165u);
    return 2147942414LL;
  }
  *(_BYTE *)(v9 + 8) &= 0xF0u;
  *(_DWORD *)(v9 + 12) = *((_DWORD *)v7 + 258);
  *v5 = 1;
  v27 = *(float *)(v4 + 160);
  v28 = (v27 <= *(float *)(v4 + 156)) + 1;
  if ( *(float *)(v4 + 148) > *(float *)(v4 + 140) )
    v28 = v27 <= *(float *)(v4 + 156);
  v29 = v28 + 1;
  if ( *(float *)(v4 + 152) > *(float *)(v4 + 144) )
    v29 = v28;
  if ( v29 > 1 )
  {
    v25 = 0;
LABEL_41:
    v30 = 0LL;
    goto LABEL_42;
  }
  v37 = *((_DWORD *)v7 + 270);
  if ( v37 )
    v25 = *(_DWORD *)(*((_QWORD *)v7 + 137) + 4LL * (unsigned int)(v37 - 1));
  if ( !v25 )
    goto LABEL_41;
  v38 = *((_DWORD *)v7 + 2);
  if ( v38 )
    v39 = (CMILMatrix *)(*((_QWORD *)v7 + 3) + 68LL * (unsigned int)(v38 - 1));
  else
    v39 = (CMILMatrix *)&CMILMatrix::Identity;
  CMILMatrix::Transform3DBoundsHelper<1>(v39);
  v40 = v241[0];
  v41 = v241[2];
  v42 = v241[1];
  v43 = v241[3];
  v242 = *(_OWORD *)v241;
  if ( *(float *)&v241[2] <= *(float *)v241 || *(float *)&v241[3] <= *(float *)&v241[1] )
  {
    v30 = 0LL;
LABEL_131:
    v5 = (bool *)lpMem[0];
    v25 = 0;
LABEL_42:
    v225 = 0;
    if ( v12[1] != *(_QWORD *)(*((_QWORD *)v7 + 79) + 368LL) )
      *v5 = 0;
    goto LABEL_44;
  }
  v44 = *((_DWORD *)v7 + 30);
  if ( v44 )
  {
    *(_OWORD *)v241 = *(_OWORD *)(*((_QWORD *)v7 + 17) + 16LL * (unsigned int)(v44 - 1));
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(v241, &v242);
    v242 = *(_OWORD *)v241;
    v41 = v241[2];
    v42 = v241[1];
    v40 = v241[0];
    v43 = _mm_shuffle_ps(*(__m128 *)v241, *(__m128 *)v241, 255).m128_u32[0];
  }
  v30 = 0LL;
  v45 = 0;
  if ( !*((_DWORD *)v7 + 160) )
    goto LABEL_131;
  while ( ((v25 >> v45) & 1) == 0 )
  {
LABEL_68:
    if ( ++v45 >= *((_DWORD *)v7 + 160) )
    {
      v5 = (bool *)lpMem[0];
      v25 = (unsigned int)v30;
      goto LABEL_42;
    }
  }
  v241[0] = v40;
  v241[1] = v42;
  v241[2] = v41;
  v241[3] = v43;
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(v241, (char *)v7 + 16 * v45 + 644);
  if ( *(float *)&v241[2] <= *(float *)v241 || *(float *)&v241[3] <= *(float *)&v241[1] )
  {
    v25 &= ~(1 << v45);
    goto LABEL_68;
  }
  if ( v3 )
    goto LABEL_44;
  if ( (*(_BYTE *)(v4 + 94) & 0x10) != 0
    || (*(_DWORD *)(v4 + 88) & 0x400) == 0
    || (*(_BYTE *)(v4 + 93) & 0x60) != 0
    || ((*(_DWORD *)(v4 + 192) - 2) & 0xFFFFFFFD) == 0 )
  {
LABEL_129:
    v225 = 0;
    goto LABEL_44;
  }
  v46 = *(_DWORD *)(v4 + 100);
  v47 = v13 && *(_DWORD *)(v13 + 100) == 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 176LL))(v4) )
    goto LABEL_89;
  v48 = *(_DWORD **)(v4 + 224);
  if ( (*v48 & 0x200000) == 0 )
    goto LABEL_88;
  v49 = (unsigned int)v48[1];
  v50 = v48 + 2;
  for ( m = 0; m < (unsigned int)v49; ++v50 )
  {
    if ( *v50 == 11 )
      break;
    ++m;
  }
  v52 = m >= (unsigned int)v49 ? 0LL : (_QWORD *)((char *)v48 + v49 + 8LL * m - (((_BYTE)v49 + 15) & 7) + 15);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v52 + 48LL))(*v52, 54LL) )
LABEL_89:
    v53 = 1;
  else
LABEL_88:
    v53 = 0;
  if ( v46 == 1 )
  {
    if ( v47 )
    {
      v55 = v53 == 0;
    }
    else
    {
      v54 = *(_QWORD *)(v4 + 72);
      if ( (v54 & 2) != 0 )
        v54 = *(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v54) = v54 & 1;
      v55 = (_DWORD)v54 == 0;
    }
    if ( !v55 )
      goto LABEL_128;
  }
  v56 = *(_DWORD **)(v4 + 224);
  v57 = FLOAT_1_0;
  if ( (*v56 & 0x200000) != 0 )
  {
    v58 = (unsigned int)v56[1];
    v59 = v56 + 2;
    for ( n = 0; n < (unsigned int)v58; ++v59 )
    {
      if ( *v59 == 11 )
        break;
      ++n;
    }
    if ( n >= (unsigned int)v58 )
      v61 = 0LL;
    else
      v61 = (double **)((char *)v56 + v58 + 8LL * n - (((_BYTE)v58 + 15) & 7) + 15);
    v62 = *v61;
    if ( (*(unsigned __int8 (__fastcall **)(double *, __int64))(*(_QWORD *)v62 + 48LL))(v62, 51LL) )
      v57 = v62[9];
  }
  if ( fminf(1.0, fmaxf(v57, 0.0)) < 1.0 )
    goto LABEL_128;
  if ( v4 != *((_QWORD *)v229 + 3) || !*((_BYTE *)v229 + 34) )
  {
    v63 = *(_QWORD *)(v4 + 216);
    if ( (*(_DWORD *)(v63 + 4) & 0x8000000) != 0 )
    {
      v65 = *(_DWORD *)(v63 + 12);
      v66 = (int *)(v63 + 12);
      if ( (v65 & 0x7F000000) != 0x5000000 )
      {
        do
        {
          v66 = (int *)((char *)v66 + (v65 & 0xFFFFFF) + 4);
          v65 = *v66;
        }
        while ( (*v66 & 0x7F000000) != 0x5000000 );
      }
      v241[0] = v66[1];
      v64 = *(float *)v241;
    }
    else
    {
      v64 = FLOAT_1_0;
    }
    if ( fminf(1.0, fmaxf(v64, 0.0)) < 1.0 )
      goto LABEL_128;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 176LL))(v4) )
    goto LABEL_128;
  v67 = *(_DWORD **)(v4 + 224);
  if ( (*v67 & 0x200000) != 0 )
  {
    v68 = (unsigned int)v67[1];
    v69 = v67 + 2;
    for ( ii = 0; ii < (unsigned int)v68; ++v69 )
    {
      if ( *v69 == 11 )
        break;
      ++ii;
    }
    v71 = ii >= (unsigned int)v68
        ? 0LL
        : (CFilterEffect **)((char *)v67 + v68 + 8LL * ii - (((_BYTE)v68 + 15) & 7) + 15);
    v72 = *v71;
    if ( (*(unsigned __int8 (__fastcall **)(CFilterEffect *, __int64))(*(_QWORD *)v72 + 48LL))(v72, 54LL) )
    {
      if ( !CFilterEffect::IsOpaque(v72, (const struct CVisual *)v4) )
      {
LABEL_128:
        v30 = 0LL;
        goto LABEL_129;
      }
    }
  }
  v73 = CVisual::InvalidRedirectedTransformParent((CVisual *)v4, v229);
  v30 = 0LL;
  if ( v73 )
    v225 = 0;
LABEL_44:
  v31 = *(_DWORD **)(v4 + 224);
  if ( (*v31 & 0x1000000) != 0 )
    goto LABEL_138;
  v32 = *(_DWORD *)(*(_QWORD *)(v4 + 216) + 4LL);
  if ( (v32 & 0x2000000) != 0 || (v32 & 0x4000000) != 0 )
    goto LABEL_138;
  if ( (*v31 & 0x200000) != 0 )
  {
    v33 = (unsigned int)v31[1];
    v34 = v31 + 2;
    v35 = (unsigned int)v30;
    if ( (_DWORD)v33 )
    {
      do
      {
        if ( *v34 == 11 )
          break;
        ++v35;
        ++v34;
      }
      while ( v35 < (unsigned int)v33 );
    }
    v36 = v35 >= (unsigned int)v33
        ? (__int64 *)v30
        : (__int64 *)((char *)v31 + v33 + 8LL * v35 - (((_BYTE)v33 + 15) & 7) + 15);
    v74 = *v36;
    if ( v74 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v74 + 48LL))(v74, 54LL) )
        goto LABEL_138;
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _DWORD *, _DWORD *))(*(_QWORD *)v4 + 48LL))(
         v4,
         86LL,
         v31,
         v30)
    && ((*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 176LL))(v4) || *(_QWORD *)(v4 + 560)) )
  {
LABEL_138:
    ++*((_DWORD *)v7 + 260);
  }
  if ( *(_BYTE *)lpMem[0] != 1 )
    goto LABEL_390;
  v75 = *((_DWORD *)v7 + 271);
  v76 = *((_DWORD *)v7 + 270);
  v77 = 0LL;
  if ( v76 != v75 )
    goto LABEL_153;
  v78 = 2LL * v75;
  v79 = -1;
  if ( v78 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x4Cu);
    goto LABEL_156;
  }
  v80 = (unsigned int)v78;
  if ( (unsigned int)v78 <= 0x40 )
    v80 = 64LL;
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v80 <= 4 )
  {
    v82 = -2147024809;
LABEL_170:
    v224 = 84;
    v98 = v82;
    goto LABEL_171;
  }
  v81 = 4 * v80;
  if ( !(4 * v80) )
    v81 = 1LL;
  v77 = HeapAlloc(WPF::g_processHeap, 0, v81);
  if ( !v77 )
  {
    v82 = -2147024882;
    goto LABEL_170;
  }
  v83 = 4LL * *((unsigned int *)v7 + 270);
  v79 = -1;
  if ( v83 > 0xFFFFFFFF )
  {
    v224 = 86;
    v98 = -2147024362;
LABEL_171:
    MilInstrumentationCheckHR_MaybeFailFast(v79, 0LL, 0, v98, v224);
    if ( v77 )
      HeapFree(WPF::g_processHeap, 0, v77);
    goto LABEL_156;
  }
  memcpy_0(v77, *((const void **)v7 + 137), (unsigned int)v83);
  WPF::ProcessHeapImpl::Free(*((void **)v7 + 137));
  v76 = *((_DWORD *)v7 + 270);
  *((_QWORD *)v7 + 137) = v77;
  *((_DWORD *)v7 + 271) = v80;
LABEL_153:
  *(_DWORD *)(*((_QWORD *)v7 + 137) + 4LL * v76) = v25;
  v84 = *((_DWORD *)v7 + 276);
  LODWORD(v99) = *((_DWORD *)v7 + 270) + 1;
  *((_DWORD *)v7 + 270) = v99;
  if ( v84 <= (unsigned int)v99 )
    v84 = v99;
  *((_DWORD *)v7 + 276) = v84;
LABEL_156:
  *(_BYTE *)(v243 + 8) |= 1u;
  if ( !v25 )
    goto LABEL_390;
  v85 = v229;
  v86 = v239;
  v87 = *((_QWORD *)v7 + 6);
  v55 = *(_QWORD *)(v4 + 248) == 0LL;
  v88 = -2003292412;
  v234 = 0;
  if ( v55 )
    v86 = 0LL;
  v240 = 0;
  lpMem[0] = v86;
  if ( *((_BYTE *)v229 + 32) )
  {
    v89 = (__int64 *)(v87 + 328);
    goto LABEL_161;
  }
  v100 = *(_QWORD *)(v87 + 224);
  if ( *(int *)v100 >= 0 )
    goto LABEL_246;
  v101 = *(unsigned int *)(v100 + 4);
  v102 = (_BYTE *)(v100 + 8);
  for ( jj = 0; jj < (unsigned int)v101; ++v102 )
  {
    if ( *v102 == 1 )
      break;
    ++jj;
  }
  v104 = jj >= (unsigned int)v101 ? 0LL : (__int64 *)(v100 + v101 + 15 + 8LL * jj - (((_BYTE)v101 + 15) & 7));
  v99 = *v104;
  if ( !v99 )
    goto LABEL_246;
  v105 = *(__int64 **)v99;
  if ( *(_QWORD *)v99 == v99 )
    goto LABEL_246;
  while ( 1 )
  {
    v89 = v105 - 28;
    if ( (struct CVisualTree *)v105[4] == v229 )
      break;
    v105 = (__int64 *)*v105;
    if ( v105 == (__int64 *)v99 )
      goto LABEL_246;
  }
LABEL_161:
  if ( !v89 )
  {
LABEL_246:
    v127 = v233;
    v130 = v232;
    v125 = v231;
    v129 = v230;
    v128 = v234;
    goto LABEL_247;
  }
  v90 = *(_DWORD **)(v87 + 224);
  v91 = 0LL;
  v92 = *(_QWORD *)(v87 + 16);
  v88 = 0;
  v227 = 0;
  v93 = *(_QWORD *)(v92 + 368);
  if ( (*v90 & 0x800000) == 0 )
    goto LABEL_193;
  v94 = (unsigned int)v90[1];
  v95 = v90 + 2;
  for ( kk = 0; kk < (unsigned int)v94; ++v95 )
  {
    if ( *v95 == 9 )
      break;
    ++kk;
  }
  if ( kk >= (unsigned int)v94 )
  {
    v97 = 0LL;
  }
  else
  {
    v94 += 15LL;
    v97 = (__int64 *)((char *)v90 + v94 + 8LL * kk - (v94 & 7));
  }
  v99 = *v97;
  if ( !v99 )
    goto LABEL_193;
  v106 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, struct CVisualTree *))(**(_QWORD **)v99 + 152LL))(
                      *(_QWORD *)v99,
                      v94,
                      v90,
                      v229);
  if ( !v106 || (v89[2] & 4) != 0 && v89[27] == v93 )
  {
    v85 = v229;
    goto LABEL_193;
  }
  v227 = 1;
  TreeData = CVisual::FindTreeData(v106, v229);
  v85 = v229;
  v91 = TreeData;
  if ( TreeData )
  {
LABEL_210:
    Blink = (unsigned __int64)v91[7].Blink;
  }
  else
  {
LABEL_193:
    if ( v87 != *((_QWORD *)v85 + 3) )
    {
      v91 = 0LL;
      v108 = *(_QWORD *)(v87 + 80);
      if ( *((_BYTE *)v85 + 32) )
      {
        v91 = (struct _LIST_ENTRY *)(v108 + 328);
      }
      else
      {
        v109 = *(_QWORD *)(v108 + 224);
        if ( *(int *)v109 < 0 )
        {
          v110 = *(unsigned int *)(v109 + 4);
          v99 = v109 + 8;
          for ( mm = 0; mm < (unsigned int)v110; ++v99 )
          {
            if ( *(_BYTE *)v99 == 1 )
              break;
            ++mm;
          }
          if ( mm >= (unsigned int)v110 )
          {
            v112 = 0LL;
          }
          else
          {
            v99 = v110 + 15 + 8LL * mm - (((_BYTE)v110 + 15) & 7);
            v112 = (_QWORD **)(v99 + v109);
          }
          v113 = *v112;
          if ( v113 )
          {
            v114 = (_QWORD *)*v113;
            if ( (_QWORD *)*v113 != v113 )
            {
              while ( 1 )
              {
                LODWORD(v99) = (_DWORD)v114 - 224;
                if ( (struct CVisualTree *)v114[4] == v85 )
                  break;
                v114 = (_QWORD *)*v114;
                if ( v114 == v113 )
                  goto LABEL_209;
              }
              v91 = (struct _LIST_ENTRY *)(v114 - 28);
            }
          }
        }
      }
    }
LABEL_209:
    if ( v91 )
      goto LABEL_210;
    Blink = 1LL;
  }
  if ( v89[15] >= Blink )
  {
LABEL_238:
    if ( v88 >= 0 )
      goto LABEL_239;
    MilInstrumentationCheckHR_MaybeFailFast(v99, 0LL, 0, v88, 0x71Bu);
    goto LABEL_246;
  }
  p_Blink = &v91[2].Blink;
  v236 = 0;
  v238 = 0;
  if ( !v91 )
    p_Blink = 0LL;
  v117 = v237;
  if ( !*(_QWORD *)(v87 + 248) )
    v117 = 0LL;
  CVisual::CalcEffectiveTransform(v87, 5LL, p_Blink, &v226, v235, v85, v117);
  if ( v227 || v87 == *((_QWORD *)v229 + 3) )
  {
    LOBYTE(v118) = 1;
  }
  else if ( v226 )
  {
    IsEqual = CMILMatrix::IsEqualTo<0>(p_Blink, v235);
    v118 = IsEqual;
    LOBYTE(v118) = IsEqual ^ 1;
  }
  else
  {
    LOBYTE(v118) = 0;
  }
  v120 = v237;
  if ( !*(_QWORD *)(v87 + 248) )
    v120 = 0LL;
  v121 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *, __int64, _BYTE *))(*v89 + 48))(v89, v235, v118, v120);
  v88 = v121;
  if ( v121 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v99, 0LL, 0, v121, 0x802u);
  }
  else if ( (**(_DWORD **)(v87 + 224) & 0x400000) != 0 )
  {
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*(_QWORD *)(v87 + 224), 10LL);
    v99 = *(unsigned int *)(v123 + 4);
    if ( Slot >= (unsigned int)v99 )
    {
      v124 = 0LL;
    }
    else
    {
      v99 += 15LL;
      v124 = (_QWORD *)(v123 + v99 + 8LL * Slot - (v99 & 7));
    }
    if ( *v124 && (*(_BYTE *)(v87 + 94) & 2) != 0 )
    {
      *(_QWORD *)v241 = 0LL;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)v241);
      if ( (int)CComposition::GetManipulationManager(*(CComposition **)(v87 + 16), (struct CManipulationManager **)v241) >= 0 )
        CManipulationManager::NotifyVisualPropertyChange(
          *(CManipulationManager **)v241,
          (struct CVisual *)v87,
          (const struct CMILMatrix *)v235);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)v241);
    }
  }
  if ( v88 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v99, 0LL, 0, v88, 0x7BEu);
    goto LABEL_238;
  }
LABEL_239:
  if ( !v89[15] )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v99, 0LL, 0, -2003292412, 0x65u);
    v88 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v135, 0LL, 0, -2003292412, 0x722u);
    v8 = -2003292412;
LABEL_244:
    MilInstrumentationCheckHR_MaybeFailFast(v99, 0LL, 0, v88, 0x1CFu);
    goto LABEL_405;
  }
  LODWORD(v99) = *((unsigned __int8 *)v89 + 16);
  v125 = *(__m128 *)(v89 + 7);
  v126 = lpMem[0];
  v127 = *(__m128 *)(v89 + 11);
  v128 = *((_DWORD *)v89 + 26);
  v129 = *(__m128 *)(v89 + 5);
  v130 = *(__m128 *)(v89 + 9);
  LOBYTE(v99) = (v99 & 2) != 0;
  v234 = v128;
  v231 = v125;
  v233 = v127;
  if ( lpMem[0] )
  {
    v131 = v89[14];
    v132 = *(_OWORD *)(v131 + 16);
    *(_OWORD *)lpMem[0] = *(_OWORD *)v131;
    v133 = *(_OWORD *)(v131 + 32);
    v126[1] = v132;
    v134 = *(_OWORD *)(v131 + 48);
    LODWORD(v131) = *(_DWORD *)(v131 + 64);
    v126[2] = v133;
    v126[3] = v134;
    *((_DWORD *)v126 + 16) = v131;
  }
  v226 = v99;
  v88 = 0;
LABEL_247:
  v8 = v88;
  if ( v88 < 0 )
    goto LABEL_244;
  if ( !v226 )
  {
    v165 = v243;
    goto LABEL_293;
  }
  if ( v225 )
  {
    if ( SBYTE1(v234) >> 6 )
    {
      v136 = SBYTE1(v234) >> 6 == 1;
    }
    else
    {
      v136 = 0;
      v137 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(_mm_shuffle_ps(v129, v129, 170).m128_f32[0] - 0.0)) & _xmm);
      if ( v137 < 0.000081380211 )
      {
        v138 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v231.m128_f32[2] - 0.0)) & _xmm);
        if ( v138 < 0.000081380211 )
        {
          v139 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v233.m128_f32[2] - 0.0)) & _xmm);
          if ( v139 < 0.000081380211 )
            goto LABEL_263;
        }
        if ( v137 < 0.000081380211 )
        {
          v140 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v231.m128_f32[2] - 0.0)) & _xmm);
          if ( v140 < 0.000081380211 )
          {
            v141 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v130.m128_f32[0] - 0.0)) & _xmm);
            if ( v141 < 0.000081380211 )
            {
              v142 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(_mm_shuffle_ps(v130, v130, 85).m128_f32[0] - 0.0)) & _xmm);
              if ( v142 < 0.000081380211 )
              {
                v143 = _mm_shuffle_ps(v130, v130, 170).m128_f32[0];
                v144 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v143 - 0.0)) & _xmm);
                if ( v144 < 0.000081380211
                  || (v145 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v143 - 1.0)) & _xmm), v145 < 0.000081380211) )
                {
                  v146 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(_mm_shuffle_ps(v130, v130, 255).m128_f32[0] - 0.0)) & _xmm);
                  if ( v146 < 0.000081380211 )
                  {
                    v147 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v233.m128_f32[2] - 0.0)) & _xmm);
                    if ( v147 < 0.000081380211 )
                    {
LABEL_263:
                      v148 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(_mm_shuffle_ps(v129, v129, 255).m128_f32[0]) & _xmm);
                      v149 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(_mm_shuffle_ps(v125, v125, 255).m128_f32[0]) & _xmm)
                                   * 61440.0)
                           + (float)(v148 * 61440.0);
                      v150 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(_mm_shuffle_ps(v127, v127, 255).m128_f32[0]) & _xmm);
                      v151 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v149 + v150) - 1.0)) & _xmm);
                      v136 = v151 < 0.000081380211;
                    }
                  }
                }
              }
            }
          }
        }
      }
      BYTE1(v234) = BYTE1(v234) & 0x3F | ((v136 << 7) - 64);
      v128 = v234;
    }
    if ( !v136
      || (v152 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(_mm_shuffle_ps(v129, v129, 85).m128_f32[0] - 0.0)) & _xmm),
          v152 >= 0.000081380211)
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v125.m128_f32[0] - 0.0)) & _xmm) >= 0.000081380211 )
    {
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v129.m128_f32[0] - 0.0)) & _xmm) >= 0.000081380211
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(_mm_shuffle_ps(v125, v125, 85).m128_f32[0] - 0.0)) & _xmm) >= 0.000081380211 )
      {
        v225 = 0;
      }
    }
  }
  v153 = *((unsigned int *)v7 + 2);
  v8 = 0;
  v154 = *((_DWORD *)v7 + 3);
  lpMem[0] = 0LL;
  if ( (_DWORD)v153 != v154 )
  {
LABEL_283:
    v162 = 68 * v153;
    v163 = *((_QWORD *)v7 + 3);
    *(__m128 *)(v162 + v163) = v129;
    *(__m128 *)(v162 + v163 + 16) = v125;
    *(__m128 *)(v162 + v163 + 32) = v130;
    *(__m128 *)(v162 + v163 + 48) = v127;
    *(_DWORD *)(v162 + v163 + 64) = v128;
    v164 = *((_DWORD *)v7 + 8);
    v166 = *((_DWORD *)v7 + 2) + 1;
    *((_DWORD *)v7 + 2) = v166;
    if ( v164 <= v166 )
      v164 = v166;
    *((_DWORD *)v7 + 8) = v164;
    goto LABEL_286;
  }
  v155 = 2LL * v154;
  if ( v155 > 0xFFFFFFFF )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v154, 0LL, 0, -2147024362, 0x4Cu);
    goto LABEL_286;
  }
  v156 = 2 * v154;
  if ( (unsigned int)v155 <= 8 )
    v156 = 8;
  v157 = WPF::HrMalloc((WPF *)0x44, v156, (unsigned __int64)lpMem, (void **)v85);
  v8 = v157;
  if ( v157 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v158, 0LL, 0, v157, 0x54u);
    goto LABEL_290;
  }
  v159 = 68LL * *((unsigned int *)v7 + 2);
  v160 = -1;
  if ( v159 <= 0xFFFFFFFF )
    v160 = 68 * *((_DWORD *)v7 + 2);
  v8 = 0;
  if ( v159 <= 0xFFFFFFFF )
  {
    v161 = lpMem[0];
    memcpy_0(lpMem[0], *((const void **)v7 + 3), v160);
    WPF::ProcessHeapImpl::Free(*((void **)v7 + 3));
    v153 = *((unsigned int *)v7 + 2);
    *((_QWORD *)v7 + 3) = v161;
    *((_DWORD *)v7 + 3) = v156;
    goto LABEL_283;
  }
  v8 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(v159, 0LL, 0, -2147024362, 0x56u);
LABEL_290:
  if ( lpMem[0] )
    HeapFree(WPF::g_processHeap, 0, lpMem[0]);
LABEL_286:
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v166, 0LL, 0, v8, 0x36u);
    MilInstrumentationCheckHR_MaybeFailFast(v167, 0LL, 0, v8, 0x1E0u);
    goto LABEL_405;
  }
  v165 = v243;
  *(_BYTE *)(v243 + 8) |= 4u;
LABEL_293:
  v168 = *(CGeometry **)(v4 + 248);
  if ( v168 )
  {
    v169 = v225;
    if ( !v225 )
      goto LABEL_312;
    lpMem[0] = 0LL;
    LOBYTE(lpMem[1]) = 0;
    ShapeData = CGeometry::GetShapeData(v168, (const struct D2D_SIZE_F *)(v4 + 132), (struct CShapePtr *)lpMem);
    v8 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v171, 0LL, 0, ShapeData, 0x695u);
      v173 = v226;
LABEL_305:
      v172 = (void (__fastcall ***)(void *, __int64))lpMem[0];
    }
    else
    {
      v172 = (void (__fastcall ***)(void *, __int64))lpMem[0];
      if ( lpMem[0] )
      {
        if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)lpMem[0] + 16LL))(lpMem[0]) )
          goto LABEL_302;
        v172 = (void (__fastcall ***)(void *, __int64))lpMem[0];
        if ( lpMem[0] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(void *, enum D2D1_PRIMITIVE_BLEND *))(*(_QWORD *)lpMem[0] + 40LL))(
                 lpMem[0],
                 v241)
            && v241[0] == D2D1_PRIMITIVE_BLEND_COPY )
          {
            v173 = 1;
            goto LABEL_305;
          }
LABEL_302:
          v172 = (void (__fastcall ***)(void *, __int64))lpMem[0];
        }
      }
      v173 = 0;
    }
    if ( LOBYTE(lpMem[1]) && v172 )
      (**v172)(v172, 1LL);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v172, 0LL, 0, v8, 0x1EDu);
    }
    else
    {
      if ( !v173 )
        v225 = 0;
LABEL_312:
      v174 = *(CGeometry **)(v4 + 248);
      *(_QWORD *)&v242 = 0LL;
      BYTE8(v242) = 0;
      v175 = CGeometry::GetShapeData(v174, (const struct D2D_SIZE_F *)(v4 + 132), (struct CShapePtr *)&v242);
      v8 = v175;
      if ( v175 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v176, 0LL, 0, v175, 0x6AFu);
        goto LABEL_359;
      }
      v177 = v242;
      v8 = -2003292412;
      if ( (_QWORD)v242 )
      {
        v178 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(*(_QWORD *)v242 + 32LL))(v242, &v243, 0LL);
        v8 = v178;
        if ( v178 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v177, 0LL, 0, v178, 0x10Du);
      }
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v177, 0LL, 0, v8, 0x6B4u);
        goto LABEL_359;
      }
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v239);
      v179 = *((_DWORD *)v7 + 30);
      if ( v179 )
        v180 = *(_OWORD *)(*((_QWORD *)v7 + 17) + 16LL * (unsigned int)(v179 - 1));
      else
        v180 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      *(_OWORD *)v241 = v180;
      *(_OWORD *)lpMem = v243;
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(v241, lpMem);
      v182 = *((_DWORD *)v7 + 31);
      v8 = 0;
      v183 = *((_DWORD *)v7 + 30);
      lpMem[0] = 0LL;
      if ( v183 == v182 )
      {
        v184 = 2LL * v182;
        if ( v184 > 0xFFFFFFFF )
        {
          v8 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x80070216, 0LL, 0, -2147024362, 0x4Cu);
        }
        else
        {
          v185 = 2 * v182;
          if ( (unsigned int)v184 <= 8 )
            v185 = 8;
          v186 = WPF::HrMalloc((WPF *)0x10, v185, (unsigned __int64)lpMem, v181);
          v8 = v186;
          if ( v186 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v187, 0LL, 0, v186, 0x54u);
          }
          else
          {
            v188 = 16LL * *((unsigned int *)v7 + 30);
            v8 = 0;
            if ( v188 <= 0xFFFFFFFF )
            {
              v189 = lpMem[0];
              memcpy_0(lpMem[0], *((const void **)v7 + 17), (unsigned int)v188);
              WPF::ProcessHeapImpl::Free(*((void **)v7 + 17));
              v183 = *((_DWORD *)v7 + 30);
              *((_QWORD *)v7 + 17) = v189;
              *((_DWORD *)v7 + 31) = v185;
              goto LABEL_331;
            }
            v8 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x56u);
          }
          if ( lpMem[0] )
            HeapFree(WPF::g_processHeap, 0, lpMem[0]);
        }
      }
      else
      {
LABEL_331:
        *(_OWORD *)(*((_QWORD *)v7 + 17) + 16LL * v183) = *(_OWORD *)v241;
        v190 = *((_DWORD *)v7 + 36);
        v200 = *((_DWORD *)v7 + 30) + 1;
        *((_DWORD *)v7 + 30) = v200;
        if ( v190 <= v200 )
          v190 = v200;
        *((_DWORD *)v7 + 36) = v190;
      }
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v200, 0LL, 0, v8, 0x31u);
        MilInstrumentationCheckHR_MaybeFailFast(v201, 0LL, 0, v8, 0x6B8u);
        goto LABEL_359;
      }
      v191 = *((_DWORD *)v7 + 263);
      v8 = 0;
      v192 = *((_DWORD *)v7 + 262);
      lpMem[0] = 0LL;
      if ( v192 == v191 )
      {
        v193 = 2LL * v191;
        if ( v193 > 0xFFFFFFFF )
        {
          v8 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x80070216, 0LL, 0, -2147024362, 0x4Cu);
        }
        else
        {
          v194 = 2 * v191;
          if ( (unsigned int)v193 <= 0x40 )
            v194 = 64;
          v195 = WPF::HrMalloc((WPF *)4, v194, (unsigned __int64)lpMem, v181);
          v8 = v195;
          if ( v195 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v196, 0LL, 0, v195, 0x54u);
          }
          else
          {
            v197 = 4LL * *((unsigned int *)v7 + 262);
            v8 = 0;
            if ( v197 <= 0xFFFFFFFF )
            {
              v198 = lpMem[0];
              memcpy_0(lpMem[0], *((const void **)v7 + 133), (unsigned int)v197);
              WPF::ProcessHeapImpl::Free(*((void **)v7 + 133));
              v192 = *((_DWORD *)v7 + 262);
              *((_QWORD *)v7 + 133) = v198;
              *((_DWORD *)v7 + 263) = v194;
              goto LABEL_346;
            }
            v8 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x56u);
          }
          if ( lpMem[0] )
            HeapFree(WPF::g_processHeap, 0, lpMem[0]);
        }
      }
      else
      {
LABEL_346:
        *(_DWORD *)(*((_QWORD *)v7 + 133) + 4LL * v192) = 0;
        v199 = *((_DWORD *)v7 + 268);
        v202 = *((_DWORD *)v7 + 262) + 1;
        *((_DWORD *)v7 + 262) = v202;
        if ( v199 <= v202 )
          v199 = v202;
        *((_DWORD *)v7 + 268) = v199;
      }
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v202, 0LL, 0, v8, 0x6B9u);
LABEL_359:
      if ( BYTE8(v242) )
      {
        v202 = v242;
        if ( (_QWORD)v242 )
          (**(void (__fastcall ***)(_QWORD, __int64))v242)(v242, 1LL);
      }
      if ( v8 >= 0 )
      {
        *(_BYTE *)(v165 + 8) |= 2u;
        goto LABEL_364;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v202, 0LL, 0, v8, 0x1F7u);
LABEL_405:
      v169 = v225;
    }
    goto LABEL_406;
  }
LABEL_364:
  v203 = *(_QWORD *)(v4 + 256);
  v8 = 0;
  v204 = 0;
  v205 = 1;
  if ( !v203 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v203 + 48LL))(v203, 58LL) )
  {
    v207 = *(_DWORD *)(v4 + 96);
    if ( (v207 & 0x10) != 0 )
    {
      v204 = *(_DWORD *)(v4 + 192) != 0;
      v8 = 0;
    }
    else
    {
      if ( (v207 & 4) == 0 )
        goto LABEL_376;
      v205 = 0;
      if ( (v207 & 0x78000) == 0 )
      {
        v204 = 0;
        goto LABEL_376;
      }
      v204 = 1;
      v8 = 0;
    }
LABEL_378:
    v208 = *((_DWORD *)v7 + 279);
    v209 = *((_DWORD *)v7 + 278);
    lpMem[0] = 0LL;
    if ( v209 == v208 )
    {
      v210 = 2LL * v208;
      if ( v210 > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x4Cu);
LABEL_389:
        *(_BYTE *)(v165 + 8) |= 8u;
        goto LABEL_390;
      }
      v211 = 2 * v208;
      if ( (unsigned int)v210 <= 0x40 )
        v211 = 64;
      v212 = WPF::HrMalloc((WPF *)1, v211, (unsigned __int64)lpMem, 0LL);
      if ( v212 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v213, 0LL, 0, v212, 0x54u);
        if ( lpMem[0] )
          HeapFree(WPF::g_processHeap, 0, lpMem[0]);
        goto LABEL_389;
      }
      v214 = lpMem[0];
      memcpy_0(lpMem[0], *((const void **)v7 + 141), *((unsigned int *)v7 + 278));
      WPF::ProcessHeapImpl::Free(*((void **)v7 + 141));
      v209 = *((_DWORD *)v7 + 278);
      *((_QWORD *)v7 + 141) = v214;
      *((_DWORD *)v7 + 279) = v211;
    }
    *(_BYTE *)(v209 + *((_QWORD *)v7 + 141)) = v204;
    v215 = *((_DWORD *)v7 + 284);
    v216 = *((_DWORD *)v7 + 278) + 1;
    *((_DWORD *)v7 + 278) = v216;
    if ( v215 <= v216 )
      v215 = v216;
    *((_DWORD *)v7 + 284) = v215;
    goto LABEL_389;
  }
  v205 = 0;
  PrimitiveBlend = CGenericInk::GetPrimitiveBlend(*(CGenericInk **)(v4 + 256), v241);
  v8 = PrimitiveBlend;
  if ( PrimitiveBlend < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v203, 0LL, 0, PrimitiveBlend, 0x56Eu);
  else
    v204 = v241[0] != D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
LABEL_376:
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v203, 0LL, 0, v8, 0x1FEu);
    goto LABEL_405;
  }
  if ( !v205 )
    goto LABEL_378;
LABEL_390:
  v169 = v225;
  if ( v225
    && ((unsigned int)((__int64)(*(_QWORD *)(v4 + 288) - *(_QWORD *)(v4 + 280)) >> 4)
     || (unsigned int)((__int64)(*(_QWORD *)(v4 + 312) - *(_QWORD *)(v4 + 304)) >> 4)) )
  {
    lpMem[0] = (void *)0x100000000LL;
    v217 = (int *)lpMem;
    while ( 1 )
    {
      v218 = *v217;
      v219 = 0;
      if ( (unsigned int)CVisual::GetLightsCount((_QWORD *)v4, *v217) )
        break;
LABEL_399:
      if ( ++v217 == (int *)&lpMem[1] )
        goto LABEL_405;
    }
    while ( 1 )
    {
      LightAtNoRef = (_BYTE *)CVisual::GetLightAtNoRef((_QWORD *)v4, v219, v218);
      v221 = (__int64)LightAtNoRef;
      if ( LightAtNoRef[154] )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, struct CVisualTree *, __int64))(*(_QWORD *)LightAtNoRef + 208LL))(
               LightAtNoRef,
               v229,
               v4) )
        {
          v222 = CLightStack::Push((__int64)v7 + 152, v221, v218);
          if ( v222 < 0 )
            break;
        }
      }
      if ( ++v219 >= (unsigned int)CVisual::GetLightsCount((_QWORD *)v4, v218) )
        goto LABEL_399;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v223, 0LL, 0, v222, 0x4Bu);
    goto LABEL_405;
  }
LABEL_406:
  result = (unsigned int)v8;
  if ( v8 >= 0 && !v169 )
    ++*((_DWORD *)v7 + 259);
  return result;
}
