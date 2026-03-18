/*
 * XREFs of ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x18003A040
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180043690 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800039BC (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x1800102B0 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x1800102E0 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18002AF70 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002B3EC (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18002CB70 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18002CDDC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18002E49C (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18003066C (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180030964 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180032B60 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180041420 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180044D00 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x180065958 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180073D1C (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?Intersect@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008DE2C (-Intersect@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800DA754 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800DB300 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x1801AEE28 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 */

__int64 __fastcall CVisual::ConvertInnerToOuterBounds(CVisual *this, CVisual **a2)
{
  __int64 v2; // rax
  unsigned int v3; // r12d
  char v6; // r13
  _DWORD *v7; // r10
  _OWORD *v8; // rdi
  __int64 v9; // xmm1_8
  float v10; // xmm6_4
  float v11; // xmm7_4
  __int64 v12; // rax
  float v13; // xmm0_4
  float v14; // xmm0_4
  int v15; // ecx
  unsigned int v16; // eax
  CTransform3D *v17; // r14
  void (__fastcall *v18)(CVisual *, char *, char *); // rax
  const struct CVisualTree **v19; // rcx
  struct _LIST_ENTRY *TreeData; // r14
  const struct CVisualTree **v21; // rsi
  _DWORD *v22; // r8
  char v23; // r13
  const struct CVisualTree *v24; // r12
  unsigned __int64 Blink; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  char v28; // al
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  _DWORD *v31; // r8
  int v33; // eax
  int BoundsSafe; // eax
  unsigned int v35; // ecx
  struct TransformParentData *TransformParentDataInternal; // rax
  __int64 v37; // rsi
  double *EffectInternal; // r14
  struct CEffect *v39; // r12
  __int64 v40; // rax
  _BYTE *v41; // rdx
  __int64 i; // rcx
  __int64 *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rax
  _BYTE *v46; // rdx
  __int64 j; // rcx
  const struct CVisualTree ***v48; // rcx
  CVisual *v49; // rax
  __int64 v50; // rax
  _BYTE *v51; // rdx
  __int64 k; // rcx
  _QWORD **v53; // rcx
  _QWORD *v54; // rcx
  int v55; // edx
  int *v56; // rcx
  struct _LIST_ENTRY *v57; // rcx
  const struct CVisualTree ***TreeDataListHead; // rax
  const struct CVisualTree ***v59; // rax
  float v60; // xmm0_4
  __int64 *ProjectedShadowReceivers; // rax
  unsigned int v62; // r8d
  __int64 v63; // r9
  unsigned __int64 v64; // rdx
  __int64 v65; // rax
  float v66; // xmm0_4
  const struct CMILMatrix *Matrix; // rax
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  int v76; // eax
  int updated; // eax
  int v78; // r14d
  unsigned int v79; // ecx
  unsigned int v80; // ecx
  bool v81[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v82; // [rsp+44h] [rbp-BCh]
  float v83; // [rsp+48h] [rbp-B8h] BYREF
  float v84; // [rsp+4Ch] [rbp-B4h] BYREF
  __int128 v85; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v86; // [rsp+60h] [rbp-A0h]
  __int128 v87; // [rsp+70h] [rbp-90h]
  __int128 v88; // [rsp+80h] [rbp-80h]
  int v89; // [rsp+90h] [rbp-70h]
  __int128 v90; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v91; // [rsp+B0h] [rbp-50h]
  __int128 v92; // [rsp+C0h] [rbp-40h]
  __int128 v93; // [rsp+D0h] [rbp-30h]
  int v94; // [rsp+E0h] [rbp-20h]
  _OWORD v95[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v96; // [rsp+130h] [rbp+30h]
  _BYTE v97[64]; // [rsp+140h] [rbp+40h] BYREF
  int v98; // [rsp+180h] [rbp+80h]
  __int128 v99; // [rsp+190h] [rbp+90h] BYREF

  v2 = *(_QWORD *)this;
  v3 = 0;
  v82 = 0;
  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(v2 + 48))(this, 86LL)
    && ((*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 176LL))(this) || *((_QWORD *)this + 70)) )
  {
    if ( !CLayerVisual::GetAutomaticBoundsExpansion(this) )
    {
      CVisual::GetEffectiveSize(this, &v84, &v83);
      v60 = v83;
      *((float *)this + 43) = v84;
      *((float *)this + 44) = v60;
      *(_QWORD *)((char *)this + 164) = 0LL;
    }
    if ( CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(this) )
      v6 = 1;
  }
  v7 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v7 & 0x10000) != 0 )
  {
    ProjectedShadowReceivers = (__int64 *)CVisual::GetProjectedShadowReceivers(this);
    v62 = 0;
    v63 = *ProjectedShadowReceivers;
    v64 = (ProjectedShadowReceivers[1] - *ProjectedShadowReceivers) >> 3;
    if ( v64 )
    {
      v65 = 0LL;
      while ( (int)((__int64)(*(_QWORD *)(*(_QWORD *)(v63 + 8 * v65) + 72LL)
                            - *(_QWORD *)(*(_QWORD *)(v63 + 8 * v65) + 64LL)) >> 3) <= 0 )
      {
        v65 = ++v62;
        if ( v62 >= v64 )
          goto LABEL_3;
      }
      CVisual::GetEffectiveSize(this, &v83, &v84);
      v66 = v84;
      *((float *)this + 43) = v83;
      *((float *)this + 44) = v66;
      *(_QWORD *)((char *)this + 164) = 0LL;
    }
  }
