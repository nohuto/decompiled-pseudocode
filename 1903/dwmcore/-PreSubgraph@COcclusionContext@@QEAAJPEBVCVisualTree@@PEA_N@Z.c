/*
 * XREFs of ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D110
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18005CBF0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 * Callees:
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x18000D450 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x180015C54 (-Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800600B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180063A50 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180067570 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18006E4B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18007F954 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x1800931D0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A1C50 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800A44AC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BAD3C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1800EAB88 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x1801CD364 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 */

__int64 __fastcall COcclusionContext::PreSubgraph(COcclusionContext *this, unsigned __int64 a2, bool *a3)
{
  int v3; // edi
  __int64 v4; // rsi
  bool *v5; // r10
  struct CVisualTree *v6; // r9
  COcclusionContext *v7; // r15
  int v8; // r13d
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
  unsigned int v25; // r14d
  __int64 result; // rax
  float *Bounds; // rdx
  _BYTE *v28; // r10
  float v29; // xmm0_4
  int v30; // ecx
  unsigned int v31; // eax
  __int64 v32; // r9
  _DWORD *v33; // r8
  int v34; // ecx
  __int64 v35; // rdx
  _BYTE *v36; // rcx
  unsigned int v37; // eax
  __int64 *v38; // rcx
  int v39; // eax
  CMILMatrix *v40; // r9
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int v43; // xmm6_4
  unsigned int v44; // xmm7_4
  unsigned int v45; // xmm4_4
  unsigned __int32 v46; // xmm5_4
  int v47; // eax
  __int64 v48; // r8
  int v49; // edi
  bool v50; // bl
  _DWORD *v51; // r8
  __int64 v52; // rdx
  _BYTE *v53; // rcx
  unsigned int m; // eax
  _QWORD *v55; // rcx
  char v56; // al
  __int64 v57; // rax
  bool v58; // zf
  _DWORD *v59; // r8
  float v60; // xmm6_4
  __int64 v61; // rdx
  _BYTE *v62; // rcx
  unsigned int n; // eax
  float **v64; // rbx
  float *v65; // rbx
  __int64 v66; // rcx
  float v67; // xmm1_4
  int v68; // edx
  int *v69; // rcx
  _DWORD *v70; // r8
  __int64 v71; // rdx
  _BYTE *v72; // rcx
  unsigned int ii; // eax
  CFilterEffect **v74; // rbx
  CFilterEffect *v75; // rbx
  __int64 v76; // rbx
  struct CTreeData *TreeData; // rax
  __int64 v78; // rcx
  unsigned int v79; // ecx
  unsigned int v80; // eax
  unsigned __int64 v81; // rdi
  int v82; // eax
  unsigned int v83; // ecx
  unsigned __int64 v84; // rax
  void *v85; // rbx
  unsigned int v86; // eax
  __int64 *v87; // rcx
  _BYTE *v88; // rax
  struct CVisualTree *v89; // r9
  __int64 v90; // r13
  int v91; // r12d
  __int64 *v92; // rdi
  _DWORD *v93; // r8
  __int64 v94; // rax
  struct CTreeData *v95; // r14
  __int64 v96; // rbx
  __int64 v97; // rdx
  _BYTE *v98; // rcx
  unsigned int kk; // eax
  __int64 **v100; // rcx
  void *v101; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v103; // r8
  __int64 v104; // rdx
  _BYTE *v105; // rcx
  unsigned int jj; // eax
  __int64 **v107; // rcx
  __int64 *v108; // rax
  CVisual *v109; // rax
  struct CTreeData *v110; // rax
  __int64 v111; // rax
  __int64 v112; // r8
  __int64 v113; // rdx
  unsigned int mm; // eax
  __int64 v115; // rdx
  _QWORD **v116; // rdx
  _QWORD *v117; // rdx
  _QWORD *v118; // rax
  unsigned __int64 v119; // rax
  char *v120; // rbx
  _BYTE *v121; // rax
  __int64 v122; // r8
  unsigned __int8 IsEqual; // al
  _BYTE *v124; // r9
  int v125; // eax
  unsigned int Slot; // eax
  __int64 v127; // r10
  _QWORD *v128; // rdx
  CComposition *v129; // rbx
  __m128 v130; // xmm8
  _OWORD *v131; // rdx
  __m128 v132; // xmm10
  int v133; // r14d
  __m128 v134; // xmm7
  __m128 v135; // xmm6
  __int64 v136; // rax
  __int128 v137; // xmm1
  __int128 v138; // xmm0
  __int128 v139; // xmm1
  unsigned int v140; // ecx
  char v141; // dl
  float v142; // xmm9_4
  float v143; // xmm1_4
  float v144; // xmm1_4
  float v145; // xmm1_4
  float v146; // xmm1_4
  float v147; // xmm1_4
  float v148; // xmm2_4
  float v149; // xmm1_4
  float v150; // xmm1_4
  float v151; // xmm1_4
  float v152; // xmm1_4
  float v153; // xmm1_4
  float v154; // xmm3_4
  float v155; // xmm1_4
  float v156; // xmm1_4
  float v157; // xmm1_4
  __int64 v158; // rax
  unsigned int v159; // ecx
  unsigned __int64 v160; // rdi
  int v161; // eax
  unsigned int v162; // ecx
  unsigned __int64 v163; // rcx
  void *v164; // rbx
  __int64 v165; // rcx
  __int64 v166; // rax
  unsigned int v167; // eax
  unsigned int v168; // ecx
  __int64 v169; // r14
  void *v170; // rbx
  HANDLE v171; // rax
  unsigned int v172; // ecx
  CGeometry *v173; // rcx
  bool v174; // di
  int ShapeData; // eax
  unsigned int v176; // ecx
  void (__fastcall ***v177)(void *, __int64); // rcx
  char v178; // bl
  CGeometry *v179; // rcx
  int v180; // eax
  unsigned int v181; // ecx
  unsigned int v182; // ecx
  int v183; // eax
  __int64 v184; // r8
  __int64 v185; // r9
  int v186; // eax
  __int128 v187; // xmm0
  unsigned int v188; // ecx
  unsigned int v189; // eax
  unsigned __int64 v190; // rdi
  int v191; // eax
  unsigned int v192; // ecx
  unsigned __int64 v193; // rax
  void *v194; // rbx
  unsigned int v195; // eax
  unsigned int v196; // ecx
  unsigned int v197; // ecx
  unsigned int v198; // eax
  unsigned __int64 v199; // rdi
  int v200; // eax
  unsigned int v201; // ecx
  int v202; // ebx
  unsigned __int64 v203; // rax
  void *v204; // rbx
  unsigned int v205; // eax
  void *v206; // rbx
  HANDLE v207; // rax
  void *v208; // rdi
  HANDLE v209; // rax
  unsigned int v210; // ecx
  unsigned int v211; // ecx
  __int64 v212; // rcx
  int v213; // eax
  bool v214; // zf
  unsigned int v215; // ecx
  unsigned int v216; // eax
  unsigned __int64 v217; // rdi
  int v218; // eax
  unsigned int v219; // ecx
  void *v220; // rbx
  unsigned int v221; // eax
  unsigned int v222; // ecx
  unsigned int v223; // r8d
  int *v224; // r12
  int v225; // r14d
  unsigned int v226; // edi
  _BYTE *v227; // r8
  _BYTE *v228; // rbx
  void *v229; // rbx
  HANDLE v230; // rax
  __int64 v231; // rax
  int v232; // eax
  unsigned int v233; // ecx
  bool v234; // [rsp+40h] [rbp-C0h]
  char v235; // [rsp+41h] [rbp-BFh] BYREF
  bool v236; // [rsp+42h] [rbp-BEh] BYREF
  char v237; // [rsp+43h] [rbp-BDh] BYREF
  char v238; // [rsp+44h] [rbp-BCh]
  void *lpMem[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct CVisualTree *v240; // [rsp+58h] [rbp-A8h]
  __m128 v241; // [rsp+60h] [rbp-A0h]
  __m128 v242; // [rsp+70h] [rbp-90h]
  __m128 v243; // [rsp+80h] [rbp-80h]
  __m128 v244; // [rsp+90h] [rbp-70h]
  int v245; // [rsp+A0h] [rbp-60h]
  _BYTE v246[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v247; // [rsp+F0h] [rbp-10h]
  _BYTE v248[64]; // [rsp+100h] [rbp+0h] BYREF
  int v249; // [rsp+140h] [rbp+40h]
  _BYTE v250[64]; // [rsp+150h] [rbp+50h] BYREF
  int v251; // [rsp+190h] [rbp+90h]
  struct CManipulationManager *v252[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v253; // [rsp+1B8h] [rbp+B8h] BYREF
  __int128 v254; // [rsp+1C8h] [rbp+C8h] BYREF

  v3 = *((_DWORD *)this + 261);
  v4 = *((_QWORD *)this + 7);
  v5 = a3;
  lpMem[0] = a3;
  v234 = v3 == 0;
  v240 = (struct CVisualTree *)a2;
  v6 = (struct CVisualTree *)a2;
  v7 = this;
  v8 = 0;
  v9 = 0LL;
  *(_QWORD *)&v254 = 0LL;
  if ( *(_BYTE *)(a2 + 32) )
  {
    v10 = (_QWORD *)(v4 + 328);
LABEL_3:
    if ( v10 )
    {
      v9 = v10[4];
      *(_QWORD *)&v254 = v9;
      if ( !v9 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, bool *, struct CVisualTree *))(*(_QWORD *)v10[3]
                                                                                                + 368LL))(
                v10[3],
                a2,
                a3,
                v6);
        v6 = v240;
        v9 = v11;
        v5 = (bool *)lpMem[0];
        *(_QWORD *)&v254 = v11;
        v10[4] = v11;
      }
    }
    goto LABEL_6;
  }
  a3 = *(bool **)(v4 + 224);
  if ( *(int *)a3 < 0 )
  {
    a2 = *((unsigned int *)a3 + 1);
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
      a2 += 15LL;
      v16 = (COcclusionContext **)&a3[8LL * i - (a2 & 7) + a2];
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
  v13 = *((_QWORD *)v7 + 8);
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
        this = (COcclusionContext *)(v18 + 8LL * k - (v21 & 7));
        v22 = (_QWORD **)((char *)this + v21);
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
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024882, 0x164u, 0LL);
    return 2147942414LL;
  }
  *(_BYTE *)(v9 + 8) &= 0xF0u;
  *(_DWORD *)(v9 + 12) = *((_DWORD *)v7 + 260);
  *v5 = 1;
  Bounds = (float *)CVisual::GetBounds(v4, v6);
  v29 = Bounds[5];
  v30 = (v29 <= Bounds[4]) + 1;
  if ( Bounds[2] > *Bounds )
    v30 = v29 <= Bounds[4];
  v31 = v30 + 1;
  if ( Bounds[3] > Bounds[1] )
    v31 = v30;
  if ( v31 > 1 )
  {
    v25 = 0;
LABEL_41:
    v32 = 0LL;
    goto LABEL_42;
  }
  v39 = *((_DWORD *)v7 + 272);
  if ( v39 )
    v25 = *(_DWORD *)(*((_QWORD *)v7 + 138) + 4LL * (unsigned int)(v39 - 1));
  if ( !v25 )
    goto LABEL_41;
  CVisual::GetBounds(v4, *((_QWORD *)v7 + 1));
  CMILMatrix::Transform3DBoundsHelper<1>(v40);
  v43 = (unsigned int)v252[0];
  v44 = (unsigned int)v252[1];
  v45 = HIDWORD(v252[0]);
  v46 = HIDWORD(v252[1]);
  v253 = *(_OWORD *)v252;
  if ( *(float *)&v252[1] <= *(float *)v252 || *((float *)&v252[1] + 1) <= *((float *)v252 + 1) )
  {
    v32 = 0LL;
LABEL_132:
    v28 = lpMem[0];
    v25 = 0;
LABEL_42:
    v234 = 0;
    if ( v12[1] != *(_QWORD *)(*((_QWORD *)v7 + 80) + 384LL) )
      *v28 = 0;
    goto LABEL_44;
  }
  v47 = *((_DWORD *)v7 + 32);
  if ( v47 )
  {
    *(_OWORD *)v252 = *(_OWORD *)(*((_QWORD *)v7 + 18) + 16LL * (unsigned int)(v47 - 1));
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(v252, &v253, v41, v42);
    v253 = *(_OWORD *)v252;
    v44 = (unsigned int)v252[1];
    v45 = HIDWORD(v252[0]);
    v43 = (unsigned int)v252[0];
    v46 = _mm_shuffle_ps(*(__m128 *)v252, *(__m128 *)v252, 255).m128_u32[0];
  }
  v32 = 0LL;
  v48 = 0LL;
  if ( !*((_DWORD *)v7 + 162) )
    goto LABEL_132;
  while ( ((v25 >> v48) & 1) == 0 )
  {
LABEL_65:
    v48 = (unsigned int)(v48 + 1);
    if ( (unsigned int)v48 >= *((_DWORD *)v7 + 162) )
    {
      v28 = lpMem[0];
      v25 = v32;
      goto LABEL_42;
    }
  }
  v252[0] = (struct CManipulationManager *)__PAIR64__(v45, v43);
  v252[1] = (struct CManipulationManager *)__PAIR64__(v46, v44);
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
    v252,
    (char *)v7 + 16 * (unsigned int)v48 + 652,
    v48,
    v32);
  if ( *(float *)&v252[1] <= *(float *)v252 || *((float *)&v252[1] + 1) <= *((float *)v252 + 1) )
  {
    v25 &= ~(1 << v48);
    goto LABEL_65;
  }
  if ( !v3 )
  {
    if ( (*(_BYTE *)(v4 + 94) & 8) == 0
      && *(char *)(v4 + 88) < 0
      && (*(_BYTE *)(v4 + 93) & 0x60) == 0
      && ((*(_DWORD *)(v4 + 192) - 2) & 0xFFFFFFFD) != 0 )
    {
      v49 = *(_DWORD *)(v4 + 100);
      v50 = v13 && *(_DWORD *)(v13 + 100) == 1;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 216LL))(v4) )
        goto LABEL_86;
      v51 = *(_DWORD **)(v4 + 224);
      if ( (*v51 & 0x200000) == 0 )
        goto LABEL_85;
      v52 = (unsigned int)v51[1];
      v53 = v51 + 2;
      for ( m = 0; m < (unsigned int)v52; ++v53 )
      {
        if ( *v53 == 11 )
          break;
        ++m;
      }
      v55 = m >= (unsigned int)v52 ? 0LL : (_QWORD *)((char *)v51 + v52 + 8LL * m - (((_BYTE)v52 + 15) & 7) + 15);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v55 + 48LL))(*v55, 56LL) )
