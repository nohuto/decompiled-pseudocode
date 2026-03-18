/*
 * XREFs of ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180066580
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064C20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800051AC (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x1800084B4 (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x180008548 (-IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ.c)
 *     ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x1800085A4 (-IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180008670 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x18001310C (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180052E00 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180060B60 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180063A50 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18006E200 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18006E4B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180071850 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180087C04 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x180087C60 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18008BC4C (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7F40 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BAD3C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800CE4B8 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?CalculateRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EA99C (-CalculateRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Transform3DBounds@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV2@@Z @ 0x18021D194 (-Transform3DBounds@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 */

__int64 __fastcall CVisual::ConvertInnerToOuterBounds(CVisual *this, const struct CVisualTree *a2)
{
  __int64 v2; // rax
  CTransform3D *v3; // r15
  struct CVisualTree *v4; // r13
  int v6; // xmm2_4
  CProjectedShadowReceiver ***ProjectedShadowReceivers; // rax
  CProjectedShadowReceiver **v8; // rcx
  CProjectedShadowReceiver **v9; // rax
  CProjectedShadowReceiver *v10; // r13
  CProjectedShadowScene **v11; // rsi
  CProjectedShadowScene **v12; // r12
  CProjectedShadowScene *v13; // rdi
  __int64 ***v14; // rdi
  __int64 **i; // rbx
  int v16; // xmm2_4
  int v17; // r10d
  __int64 v18; // r12
  float v19; // xmm6_4
  float v20; // xmm7_4
  struct CEffect *EffectInternal; // rbx
  __int64 v22; // rcx
  float v23; // xmm0_4
  unsigned int Slot; // eax
  __int64 v25; // r11
  __int64 v26; // rcx
  __int64 *v27; // rdx
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // edi
  __int64 result; // rax
  int v32; // edx
  int *v33; // rcx
  char *v34; // rbx
  int v35; // eax
  unsigned int v36; // ecx
  unsigned int v37; // edi
  float v38; // xmm0_4
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v40; // eax
  struct _LIST_ENTRY *v41; // rdi
  char v42; // r11
  struct CTreeData *TreeData; // rsi
  struct _LIST_ENTRY *v44; // r13
  unsigned int v45; // eax
  __int64 v46; // r10
  __int64 v47; // rcx
  struct _LIST_ENTRY **v48; // rdx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  CVisual *v50; // rax
  struct _LIST_ENTRY *v51; // rax
  unsigned __int64 v52; // rax
  int updated; // eax
  int v54; // esi
  unsigned int v55; // ecx
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  char v58; // al
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  unsigned int v61; // ecx
  unsigned int v62; // eax
  __int64 v63; // r10
  __int64 v64; // rcx
  _QWORD **v65; // rdx
  unsigned int v66; // eax
  __int64 v67; // r10
  __int64 v68; // rcx
  _QWORD **v69; // rdx
  __int64 v70; // rsi
  __int64 v71; // rcx
  struct CEffect *v72; // rdi
  const struct CMILMatrix *Matrix; // rax
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  _BYTE *v77; // rcx
  __int128 v78; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v79; // [rsp+50h] [rbp-B0h]
  __int128 v80; // [rsp+60h] [rbp-A0h]
  __int128 v81; // [rsp+70h] [rbp-90h]
  int Blink; // [rsp+80h] [rbp-80h]
  _BYTE v83[64]; // [rsp+90h] [rbp-70h] BYREF
  int v84; // [rsp+D0h] [rbp-30h]
  _BYTE v85[64]; // [rsp+E0h] [rbp-20h] BYREF
  int v86; // [rsp+120h] [rbp+20h]
  CProjectedShadowReceiver **v87; // [rsp+1A0h] [rbp+A0h] BYREF
  struct CVisualTree *v88; // [rsp+1A8h] [rbp+A8h]
  unsigned int v89; // [rsp+1B0h] [rbp+B0h]
  CProjectedShadowReceiver **v90; // [rsp+1B8h] [rbp+B8h] BYREF

  v88 = a2;
  v2 = *(_QWORD *)this;
  v3 = 0LL;
  v4 = a2;
  v89 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(v2 + 48))(this, 91LL)
    && ((*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 216LL))(this) || *((_QWORD *)this + 70))
    && !CLayerVisual::GetAutomaticBoundsExpansion(this) )
  {
    CVisual::GetEffectiveSize(this, (float *)&v87, (float *)&v90);
    v6 = (int)v87;
    *((_DWORD *)this + 44) = (_DWORD)v90;
    *((_DWORD *)this + 43) = v6;
    *(_QWORD *)((char *)this + 164) = 0LL;
  }
  if ( (**((_DWORD **)this + 28) & 0x10000) != 0 )
  {
    ProjectedShadowReceivers = (CProjectedShadowReceiver ***)CVisual::GetProjectedShadowReceivers((__int64)this);
    v8 = *ProjectedShadowReceivers;
    v9 = ProjectedShadowReceivers[1];
    v87 = v8;
    v90 = v9;
    if ( v8 != v9 )
    {
      do
      {
        v10 = *v8;
        v11 = (CProjectedShadowScene **)*((_QWORD *)*v8 + 8);
        v12 = (CProjectedShadowScene **)*((_QWORD *)*v8 + 9);
        if ( v11 != v12 )
        {
          do
          {
            if ( !CCommonRegistryData::m_fDisableProjectedShadows )
            {
              v13 = *v11;
              if ( !CProjectedShadowScene::IsEmptyProjection(*v11) && !CProjectedShadowReceiver::IsEmptyMaskContent(v10) )
              {
                v14 = (__int64 ***)*((_QWORD *)v13 + 7);
                for ( i = *v14; i != (__int64 **)v14; i = (__int64 **)*i )
                {
                  if ( !CProjectedShadowCaster::IsEmptyMaskContent((CProjectedShadowCaster *)i[2]) )
                  {
                    CVisual::GetEffectiveSize(this, (float *)&v87, (float *)&v90);
                    v16 = (int)v87;
                    *((_DWORD *)this + 44) = (_DWORD)v90;
                    *((_DWORD *)this + 43) = v16;
                    *(_QWORD *)((char *)this + 164) = 0LL;
                    goto LABEL_21;
                  }
                }
              }
            }
            ++v11;
          }
          while ( v11 != v12 );
          v8 = v87;
          v9 = v90;
        }
        v87 = ++v8;
      }
      while ( v8 != v9 );
LABEL_21:
      v4 = v88;
    }
  }
  v17 = **((_DWORD **)this + 28);
  if ( (v17 & 0x2000000) != 0 )
  {
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*((_QWORD *)this + 28), 7LL);
    v26 = *(unsigned int *)(v25 + 4);
    if ( Slot >= (unsigned int)v26 )
      v27 = 0LL;
    else
      v27 = (__int64 *)(v26 + 15 + v25 + 8LL * Slot - (((_BYTE)v26 + 15) & 7));
    v18 = *v27;
    if ( *v27 )
    {
      v28 = CVisual::CalculateRootBounds(this);
      v89 = v28;
      v30 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x64Eu, 0LL);
        return v30;
      }
      *(_OWORD *)(v18 + 36) = *(_OWORD *)((char *)this + 140);
      *(_QWORD *)(v18 + 52) = *(_QWORD *)((char *)this + 156);
      v17 = **((_DWORD **)this + 28);
    }
  }
  else
  {
    v18 = 0LL;
  }
  v19 = *(float *)&FLOAT_1_0;
  v20 = *(float *)&FLOAT_1_0;
  if ( (v17 & 0x200000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
           EffectInternal,
           53LL) )
    {
      v20 = *((float *)EffectInternal + 18);
    }
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fminf(1.0, fmaxf(v20, 0.0))) & _xmm) < 0.0000011920929 )
    goto LABEL_129;
  if ( !v4 || this != *((CVisual **)v4 + 3) || !*((_BYTE *)v4 + 34) )
  {
    v22 = *((_QWORD *)this + 27);
    if ( (*(_DWORD *)(v22 + 4) & 0x8000000) != 0 )
    {
      v32 = *(_DWORD *)(v22 + 12);
      v33 = (int *)(v22 + 12);
      if ( (v32 & 0x7F000000) != 0x5000000 )
      {
        do
        {
          v33 = (int *)((char *)v33 + (v32 & 0xFFFFFF) + 4);
          v32 = *v33;
        }
        while ( (*v33 & 0x7F000000) != 0x5000000 );
      }
      LODWORD(v87) = v33[1];
      v23 = *(float *)&v87;
    }
    else
    {
      v23 = *(float *)&FLOAT_1_0;
    }
    v19 = fminf(1.0, fmaxf(v23, 0.0));
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v19) & _xmm) < 0.0000011920929 )
  {
LABEL_129:
    v34 = (char *)this + 140;
    *(_QWORD *)((char *)this + 156) = 0LL;
    *(_QWORD *)((char *)this + 148) = 0LL;
    *(_QWORD *)((char *)this + 140) = 0LL;
  }
  else
  {
    v34 = (char *)this + 140;
    if ( !v18 )
    {
      v35 = CVisual::CalculateRootBounds(this);
      v89 = v35;
      v37 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x660u, 0LL);
        return v37;
      }
    }
    v38 = *((float *)this + 40);
    LODWORD(Flink) = (v38 <= *((float *)this + 39)) + 1;
    if ( *((float *)this + 37) > *(float *)v34 )
      LODWORD(Flink) = v38 <= *((float *)this + 39);
    v40 = (_DWORD)Flink + 1;
    if ( *((float *)this + 38) > *((float *)this + 36) )
      v40 = (unsigned int)Flink;
    if ( v40 <= 1 )
    {
      Blink = 0;
      if ( *((_BYTE *)v4 + 32) )
      {
        v41 = (struct _LIST_ENTRY *)((char *)this + 328);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(this);
        if ( !TreeDataListHead )
          goto LABEL_91;
        Flink = TreeDataListHead->Flink;
        if ( TreeDataListHead->Flink == TreeDataListHead )
          goto LABEL_91;
        while ( 1 )
        {
          v41 = Flink - 14;
          if ( (struct CVisualTree *)Flink[2].Flink == v4 )
            break;
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_91;
        }
      }
      if ( !v41 )
      {
LABEL_91:
        if ( *((_QWORD *)this + 10)
          && ((*((_BYTE *)this + 94) & 4) != 0 && (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(&v78)
           || (**((_DWORD **)this + 28) & 0x800000) != 0
           && ((v62 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*((_QWORD *)this + 28), 9LL),
                v64 = *(unsigned int *)(v63 + 4),
                v62 >= (unsigned int)v64)
             ? (v65 = 0LL)
             : (v65 = (_QWORD **)(v64 + 15 + v63 + 8LL * v62 - (((_BYTE)v64 + 15) & 7))),
               *v65 && (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v65 + 192LL))(**v65))) )
        {
          if ( (**((_DWORD **)this + 28) & 0x800000) != 0
            && ((v66 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*((_QWORD *)this + 28), 9LL),
                 v68 = *(unsigned int *)(v67 + 4),
                 v66 >= (unsigned int)v68)
              ? (v69 = 0LL)
              : (v69 = (_QWORD **)(v68 + 15 + v67 + 8LL * v66 - (((_BYTE)v68 + 15) & 7))),
                *v69) )
          {
            v70 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v69 + 192LL))(**v69);
          }
          else
          {
            v70 = 0LL;
          }
          if ( (_BYTE)v87 )
          {
            if ( !v70 )
            {
              v71 = *((_QWORD *)this + 10);
              v86 = 0;
              CVisual::GetWorldTransform(v71, v4, 1LL, v85, 0LL, 0LL);
              if ( CMILMatrix::Invert((CMILMatrix *)v85) )
              {
                v84 = 0;
                CMILMatrix::Multiply(
                  (const struct CMILMatrix *)&v78,
                  (const struct CMILMatrix *)v85,
                  (struct CMILMatrix *)v83);
                if ( (**((_DWORD **)this + 28) & 0x200000) != 0 )
                {
                  v72 = CVisual::GetEffectInternal(this);
                  if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v72 + 48LL))(
                         v72,
                         180LL) )
                  {
                    v3 = v72;
                  }
                  else if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v72 + 48LL))(
                              v72,
                              53LL) )
                  {
                    v3 = (CTransform3D *)*((_QWORD *)v72 + 10);
                  }
                }
                if ( !v3 )
                  goto LABEL_119;
                Matrix = CTransform3D::GetMatrix(v3, (const struct D2D_SIZE_F *)((char *)this + 132));
                v74 = *((_OWORD *)Matrix + 1);
                v78 = *(_OWORD *)Matrix;
                v75 = *((_OWORD *)Matrix + 2);
                v79 = v74;
                v76 = *((_OWORD *)Matrix + 3);
                LODWORD(Matrix) = *((_DWORD *)Matrix + 16);
                v80 = v75;
                v81 = v76;
                Blink = (int)Matrix;
                if ( CMILMatrix::IsIdentity<1>((__int64)&v78) )
                  goto LABEL_119;
                if ( CMILMatrix::Invert((CMILMatrix *)&v78) )
                {
                  CMILMatrix::Multiply(
                    (const struct CMILMatrix *)&v78,
                    (const struct CMILMatrix *)v83,
                    (struct CMILMatrix *)v83);
LABEL_119:
                  v77 = v83;
LABEL_124:
                  CMILMatrix::Transform3DBounds(v77, (char *)this + 140, (char *)this + 140);
                  goto LABEL_125;
                }
              }
            }
            goto LABEL_121;
          }
          if ( v70 )
          {
LABEL_121:
            *(_OWORD *)v34 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
            *(_QWORD *)((char *)this + 156) = qword_18033BCA0;
          }
        }
        else
        {
          v84 = 0;
          v86 = 0;
          LOBYTE(v87) = 0;
          CVisual::CalcEffectiveTransform((__int64)this, 5, 0LL, &v87, (CMILMatrix *)v83, 0LL, (__int64)v85);
          if ( (_BYTE)v87 )
          {
            v77 = v85;
            goto LABEL_124;
          }
        }
