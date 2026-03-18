/*
 * XREFs of ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18002D790
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18002D180 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800039BC (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?PushHoverPointer@CInteraction@@QEBAXAEBUD2D_POINT_2F@@@Z @ 0x1800177C4 (-PushHoverPointer@CInteraction@@QEBAXAEBUD2D_POINT_2F@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180029548 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18002CDDC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18002E49C (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18002E52C (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180030964 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800368E0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180040650 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180044D00 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18005D39C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x180066EE0 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18006CBF4 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?InvalidRedirectedTransformParent@CVisual@@QEAA_NPEBVCVisualTree@@@Z @ 0x1800EF7D0 (-InvalidRedirectedTransformParent@CVisual@@QEAA_NPEBVCVisualTree@@@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x1801B6834 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x1801B6890 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x1801B70D8 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x1801F5E64 (-BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z.c)
 */

__int64 __fastcall CHitTestContext::PreSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // rdi
  const struct CVisualTree *v4; // rsi
  __int64 v5; // r13
  bool *v6; // r14
  struct _LIST_ENTRY *v8; // r10
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  int v13; // r12d
  unsigned int v14; // ecx
  void *v15; // r14
  unsigned int v16; // eax
  unsigned __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rbx
  SIZE_T v20; // r8
  int v21; // r9d
  unsigned __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // ecx
  float v25; // xmm9_4
  float v26; // xmm8_4
  unsigned int v27; // eax
  float v28; // xmm6_4
  float v29; // xmm7_4
  struct CEffect *EffectInternal; // rbx
  int v31; // r14d
  bool v32; // bl
  struct _LIST_ENTRY *v33; // rcx
  struct CEffect *v34; // rax
  bool v35; // al
  __int64 v36; // rax
  _BYTE *v37; // rax
  struct CTreeData *v38; // r11
  int v39; // r14d
  struct _LIST_ENTRY *v40; // rbx
  struct CTreeData *TreeData; // r13
  struct _LIST_ENTRY *v42; // r12
  unsigned int Slot; // eax
  __int64 v44; // r10
  __int64 v45; // rcx
  struct _LIST_ENTRY **v46; // rdx
  struct _LIST_ENTRY *v47; // rax
  CVisual *v48; // rax
  char v49; // r12
  struct _LIST_ENTRY *v50; // rax
  unsigned __int64 v51; // rax
  int updated; // eax
  int Blink; // eax
  __int128 v54; // xmm0
  struct _LIST_ENTRY *v55; // rax
  struct _LIST_ENTRY v56; // xmm1
  struct _LIST_ENTRY v57; // xmm0
  struct _LIST_ENTRY v58; // xmm1
  unsigned int v59; // ecx
  unsigned int ShapeData; // ebx
  bool v62; // zf
  int v63; // r14d
  CVisual *v64; // r12
  struct _LIST_ENTRY *v65; // rbx
  struct D2D_POINT_2F *v66; // rax
  _DWORD *v67; // r10
  struct CTreeData *p_Blink; // r13
  unsigned int v69; // eax
  __int64 v70; // r10
  __int64 v71; // rcx
  struct _LIST_ENTRY **v72; // rdx
  struct _LIST_ENTRY *v73; // rax
  CVisual *v74; // rax
  struct _LIST_ENTRY *v75; // rax
  unsigned __int64 v76; // rax
  int v77; // eax
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  unsigned int v82; // ecx
  float v83; // xmm0_4
  float v84; // xmm0_4
  unsigned int v85; // eax
  __int64 v86; // r10
  __int64 v87; // rcx
  _QWORD *v88; // rdx
  bool v89; // r14
  CGeometry *v90; // rcx
  unsigned int v91; // ecx
  unsigned int v92; // ecx
  CInteraction *v93; // rax
  CInteraction *InteractionInternal; // rax
  bool v95; // r14
  _QWORD *BspPolygonList; // rax
  int v97; // eax
  unsigned int v98; // ecx
  bool *v99; // rcx
  unsigned int v100; // [rsp+28h] [rbp-E0h]
  bool v101[8]; // [rsp+48h] [rbp-C0h] BYREF
  bool *v102; // [rsp+50h] [rbp-B8h]
  struct D2D_POINT_2F v103; // [rsp+58h] [rbp-B0h] BYREF
  struct _LIST_ENTRY *v104; // [rsp+60h] [rbp-A8h]
  _OWORD v105[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v106; // [rsp+A8h] [rbp-60h]
  _OWORD v107[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v108; // [rsp+F8h] [rbp-10h]
  _BYTE v109[64]; // [rsp+108h] [rbp+0h] BYREF
  int v110; // [rsp+148h] [rbp+40h]
  __int128 v111; // [rsp+158h] [rbp+50h] BYREF
  __int64 v112; // [rsp+168h] [rbp+60h]

  v3 = *((_QWORD *)this + 2);
  v4 = a2;
  v5 = *((_QWORD *)this + 3);
  v6 = a3;
  v102 = a3;
  v104 = 0LL;
  if ( *((_BYTE *)a2 + 32) )
  {
    v8 = (struct _LIST_ENTRY *)(v3 + 328);
    v104 = (struct _LIST_ENTRY *)(v3 + 328);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v3);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( (const struct CVisualTree *)Flink[2].Flink != v4 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_9;
        }
        v8 = Flink - 14;
        v104 = Flink - 14;
      }
    }
  }