LABEL_86:
        v56 = 1;
      else
LABEL_85:
        v56 = 0;
      if ( v49 != 1
        || (v50
          ? (v58 = v56 == 0)
          : ((v57 = *(_QWORD *)(v4 + 72), (v57 & 2) == 0)
           ? (LODWORD(v57) = v57 & 1)
           : (v57 = *(_QWORD *)(v57 & 0xFFFFFFFFFFFFFFFCuLL)),
             v58 = (_DWORD)v57 == 0),
            v58) )
      {
        v59 = *(_DWORD **)(v4 + 224);
        v60 = *(float *)&FLOAT_1_0;
        if ( (*v59 & 0x200000) != 0 )
        {
          v61 = (unsigned int)v59[1];
          v62 = v59 + 2;
          for ( n = 0; n < (unsigned int)v61; ++v62 )
          {
            if ( *v62 == 11 )
              break;
            ++n;
          }
          if ( n >= (unsigned int)v61 )
            v64 = 0LL;
          else
            v64 = (float **)((char *)v59 + 8LL * n - (((_BYTE)v61 + 15) & 7) + v61 + 15);
          v65 = *v64;
          if ( (*(unsigned __int8 (__fastcall **)(float *, __int64))(*(_QWORD *)v65 + 48LL))(v65, 53LL) )
            v60 = v65[18];
        }
        if ( fminf(1.0, fmaxf(v60, 0.0)) >= 1.0 )
        {
          if ( v4 == *((_QWORD *)v240 + 3) && *((_BYTE *)v240 + 34) )
            goto LABEL_399;
          v66 = *(_QWORD *)(v4 + 216);
          if ( (*(_DWORD *)(v66 + 4) & 0x8000000) != 0 )
          {
            v68 = *(_DWORD *)(v66 + 12);
            v69 = (int *)(v66 + 12);
            if ( (v68 & 0x7F000000) != 0x5000000 )
            {
              do
              {
                v69 = (int *)((char *)v69 + (v68 & 0xFFFFFF) + 4);
                v68 = *v69;
              }
              while ( (*v69 & 0x7F000000) != 0x5000000 );
            }
            LODWORD(v252[0]) = v69[1];
            v67 = *(float *)v252;
          }
          else
          {
            v67 = *(float *)&FLOAT_1_0;
          }
          if ( fminf(1.0, fmaxf(v67, 0.0)) >= 1.0 )
          {
LABEL_399:
            if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 216LL))(v4) )
            {
              v70 = *(_DWORD **)(v4 + 224);
              if ( (*v70 & 0x200000) == 0 )
                goto LABEL_127;
              v71 = (unsigned int)v70[1];
              v72 = v70 + 2;
              for ( ii = 0; ii < (unsigned int)v71; ++v72 )
              {
                if ( *v72 == 11 )
                  break;
                ++ii;
              }
              v74 = ii >= (unsigned int)v71
                  ? 0LL
                  : (CFilterEffect **)((char *)v70 + v71 + 8LL * ii - (((_BYTE)v71 + 15) & 7) + 15);
              v75 = *v74;
              if ( !(*(unsigned __int8 (__fastcall **)(CFilterEffect *, __int64))(*(_QWORD *)v75 + 48LL))(v75, 56LL)
                || CFilterEffect::IsOpaque(v75, (const struct CVisual *)v4) )
              {
LABEL_127:
                if ( *((_BYTE *)v240 + 32)
                  || (v76 = *(_QWORD *)(v4 + 16)) == 0
                  || (TreeData = CVisual::FindTreeData((CVisual *)v4, v240)) == 0LL
                  || (*((_BYTE *)TreeData + 16) & 4) == 0
                  || *((_QWORD *)TreeData + 27) != *(_QWORD *)(v76 + 384) )
                {
                  v32 = 0LL;
                  goto LABEL_44;
                }
              }
            }
          }
        }
      }
      v32 = 0LL;
    }
    v234 = 0;
  }