LABEL_125:
        if ( *((float *)this + 37) < *(float *)v34
          || *((float *)this + 38) < *((float *)this + 36)
          || *((float *)this + 40) < *((float *)this + 39) )
        {
          *(_OWORD *)v34 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
          *(_QWORD *)((char *)this + 156) = qword_18033BCA0;
        }
        goto LABEL_130;
      }
      v42 = 0;
      TreeData = 0LL;
      v44 = *(struct _LIST_ENTRY **)(*((_QWORD *)this + 2) + 384LL);
      if ( (**((_DWORD **)this + 28) & 0x800000) != 0 )
      {
        v45 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*((_QWORD *)this + 28), 9LL);
        v47 = *(unsigned int *)(v46 + 4);
        v48 = v45 >= (unsigned int)v47
            ? 0LL
            : (struct _LIST_ENTRY **)(v47 + 15 + v46 + 8LL * v45 - (((_BYTE)v47 + 15) & 7));
        Flink = *v48;
        if ( *v48 )
        {
          v50 = (CVisual *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))Flink->Flink->Flink[12].Flink)(Flink->Flink);
          if ( v50 && (((__int64)v41[1].Flink & 4) == 0 || v41[13].Blink != v44) )
          {
            v4 = v88;
            TreeData = CVisual::FindTreeData(v50, v88);
            if ( TreeData )
              goto LABEL_83;
            goto LABEL_73;
          }
          v42 = 0;
        }
      }
      v4 = v88;