LABEL_3:
  v8 = (_OWORD *)((char *)this + 140);
  v9 = *(_QWORD *)((char *)this + 180);
  *(_OWORD *)((char *)this + 140) = *(_OWORD *)((char *)this + 164);
  *(_QWORD *)((char *)this + 156) = v9;
  if ( (*v7 & 0x2000000) != 0 )
  {
    v40 = (unsigned int)v7[1];
    v41 = v7 + 2;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v40; ++v41 )
    {
      if ( *v41 == 7 )
        break;
      i = (unsigned int)(i + 1);
    }
    v43 = (unsigned int)i >= (unsigned int)v40
        ? 0LL
        : (__int64 *)((char *)v7 + v40 + 8 * i - (((_BYTE)v40 + 15) & 7) + 15);
    v44 = *v43;
    if ( v44 )
    {
      if ( *(_BYTE *)(v44 + 34) && this == *(CVisual **)(v44 + 24) )
      {
        *v8 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *(_QWORD *)((char *)this + 156) = qword_1803075E0;
        return v3;
      }
    }
  }
  v10 = FLOAT_1_0;
  v11 = FLOAT_1_0;
  if ( (*v7 & 0x200000) != 0 )
  {
    EffectInternal = (double *)CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(double *, __int64))(*(_QWORD *)EffectInternal + 48LL))(EffectInternal, 51LL) )
      v11 = EffectInternal[9];
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fminf(1.0, fmaxf(v11, 0.0))) & _xmm) < 0.0000011920929 )
    goto LABEL_95;
  if ( !a2 || this != a2[3] || !*((_BYTE *)a2 + 34) )
  {
    v12 = *((_QWORD *)this + 27);
    if ( (*(_DWORD *)(v12 + 4) & 0x8000000) != 0 )
    {
      v55 = *(_DWORD *)(v12 + 12);
      v56 = (int *)(v12 + 12);
      if ( (v55 & 0x7F000000) != 0x5000000 )
      {
        do
        {
          v56 = (int *)((char *)v56 + (v55 & 0xFFFFFF) + 4);
          v55 = *v56;
        }
        while ( (*v56 & 0x7F000000) != 0x5000000 );
      }
      LODWORD(v83) = v56[1];
      v13 = v83;
    }
    else
    {
      v13 = FLOAT_1_0;
    }
    v10 = fminf(1.0, fmaxf(v13, 0.0));
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10) & _xmm) < 0.0000011920929 )
  {
LABEL_95:
    *(_QWORD *)((char *)this + 156) = 0LL;
    *(_QWORD *)((char *)this + 148) = 0LL;
    *(_QWORD *)v8 = 0LL;
    return v3;
  }
  v14 = *((float *)this + 40);
  v15 = (v14 <= *((float *)this + 39)) + 1;
  if ( *((float *)this + 37) > *(float *)v8 )
    v15 = v14 <= *((float *)this + 39);
  v16 = v15 + 1;
  if ( *((float *)this + 38) > *((float *)this + 36) )
    v16 = v15;
  if ( v16 <= 1 )
  {
    v17 = 0LL;
    if ( (**((_DWORD **)this + 28) & 0x200000) != 0 )
    {
      v39 = CVisual::GetEffectInternal(this);
      if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v39 + 48LL))(v39, 149LL) )
      {
        v17 = v39;
      }
      else if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v39 + 48LL))(v39, 51LL) )
      {
        v17 = (CTransform3D *)*((_QWORD *)v39 + 11);
      }
      v3 = v82;
    }
    v18 = *(void (__fastcall **)(CVisual *, char *, char *))(*(_QWORD *)this + 288LL);
    v90 = _xmm;
    v91 = _xmm;
    v92 = _xmm;
    v93 = _xmm;
    LOWORD(v94) = 32085;
    v18(this, (char *)this + 164, (char *)this + 140);
    if ( v17 )
    {
      Matrix = CTransform3D::GetMatrix(v17, (const struct D2D_SIZE_F *)((char *)this + 132));
      v68 = *(_OWORD *)Matrix;
      v69 = *((_OWORD *)Matrix + 1);
      v94 = *((_DWORD *)Matrix + 16);
      v90 = v68;
      v70 = *((_OWORD *)Matrix + 2);
      v96 = v94;
      v91 = v69;
      v71 = *((_OWORD *)Matrix + 3);
      v92 = v70;
      v72 = *(_OWORD *)Matrix;
      v93 = v71;
      v73 = *((_OWORD *)Matrix + 1);
      v95[0] = v72;
      v74 = *((_OWORD *)Matrix + 2);
      v95[1] = v73;
      v75 = *((_OWORD *)Matrix + 3);
      v76 = *((_DWORD *)this + 25);
      v95[2] = v74;
      v95[3] = v75;
      if ( !v76 || v76 == 3 || v6 )
      {
        v85 = _xmm;
        v87 = 0LL;
        v86 = _xmm;
        v88 = _xmm;
        LOWORD(v89) = 32095;
        CMILMatrix::Multiply((CMILMatrix *)v95, (const struct CMILMatrix *)&v85);
      }
      CMILMatrix::Transform3DBoundsHelper<0>(v95, (char *)this + 140, (char *)this + 140);
    }
    v19 = (const struct CVisualTree **)*((_QWORD *)this + 31);
    if ( v19 )
    {
      v33 = *((_DWORD *)this + 25);
      if ( !v33 || v33 == 3 )
      {
        BoundsSafe = CGeometry::GetBoundsSafe((CGeometry *)v19, (const struct D2D_SIZE_F *)((char *)this + 132), &v99);
        v82 = BoundsSafe;
        v3 = BoundsSafe;
        if ( BoundsSafe < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, BoundsSafe, 0x670u);
          return v3;
        }
        TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::Intersect(
          (char *)this + 140,
          &v99);
      }
    }
    TreeData = 0LL;
    v89 = 0;
    if ( *((_BYTE *)a2 + 32) )
    {
      v21 = (const struct CVisualTree **)((char *)this + 328);
    }
    else
    {
      TreeDataListHead = (const struct CVisualTree ***)CVisual::GetTreeDataListHead(this);
      if ( !TreeDataListHead )
        goto LABEL_33;
      v19 = *TreeDataListHead;
      if ( *TreeDataListHead == (const struct CVisualTree **)TreeDataListHead )
        goto LABEL_33;
      while ( 1 )
      {
        v21 = v19 - 28;
        if ( v19[4] == (const struct CVisualTree *)a2 )
          break;
        v19 = (const struct CVisualTree **)*v19;
        if ( v19 == (const struct CVisualTree **)TreeDataListHead )
          goto LABEL_33;
      }
    }
    if ( v21 )
    {
      v22 = (_DWORD *)*((_QWORD *)this + 28);
      v23 = 0;
      v24 = *(const struct CVisualTree **)(*((_QWORD *)this + 2) + 368LL);
      if ( (*v22 & 0x800000) != 0 )
      {
        v45 = (unsigned int)v22[1];
        v46 = v22 + 2;
        for ( j = 0LL; (unsigned int)j < (unsigned int)v45; ++v46 )
        {
          if ( *v46 == 9 )
            break;
          j = (unsigned int)(j + 1);
        }
        v48 = (unsigned int)j >= (unsigned int)v45
            ? 0LL
            : (const struct CVisualTree ***)((char *)v22 + v45 + 8 * j - (((_BYTE)v45 + 15) & 7) + 15);
        v19 = *v48;
        if ( v19 )
        {
          v49 = (CVisual *)(*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)*v19 + 152LL))(*v19);
          if ( v49 )
          {
            if ( ((_BYTE)v21[2] & 4) == 0 || v21[27] != v24 )
            {
              v23 = 1;
              TreeData = CVisual::FindTreeData(v49, (const struct CVisualTree *)a2);
              if ( TreeData )
                goto LABEL_28;
            }
          }
        }
      }
      if ( this != a2[3] )
      {
        v19 = (const struct CVisualTree **)*((_QWORD *)this + 10);
        TreeData = 0LL;
        if ( *((_BYTE *)a2 + 32) )
        {
          TreeData = (struct _LIST_ENTRY *)(v19 + 41);
        }
        else
        {
          v59 = (const struct CVisualTree ***)CVisual::GetTreeDataListHead((CVisual *)v19);
          if ( v59 )
          {
            v19 = *v59;
            if ( *v59 != (const struct CVisualTree **)v59 )
            {
              while ( v19[4] != (const struct CVisualTree *)a2 )
              {
                v19 = (const struct CVisualTree **)*v19;
                if ( v19 == (const struct CVisualTree **)v59 )
                  goto LABEL_27;
              }
              TreeData = (struct _LIST_ENTRY *)(v19 - 28);
            }
          }
        }
      }