LABEL_9:
  v11 = *(_OWORD *)(v3 + 140);
  *(_BYTE *)(v3 + 93) &= ~4u;
  v12 = *(_QWORD *)(v3 + 156);
  LOBYTE(v8[14].Flink) &= ~1u;
  *v6 = 1;
  v13 = *(_DWORD *)(v3 + 200);
  v112 = v12;
  v111 = v11;
  if ( v13 != -1 )
  {
    v14 = *((_DWORD *)this + 31);
    v15 = 0LL;
    v16 = *((_DWORD *)this + 30);
    if ( v16 == v14 )
    {
      v17 = 2LL * v14;
      v18 = -2147024362;
      if ( v17 > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x80070216, 0LL, 0, -2147024362, 0x4Cu);
LABEL_26:
        v6 = v102;
        goto LABEL_27;
      }
      v19 = (unsigned int)v17;
      if ( (unsigned int)v17 <= 0x40 )
        v19 = 64LL;
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v19 <= 4 )
      {
        v21 = -2147024809;
        goto LABEL_45;
      }
      v20 = 4 * v19;
      if ( !(4 * v19) )
        v20 = 1LL;
      v15 = HeapAlloc(WPF::g_processHeap, 0, v20);
      if ( !v15 )
      {
        v21 = -2147024882;
LABEL_45:
        v100 = 84;
LABEL_46:
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v21, v100);
        if ( v15 )
          HeapFree(WPF::g_processHeap, 0, v15);
        goto LABEL_26;
      }
      v22 = 4LL * *((unsigned int *)this + 30);
      if ( v22 > 0xFFFFFFFF )
      {
        v18 = 0;
        v100 = 86;
        v21 = -2147024362;
        goto LABEL_46;
      }
      memcpy_0(v15, *((const void **)this + 17), (unsigned int)v22);
      WPF::ProcessHeapImpl::Free(*((void **)this + 17));
      v16 = *((_DWORD *)this + 30);
      *((_QWORD *)this + 17) = v15;
      *((_DWORD *)this + 31) = v19;
    }
    *(_DWORD *)(*((_QWORD *)this + 17) + 4LL * v16) = v13;
    v23 = *((_DWORD *)this + 36);
    v24 = *((_DWORD *)this + 30) + 1;
    *((_DWORD *)this + 30) = v24;
    if ( v23 <= v24 )
      v23 = v24;
    *((_DWORD *)this + 36) = v23;
    goto LABEL_26;
  }
