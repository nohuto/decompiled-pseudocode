/*
 * XREFs of ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800873F0
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x180086DD0 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800051AC (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180052E00 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800600B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180063A50 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180067570 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18006E4B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18007F954 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?PushHoverPointer@CInteraction@@QEBAXAEBUD2D_POINT_2F@@@Z @ 0x180085EE4 (-PushHoverPointer@CInteraction@@QEBAXAEBUD2D_POINT_2F@@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180087C04 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180087E4C (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x180089E04 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18008AA9C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x1800C22C4 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800C9B34 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1800EAB88 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x1801C3030 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x1801C3860 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x18022D67C (-BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z.c)
 */

__int64 __fastcall CHitTestContext::PreSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // r14
  struct _LIST_ENTRY *v7; // r12
  __int64 Bounds; // rax
  bool *v9; // r10
  __int64 v10; // rdx
  __m128 v11; // xmm0
  __int64 v12; // xmm1_8
  int v13; // r15d
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned __int64 v18; // r15
  float v19; // xmm9_4
  float v20; // xmm8_4
  unsigned int v21; // eax
  float v22; // xmm6_4
  float v23; // xmm7_4
  bool v24; // bl
  bool v25; // r13
  struct _LIST_ENTRY *v26; // rcx
  bool v27; // al
  struct _LIST_ENTRY *v28; // rax
  int v29; // r13d
  struct _LIST_ENTRY *v30; // rbx
  __int64 v31; // rax
  char v32; // r11
  _DWORD *v33; // r8
  const struct CTreeData *p_Blink; // r10
  bool v35; // zf
  int Blink; // eax
  __int128 v37; // xmm0
  int ShapeData; // ebx
  CVisual *v39; // r15
  struct _LIST_ENTRY *v40; // rbx
  char v41; // r11
  _DWORD *v42; // r8
  __int64 **v43; // r13
  unsigned __int64 v44; // rax
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  float v49; // xmm0_4
  float v50; // xmm0_4
  _DWORD *v51; // r8
  char v52; // r13
  bool v53; // al
  CGeometry *v54; // rcx
  bool v55; // r15
  bool *v56; // rcx
  __int64 v58; // rax
  _BYTE *v59; // rdx
  __int64 j; // rcx
  _QWORD *v61; // rax
  struct CEffect *v62; // rbx
  struct CEffect *EffectInternal; // rax
  struct _LIST_ENTRY *v64; // rax
  struct _LIST_ENTRY v65; // xmm1
  struct _LIST_ENTRY v66; // xmm0
  struct _LIST_ENTRY v67; // xmm1
  unsigned int v68; // ecx
  unsigned int v69; // ecx
  CInteraction *InteractionInternal; // rax
  __int64 v71; // rax
  _BYTE *v72; // rdx
  __int64 i; // rcx
  struct _LIST_ENTRY **v74; // rcx
  CVisual *v75; // rax
  __int64 v76; // rax
  _BYTE *v77; // rdx
  __int64 k; // rcx
  struct _LIST_ENTRY **v79; // rcx
  CVisual *v80; // rax
  int updated; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v84; // rax
  int v85; // eax
  unsigned int v86; // ecx
  unsigned __int64 v87; // rax
  void *v88; // rbx
  void *v89; // rbx
  HANDLE ProcessHeap; // rax
  __int64 **TreeData; // rax
  __int64 v92; // r11
  __int64 v93; // rax
  struct _LIST_ENTRY *v94; // rax
  struct _LIST_ENTRY *v95; // rax
  unsigned int v96; // ecx
  struct _LIST_ENTRY *v97; // rax
  struct _LIST_ENTRY *v98; // rax
  int v99; // eax
  unsigned int v100; // ecx
  CInteraction *v101; // rax
  _QWORD *BspPolygonList; // rax
  unsigned int v103; // ecx
  unsigned int v104; // [rsp+28h] [rbp-E0h]
  bool v105[8]; // [rsp+48h] [rbp-C0h] BYREF
  bool *v106; // [rsp+50h] [rbp-B8h]
  void *lpMem; // [rsp+58h] [rbp-B0h] BYREF
  struct _LIST_ENTRY *v108; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v109; // [rsp+68h] [rbp-A0h]
  __int64 v110; // [rsp+70h] [rbp-98h]
  _OWORD v111[4]; // [rsp+78h] [rbp-90h] BYREF
  int v112; // [rsp+B8h] [rbp-50h]
  _OWORD v113[4]; // [rsp+C8h] [rbp-40h] BYREF
  int v114; // [rsp+108h] [rbp+0h]
  _BYTE v115[64]; // [rsp+118h] [rbp+10h] BYREF
  int v116; // [rsp+158h] [rbp+50h]
  __m128 v117; // [rsp+168h] [rbp+60h] BYREF
  __int64 v118; // [rsp+178h] [rbp+70h]

  v3 = *((_QWORD *)this + 2);
  v4 = *((_QWORD *)this + 3);
  v5 = (__int64)a2;
  v106 = a3;
  v7 = 0LL;
  if ( *((_BYTE *)a2 + 32) )
  {
    v7 = (struct _LIST_ENTRY *)(v3 + 328);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v3);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( Flink[2].Flink != (struct _LIST_ENTRY *)v5 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_3;
        }
        v7 = Flink - 14;
      }
    }
  }