LABEL_44:
  v33 = *(_DWORD **)(v4 + 224);
  if ( (*v33 & 0x1000000) != 0 )
    goto LABEL_139;
  v34 = *(_DWORD *)(*(_QWORD *)(v4 + 216) + 4LL);
  if ( (v34 & 0x2000000) != 0 || (v34 & 0x4000000) != 0 )
    goto LABEL_139;
  if ( (*v33 & 0x200000) != 0 )
  {
    v35 = (unsigned int)v33[1];
    v36 = v33 + 2;
    v37 = v32;
    if ( (_DWORD)v35 )
    {
      do
      {
        if ( *v36 == 11 )
          break;
        ++v37;
        ++v36;
      }
      while ( v37 < (unsigned int)v35 );
    }
    v38 = v37 >= (unsigned int)v35
        ? (__int64 *)v32
        : (__int64 *)((char *)v33 + 8LL * v37 - (((_BYTE)v35 + 15) & 7) + v35 + 15);
    v78 = *v38;
    if ( v78 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v78 + 48LL))(v78, 56LL) )
        goto LABEL_139;
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _DWORD *, __int64))(*(_QWORD *)v4 + 48LL))(
         v4,
         91LL,
         v33,
         v32)
    && ((*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 216LL))(v4) || *(_QWORD *)(v4 + 560)) )
  {
LABEL_139:
    ++*((_DWORD *)v7 + 262);
  }
  if ( *(_BYTE *)lpMem[0] != 1 )
    goto LABEL_371;
  v79 = *((_DWORD *)v7 + 273);
  v80 = *((_DWORD *)v7 + 272);
  lpMem[0] = 0LL;
  if ( v80 != v79 )
    goto LABEL_148;
  v81 = 2LL * v79;
  if ( v81 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v79, 0LL, 0, -2147024362, 0x4Cu, 0LL);
    goto LABEL_151;
  }
  if ( (unsigned int)v81 <= 0x40 )
    LODWORD(v81) = 64;
  v82 = HrMalloc(4uLL, (unsigned int)v81, lpMem);
  if ( v82 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, v82, 0x53u, 0LL);
