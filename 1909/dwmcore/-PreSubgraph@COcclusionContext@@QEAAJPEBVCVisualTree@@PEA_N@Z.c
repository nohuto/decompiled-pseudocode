/*
 * XREFs of ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180085890
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180085370 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 * Callees:
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x18000C0AC (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x1800146D0 (-Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029BA0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180035AFC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18006FF40 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x18008B720 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18008CDE0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800A833C (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AEA10 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AF4EC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BCD5C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1800ECD80 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x1801CBBC4 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 */

__int64 __fastcall COcclusionContext::PreSubgraph(COcclusionContext *this, unsigned __int64 a2, bool *a3)
{
  int v3; // edi
  __int64 v4; // rsi
  bool *v5; // r10
  struct CVisualTree *v6; // r9
  COcclusionContext *v7; // r15
  signed int v8; // r13d
  __int64 v9; // r11
  _QWORD *v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // r12
  bool *v14; // rcx
  unsigned int i; // eax
  COcclusionContext **v16; // rcx
  COcclusionContext *j; // rax
  __int64 v18; // rdx
  unsigned int k; // eax
  __int64 v20; // rdx
  _QWORD **v21; // rdx
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  unsigned int v24; // r14d
  __int64 result; // rax
  float *Bounds; // rdx
  _BYTE *v27; // r10
  float v28; // xmm0_4
  int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // r9
  _DWORD *v32; // r8
  int v33; // ecx
  __int64 v34; // rdx
  _BYTE *v35; // rcx
  unsigned int v36; // eax
  __int64 *v37; // rcx
  int v38; // eax
  int v39; // eax
  void *v40; // r9
  float *v41; // rax
  __int64 v42; // r9
  unsigned int v43; // xmm6_4
  unsigned int v44; // xmm7_4
  unsigned int v45; // xmm4_4
  unsigned __int32 v46; // xmm5_4
  int v47; // eax
  unsigned int v48; // r8d
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
  __int64 **TreeData; // rax
  __int64 v78; // rcx
  __int64 v79; // rcx
  unsigned int v80; // eax
  unsigned __int64 v81; // rdi
  signed int v82; // eax
  __int64 v83; // rcx
  unsigned __int64 v84; // rax
  void *v85; // rbx
  unsigned int v86; // eax
  __int64 v87; // rcx
  _BYTE *v88; // rax
  struct CVisualTree *v89; // r9
  __int64 v90; // r13
  signed int v91; // r12d
  __int64 *v92; // rdi
  _DWORD *v93; // r8
  __int64 v94; // rax
  __int64 **v95; // r14
  __int64 v96; // rbx
  __int64 v97; // rdx
  _BYTE *v98; // rcx
  unsigned int kk; // eax
  __int64 *v100; // rcx
  void *v101; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v103; // r8
  __int64 v104; // rdx
  _BYTE *v105; // rcx
  unsigned int jj; // eax
  __int64 *v107; // rcx
  __int64 *v108; // rax
  CVisual *v109; // rax
  __int64 **v110; // rax
  __int64 v111; // rax
  __int64 v112; // r8
  __int64 v113; // rdx
  unsigned int mm; // eax
  __int64 v115; // rdx
  _QWORD **v116; // rdx
  _QWORD *v117; // rdx
  _QWORD *v118; // rax
  unsigned __int64 v119; // rax
  float *v120; // rbx
  _BYTE *v121; // rax
  _BOOL8 v122; // r8
  bool IsEqual; // al
  _BYTE *v124; // r9
  signed int v125; // eax
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
  __int64 v140; // rcx
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
  __int64 v159; // rcx
  unsigned __int64 v160; // rdi
  signed int v161; // eax
  __int64 v162; // rcx
  unsigned __int64 v163; // rcx
  void *v164; // rbx
  __int64 v165; // rcx
  __int64 v166; // rax
  unsigned int v167; // eax
  __int64 v168; // rcx
  __int64 v169; // r14
  void *v170; // rbx
  HANDLE v171; // rax
  __int64 v172; // rcx
  CGeometry *v173; // rcx
  bool v174; // di
  signed int ShapeData; // eax
  __int64 v176; // rcx
  void (__fastcall ***v177)(void *, __int64); // rcx
  char v178; // bl
  CGeometry *v179; // rcx
  signed int v180; // eax
  __int64 v181; // rcx
  __int64 v182; // rcx
  signed int v183; // eax
  int v184; // eax
  __int128 v185; // xmm0
  __int64 v186; // rcx
  unsigned int v187; // eax
  unsigned __int64 v188; // rdi
  signed int v189; // eax
  __int64 v190; // rcx
  unsigned __int64 v191; // rax
  void *v192; // rbx
  unsigned int v193; // eax
  __int64 v194; // rcx
  __int64 v195; // rcx
  unsigned int v196; // eax
  unsigned __int64 v197; // rdi
  signed int v198; // eax
  __int64 v199; // rcx
  signed int v200; // ebx
  unsigned __int64 v201; // rax
  void *v202; // rbx
  unsigned int v203; // eax
  void *v204; // rbx
  HANDLE v205; // rax
  void *v206; // rdi
  HANDLE v207; // rax
  __int64 v208; // rcx
  __int64 v209; // rcx
  __int64 v210; // rcx
  int v211; // eax
  bool v212; // zf
  __int64 v213; // rcx
  unsigned int v214; // eax
  unsigned __int64 v215; // rdi
  signed int v216; // eax
  __int64 v217; // rcx
  void *v218; // rbx
  unsigned int v219; // eax
  unsigned int v220; // ecx
  unsigned int v221; // r8d
  int *v222; // r12
  int v223; // r14d
  unsigned int v224; // edi
  _BYTE *v225; // r8
  _BYTE *v226; // rbx
  void *v227; // rbx
  HANDLE v228; // rax
  __int64 v229; // rax
  signed int v230; // eax
  __int64 v231; // rcx
  bool v232; // [rsp+40h] [rbp-C0h]
  char v233; // [rsp+41h] [rbp-BFh] BYREF
  bool v234; // [rsp+42h] [rbp-BEh] BYREF
  char v235; // [rsp+43h] [rbp-BDh] BYREF
  char v236; // [rsp+44h] [rbp-BCh]
  void *lpMem[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct CVisualTree *v238; // [rsp+58h] [rbp-A8h]
  __m128 v239; // [rsp+60h] [rbp-A0h]
  __m128 v240; // [rsp+70h] [rbp-90h]
  __m128 v241; // [rsp+80h] [rbp-80h]
  __m128 v242; // [rsp+90h] [rbp-70h]
  int v243; // [rsp+A0h] [rbp-60h]
  float v244[20]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v245[64]; // [rsp+100h] [rbp+0h] BYREF
  int v246; // [rsp+140h] [rbp+40h]
  _BYTE v247[64]; // [rsp+150h] [rbp+50h] BYREF
  int v248; // [rsp+190h] [rbp+90h]
  struct CManipulationManager *v249[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v250; // [rsp+1B8h] [rbp+B8h] BYREF
  __int128 v251; // [rsp+1C8h] [rbp+C8h] BYREF

  v3 = *((_DWORD *)this + 261);
  v4 = *((_QWORD *)this + 7);
  v5 = a3;
  lpMem[0] = a3;
  v232 = v3 == 0;
  v238 = (struct CVisualTree *)a2;
  v6 = (struct CVisualTree *)a2;
  v7 = this;
  v8 = 0;
  v9 = 0LL;
  *(_QWORD *)&v251 = 0LL;
  if ( *(_BYTE *)(a2 + 32) )
  {
    v10 = (_QWORD *)(v4 + 328);
LABEL_3:
    if ( v10 )
    {
      v9 = v10[4];
      *(_QWORD *)&v251 = v9;
      if ( !v9 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, bool *, struct CVisualTree *))(*(_QWORD *)v10[3]
                                                                                                + 368LL))(
                v10[3],
                a2,
                a3,
                v6);
        v6 = v238;
        v9 = v11;
        v5 = (bool *)lpMem[0];
        *(_QWORD *)&v251 = v11;
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
    a3 = *(bool **)(v4 + 224);
    if ( *(int *)a3 < 0 )
    {
      v18 = *((unsigned int *)a3 + 1);
      this = (COcclusionContext *)(a3 + 8);
      for ( k = 0; k < (unsigned int)v18; this = (COcclusionContext *)((char *)this + 1) )
      {
        if ( *(_BYTE *)this == 1 )
          break;
        ++k;
      }
      if ( k >= (unsigned int)v18 )
      {
        v21 = 0LL;
      }
      else
      {
        v20 = v18 + 15;
        this = (COcclusionContext *)&a3[8LL * k - (v20 & 7)];
        v21 = (_QWORD **)((char *)this + v20);
      }
      v22 = *v21;
      if ( v22 )
      {
        v23 = (_QWORD *)*v22;
        if ( (_QWORD *)*v22 != v22 )
        {
          while ( (struct CVisualTree *)v23[4] != v6 )
          {
            v23 = (_QWORD *)*v23;
            if ( v23 == v22 )
              goto LABEL_33;
          }
          v12 = v23 - 28;
        }
      }
    }
  }
LABEL_33:
  v24 = -1;
  if ( !v9 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x8007000E, 0x164u, 0LL);
    return 2147942414LL;
  }
  *(_BYTE *)(v9 + 8) &= 0xF0u;
  *(_DWORD *)(v9 + 12) = *((_DWORD *)v7 + 260);
  *v5 = 1;
  Bounds = (float *)CVisual::GetBounds(v4, v6, a3, v6);
  v28 = Bounds[5];
  v29 = (v28 <= Bounds[4]) + 1;
  if ( Bounds[2] > *Bounds )
    v29 = v28 <= Bounds[4];
  v30 = v29 + 1;
  if ( Bounds[3] > Bounds[1] )
    v30 = v29;
  if ( v30 > 1 )
  {
    v24 = 0;
LABEL_41:
    v31 = 0LL;
    goto LABEL_42;
  }
  v38 = *((_DWORD *)v7 + 272);
  if ( v38 )
    v24 = *(_DWORD *)(*((_QWORD *)v7 + 138) + 4LL * (unsigned int)(v38 - 1));
  if ( !v24 )
    goto LABEL_41;
  v39 = *((_DWORD *)v7 + 4);
  if ( v39 )
    v40 = (void *)(*((_QWORD *)v7 + 4) + 68LL * (unsigned int)(v39 - 1));
  else
    v40 = &CMILMatrix::Identity;
  v41 = (float *)CVisual::GetBounds(v4, *((_QWORD *)v7 + 1), 0LL, v40);
  CMILMatrix::Transform3DBoundsHelper<1>(v42, v41, (__m128 *)v249);
  v43 = (unsigned int)v249[0];
  v44 = (unsigned int)v249[1];
  v45 = HIDWORD(v249[0]);
  v46 = HIDWORD(v249[1]);
  v250 = *(_OWORD *)v249;
  if ( *(float *)&v249[1] <= *(float *)v249 || *((float *)&v249[1] + 1) <= *((float *)v249 + 1) )
  {
    v31 = 0LL;
LABEL_135:
    v27 = lpMem[0];
    v24 = 0;
LABEL_42:
    v232 = 0;
    if ( v12[1] != *(_QWORD *)(*((_QWORD *)v7 + 80) + 384LL) )
      *v27 = 0;
    goto LABEL_44;
  }
  v47 = *((_DWORD *)v7 + 32);
  if ( v47 )
  {
    *(_OWORD *)v249 = *(_OWORD *)(*((_QWORD *)v7 + 18) + 16LL * (unsigned int)(v47 - 1));
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(v249, &v250);
    v250 = *(_OWORD *)v249;
    v44 = (unsigned int)v249[1];
    v45 = HIDWORD(v249[0]);
    v43 = (unsigned int)v249[0];
    v46 = _mm_shuffle_ps(*(__m128 *)v249, *(__m128 *)v249, 255).m128_u32[0];
  }
  v31 = 0LL;
  v48 = 0;
  if ( !*((_DWORD *)v7 + 162) )
    goto LABEL_135;
  while ( ((v24 >> v48) & 1) == 0 )
  {
LABEL_68:
    if ( ++v48 >= *((_DWORD *)v7 + 162) )
    {
      v27 = lpMem[0];
      v24 = v31;
      goto LABEL_42;
    }
  }
  v249[0] = (struct CManipulationManager *)__PAIR64__(v45, v43);
  v249[1] = (struct CManipulationManager *)__PAIR64__(v46, v44);
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(v249, (char *)v7 + 16 * v48 + 652);
  if ( *(float *)&v249[1] <= *(float *)v249 || *((float *)&v249[1] + 1) <= *((float *)v249 + 1) )
  {
    v24 &= ~(1 << v48);
    goto LABEL_68;
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
        goto LABEL_89;
      v51 = *(_DWORD **)(v4 + 224);
      if ( (*v51 & 0x200000) == 0 )
        goto LABEL_88;
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
LABEL_89:
        v56 = 1;
      else
LABEL_88:
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
          if ( v4 == *((_QWORD *)v238 + 3) && *((_BYTE *)v238 + 34) )
            goto LABEL_402;
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
            LODWORD(v249[0]) = v69[1];
            v67 = *(float *)v249;
          }
          else
          {
            v67 = *(float *)&FLOAT_1_0;
          }
          if ( fminf(1.0, fmaxf(v67, 0.0)) >= 1.0 )
          {
LABEL_402:
            if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 216LL))(v4) )
            {
              v70 = *(_DWORD **)(v4 + 224);
              if ( (*v70 & 0x200000) == 0 )
                goto LABEL_130;
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
LABEL_130:
                if ( *((_BYTE *)v238 + 32)
                  || (v76 = *(_QWORD *)(v4 + 16)) == 0
                  || (TreeData = CVisual::FindTreeData((CVisual *)v4, v238)) == 0LL
                  || ((_BYTE)TreeData[2] & 4) == 0
                  || TreeData[27] != *(__int64 **)(v76 + 384) )
                {
                  v31 = 0LL;
                  goto LABEL_44;
                }
              }
            }
          }
        }
      }
      v31 = 0LL;
    }
    v232 = 0;
  }