LABEL_27:
  v25 = *((float *)&v111 + 2);
  v26 = *(float *)&v111;
  v27 = *((float *)&v112 + 1) <= *(float *)&v112;
  if ( *((float *)&v111 + 2) <= *(float *)&v111 )
    ++v27;
  v28 = *((float *)&v111 + 3);
  v29 = *((float *)&v111 + 1);
  if ( *((float *)&v111 + 3) <= *((float *)&v111 + 1) )
    ++v27;
  if ( v27 > 1 || (*(_BYTE *)(v3 + 94) & 1) != 0 )
    goto LABEL_195;
  if ( !*(_DWORD *)(v3 + 100) && (**(_DWORD **)(v3 + 224) & 0x200000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal((CVisual *)v3);
    if ( !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
            EffectInternal,
            149LL) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
              EffectInternal,
              51LL) )
        goto LABEL_39;
      EffectInternal = (struct CEffect *)*((_QWORD *)EffectInternal + 11);
    }
    if ( EffectInternal )
    {
LABEL_195:
      *v6 = 0;
      return 0LL;
    }
  }
LABEL_39:
  if ( CVisual::InvalidRedirectedTransformParent((CVisual *)v3, v4) )
    goto LABEL_195;
  v31 = *(_DWORD *)(v3 + 100);
  v106 = 0;
  v110 = 0;
  v32 = v5 && *(_DWORD *)(v5 + 100) == 1;
  v35 = 1;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 176LL))(v3) )
  {
    if ( (**(_DWORD **)(v3 + 224) & 0x200000) == 0
      || (v34 = CVisual::GetEffectInternal((CVisual *)v3),
          !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v34 + 48LL))(v34, 54LL)) )
    {
      v35 = 0;
    }
  }
  if ( v31 != 1 )
    goto LABEL_60;
  if ( v32 )
  {
    if ( !v35 )
    {
LABEL_60:
      v101[0] = 0;
      goto LABEL_61;
    }
  }
  else
  {
    v36 = *(_QWORD *)(v3 + 72);
    if ( (v36 & 2) != 0 )
      v36 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v36) = v36 & 1;
    if ( !(_DWORD)v36 )
      goto LABEL_60;
  }
  v101[0] = 1;
LABEL_61:
  v37 = v109;
  v38 = 0LL;
  v39 = -2003292412;
  if ( !*(_QWORD *)(v3 + 248) )
    v37 = 0LL;
  v103 = (struct D2D_POINT_2F)v37;
  if ( *((_BYTE *)v4 + 32) )
  {
    v40 = (struct _LIST_ENTRY *)(v3 + 328);
  }
  else
  {
    v47 = CVisual::GetTreeDataListHead((CVisual *)v3);
    if ( !v47 )
      goto LABEL_110;
    v33 = v47->Flink;
    if ( v47->Flink == v47 )
      goto LABEL_110;
    while ( 1 )
    {
      v40 = v33 - 14;
      if ( (const struct CVisualTree *)v33[2].Flink == v4 )
        break;
      v33 = v33->Flink;
      if ( v33 == v47 )
        goto LABEL_110;
    }
  }
  if ( !v40 )
    goto LABEL_110;
  v39 = (int)v38;
  TreeData = v38;
  v42 = *(struct _LIST_ENTRY **)(*(_QWORD *)(v3 + 16) + 368LL);
  if ( (**(_DWORD **)(v3 + 224) & 0x800000) != 0
    && ((Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*(_QWORD *)(v3 + 224), 9LL),
         v45 = *(unsigned int *)(v44 + 4),
         Slot >= (unsigned int)v45)
      ? (v46 = (struct _LIST_ENTRY **)v38)
      : (v46 = (struct _LIST_ENTRY **)(v44 + v45 + 15 + 8LL * Slot - (((_BYTE)v45 + 15) & 7))),
        (v33 = *v46) != 0LL) )
  {
    v48 = (CVisual *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))v33->Flink->Flink[9].Blink)(v33->Flink);
    if ( !v48 || ((__int64)v40[1].Flink & 4) != 0 && v40[13].Blink == v42 )
    {
      v49 = 0;
    }
    else
    {
      v49 = 1;
      TreeData = CVisual::FindTreeData(v48, v4);
      if ( TreeData )
        goto LABEL_96;
    }
    v38 = 0LL;
  }
  else
  {
    v49 = 0;
  }
  if ( v3 != *((_QWORD *)v4 + 3) )
  {
    TreeData = v38;
    v33 = *(struct _LIST_ENTRY **)(v3 + 80);
    if ( *((_BYTE *)v4 + 32) == (_BYTE)v39 )
    {
      v50 = CVisual::GetTreeDataListHead((CVisual *)v33);
      if ( v50 )
      {
        v33 = v50->Flink;
        if ( v50->Flink != v50 )
        {
          while ( (const struct CVisualTree *)v33[2].Flink != v4 )
          {
            v33 = v33->Flink;
            if ( v33 == v50 )
              goto LABEL_95;
          }
          TreeData = (struct CTreeData *)&v33[-14];
        }
      }
    }
    else
    {
      TreeData = (struct CTreeData *)&v33[20].Blink;
    }
  }