LABEL_165:
    v101 = lpMem[0];
    if ( lpMem[0] )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v101);
    }
    goto LABEL_151;
  }
  v84 = 4LL * *((unsigned int *)v7 + 272);
  if ( v84 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, -2147024362, 0x55u, 0LL);
    goto LABEL_165;
  }
  v85 = lpMem[0];
  memcpy_0(lpMem[0], *((const void **)v7 + 138), (unsigned int)v84);
  operator delete(*((void **)v7 + 138));
  v80 = *((_DWORD *)v7 + 272);
  *((_QWORD *)v7 + 138) = v85;
  *((_DWORD *)v7 + 273) = v81;
LABEL_148:
  *(_DWORD *)(*((_QWORD *)v7 + 138) + 4LL * v80) = v25;
  v86 = *((_DWORD *)v7 + 278);
  LODWORD(v87) = *((_DWORD *)v7 + 272) + 1;
  *((_DWORD *)v7 + 272) = (_DWORD)v87;
  if ( v86 <= (unsigned int)v87 )
    v86 = (unsigned int)v87;
  *((_DWORD *)v7 + 278) = v86;
LABEL_151:
  *(_BYTE *)(v254 + 8) |= 1u;
  if ( !v25 )
    goto LABEL_371;
  v88 = v250;
  v89 = v240;
  v90 = *((_QWORD *)v7 + 7);
  if ( !*(_QWORD *)(v4 + 248) )
    v88 = 0LL;
  v245 = 0;
  v251 = 0;
  v91 = -2003292412;
  v58 = *((_BYTE *)v240 + 32) == 0;
  lpMem[0] = v88;
  if ( !v58 )
  {
    v92 = (__int64 *)(v90 + 328);
    goto LABEL_156;
  }
  v103 = *(_QWORD *)(v90 + 224);
  if ( *(int *)v103 >= 0 )
    goto LABEL_240;
  v104 = *(unsigned int *)(v103 + 4);
  v105 = (_BYTE *)(v103 + 8);
  for ( jj = 0; jj < (unsigned int)v104; ++v105 )
  {
    if ( *v105 == 1 )
      break;
    ++jj;
  }
  v107 = jj >= (unsigned int)v104 ? 0LL : (__int64 **)(v103 + v104 + 15 + 8LL * jj - (((_BYTE)v104 + 15) & 7));
  v87 = *v107;
  if ( !v87 )
    goto LABEL_240;
  v108 = (__int64 *)*v87;
  if ( (__int64 *)*v87 == v87 )
    goto LABEL_240;
  while ( 1 )
  {
    v92 = v108 - 28;
    if ( (struct CVisualTree *)v108[4] == v240 )
      break;
    v108 = (__int64 *)*v108;
    if ( v108 == v87 )
      goto LABEL_240;
  }