LABEL_44:
  v32 = *(_DWORD **)(v4 + 224);
  if ( (*v32 & 0x1000000) != 0 )
    goto LABEL_142;
  v33 = *(_DWORD *)(*(_QWORD *)(v4 + 216) + 4LL);
  if ( (v33 & 0x2000000) != 0 || (v33 & 0x4000000) != 0 )
    goto LABEL_142;
  if ( (*v32 & 0x200000) != 0 )
  {
    v34 = (unsigned int)v32[1];
    v35 = v32 + 2;
    v36 = v31;
    if ( (_DWORD)v34 )
    {
      do
      {
        if ( *v35 == 11 )
          break;
        ++v36;
        ++v35;
      }
      while ( v36 < (unsigned int)v34 );
    }
    v37 = v36 >= (unsigned int)v34
        ? (__int64 *)v31
        : (__int64 *)((char *)v32 + 8LL * v36 - (((_BYTE)v34 + 15) & 7) + v34 + 15);
    v78 = *v37;
    if ( v78 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v78 + 48LL))(v78, 56LL) )
        goto LABEL_142;
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _DWORD *, __int64))(*(_QWORD *)v4 + 48LL))(
         v4,
         91LL,
         v32,
         v31)
    && ((*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 216LL))(v4) || *(_QWORD *)(v4 + 560)) )
  {
LABEL_142:
    ++*((_DWORD *)v7 + 262);
  }
  if ( *(_BYTE *)lpMem[0] != 1 )
    goto LABEL_374;
  v79 = *((unsigned int *)v7 + 273);
  v80 = *((_DWORD *)v7 + 272);
  lpMem[0] = 0LL;
  if ( v80 != (_DWORD)v79 )
    goto LABEL_151;
  v81 = 2LL * (unsigned int)v79;
  if ( v81 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v79, 0LL, 0, 0x80070216, 0x4Cu, 0LL);
    goto LABEL_154;
  }
  if ( (unsigned int)v81 <= 0x40 )
    LODWORD(v81) = 64;
  v82 = HrMalloc(4uLL, (unsigned int)v81, lpMem);
  if ( v82 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, v82, 0x53u, 0LL);