LABEL_3:
  Bounds = CVisual::GetBounds(v3, v5);
  v10 = 0xFFFFFFFFLL;
  v11 = *(__m128 *)Bounds;
  v12 = *(_QWORD *)(Bounds + 16);
  *(_BYTE *)(v3 + 93) &= ~4u;
  LOBYTE(v7[14].Flink) &= ~1u;
  *v9 = 1;
  v13 = *(_DWORD *)(v3 + 200);
  v118 = v12;
  v117 = v11;
  if ( v13 != -1 )
  {
    v14 = *((unsigned int *)this + 37);
    v15 = *((_DWORD *)this + 36);
    lpMem = 0LL;
    if ( v15 != (_DWORD)v14 )
    {
LABEL_5:
      *(_DWORD *)(*((_QWORD *)this + 20) + 4LL * v15) = v13;
      v16 = *((_DWORD *)this + 42);
      v17 = *((_DWORD *)this + 36) + 1;
      *((_DWORD *)this + 36) = v17;
      if ( v16 <= v17 )
        v16 = v17;
      *((_DWORD *)this + 42) = v16;
      goto LABEL_8;
    }
    v84 = 2 * v14;
    if ( (unsigned __int64)(2 * v14) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024362, 0x4Cu, 0LL);
    }
    else
    {
      if ( (unsigned int)v84 <= 0x40 )
        v84 = 64LL;
      v110 = v84;
      v85 = HrMalloc(4uLL, (unsigned int)v84, &lpMem);
      if ( v85 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v86, 0LL, 0, v85, 0x53u, 0LL);
      }
      else
      {
        v87 = 4LL * *((unsigned int *)this + 36);
        if ( v87 <= 0xFFFFFFFF )
        {
          v88 = lpMem;
          memcpy_0(lpMem, *((const void **)this + 20), (unsigned int)v87);
          operator delete(*((void **)this + 20));
          v9 = v106;
          *((_DWORD *)this + 37) = v110;
          v15 = *((_DWORD *)this + 36);
          *((_QWORD *)this + 20) = v88;
          goto LABEL_5;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x55u, 0LL);
      }
      v89 = lpMem;
      if ( lpMem )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v89);
      }
    }
    v9 = v106;
  }