LABEL_156:
  if ( !v92 )
  {
LABEL_240:
    v132 = v244;
    v135 = v243;
    v130 = v242;
    v134 = v241;
    v133 = v245;
    goto LABEL_241;
  }
  v93 = *(_DWORD **)(v90 + 224);
  v91 = 0;
  v94 = *(_QWORD *)(v90 + 16);
  v95 = 0LL;
  v238 = 0;
  v96 = *(_QWORD *)(v94 + 384);
  if ( (*v93 & 0x800000) == 0 )
    goto LABEL_188;
  v97 = (unsigned int)v93[1];
  v98 = v93 + 2;
  for ( kk = 0; kk < (unsigned int)v97; ++v98 )
  {
    if ( *v98 == 9 )
      break;
    ++kk;
  }
  if ( kk >= (unsigned int)v97 )
  {
    v100 = 0LL;
  }
  else
  {
    v97 += 15LL;
    v100 = (__int64 **)((char *)v93 + 8LL * kk - (v97 & 7) + v97);
  }
  v87 = *v100;
  if ( !v87 )
    goto LABEL_188;
  v109 = (CVisual *)(*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, struct CVisualTree *))(*(_QWORD *)*v87 + 192LL))(
                      *v87,
                      v97,
                      v93,
                      v240);
  if ( !v109 || (v92[2] & 4) != 0 && v92[27] == v96 )
  {
    v89 = v240;
    goto LABEL_188;
  }
  v238 = 1;
  v110 = CVisual::FindTreeData(v109, v240);
  v89 = v240;
  v95 = v110;
  if ( v110 )
  {
LABEL_205:
    v119 = *((_QWORD *)v95 + 15);
  }
  else
  {
LABEL_188:
    if ( v90 != *((_QWORD *)v89 + 3) )
    {
      v95 = 0LL;
      v111 = *(_QWORD *)(v90 + 80);
      if ( *((_BYTE *)v89 + 32) )
      {
        v95 = (struct CTreeData *)(v111 + 328);
      }
      else
      {
        v112 = *(_QWORD *)(v111 + 224);
        if ( *(int *)v112 < 0 )
        {
          v113 = *(unsigned int *)(v112 + 4);
          v87 = (__int64 *)(v112 + 8);
          for ( mm = 0; mm < (unsigned int)v113; v87 = (__int64 *)((char *)v87 + 1) )
          {
            if ( *(_BYTE *)v87 == 1 )
              break;
            ++mm;
          }
          if ( mm >= (unsigned int)v113 )
          {
            v116 = 0LL;
          }
          else
          {
            v115 = v113 + 15;
            v87 = (__int64 *)(v112 + 8LL * mm - (v115 & 7));
            v116 = (_QWORD **)((char *)v87 + v115);
          }
          v117 = *v116;
          if ( v117 )
          {
            v118 = (_QWORD *)*v117;
            if ( (_QWORD *)*v117 != v117 )
            {
              while ( 1 )
              {
                LODWORD(v87) = (_DWORD)v118 - 224;
                if ( (struct CVisualTree *)v118[4] == v89 )
                  break;
                v118 = (_QWORD *)*v118;
                if ( v118 == v117 )
                  goto LABEL_204;
              }
              v95 = (struct CTreeData *)(v118 - 28);
            }
          }
        }
      }
    }
LABEL_204:
    if ( v95 )
      goto LABEL_205;
    v119 = 1LL;
  }
  if ( v92[15] >= v119 )
  {
LABEL_233:
    if ( v91 >= 0 )
      goto LABEL_234;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v87, 0LL, 0, v91, 0x768u, 0LL);
    goto LABEL_240;
  }
  v120 = (char *)v95 + 40;
  v247 = 0;
  v249 = 0;
  if ( !v95 )
    v120 = 0LL;
  v121 = v248;
  if ( !*(_QWORD *)(v90 + 248) )
    v121 = 0LL;
  CVisual::CalcEffectiveTransform(v90, 5LL, v120, &v237, v246, v89, v121);
  if ( v238 || v90 == *((_QWORD *)v240 + 3) )
  {
    LOBYTE(v122) = 1;
  }
  else if ( v237 )
  {
    IsEqual = CMILMatrix::IsEqualTo<0>(v120, v246);
    v122 = IsEqual;
    LOBYTE(v122) = IsEqual ^ 1;
  }
  else
  {
    LOBYTE(v122) = 0;
  }
  v124 = v248;
  if ( !*(_QWORD *)(v90 + 248) )
    v124 = 0LL;
  v125 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *, __int64, _BYTE *))(*v92 + 48))(v92, v246, v122, v124);
  v91 = v125;
  if ( v125 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v87, 0LL, 0, v125, 0x84Fu, 0LL);
  }
  else if ( (**(_DWORD **)(v90 + 224) & 0x400000) != 0 )
  {
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*(_QWORD *)(v90 + 224), 10LL);
    v87 = (__int64 *)*(unsigned int *)(v127 + 4);
    if ( Slot >= (unsigned int)v87 )
    {
      v128 = 0LL;
    }
    else
    {
      v87 = (__int64 *)((char *)v87 + 15);
      v128 = (__int64 *)((char *)v87 + v127 + 8LL * Slot - ((unsigned __int8)v87 & 7));
    }
    if ( *v128 && (*(_BYTE *)(v90 + 94) & 2) != 0 )
    {
      v129 = *(CComposition **)(v90 + 16);
      v252[0] = 0LL;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)v252);
      if ( (int)CComposition::GetManipulationManager(v129, v252) >= 0 )
        (*(void (__fastcall **)(struct CManipulationManager *, __int64, _BYTE *))(*(_QWORD *)v252[0] + 96LL))(
          v252[0],
          v90,
          v246);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)v252);
    }
  }
  if ( v91 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v87, 0LL, 0, v91, 0x80Bu, 0LL);
    goto LABEL_233;
  }
LABEL_234:
  if ( !v92[15] )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v87, 0LL, 0, -2003292412, 0x65u, 0LL);
    v91 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v140, 0LL, 0, -2003292412, 0x76Fu, 0LL);
    v8 = -2003292412;