LABEL_168:
    v101 = lpMem[0];
    if ( lpMem[0] )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v101);
    }
    goto LABEL_154;
  }
  v84 = 4LL * *((unsigned int *)v7 + 272);
  if ( v84 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, 0x80070216, 0x55u, 0LL);
    goto LABEL_168;
  }
  v85 = lpMem[0];
  memcpy_0(lpMem[0], *((const void **)v7 + 138), (unsigned int)v84);
  operator delete(*((void **)v7 + 138));
  v80 = *((_DWORD *)v7 + 272);
  *((_QWORD *)v7 + 138) = v85;
  *((_DWORD *)v7 + 273) = v81;
LABEL_151:
  *(_DWORD *)(*((_QWORD *)v7 + 138) + 4LL * v80) = v24;
  v86 = *((_DWORD *)v7 + 278);
  v87 = (unsigned int)(*((_DWORD *)v7 + 272) + 1);
  *((_DWORD *)v7 + 272) = v87;
  if ( v86 <= (unsigned int)v87 )
    v86 = v87;
  *((_DWORD *)v7 + 278) = v86;
LABEL_154:
  *(_BYTE *)(v251 + 8) |= 1u;
  if ( !v24 )
    goto LABEL_374;
  v88 = v247;
  v89 = v238;
  v90 = *((_QWORD *)v7 + 7);
  if ( !*(_QWORD *)(v4 + 248) )
    v88 = 0LL;
  v243 = 0;
  v248 = 0;
  v91 = -2003292412;
  v58 = *((_BYTE *)v238 + 32) == 0;
  lpMem[0] = v88;
  if ( !v58 )
  {
    v92 = (__int64 *)(v90 + 328);
    goto LABEL_159;
  }
  v103 = *(_QWORD *)(v90 + 224);
  if ( *(int *)v103 >= 0 )
    goto LABEL_243;
  v104 = *(unsigned int *)(v103 + 4);
  v105 = (_BYTE *)(v103 + 8);
  for ( jj = 0; jj < (unsigned int)v104; ++v105 )
  {
    if ( *v105 == 1 )
      break;
    ++jj;
  }
  v107 = jj >= (unsigned int)v104 ? 0LL : (__int64 *)(v103 + v104 + 15 + 8LL * jj - (((_BYTE)v104 + 15) & 7));
  v87 = *v107;
  if ( !v87 )
    goto LABEL_243;
  v108 = *(__int64 **)v87;
  if ( *(_QWORD *)v87 == v87 )
    goto LABEL_243;
  while ( 1 )
  {
    v92 = v108 - 28;
    if ( (struct CVisualTree *)v108[4] == v238 )
      break;
    v108 = (__int64 *)*v108;
    if ( v108 == (__int64 *)v87 )
      goto LABEL_243;
  }