LABEL_73:
      if ( this != *((CVisual **)v4 + 3) )
      {
        TreeData = 0LL;
        Flink = (struct _LIST_ENTRY *)*((_QWORD *)this + 10);
        if ( *((_BYTE *)v4 + 32) )
        {
          TreeData = (struct CTreeData *)&Flink[20].Blink;
        }
        else
        {
          v51 = CVisual::GetTreeDataListHead((CVisual *)Flink);
          if ( v51 )
          {
            Flink = v51->Flink;
            if ( v51->Flink != v51 )
            {
              while ( (struct CVisualTree *)Flink[2].Flink != v4 )
              {
                Flink = Flink->Flink;
                if ( Flink == v51 )
                  goto LABEL_82;
              }
              TreeData = (struct CTreeData *)&Flink[-14];
            }
          }
        }
      }
LABEL_82:
      if ( !TreeData )
      {
        v52 = 1LL;
        goto LABEL_85;
      }
LABEL_83:
      v52 = *((_QWORD *)TreeData + 15);
LABEL_85:
      if ( v41[7].Blink >= (struct _LIST_ENTRY *)v52
        || (updated = CVisual::UpdateWorldTransform(this, (CVisual **)v4, (struct CTreeData *)v41, v42, TreeData),
            v54 = updated,
            updated >= 0) )
      {
        if ( v41[7].Blink )
        {
          v56 = *(_OWORD *)&v41[2].Blink;
          v57 = *(_OWORD *)&v41[3].Blink;
          Blink = (int)v41[6].Blink;
          v58 = (char)v41[1].Flink;
          v78 = v56;
          v59 = *(_OWORD *)&v41[4].Blink;
          v79 = v57;
          v60 = *(_OWORD *)&v41[5].Blink;
          LOBYTE(v87) = (v58 & 2) != 0;
          v80 = v59;
          v81 = v60;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, -2003292412, 0x65u, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, -2003292412, 0x76Fu, 0LL);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, updated, 0x80Bu, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x768u, 0LL);
      }
      goto LABEL_91;
    }
  }
LABEL_130:
  result = v89;
  if ( v18 )
  {
    if ( !*(_BYTE *)(v18 + 34) )
    {
      *(_OWORD *)(v18 + 36) = *(_OWORD *)v34;
      *(_QWORD *)(v18 + 52) = *((_QWORD *)v34 + 2);
    }
  }
  return result;
}