LABEL_8:
  v18 = 1LL;
  v19 = v117.m128_f32[2];
  v20 = v117.m128_f32[0];
  v21 = *((float *)&v118 + 1) <= *(float *)&v118;
  if ( v117.m128_f32[2] <= v117.m128_f32[0] )
    ++v21;
  v22 = v117.m128_f32[3];
  v23 = v117.m128_f32[1];
  if ( v117.m128_f32[3] <= v117.m128_f32[1] )
    ++v21;
  if ( v21 > 1 || (*(_BYTE *)(v3 + 94) & 1) != 0 )
    goto LABEL_70;
  if ( *(_DWORD *)(v3 + 100) || (**(_DWORD **)(v3 + 224) & 0x200000) == 0 )
  {
LABEL_16:
    if ( !*(_BYTE *)(v5 + 32) )
    {
      if ( *(_QWORD *)(v3 + 16) )
      {
        TreeData = CVisual::FindTreeData((CVisual *)v3, (const struct CVisualTree *)v5);
        if ( TreeData )
        {
          if ( ((_BYTE)TreeData[2] & 4) != 0 && TreeData[27] == *(__int64 **)(v92 + 384) )
            goto LABEL_148;
        }
      }
    }
    v112 = 0;
    v116 = 0;
    v24 = *(_DWORD *)(v3 + 100) == 1;
    v25 = v4 && *(_DWORD *)(v4 + 100) == 1;
    v27 = 1;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 216LL))(v3, v10) )
    {
      if ( (**(_DWORD **)(v3 + 224) & 0x200000) == 0
        || (EffectInternal = CVisual::GetEffectInternal((CVisual *)v3),
            !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
               EffectInternal,
               56LL)) )
      {
        v27 = 0;
      }
    }
    if ( !v24 )
      goto LABEL_24;
    if ( v25 )
    {
      if ( !v27 )
      {
LABEL_24:
        v105[0] = 0;
        goto LABEL_25;
      }
    }
    else
    {
      v93 = *(_QWORD *)(v3 + 72);
      if ( (v93 & 2) != 0 )
        v93 = *(_QWORD *)(v93 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v93) = v93 & 1;
      if ( !(_DWORD)v93 )
        goto LABEL_24;
    }
    v105[0] = 1;
LABEL_25:
    v28 = (struct _LIST_ENTRY *)v115;
    v29 = -2003292412;
    if ( !*(_QWORD *)(v3 + 248) )
      v28 = 0LL;
    v108 = v28;
    if ( *(_BYTE *)(v5 + 32) )
    {
      v30 = (struct _LIST_ENTRY *)(v3 + 328);
    }
    else
    {
      v94 = CVisual::GetTreeDataListHead((CVisual *)v3);
      if ( !v94 )
        goto LABEL_42;
      v26 = v94->Flink;
      if ( v94->Flink == v94 )
        goto LABEL_42;
      while ( 1 )
      {
        v30 = v26 - 14;
        if ( v26[2].Flink == (struct _LIST_ENTRY *)v5 )
          break;
        v26 = v26->Flink;
        if ( v26 == v94 )
          goto LABEL_42;
      }
    }
    if ( !v30 )
      goto LABEL_42;
    v31 = *(_QWORD *)(v3 + 16);
    v32 = 0;
    v33 = *(_DWORD **)(v3 + 224);
    v29 = 0;
    p_Blink = 0LL;
    lpMem = 0LL;
    v35 = (*v33 & 0x800000) == 0;
    v110 = *(_QWORD *)(v31 + 384);
    if ( !v35 )
    {
      v71 = (unsigned int)v33[1];
      v72 = v33 + 2;
      for ( i = 0LL; (unsigned int)i < (unsigned int)v71; ++v72 )
      {
        if ( *v72 == 9 )
          break;
        i = (unsigned int)(i + 1);
      }
      v74 = (unsigned int)i >= (unsigned int)v71
          ? 0LL
          : (struct _LIST_ENTRY **)((char *)v33 + 8 * i - (((_BYTE)v71 + 15) & 7) + v71 + 15);
      v26 = *v74;
      if ( v26 )
      {
        v75 = (CVisual *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))v26->Flink->Flink[12].Flink)(v26->Flink);
        if ( !v75
          || ((__int64)v30[1].Flink & 4) != 0 && (LODWORD(v26) = v110, v30[13].Blink == (struct _LIST_ENTRY *)v110) )
        {
          p_Blink = (const struct CTreeData *)lpMem;
          v32 = 0;
        }
        else
        {
          p_Blink = (const struct CTreeData *)CVisual::FindTreeData(v75, (const struct CVisualTree *)v5);
          if ( p_Blink )
            goto LABEL_35;
        }
      }
    }
    if ( v3 != *(_QWORD *)(v5 + 24) )
    {
      v26 = *(struct _LIST_ENTRY **)(v3 + 80);
      if ( *(_BYTE *)(v5 + 32) )
      {
        p_Blink = (const struct CTreeData *)&v26[20].Blink;
      }
      else
      {
        v95 = CVisual::GetTreeDataListHead((CVisual *)v26);
        if ( v95 )
        {
          v26 = v95->Flink;
          if ( v95->Flink != v95 )
          {
            while ( v26[2].Flink != (struct _LIST_ENTRY *)v5 )
            {
              v26 = v26->Flink;
              if ( v26 == v95 )
                goto LABEL_34;
            }
            p_Blink = (const struct CTreeData *)&v26[-14];
          }
        }
      }
    }