LABEL_159:
  if ( !v92 )
  {
LABEL_243:
    v132 = v242;
    v135 = v241;
    v130 = v240;
    v134 = v239;
    v133 = v243;
    goto LABEL_244;
  }
  v93 = *(_DWORD **)(v90 + 224);
  v91 = 0;
  v94 = *(_QWORD *)(v90 + 16);
  v95 = 0LL;
  v236 = 0;
  v96 = *(_QWORD *)(v94 + 384);
  if ( (*v93 & 0x800000) == 0 )
    goto LABEL_191;
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
    v100 = (__int64 *)((char *)v93 + 8LL * kk - (v97 & 7) + v97);
  }
  v87 = *v100;
  if ( !v87 )
    goto LABEL_191;
  v109 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, struct CVisualTree *))(**(_QWORD **)v87 + 192LL))(
                      *(_QWORD *)v87,
                      v97,
                      v93,
                      v238);
  if ( !v109 || (v92[2] & 4) != 0 && v92[27] == v96 )
  {
    v89 = v238;
    goto LABEL_191;
  }
  v236 = 1;
  v110 = CVisual::FindTreeData(v109, v238);
  v89 = v238;
  v95 = v110;
  if ( v110 )
  {
LABEL_208:
    v119 = (unsigned __int64)v95[15];
  }
  else
  {
LABEL_191:
    if ( v90 != *((_QWORD *)v89 + 3) )
    {
      v95 = 0LL;
      v111 = *(_QWORD *)(v90 + 80);
      if ( *((_BYTE *)v89 + 32) )
      {
        v95 = (__int64 **)(v111 + 328);
      }
      else
      {
        v112 = *(_QWORD *)(v111 + 224);
        if ( *(int *)v112 < 0 )
        {
          v113 = *(unsigned int *)(v112 + 4);
          v87 = v112 + 8;
          for ( mm = 0; mm < (unsigned int)v113; ++v87 )
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
            v87 = v112 + 8LL * mm - (v115 & 7);
            v116 = (_QWORD **)(v87 + v115);
          }
          v117 = *v116;
          if ( v117 )
          {
            v118 = (_QWORD *)*v117;
            if ( (_QWORD *)*v117 != v117 )
            {
              while ( 1 )
              {
                v87 = (__int64)(v118 - 28);
                if ( (struct CVisualTree *)v118[4] == v89 )
                  break;
                v118 = (_QWORD *)*v118;
                if ( v118 == v117 )
                  goto LABEL_207;
              }
              v95 = (__int64 **)(v118 - 28);
            }
          }
        }
      }
    }