LABEL_381:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v87, 0LL, 0, v91, 0x1CEu, 0LL);
    goto LABEL_393;
  }
  LODWORD(v87) = *((unsigned __int8 *)v92 + 16);
  v130 = *(__m128 *)(v92 + 7);
  v131 = lpMem[0];
  v132 = *(__m128 *)(v92 + 11);
  v133 = *((_DWORD *)v92 + 26);
  v134 = *(__m128 *)(v92 + 5);
  v135 = *(__m128 *)(v92 + 9);
  LOBYTE(v87) = ((unsigned __int8)v87 & 2) != 0;
  v245 = v133;
  v242 = v130;
  v244 = v132;
  if ( lpMem[0] )
  {
    v136 = v92[14];
    v137 = *(_OWORD *)(v136 + 16);
    *(_OWORD *)lpMem[0] = *(_OWORD *)v136;
    v138 = *(_OWORD *)(v136 + 32);
    v131[1] = v137;
    v139 = *(_OWORD *)(v136 + 48);
    LODWORD(v136) = *(_DWORD *)(v136 + 64);
    v131[2] = v138;
    v131[3] = v139;
    *((_DWORD *)v131 + 16) = v136;
  }
  v237 = (char)v87;
  v91 = 0;
LABEL_241:
  v8 = v91;
  if ( v91 < 0 )
    goto LABEL_381;
  if ( v237 )
  {
    if ( v234 )
    {
      if ( SBYTE1(v245) >> 6 )
      {
        v141 = SBYTE1(v245) >> 6 == 1;
      }
      else
      {
        v141 = 0;
        v142 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(_mm_shuffle_ps(v134, v134, 170).m128_f32[0] - 0.0)) & _xmm);
        if ( v142 < 0.000081380211 )
        {
          v143 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v242.m128_f32[2] - 0.0)) & _xmm);
          if ( v143 < 0.000081380211 )
          {
            v144 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v244.m128_f32[2] - 0.0)) & _xmm);
            if ( v144 < 0.000081380211 )
              goto LABEL_257;
          }
          if ( v142 < 0.000081380211 )
          {
            v145 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v242.m128_f32[2] - 0.0)) & _xmm);
            if ( v145 < 0.000081380211 )
            {
              v146 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v135.m128_f32[0] - 0.0)) & _xmm);
              if ( v146 < 0.000081380211 )
              {
                v147 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(_mm_shuffle_ps(v135, v135, 85).m128_f32[0] - 0.0)) & _xmm);
                if ( v147 < 0.000081380211 )
                {
                  v148 = _mm_shuffle_ps(v135, v135, 170).m128_f32[0];
                  v149 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v148 - 0.0)) & _xmm);
                  if ( v149 < 0.000081380211
                    || (v150 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v148 - 1.0)) & _xmm), v150 < 0.000081380211) )
                  {
                    v151 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(_mm_shuffle_ps(v135, v135, 255).m128_f32[0] - 0.0)) & _xmm);
                    if ( v151 < 0.000081380211 )
                    {
                      v152 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v244.m128_f32[2] - 0.0)) & _xmm);
                      if ( v152 < 0.000081380211 )
                      {
LABEL_257:
                        v153 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(_mm_shuffle_ps(v134, v134, 255).m128_f32[0]) & _xmm);
                        v154 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(_mm_shuffle_ps(v130, v130, 255).m128_f32[0]) & _xmm)
                                     * 61440.0)
                             + (float)(v153 * 61440.0);
                        v155 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(_mm_shuffle_ps(v132, v132, 255).m128_f32[0]) & _xmm);
                        v156 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v154 + v155) - 1.0)) & _xmm);
                        v141 = v156 < 0.000081380211;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        BYTE1(v245) = BYTE1(v245) & 0x3F | ((v141 << 7) - 64);
        v133 = v245;
      }
      if ( !v141
        || (v157 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(_mm_shuffle_ps(v134, v134, 85).m128_f32[0] - 0.0)) & _xmm),
            v157 >= 0.000081380211)
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v130.m128_f32[0] - 0.0)) & _xmm) >= 0.000081380211 )
      {
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v134.m128_f32[0] - 0.0)) & _xmm) >= 0.000081380211
          || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(_mm_shuffle_ps(v130, v130, 85).m128_f32[0] - 0.0)) & _xmm) >= 0.000081380211 )
        {
          v234 = 0;
        }
      }
    }
    v158 = *((unsigned int *)v7 + 4);
    v159 = *((_DWORD *)v7 + 5);
    lpMem[0] = 0LL;
    if ( (_DWORD)v158 != v159 )
    {
LABEL_272:
      v165 = 68 * v158;
      v166 = *((_QWORD *)v7 + 4);
      v8 = 0;
      *(__m128 *)(v165 + v166) = v134;
      *(__m128 *)(v165 + v166 + 16) = v130;
      *(__m128 *)(v165 + v166 + 32) = v135;
      *(__m128 *)(v165 + v166 + 48) = v132;
      *(_DWORD *)(v165 + v166 + 64) = v133;
      v167 = *((_DWORD *)v7 + 10);
      v168 = *((_DWORD *)v7 + 4) + 1;
      *((_DWORD *)v7 + 4) = v168;
      if ( v167 <= v168 )
        v167 = v168;
      *((_DWORD *)v7 + 10) = v167;
      goto LABEL_275;
    }
    v160 = 2LL * v159;
    if ( v160 > 0xFFFFFFFF )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v159, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      goto LABEL_276;
    }
    if ( (unsigned int)v160 <= 8 )
      LODWORD(v160) = 8;
    v161 = HrMalloc(0x44uLL, (unsigned int)v160, lpMem);
    v8 = v161;
    if ( v161 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v162, 0LL, 0, v161, 0x53u, 0LL);
    }
    else
    {
      v163 = 68LL * *((unsigned int *)v7 + 4);
      if ( v163 <= 0xFFFFFFFF )
      {
        v164 = lpMem[0];
        memcpy_0(lpMem[0], *((const void **)v7 + 4), (unsigned int)v163);
        operator delete(*((void **)v7 + 4));
        v158 = *((unsigned int *)v7 + 4);
        *((_QWORD *)v7 + 4) = v164;
        *((_DWORD *)v7 + 5) = v160;
        goto LABEL_272;
      }
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v163, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v170 = lpMem[0];
    if ( lpMem[0] )
    {
      v171 = GetProcessHeap();
      HeapFree(v171, 0, v170);
    }
LABEL_275:
    if ( v8 < 0 )
    {
LABEL_276:
      MilInstrumentationCheckHR_MaybeFailFast(v168, 0LL, 0, v8, 0x36u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v172, 0LL, 0, v8, 0x1DFu, 0LL);
      goto LABEL_393;
    }
    v169 = v254;
    *(_BYTE *)(v254 + 8) |= 4u;
  }
  else
  {
    v169 = v254;
  }
  v173 = *(CGeometry **)(v4 + 248);
  if ( v173 )
  {
    v174 = v234;
    if ( !v234 )
      goto LABEL_303;
    lpMem[0] = 0LL;
    LOBYTE(lpMem[1]) = 0;
    ShapeData = CGeometry::GetShapeData(v173, (const struct D2D_SIZE_F *)(v4 + 132), (struct CShapePtr *)lpMem);
    v8 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v176, 0LL, 0, ShapeData, 0x646u, 0LL);
      v178 = v237;