LABEL_95:
  if ( !TreeData )
  {
    v51 = 1LL;
    goto LABEL_98;
  }
LABEL_96:
  v51 = *((_QWORD *)TreeData + 15);
LABEL_98:
  if ( v40[7].Blink < (struct _LIST_ENTRY *)v51 )
  {
    updated = CVisual::UpdateWorldTransform((CComposition **)v3, (CVisual **)v4, (struct CTreeData *)v40, v49, TreeData);
    v39 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v33, 0LL, 0, updated, 0x7BEu);
  }
  if ( v39 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v33, 0LL, 0, v39, 0x71Bu);
    v38 = 0LL;
  }
  else
  {
    if ( !v40[7].Blink )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v33, 0LL, 0, -2003292412, 0x65u);
      v39 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, -2003292412, 0x722u);
      ShapeData = -2003292412;
LABEL_107:
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v33, 0LL, 0, v39, 0x63u);
      return ShapeData;
    }
    v33 = (struct _LIST_ENTRY *)v103;
    Blink = (int)v40[6].Blink;
    v105[0] = *(struct _LIST_ENTRY *)((char *)v40 + 40);
    v106 = Blink;
    v54 = *(_OWORD *)&v40[4].Blink;
    v105[1] = *(struct _LIST_ENTRY *)((char *)v40 + 56);
    v105[2] = v54;
    v105[3] = *(struct _LIST_ENTRY *)((char *)v40 + 88);
    if ( v103 )
    {
      v55 = v40[7].Flink;
      v56 = v55[1];
      *(struct _LIST_ENTRY *)*(_QWORD *)&v103 = *v55;
      v57 = v55[2];
      v33[1] = v56;
      v58 = v55[3];
      LODWORD(v55) = v55[4].Flink;
      v33[2] = v57;
      v33[3] = v58;
      LODWORD(v33[4].Flink) = (_DWORD)v55;
    }
    v38 = 0LL;
    v39 = 0;
  }