LABEL_207:
    if ( v95 )
      goto LABEL_208;
    v119 = 1LL;
  }
  if ( v92[15] >= v119 )
  {
LABEL_236:
    if ( v91 >= 0 )
      goto LABEL_237;
    MilInstrumentationCheckHR_MaybeFailFast(v87, 0LL, 0, v91, 0x768u, 0LL);
    goto LABEL_243;
  }
  v120 = (float *)(v95 + 5);
  v244[16] = 0.0;
  v246 = 0;
  if ( !v95 )
    v120 = 0LL;
  v121 = v245;
  if ( !*(_QWORD *)(v90 + 248) )
    v121 = 0LL;
  CVisual::CalcEffectiveTransform(v90, 5LL, v120, &v235, v244, v89, v121);
  if ( v236 || v90 == *((_QWORD *)v238 + 3) )
  {
    LOBYTE(v122) = 1;
  }
  else if ( v235 )
  {
    IsEqual = CMILMatrix::IsEqualTo<0>(v120, v244);
    v122 = IsEqual;
    LOBYTE(v122) = !IsEqual;
  }
  else
  {
    LOBYTE(v122) = 0;
  }
  v124 = v245;
  if ( !*(_QWORD *)(v90 + 248) )
    v124 = 0LL;
  v125 = (*(__int64 (__fastcall **)(__int64 *, float *, _BOOL8, _BYTE *))(*v92 + 48))(v92, v244, v122, v124);
  v91 = v125;
  if ( v125 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v87, 0LL, 0, v125, 0x84Fu, 0LL);
  }
  else if ( (**(_DWORD **)(v90 + 224) & 0x400000) != 0 )
  {
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*(_QWORD *)(v90 + 224), 10LL);
    v87 = *(unsigned int *)(v127 + 4);
    if ( Slot >= (unsigned int)v87 )
    {
      v128 = 0LL;
    }
    else
    {
      v87 += 15LL;
      v128 = (_QWORD *)(v87 + v127 + 8LL * Slot - (v87 & 7));
    }
    if ( *v128 && (*(_BYTE *)(v90 + 94) & 2) != 0 )
    {
      v129 = *(CComposition **)(v90 + 16);
      v249[0] = 0LL;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)v249);
      if ( (int)CComposition::GetManipulationManager(v129, v249) >= 0 )
        (*(void (__fastcall **)(struct CManipulationManager *, __int64, float *))(*(_QWORD *)v249[0] + 96LL))(
          v249[0],
          v90,
          v244);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)v249);
    }
  }
  if ( v91 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v87, 0LL, 0, v91, 0x80Bu, 0LL);
    goto LABEL_236;
  }
LABEL_237:
  if ( !v92[15] )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v87, 0LL, 0, 0x88982F04, 0x65u, 0LL);
    v91 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v140, 0LL, 0, 0x88982F04, 0x76Fu, 0LL);
    v8 = -2003292412;
LABEL_384:
    MilInstrumentationCheckHR_MaybeFailFast(v87, 0LL, 0, v91, 0x1CEu, 0LL);
    goto LABEL_396;
  }
  v87 = *((unsigned __int8 *)v92 + 16);
  v130 = *(__m128 *)(v92 + 7);
  v131 = lpMem[0];
  v132 = *(__m128 *)(v92 + 11);
  v133 = *((_DWORD *)v92 + 26);
  v134 = *(__m128 *)(v92 + 5);
  v135 = *(__m128 *)(v92 + 9);
  LOBYTE(v87) = (v87 & 2) != 0;
  v243 = v133;
  v240 = v130;
  v242 = v132;
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
  v235 = v87;
  v91 = 0;