LABEL_296:
      v177 = (void (__fastcall ***)(void *, __int64))lpMem[0];
    }
    else
    {
      v177 = (void (__fastcall ***)(void *, __int64))lpMem[0];
      if ( lpMem[0] )
      {
        if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)lpMem[0] + 16LL))(lpMem[0]) )
          goto LABEL_293;
        v177 = (void (__fastcall ***)(void *, __int64))lpMem[0];
        if ( lpMem[0] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(void *, struct CManipulationManager **))(*(_QWORD *)lpMem[0] + 40LL))(
                 lpMem[0],
                 v252)
            && LODWORD(v252[0]) == 1 )
          {
            v178 = 1;
            goto LABEL_296;
          }
LABEL_293:
          v177 = (void (__fastcall ***)(void *, __int64))lpMem[0];
        }
      }
      v178 = 0;
    }
    if ( LOBYTE(lpMem[1]) && v177 )
      (**v177)(v177, 1LL);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v177, 0LL, 0, v8, 0x1ECu, 0LL);
      goto LABEL_394;
    }
    if ( !v178 )
      v234 = 0;
LABEL_303:
    v179 = *(CGeometry **)(v4 + 248);
    *(_QWORD *)&v253 = 0LL;
    BYTE8(v253) = 0;
    v180 = CGeometry::GetShapeData(v179, (const struct D2D_SIZE_F *)(v4 + 132), (struct CShapePtr *)&v253);
    v8 = v180;
    if ( v180 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v181, 0LL, 0, v180, 0x660u, 0LL);
      goto LABEL_348;
    }
    v182 = v253;
    v8 = -2003292412;
    if ( (_QWORD)v253 )
    {
      v183 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(*(_QWORD *)v253 + 32LL))(v253, &v254, 0LL);
      v8 = v183;
      if ( v183 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v182, 0LL, 0, v183, 0x10Du, 0LL);
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v182, 0LL, 0, v8, 0x665u, 0LL);
      goto LABEL_348;
    }
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v250, (__int64)&v254, (float *)&v254);
    v186 = *((_DWORD *)v7 + 32);
    if ( v186 )
      v187 = *(_OWORD *)(*((_QWORD *)v7 + 18) + 16LL * (unsigned int)(v186 - 1));
    else
      v187 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *(_OWORD *)v252 = v187;
    *(_OWORD *)lpMem = v254;
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(v252, lpMem, v184, v185);
    v188 = *((_DWORD *)v7 + 33);
    v189 = *((_DWORD *)v7 + 32);
    lpMem[0] = 0LL;
    if ( v189 != v188 )
    {
LABEL_319:
      v8 = 0;
      *(_OWORD *)(*((_QWORD *)v7 + 18) + 16LL * v189) = *(_OWORD *)v252;
      v195 = *((_DWORD *)v7 + 38);
      v196 = *((_DWORD *)v7 + 32) + 1;
      *((_DWORD *)v7 + 32) = v196;
      if ( v195 <= v196 )
        v195 = v196;
      *((_DWORD *)v7 + 38) = v195;
      goto LABEL_322;
    }
    v190 = 2LL * v188;
    if ( v190 > 0xFFFFFFFF )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v188, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      goto LABEL_323;
    }
    if ( (unsigned int)v190 <= 8 )
      LODWORD(v190) = 8;
    v191 = HrMalloc(0x10uLL, (unsigned int)v190, lpMem);
    v8 = v191;
    if ( v191 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v192, 0LL, 0, v191, 0x53u, 0LL);
    }
    else
    {
      v193 = 16LL * *((unsigned int *)v7 + 32);
      if ( v193 <= 0xFFFFFFFF )
      {
        v194 = lpMem[0];
        memcpy_0(lpMem[0], *((const void **)v7 + 18), (unsigned int)v193);
        operator delete(*((void **)v7 + 18));
        v189 = *((_DWORD *)v7 + 32);
        *((_QWORD *)v7 + 18) = v194;
        *((_DWORD *)v7 + 33) = v190;
        goto LABEL_319;
      }
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v192, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v206 = lpMem[0];
    if ( lpMem[0] )
    {
      v207 = GetProcessHeap();
      HeapFree(v207, 0, v206);
    }
LABEL_322:
    if ( v8 < 0 )
    {
LABEL_323:
      MilInstrumentationCheckHR_MaybeFailFast(v196, 0LL, 0, v8, 0x31u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v210, 0LL, 0, v8, 0x669u, 0LL);
LABEL_348:
      if ( BYTE8(v253) )
      {
        v211 = v253;
        if ( (_QWORD)v253 )
          (**(void (__fastcall ***)(_QWORD, __int64))v253)(v253, 1LL);
      }
      if ( v8 >= 0 )
      {
        *(_BYTE *)(v169 + 8) |= 2u;
        goto LABEL_353;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v211, 0LL, 0, v8, 0x1F6u, 0LL);
LABEL_393:
      v174 = v234;
      goto LABEL_394;
    }
    v197 = *((_DWORD *)v7 + 265);
    v198 = *((_DWORD *)v7 + 264);
    lpMem[0] = 0LL;
    if ( v198 == v197 )
    {
      v199 = 2LL * v197;
      if ( v199 > 0xFFFFFFFF )
      {
        v202 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v197, 0LL, 0, -2147024362, 0x4Cu, 0LL);
        v8 = -2147024362;
      }
      else
      {
        if ( (unsigned int)v199 <= 0x40 )
          LODWORD(v199) = 64;
        v200 = HrMalloc(4uLL, (unsigned int)v199, lpMem);
        v202 = v200;
        if ( v200 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v201, 0LL, 0, v200, 0x53u, 0LL);
        }
        else
        {
          v203 = 4LL * *((unsigned int *)v7 + 264);
          if ( v203 <= 0xFFFFFFFF )
          {
            v204 = lpMem[0];
            memcpy_0(lpMem[0], *((const void **)v7 + 134), (unsigned int)v203);
            operator delete(*((void **)v7 + 134));
            v198 = *((_DWORD *)v7 + 264);
            *((_QWORD *)v7 + 134) = v204;
            *((_DWORD *)v7 + 265) = v199;
            goto LABEL_331;
          }
          v202 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v201, 0LL, 0, -2147024362, 0x55u, 0LL);
        }
        v208 = lpMem[0];
        if ( lpMem[0] )
        {
          v209 = GetProcessHeap();
          HeapFree(v209, 0, v208);
        }