LABEL_27:
      if ( TreeData )
LABEL_28:
        Blink = (unsigned __int64)TreeData[7].Blink;
      else
        Blink = 1LL;
      if ( (unsigned __int64)v21[15] >= Blink
        || (updated = CVisual::UpdateWorldTransform(
                        (CComposition **)this,
                        a2,
                        (struct CTreeData *)v21,
                        v23,
                        (const struct CTreeData *)TreeData),
            v78 = updated,
            updated >= 0) )
      {
        if ( v21[15] )
        {
          v26 = *(_OWORD *)(v21 + 5);
          v27 = *(_OWORD *)(v21 + 7);
          v89 = *((_DWORD *)v21 + 26);
          v28 = *((_BYTE *)v21 + 16);
          v85 = v26;
          v29 = *(_OWORD *)(v21 + 9);
          v86 = v27;
          v30 = *(_OWORD *)(v21 + 11);
          v81[0] = (v28 & 2) != 0;
          v87 = v29;
          v88 = v30;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v19, 0LL, 0, -2003292412, 0x65u);
          MilInstrumentationCheckHR_MaybeFailFast(v80, 0LL, 0, -2003292412, 0x722u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v19, 0LL, 0, updated, 0x7BEu);
        MilInstrumentationCheckHR_MaybeFailFast(v79, 0LL, 0, v78, 0x71Bu);
      }
      v3 = v82;
    }