LABEL_244:
  v8 = v91;
  if ( v91 < 0 )
    goto LABEL_384;
  if ( v235 )
  {
    if ( v232 )
    {
      if ( SBYTE1(v243) >> 6 )
      {
        v141 = SBYTE1(v243) >> 6 == 1;
      }
      else
      {
        v141 = 0;
        v142 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(_mm_shuffle_ps(v134, v134, 170).m128_f32[0] - 0.0)) & _xmm);
        if ( v142 < 0.000081380211 )
        {
          v143 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v240.m128_f32[2] - 0.0)) & _xmm);
          if ( v143 < 0.000081380211 )
          {
            v144 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v242.m128_f32[2] - 0.0)) & _xmm);
            if ( v144 < 0.000081380211 )
              goto LABEL_260;
          }
          if ( v142 < 0.000081380211 )
          {
            v145 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v240.m128_f32[2] - 0.0)) & _xmm);
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
                      v152 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v242.m128_f32[2] - 0.0)) & _xmm);
                      if ( v152 < 0.000081380211 )
                      {
LABEL_260:
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
        BYTE1(v243) = BYTE1(v243) & 0x3F | ((v141 << 7) - 64);
        v133 = v243;
      }
      if ( !v141
        || (v157 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(_mm_shuffle_ps(v134, v134, 85).m128_f32[0] - 0.0)) & _xmm),
            v157 >= 0.000081380211)
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v130.m128_f32[0] - 0.0)) & _xmm) >= 0.000081380211 )
      {
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v134.m128_f32[0] - 0.0)) & _xmm) >= 0.000081380211
          || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(_mm_shuffle_ps(v130, v130, 85).m128_f32[0] - 0.0)) & _xmm) >= 0.000081380211 )
        {
          v232 = 0;
        }
      }
    }
    v158 = *((unsigned int *)v7 + 4);
    v159 = *((unsigned int *)v7 + 5);
    lpMem[0] = 0LL;
    if ( (_DWORD)v158 != (_DWORD)v159 )
    {
LABEL_275:
      v165 = 68 * v158;
      v166 = *((_QWORD *)v7 + 4);
      v8 = 0;
      *(__m128 *)(v165 + v166) = v134;
      *(__m128 *)(v165 + v166 + 16) = v130;
      *(__m128 *)(v165 + v166 + 32) = v135;
      *(__m128 *)(v165 + v166 + 48) = v132;
      *(_DWORD *)(v165 + v166 + 64) = v133;
      v167 = *((_DWORD *)v7 + 10);
      v168 = (unsigned int)(*((_DWORD *)v7 + 4) + 1);
      *((_DWORD *)v7 + 4) = v168;
      if ( v167 <= (unsigned int)v168 )
        v167 = v168;
      *((_DWORD *)v7 + 10) = v167;
      goto LABEL_278;
    }
    v160 = 2LL * (unsigned int)v159;
    if ( v160 > 0xFFFFFFFF )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v159, 0LL, 0, 0x80070216, 0x4Cu, 0LL);
      goto LABEL_279;
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
        goto LABEL_275;
      }
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v163, 0LL, 0, 0x80070216, 0x55u, 0LL);
    }
    v170 = lpMem[0];
    if ( lpMem[0] )
    {
      v171 = GetProcessHeap();
      HeapFree(v171, 0, v170);
    }
LABEL_278:
    if ( v8 < 0 )
    {
LABEL_279:
      MilInstrumentationCheckHR_MaybeFailFast(v168, 0LL, 0, v8, 0x36u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v172, 0LL, 0, v8, 0x1DFu, 0LL);
      goto LABEL_396;
    }
    v169 = v251;
    *(_BYTE *)(v251 + 8) |= 4u;
  }
  else
  {
    v169 = v251;
  }
  v173 = *(CGeometry **)(v4 + 248);
  if ( v173 )
  {
    v174 = v232;
    if ( !v232 )
      goto LABEL_306;
    lpMem[0] = 0LL;
    LOBYTE(lpMem[1]) = 0;
    ShapeData = CGeometry::GetShapeData(v173, (const struct D2D_SIZE_F *)(v4 + 132), (struct CShapePtr *)lpMem);
    v8 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v176, 0LL, 0, ShapeData, 0x646u, 0LL);
      v178 = v235;
LABEL_299:
      v177 = (void (__fastcall ***)(void *, __int64))lpMem[0];
    }
    else
    {
      v177 = (void (__fastcall ***)(void *, __int64))lpMem[0];
      if ( lpMem[0] )
      {
        if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)lpMem[0] + 16LL))(lpMem[0]) )
          goto LABEL_296;
        v177 = (void (__fastcall ***)(void *, __int64))lpMem[0];
        if ( lpMem[0] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(void *, struct CManipulationManager **))(*(_QWORD *)lpMem[0] + 40LL))(
                 lpMem[0],
                 v249)
            && LODWORD(v249[0]) == 1 )
          {
            v178 = 1;
            goto LABEL_299;
          }
LABEL_296:
          v177 = (void (__fastcall ***)(void *, __int64))lpMem[0];
        }
      }
      v178 = 0;
    }
    if ( LOBYTE(lpMem[1]) && v177 )
      (**v177)(v177, 1LL);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v177, 0LL, 0, v8, 0x1ECu, 0LL);
      goto LABEL_397;
    }
    if ( !v178 )
      v232 = 0;