LABEL_110:
  ShapeData = v39;
  if ( v39 < 0 )
    goto LABEL_107;
  if ( v3 != *((_QWORD *)v4 + 3) )
  {
    v62 = *((_BYTE *)v4 + 32) == 0;
    v63 = -2003292412;
    v64 = *(CVisual **)(v3 + 80);
    v108 = (int)v38;
    if ( v62 )
    {
      v73 = CVisual::GetTreeDataListHead(v64);
      if ( !v73 )
        goto LABEL_151;
      v33 = v73->Flink;
      if ( v73->Flink == v73 )
        goto LABEL_151;
      while ( 1 )
      {
        v65 = v33 - 14;
        if ( (const struct CVisualTree *)v33[2].Flink == v4 )
          break;
        v33 = v33->Flink;
        if ( v33 == v73 )
          goto LABEL_151;
      }
    }
    else
    {
      v65 = (struct _LIST_ENTRY *)((char *)v64 + 328);
    }
    if ( !v65 )
      goto LABEL_151;
    v66 = (struct D2D_POINT_2F *)*((_QWORD *)v64 + 2);
    v63 = (int)v38;
    v67 = (_DWORD *)*((_QWORD *)v64 + 28);
    p_Blink = v38;
    v101[1] = 0;
    v62 = (*v67 & 0x800000) == 0;
    v103 = v66[46];
    if ( !v62 )
    {
      v69 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v67, 9LL);
      v71 = *(unsigned int *)(v70 + 4);
      v72 = v69 >= (unsigned int)v71
          ? (struct _LIST_ENTRY **)v38
          : (struct _LIST_ENTRY **)(v70 + v71 + 15 + 8LL * v69 - (((_BYTE)v71 + 15) & 7));
      v33 = *v72;
      if ( *v72 )
      {
        v74 = (CVisual *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))v33->Flink->Flink[9].Blink)(v33->Flink);
        if ( v74 )
        {
          if ( ((__int64)v65[1].Flink & 4) == 0
            || (*(FLOAT *)&v33 = v103.x, v65[13].Blink != *(struct _LIST_ENTRY **)&v103) )
          {
            v101[1] = 1;
            p_Blink = CVisual::FindTreeData(v74, v4);
            if ( p_Blink )
              goto LABEL_140;
          }
        }
        v38 = 0LL;
      }
    }
    if ( v64 != *((CVisual **)v4 + 3) )
    {
      p_Blink = v38;
      v33 = (struct _LIST_ENTRY *)*((_QWORD *)v64 + 10);
      if ( *((_BYTE *)v4 + 32) )
      {
        p_Blink = (struct CTreeData *)&v33[20].Blink;
      }
      else
      {
        v75 = CVisual::GetTreeDataListHead((CVisual *)v33);
        if ( v75 )
        {
          v33 = v75->Flink;
          if ( v75->Flink != v75 )
          {
            while ( (const struct CVisualTree *)v33[2].Flink != v4 )
            {
              v33 = v33->Flink;
              if ( v33 == v75 )
                goto LABEL_139;
            }
            p_Blink = (struct CTreeData *)&v33[-14];
          }
        }
      }
    }
LABEL_139:
    if ( !p_Blink )
    {
      v76 = 1LL;
      goto LABEL_142;
    }
LABEL_140:
    v76 = *((_QWORD *)p_Blink + 15);
LABEL_142:
    if ( v65[7].Blink < (struct _LIST_ENTRY *)v76 )
    {
      v77 = CVisual::UpdateWorldTransform(
              (CComposition **)v64,
              (CVisual **)v4,
              (struct CTreeData *)v65,
              v101[1],
              p_Blink);
      v63 = v77;
      if ( v77 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v33, 0LL, 0, v77, 0x7BEu);
    }
    if ( v63 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v33, 0LL, 0, v63, 0x71Bu);
    }
    else
    {
      if ( !v65[7].Blink )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v33, 0LL, 0, -2003292412, 0x65u);
        v63 = -2003292412;
        MilInstrumentationCheckHR_MaybeFailFast(v82, 0LL, 0, -2003292412, 0x722u);
        ShapeData = -2003292412;
        goto LABEL_149;
      }
      v78 = *(_OWORD *)&v65[2].Blink;
      LODWORD(v33) = 0;
      v79 = *(_OWORD *)&v65[3].Blink;
      v63 = 0;
      v108 = (int)v65[6].Blink;
      v107[0] = v78;
      v80 = *(_OWORD *)&v65[4].Blink;
      v107[1] = v79;
      v81 = *(_OWORD *)&v65[5].Blink;
      v107[2] = v80;
      v107[3] = v81;
    }
LABEL_151:
    ShapeData = v63;
    if ( v63 >= 0 )
    {
      CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)v107);
      v28 = *((float *)&v111 + 3);
      v25 = *((float *)&v111 + 2);
      v29 = *((float *)&v111 + 1);
      v26 = *(float *)&v111;
      goto LABEL_153;
    }
LABEL_149:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v33, 0LL, 0, v63, 0x6Bu);
    return ShapeData;
  }