LABEL_34:
    if ( !p_Blink )
    {
LABEL_36:
      if ( v30[7].Blink < (struct _LIST_ENTRY *)v18 )
      {
        updated = CVisual::UpdateWorldTransform((CVisual *)v3, (CVisual **)v5, (struct CTreeData *)v30, v32, p_Blink);
        v29 = updated;
        if ( updated < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v26, 0LL, 0, updated, 0x80Bu, 0LL);
      }
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v26, 0LL, 0, v29, 0x768u, 0LL);
      }
      else
      {
        if ( !v30[7].Blink )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v26, 0LL, 0, -2003292412, 0x65u, 0LL);
          v29 = -2003292412;
          MilInstrumentationCheckHR_MaybeFailFast(v96, 0LL, 0, -2003292412, 0x76Fu, 0LL);
          ShapeData = -2003292412;
          goto LABEL_175;
        }
        v26 = v108;
        Blink = (int)v30[6].Blink;
        v111[0] = *(struct _LIST_ENTRY *)((char *)v30 + 40);
        v112 = Blink;
        v37 = *(_OWORD *)&v30[4].Blink;
        v111[1] = *(struct _LIST_ENTRY *)((char *)v30 + 56);
        v111[2] = v37;
        v111[3] = *(struct _LIST_ENTRY *)((char *)v30 + 88);
        if ( v108 )
        {
          v64 = v30[7].Flink;
          v65 = v64[1];
          *v108 = *v64;
          v66 = v64[2];
          v26[1] = v65;
          v67 = v64[3];
          LODWORD(v64) = v64[4].Flink;
          v26[2] = v66;
          v26[3] = v67;
          LODWORD(v26[4].Flink) = (_DWORD)v64;
        }
        v29 = 0;
      }