LABEL_334:
        v8 = v202;
        if ( v202 >= 0 )
          goto LABEL_348;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v211, 0LL, 0, v202, 0x66Au, 0LL);
      goto LABEL_348;
    }
LABEL_331:
    v202 = 0;
    *(_DWORD *)(*((_QWORD *)v7 + 134) + 4LL * v198) = 0;
    v205 = *((_DWORD *)v7 + 270);
    v211 = *((_DWORD *)v7 + 264) + 1;
    *((_DWORD *)v7 + 264) = v211;
    if ( v205 <= v211 )
      v205 = v211;
    *((_DWORD *)v7 + 270) = v205;
    goto LABEL_334;
  }
LABEL_353:
  v212 = *(_QWORD *)(v4 + 256);
  v235 = 1;
  v236 = 0;
  if ( v212 )
  {
    (*(void (__fastcall **)(__int64, char *, bool *))(*(_QWORD *)v212 + 328LL))(v212, &v235, &v236);
    if ( !v235 )
      goto LABEL_361;
  }
  v213 = *(_DWORD *)(v4 + 96);
  if ( (v213 & 0x10) != 0 )
  {
    v214 = *(_DWORD *)(v4 + 192) == 0;
    goto LABEL_360;
  }
  if ( (v213 & 4) != 0 )
  {
    v214 = (v213 & 0x78000) == 0;
LABEL_360:
    v236 = !v214;
    v235 = 0;
LABEL_361:
    v215 = *((_DWORD *)v7 + 281);
    v216 = *((_DWORD *)v7 + 280);
    lpMem[0] = 0LL;
    if ( v216 == v215 )
    {
      v217 = 2LL * v215;
      if ( v217 > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v215, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      }
      else
      {
        if ( (unsigned int)v217 <= 0x40 )
          LODWORD(v217) = 64;
        v218 = HrMalloc(1uLL, (unsigned int)v217, lpMem);
        if ( v218 >= 0 )
        {
          v220 = lpMem[0];
          memcpy_0(lpMem[0], *((const void **)v7 + 142), *((unsigned int *)v7 + 280));
          operator delete(*((void **)v7 + 142));
          v216 = *((_DWORD *)v7 + 280);
          *((_QWORD *)v7 + 142) = v220;
          *((_DWORD *)v7 + 281) = v217;
          goto LABEL_367;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v219, 0LL, 0, v218, 0x53u, 0LL);
        v229 = lpMem[0];
        if ( lpMem[0] )
        {
          v230 = GetProcessHeap();
          HeapFree(v230, 0, v229);
        }
      }
    }
    else
    {
LABEL_367:
      *(_BYTE *)(v216 + *((_QWORD *)v7 + 142)) = v236;
      v221 = *((_DWORD *)v7 + 286);
      v222 = *((_DWORD *)v7 + 280) + 1;
      *((_DWORD *)v7 + 280) = v222;
      if ( v221 <= v222 )
        v221 = v222;
      *((_DWORD *)v7 + 286) = v221;
    }
    *(_BYTE *)(v169 + 8) |= 8u;
  }
LABEL_371:
  v174 = v234;
  if ( v234
    && ((unsigned int)((__int64)(*(_QWORD *)(v4 + 288) - *(_QWORD *)(v4 + 280)) >> 4)
     || (unsigned int)((__int64)(*(_QWORD *)(v4 + 312) - *(_QWORD *)(v4 + 304)) >> 4)) )
  {
    lpMem[0] = (void *)0x100000000LL;
    v223 = 0;
    v224 = (int *)lpMem;
    while ( 1 )
    {
      v225 = *v224;
      v226 = v223;
      if ( (unsigned int)CVisual::GetLightsCount((_QWORD *)v4, *v224) )
        break;
LABEL_390:
      if ( ++v224 == (int *)&lpMem[1] )
        goto LABEL_393;
    }
    while ( 1 )
    {
      if ( v226 < (unsigned int)CVisual::GetLightsCount((_QWORD *)v4, v225) )
      {
        v231 = v225 ? *(_QWORD *)(v4 + 304) : *(_QWORD *)(v4 + 280);
        v228 = *(_BYTE **)(v231 + 16LL * v226);
      }
      else
      {
        v228 = v227;
      }
      if ( v228[162] )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, struct CVisualTree *, __int64))(*(_QWORD *)v228 + 248LL))(
               v228,
               v240,
               v4) )
        {
          v232 = CLightStack::Push((__int64)v7 + 160, (__int64)v228, v225);
          if ( v232 < 0 )
            break;
        }
      }
      if ( ++v226 >= (unsigned int)CVisual::GetLightsCount((_QWORD *)v4, v225) )
        goto LABEL_390;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v233, 0LL, 0, v232, 0x4Bu, 0LL);
    goto LABEL_393;
  }
LABEL_394:
  result = (unsigned int)v8;
  if ( v8 >= 0 && !v174 )
    ++*((_DWORD *)v7 + 261);
  return result;
}