LABEL_153:
  v83 = *((float *)this + 22);
  if ( v83 < v26 || v25 <= v83 || (v84 = *((float *)this + 23), v84 < v29) || v28 <= v84 )
  {
    v99 = v102;
    v95 = v101[0];
    goto LABEL_192;
  }
  v89 = 0;
  if ( (**(_DWORD **)(v3 + 224) & 0x400000) != 0 )
  {
    v85 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*(_QWORD *)(v3 + 224), 10LL);
    v87 = *(unsigned int *)(v86 + 4);
    v88 = v85 >= (unsigned int)v87 ? 0LL : (_QWORD *)(v86 + v87 + 15 + 8LL * v85 - (((_BYTE)v87 + 15) & 7));
    if ( *v88 && *((_QWORD *)CVisual::GetInteractionInternal((CVisual *)v3) + 34) )
      v89 = 1;
  }
  *(_BYTE *)(v3 + 93) |= 4u;
  v90 = *(CGeometry **)(v3 + 248);
  if ( !v90 )
  {
    if ( v89
      && *((_BYTE *)this + 185)
      && CHitTestContext::GetPointInLocalSpace(
           (const struct D2D_POINT_2F *)this + 11,
           (const struct CMILMatrix *)v105,
           &v103) )
    {
      InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v3);
      CInteraction::PushHoverPointer(InteractionInternal, &v103);
    }
    goto LABEL_182;
  }
  *(_QWORD *)&v111 = 0LL;
  BYTE8(v111) = 0;
  ShapeData = CGeometry::GetShapeData(v90, (const struct D2D_SIZE_F *)(v3 + 132), (struct CShapePtr *)&v111);
  if ( (ShapeData & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v91, 0LL, 0, ShapeData, 0x80u);
    goto LABEL_177;
  }
  if ( (_QWORD)v111
    && CHitTestContext::GetPointInLocalSpace(
         (const struct D2D_POINT_2F *)this + 11,
         (const struct CMILMatrix *)v109,
         &v103) )
  {
    ShapeData = CShapePtr::FillContainsPoint((CShapePtr *)&v111, &v103, &v101[1]);
    if ( (ShapeData & 0x80000000) == 0 )
    {
      *(_BYTE *)(v3 + 93) ^= (*(_BYTE *)(v3 + 93) ^ (4 * v101[1])) & 4;
      if ( (*(_BYTE *)(v3 + 93) & 4) != 0 && v89 && *((_BYTE *)this + 185) )
      {
        v93 = CVisual::GetInteractionInternal((CVisual *)v3);
        CInteraction::PushHoverPointer(v93, &v103);
      }
      goto LABEL_174;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v92, 0LL, 0, ShapeData, 0x88u);
LABEL_177:
    CShapePtr::Release((CShapePtr *)&v111);
    return ShapeData;
  }
LABEL_174:
  CShapePtr::Release((CShapePtr *)&v111);
LABEL_182:
  v95 = v101[0];
  if ( v101[0] )
  {
    if ( CVisual::HasBspPolygonList((CVisual *)v3) && (*(_BYTE *)(v3 + 93) & 4) != 0 )
    {
      v110 = 0;
      v101[1] = 0;
      CVisual::CalcEffectiveTransform(v3, 5LL, 0LL, &v101[1], v109, v4, 0LL);
      CMatrixStack::Push((CHitTestContext *)((char *)this + 152), (const struct CMILMatrix *)v109, 0);
      LOBYTE(v104[14].Flink) |= 1u;
      LODWORD(v4) = CVisual::GetBspPolygonListCount((CVisual *)v3);
      if ( (_DWORD)v4 )
      {
        while ( !*((_QWORD *)this + 14) )
        {
          v4 = (const struct CVisualTree *)(unsigned int)((_DWORD)v4 - 1);
          BspPolygonList = (_QWORD *)CVisual::GetBspPolygonList(v3);
          v97 = CHitTestContext::BspHitTest(
                  this,
                  (const struct CMILMatrix *)v105,
                  *(struct CPolygon **)(*BspPolygonList + 8LL * (_QWORD)v4));
          ShapeData = v97;
          if ( v97 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v98, 0LL, 0, v97, 0xAFu);
            return ShapeData;
          }
          if ( !(_DWORD)v4 )
            break;
        }
      }
    }
    v99 = v102;
    *v102 = 0;
LABEL_192:
    if ( !v95 )
    {
      *v99 = (*(_BYTE *)(v3 + 93) & 4) != 0;
      return ShapeData;
    }
    return ShapeData;
  }
  *v102 = (*(_BYTE *)(v3 + 93) & 4) != 0;
  return ShapeData;
}