LABEL_42:
      ShapeData = v29;
      if ( v29 >= 0 )
      {
        if ( v3 == *(_QWORD *)(v5 + 24) )
        {
LABEL_58:
          v49 = *((float *)this + 22);
          if ( v49 < v20 || v19 <= v49 || (v50 = *((float *)this + 23), v50 < v23) || v22 <= v50 )
          {
            v55 = v105[0];
            v56 = v106;
            goto LABEL_72;
          }
          v51 = *(_DWORD **)(v3 + 224);
          if ( (*v51 & 0x400000) == 0 )
            goto LABEL_63;
          v58 = (unsigned int)v51[1];
          v59 = v51 + 2;
          for ( j = 0LL; (unsigned int)j < (unsigned int)v58; ++v59 )
          {
            if ( *v59 == 10 )
              break;
            j = (unsigned int)(j + 1);
          }
          v61 = (unsigned int)j >= (unsigned int)v58
              ? 0LL
              : (_QWORD *)((char *)v51 + 8 * j - (((_BYTE)v58 + 15) & 7) + v58 + 15);
          if ( *v61 && *((_QWORD *)CVisual::GetInteractionInternal((CVisual *)v3) + 34) )
            v52 = 1;
          else
LABEL_63:
            v52 = 0;
          v53 = (*((_BYTE *)this + 208) & 2) != 0;
          *(_BYTE *)(v3 + 93) |= 4u;
          v54 = *(CGeometry **)(v3 + 248);
          v105[2] = v53;
          if ( !v54 )
          {
            if ( v52
              && v53
              && CHitTestContext::GetPointInLocalSpace(
                   (const struct D2D_POINT_2F *)this + 11,
                   (const struct CMILMatrix *)v111,
                   (struct D2D_POINT_2F *)&lpMem) )
            {
              InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v3);
              CInteraction::PushHoverPointer(InteractionInternal, (const struct D2D_POINT_2F *)&lpMem);
            }
            goto LABEL_66;
          }
          v108 = 0LL;
          LOBYTE(v109) = 0;
          ShapeData = CGeometry::GetShapeData(v54, (const struct D2D_SIZE_F *)(v3 + 132), (struct CShapePtr *)&v108);
          if ( ShapeData < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, ShapeData, 0x80u, 0LL);
          }
          else
          {
            if ( !v108
              || !CHitTestContext::GetPointInLocalSpace(
                    (const struct D2D_POINT_2F *)this + 11,
                    (const struct CMILMatrix *)v115,
                    (struct D2D_POINT_2F *)&lpMem) )
            {
LABEL_94:
              CShapePtr::Release((CShapePtr *)&v108);
LABEL_66:
              v55 = v105[0];
              if ( !v105[0] )
              {
                v56 = v106;
LABEL_68:
                *v56 = (*(_BYTE *)(v3 + 93) & 4) != 0;
                return (unsigned int)ShapeData;
              }
              if ( CVisual::HasBspPolygonList((CVisual *)v3) && (*(_BYTE *)(v3 + 93) & 4) != 0 )
              {
                v116 = 0;
                v105[1] = 0;
                CVisual::CalcEffectiveTransform(v3, 5, 0LL, &v105[1], (CMILMatrix *)v115, v5, 0LL);
                CMatrixStack::Push((CHitTestContext *)((char *)this + 176), (const struct CMILMatrix *)v115, 0);
                LOBYTE(v7[14].Flink) |= 1u;
                LODWORD(v5) = CVisual::GetBspPolygonListCount((CVisual *)v3);
                if ( (_DWORD)v5 )
                {
                  while ( !*((_QWORD *)this + 14) )
                  {
                    v5 = (unsigned int)(v5 - 1);
                    BspPolygonList = (_QWORD *)CVisual::GetBspPolygonList(v3);
                    ShapeData = CHitTestContext::BspHitTest(
                                  this,
                                  (const struct CMILMatrix *)v111,
                                  *(struct CPolygon **)(*BspPolygonList + 8 * v5));
                    if ( ShapeData < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v103, 0LL, 0, ShapeData, 0xAFu, 0LL);
                      return (unsigned int)ShapeData;
                    }
                    if ( !(_DWORD)v5 )
                      break;
                  }
                }
              }
              v56 = v106;
              *v106 = 0;
LABEL_72:
              if ( v55 )
                return (unsigned int)ShapeData;
              goto LABEL_68;
            }
            ShapeData = CShapePtr::FillContainsPoint((CShapePtr *)&v108, (const struct D2D_POINT_2F *)&lpMem, &v105[1]);
            if ( ShapeData >= 0 )
            {
              *(_BYTE *)(v3 + 93) ^= (*(_BYTE *)(v3 + 93) ^ (4 * v105[1])) & 4;
              if ( (*(_BYTE *)(v3 + 93) & 4) != 0 && v52 && v105[2] )
              {
                v101 = CVisual::GetInteractionInternal((CVisual *)v3);
                CInteraction::PushHoverPointer(v101, (const struct D2D_POINT_2F *)&lpMem);
              }
              goto LABEL_94;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, ShapeData, 0x88u, 0LL);
          }
          CShapePtr::Release((CShapePtr *)&v108);
          return (unsigned int)ShapeData;
        }
        v35 = *(_BYTE *)(v5 + 32) == 0;
        v29 = -2003292412;
        v39 = *(CVisual **)(v3 + 80);
        v114 = 0;
        if ( v35 )
        {
          v97 = CVisual::GetTreeDataListHead(v39);
          if ( !v97 )
            goto LABEL_56;
          v26 = v97->Flink;
          if ( v97->Flink == v97 )
            goto LABEL_56;
          while ( 1 )
          {
            v40 = v26 - 14;
            if ( v26[2].Flink == (struct _LIST_ENTRY *)v5 )
              break;
            v26 = v26->Flink;
            if ( v26 == v97 )
              goto LABEL_56;
          }
        }
        else
        {
          v40 = (struct _LIST_ENTRY *)((char *)v39 + 328);
        }
        if ( !v40 )
          goto LABEL_56;
        v41 = 0;
        v42 = (_DWORD *)*((_QWORD *)v39 + 28);
        v43 = 0LL;
        v35 = (*v42 & 0x800000) == 0;
        v108 = *(struct _LIST_ENTRY **)(*((_QWORD *)v39 + 2) + 384LL);
        if ( !v35 )
        {
          v76 = (unsigned int)v42[1];
          v77 = v42 + 2;
          for ( k = 0LL; (unsigned int)k < (unsigned int)v76; ++v77 )
          {
            if ( *v77 == 9 )
              break;
            k = (unsigned int)(k + 1);
          }
          v79 = (unsigned int)k >= (unsigned int)v76
              ? 0LL
              : (struct _LIST_ENTRY **)((char *)v42 + 8 * k - (((_BYTE)v76 + 15) & 7) + v76 + 15);
          v26 = *v79;
          if ( v26 )
          {
            v80 = (CVisual *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))v26->Flink->Flink[12].Flink)(v26->Flink);
            if ( !v80 || ((__int64)v40[1].Flink & 4) != 0 && (LODWORD(v26) = (_DWORD)v108, v40[13].Blink == v108) )
            {
              v41 = 0;
            }
            else
            {
              v43 = CVisual::FindTreeData(v80, (const struct CVisualTree *)v5);
              if ( v43 )
                goto LABEL_52;
            }
          }
        }
        if ( v39 != *(CVisual **)(v5 + 24) )
        {
          v43 = 0LL;
          v26 = (struct _LIST_ENTRY *)*((_QWORD *)v39 + 10);
          if ( *(_BYTE *)(v5 + 32) )
          {
            v43 = (__int64 **)&v26[20].Blink;
          }
          else
          {
            v98 = CVisual::GetTreeDataListHead((CVisual *)v26);
            if ( v98 )
            {
              v26 = v98->Flink;
              if ( v98->Flink != v98 )
              {
                while ( v26[2].Flink != (struct _LIST_ENTRY *)v5 )
                {
                  v26 = v26->Flink;
                  if ( v26 == v98 )
                    goto LABEL_51;
                }
                v43 = (__int64 **)&v26[-14];
              }
            }
          }
        }