LABEL_306:
    v179 = *(CGeometry **)(v4 + 248);
    *(_QWORD *)&v250 = 0LL;
    BYTE8(v250) = 0;
    v180 = CGeometry::GetShapeData(v179, (const struct D2D_SIZE_F *)(v4 + 132), (struct CShapePtr *)&v250);
    v8 = v180;
    if ( v180 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v181, 0LL, 0, v180, 0x660u, 0LL);
      goto LABEL_351;
    }
    v182 = v250;
    v8 = -2003292412;
    if ( (_QWORD)v250 )
    {
      v183 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(*(_QWORD *)v250 + 32LL))(v250, &v251, 0LL);
      v8 = v183;
      if ( v183 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v182, 0LL, 0, v183, 0x10Du, 0LL);
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v182, 0LL, 0, v8, 0x665u, 0LL);
      goto LABEL_351;
    }
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v247);
    v184 = *((_DWORD *)v7 + 32);
    if ( v184 )
      v185 = *(_OWORD *)(*((_QWORD *)v7 + 18) + 16LL * (unsigned int)(v184 - 1));
    else
      v185 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *(_OWORD *)v249 = v185;
    *(_OWORD *)lpMem = v251;
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(v249, lpMem);
    v186 = *((unsigned int *)v7 + 33);
    v187 = *((_DWORD *)v7 + 32);
    lpMem[0] = 0LL;
    if ( v187 != (_DWORD)v186 )
    {
LABEL_322:
      v8 = 0;
      *(_OWORD *)(*((_QWORD *)v7 + 18) + 16LL * v187) = *(_OWORD *)v249;
      v193 = *((_DWORD *)v7 + 38);
      v194 = (unsigned int)(*((_DWORD *)v7 + 32) + 1);
      *((_DWORD *)v7 + 32) = v194;
      if ( v193 <= (unsigned int)v194 )
        v193 = v194;
      *((_DWORD *)v7 + 38) = v193;
      goto LABEL_325;
    }
    v188 = 2LL * (unsigned int)v186;
    if ( v188 > 0xFFFFFFFF )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v186, 0LL, 0, 0x80070216, 0x4Cu, 0LL);
      goto LABEL_326;
    }
    if ( (unsigned int)v188 <= 8 )
      LODWORD(v188) = 8;
    v189 = HrMalloc(0x10uLL, (unsigned int)v188, lpMem);
    v8 = v189;
    if ( v189 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v190, 0LL, 0, v189, 0x53u, 0LL);
    }
    else
    {
      v191 = 16LL * *((unsigned int *)v7 + 32);
      if ( v191 <= 0xFFFFFFFF )
      {
        v192 = lpMem[0];
        memcpy_0(lpMem[0], *((const void **)v7 + 18), (unsigned int)v191);
        operator delete(*((void **)v7 + 18));
        v187 = *((_DWORD *)v7 + 32);
        *((_QWORD *)v7 + 18) = v192;
        *((_DWORD *)v7 + 33) = v188;
        goto LABEL_322;
      }
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v190, 0LL, 0, 0x80070216, 0x55u, 0LL);
    }
    v204 = lpMem[0];
    if ( lpMem[0] )
    {
      v205 = GetProcessHeap();
      HeapFree(v205, 0, v204);
    }
LABEL_325:
    if ( v8 < 0 )
    {
LABEL_326:
      MilInstrumentationCheckHR_MaybeFailFast(v194, 0LL, 0, v8, 0x31u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v208, 0LL, 0, v8, 0x669u, 0LL);
LABEL_351:
      if ( BYTE8(v250) )
      {
        v209 = v250;
        if ( (_QWORD)v250 )
          (**(void (__fastcall ***)(_QWORD, __int64))v250)(v250, 1LL);
      }
      if ( v8 >= 0 )
      {
        *(_BYTE *)(v169 + 8) |= 2u;
        goto LABEL_356;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v209, 0LL, 0, v8, 0x1F6u, 0LL);
LABEL_396:
      v174 = v232;
      goto LABEL_397;
    }
    v195 = *((unsigned int *)v7 + 265);
    v196 = *((_DWORD *)v7 + 264);
    lpMem[0] = 0LL;
    if ( v196 == (_DWORD)v195 )
    {
      v197 = 2LL * (unsigned int)v195;
      if ( v197 > 0xFFFFFFFF )
      {
        v200 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v195, 0LL, 0, 0x80070216, 0x4Cu, 0LL);
        v8 = -2147024362;
      }
      else
      {
        if ( (unsigned int)v197 <= 0x40 )
          LODWORD(v197) = 64;
        v198 = HrMalloc(4uLL, (unsigned int)v197, lpMem);
        v200 = v198;
        if ( v198 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v199, 0LL, 0, v198, 0x53u, 0LL);
        }
        else
        {
          v201 = 4LL * *((unsigned int *)v7 + 264);
          if ( v201 <= 0xFFFFFFFF )
          {
            v202 = lpMem[0];
            memcpy_0(lpMem[0], *((const void **)v7 + 134), (unsigned int)v201);
            operator delete(*((void **)v7 + 134));
            v196 = *((_DWORD *)v7 + 264);
            *((_QWORD *)v7 + 134) = v202;
            *((_DWORD *)v7 + 265) = v197;
            goto LABEL_334;
          }
          v200 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v199, 0LL, 0, 0x80070216, 0x55u, 0LL);
        }
        v206 = lpMem[0];
        if ( lpMem[0] )
        {
          v207 = GetProcessHeap();
          HeapFree(v207, 0, v206);
        }