LABEL_33:
    if ( !*((_QWORD *)this + 10) )
      goto LABEL_36;
    if ( (*((_BYTE *)this + 94) & 4) == 0 || !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(&v85) )
    {
      v31 = (_DWORD *)*((_QWORD *)this + 28);
      if ( (*v31 & 0x800000) == 0 )
        goto LABEL_36;
      v50 = (unsigned int)v31[1];
      v51 = v31 + 2;
      for ( k = 0LL; (unsigned int)k < (unsigned int)v50; ++v51 )
      {
        if ( *v51 == 9 )
          break;
        k = (unsigned int)(k + 1);
      }
      v53 = (unsigned int)k >= (unsigned int)v50
          ? 0LL
          : (_QWORD **)((char *)v31 + v50 + 8 * k - (((_BYTE)v50 + 15) & 7) + 15);
      v54 = *v53;
      if ( !v54 || !(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v54 + 152LL))(*v54) )
      {
LABEL_36:
        v96 = 0;
        v98 = 0;
        v81[0] = 0;
        CVisual::CalcEffectiveTransform(this, 5LL, 0LL, v81, v95, 0LL, v97);
        if ( v81[0] )
          CMILMatrix::Transform3DBoundsHelper<0>(v97, (char *)this + 140, (char *)this + 140);
        goto LABEL_38;
      }
    }
    TransformParentDataInternal = CVisual::GetTransformParentDataInternal(this);
    if ( TransformParentDataInternal )
      v37 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)TransformParentDataInternal + 152LL))(*(_QWORD *)TransformParentDataInternal);
    else
      v37 = 0LL;
    if ( !v81[0] )
    {
      if ( !v37 )
      {
LABEL_38:
        if ( *((float *)this + 37) < *(float *)v8
          || *((float *)this + 38) < *((float *)this + 36)
          || *((float *)this + 40) < *((float *)this + 39) )
        {
          *v8 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
          *(_QWORD *)((char *)this + 156) = qword_1803075E0;
        }
        return v3;
      }
LABEL_66:
      *v8 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      *(_QWORD *)((char *)this + 156) = qword_1803075E0;
      goto LABEL_38;
    }
    if ( v37 )
      goto LABEL_66;
    v57 = (struct _LIST_ENTRY *)*((_QWORD *)this + 10);
    v98 = 0;
    CVisual::GetWorldTransform(v57, (__int64)a2, 1, (__int64)v97, 0LL, 0LL);
    if ( !CMILMatrix::Invert((CMILMatrix *)v97) )
      goto LABEL_66;
    v96 = 0;
    CMILMatrix::Multiply((const struct CMILMatrix *)&v85, (const struct CMILMatrix *)v97, (struct CMILMatrix *)v95);
    if ( !(unsigned __int8)CMILMatrix::IsIdentity<1>(&v90) )
    {
      if ( !CMILMatrix::Invert((CMILMatrix *)&v90) )
        goto LABEL_66;
      CMILMatrix::Multiply((const struct CMILMatrix *)&v90, (const struct CMILMatrix *)v95, (struct CMILMatrix *)v95);
    }
    CMILMatrix::Transform3DBoundsHelper<0>(v95, (char *)this + 140, (char *)this + 140);
    goto LABEL_38;
  }
  return v3;
}