LABEL_51:
        if ( !v43 )
        {
          v44 = 1LL;
          goto LABEL_53;
        }
LABEL_52:
        v44 = (unsigned __int64)v43[15];
LABEL_53:
        if ( v40[7].Blink >= (struct _LIST_ENTRY *)v44 )
          goto LABEL_54;
        v99 = CVisual::UpdateWorldTransform(
                v39,
                (CVisual **)v5,
                (struct CTreeData *)v40,
                v41,
                (const struct CTreeData *)v43);
        v29 = v99;
        if ( v99 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v26, 0LL, 0, v99, 0x80Bu, 0LL);
        if ( v29 >= 0 )
        {
LABEL_54:
          if ( !v40[7].Blink )
          {
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v26, 0LL, 0, -2003292412, 0x65u, 0LL);
            v29 = -2003292412;
            MilInstrumentationCheckHR_MaybeFailFast(v100, 0LL, 0, -2003292412, 0x76Fu, 0LL);
            ShapeData = -2003292412;
LABEL_199:
            v104 = 106;
            goto LABEL_176;
          }
          v45 = *(_OWORD *)&v40[2].Blink;
          v46 = *(_OWORD *)&v40[3].Blink;
          v29 = 0;
          v114 = (int)v40[6].Blink;
          v113[0] = v45;
          v47 = *(_OWORD *)&v40[4].Blink;
          v113[1] = v46;
          v48 = *(_OWORD *)&v40[5].Blink;
          v113[2] = v47;
          v113[3] = v48;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v26, 0LL, 0, v29, 0x768u, 0LL);
        }
LABEL_56:
        ShapeData = v29;
        if ( v29 >= 0 )
        {
          CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)v113, (__int64)&v117, &v117);
          v22 = v117.m128_f32[3];
          v19 = v117.m128_f32[2];
          v23 = v117.m128_f32[1];
          v20 = v117.m128_f32[0];
          goto LABEL_58;
        }
        goto LABEL_199;
      }
LABEL_175:
      v104 = 98;
LABEL_176:
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v26, 0LL, 0, v29, v104, 0LL);
      return (unsigned int)ShapeData;
    }
LABEL_35:
    v18 = *((_QWORD *)p_Blink + 15);
    goto LABEL_36;
  }
  v62 = CVisual::GetEffectInternal((CVisual *)v3);
  if ( !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v62 + 48LL))(v62, 180LL) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v62 + 48LL))(v62, 53LL) )
      goto LABEL_16;
    v62 = (struct CEffect *)*((_QWORD *)v62 + 10);
  }
  if ( !v62 )
    goto LABEL_16;
LABEL_148:
  v9 = v106;
LABEL_70:
  *v9 = 0;
  return 0LL;
}