LABEL_337:
        v8 = v200;
        if ( v200 >= 0 )
          goto LABEL_351;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v209, 0LL, 0, v200, 0x66Au, 0LL);
      goto LABEL_351;
    }
LABEL_334:
    v200 = 0;
    *(_DWORD *)(*((_QWORD *)v7 + 134) + 4LL * v196) = 0;
    v203 = *((_DWORD *)v7 + 270);
    v209 = (unsigned int)(*((_DWORD *)v7 + 264) + 1);
    *((_DWORD *)v7 + 264) = v209;
    if ( v203 <= (unsigned int)v209 )
      v203 = v209;
    *((_DWORD *)v7 + 270) = v203;
    goto LABEL_337;
  }
LABEL_356:
  v210 = *(_QWORD *)(v4 + 256);
  v233 = 1;
  v234 = 0;
  if ( v210 )
  {
    (*(void (__fastcall **)(__int64, char *, bool *))(*(_QWORD *)v210 + 328LL))(v210, &v233, &v234);
    if ( !v233 )
      goto LABEL_364;
  }
  v211 = *(_DWORD *)(v4 + 96);
  if ( (v211 & 0x10) != 0 )
  {
    v212 = *(_DWORD *)(v4 + 192) == 0;
    goto LABEL_363;
  }
  if ( (v211 & 4) != 0 )
  {
    v212 = (v211 & 0x78000) == 0;
LABEL_363:
    v234 = !v212;
    v233 = 0;
LABEL_364:
    v213 = *((unsigned int *)v7 + 281);
    v214 = *((_DWORD *)v7 + 280);
    lpMem[0] = 0LL;
    if ( v214 == (_DWORD)v213 )
    {
      v215 = 2LL * (unsigned int)v213;
      if ( v215 > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v213, 0LL, 0, 0x80070216, 0x4Cu, 0LL);
      }
      else
      {
        if ( (unsigned int)v215 <= 0x40 )
          LODWORD(v215) = 64;
        v216 = HrMalloc(1uLL, (unsigned int)v215, lpMem);
        if ( v216 >= 0 )
        {
          v218 = lpMem[0];
          memcpy_0(lpMem[0], *((const void **)v7 + 142), *((unsigned int *)v7 + 280));
          operator delete(*((void **)v7 + 142));
          v214 = *((_DWORD *)v7 + 280);
          *((_QWORD *)v7 + 142) = v218;
          *((_DWORD *)v7 + 281) = v215;
          goto LABEL_370;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v217, 0LL, 0, v216, 0x53u, 0LL);
        v227 = lpMem[0];
        if ( lpMem[0] )
        {
          v228 = GetProcessHeap();
          HeapFree(v228, 0, v227);
        }
      }
    }
    else
    {
LABEL_370:
      *(_BYTE *)(v214 + *((_QWORD *)v7 + 142)) = v234;
      v219 = *((_DWORD *)v7 + 286);
      v220 = *((_DWORD *)v7 + 280) + 1;
      *((_DWORD *)v7 + 280) = v220;
      if ( v219 <= v220 )
        v219 = v220;
      *((_DWORD *)v7 + 286) = v219;
    }
    *(_BYTE *)(v169 + 8) |= 8u;
  }
LABEL_374:
  v174 = v232;
  if ( v232
    && ((unsigned int)((__int64)(*(_QWORD *)(v4 + 288) - *(_QWORD *)(v4 + 280)) >> 4)
     || (unsigned int)((__int64)(*(_QWORD *)(v4 + 312) - *(_QWORD *)(v4 + 304)) >> 4)) )
  {
    lpMem[0] = (void *)0x100000000LL;
    v221 = 0;
    v222 = (int *)lpMem;
    while ( 1 )
    {
      v223 = *v222;
      v224 = v221;
      if ( (unsigned int)CVisual::GetLightsCount((_QWORD *)v4, *v222) )
        break;
LABEL_393:
      if ( ++v222 == (int *)&lpMem[1] )
        goto LABEL_396;
    }
    while ( 1 )
    {
      if ( v224 < (unsigned int)CVisual::GetLightsCount((_QWORD *)v4, v223) )
      {
        v229 = v223 ? *(_QWORD *)(v4 + 304) : *(_QWORD *)(v4 + 280);
        v226 = *(_BYTE **)(v229 + 16LL * v224);
      }
      else
      {
        v226 = v225;
      }
      if ( v226[162] )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, struct CVisualTree *, __int64))(*(_QWORD *)v226 + 248LL))(
               v226,
               v238,
               v4) )
        {
          v230 = CLightStack::Push((__int64)v7 + 160, (__int64)v226, v223);
          if ( v230 < 0 )
            break;
        }
      }
      if ( ++v224 >= (unsigned int)CVisual::GetLightsCount((_QWORD *)v4, v223) )
        goto LABEL_393;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v231, 0LL, 0, v230, 0x4Bu, 0LL);
    goto LABEL_396;
  }
LABEL_397:
  result = (unsigned int)v8;
  if ( v8 >= 0 && !v174 )
    ++*((_DWORD *)v7 + 261);
  return result;
}
