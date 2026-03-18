/*
 * XREFs of ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18007E420
 * Callers:
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z @ 0x180005EE0 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V-$span@PEAVCVisual@@$0.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180006C14 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x180020FAC (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x180022160 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18007E5F0 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180082C60 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180087420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1800A940C (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801C1400 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x1801C6138 (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 *     ?UpdateLightToWorldForScene@CCompositionLight@@EEAAJPEBVCDrawingContext@@@Z @ 0x1801C6300 (-UpdateLightToWorldForScene@CCompositionLight@@EEAAJPEBVCDrawingContext@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x18023BC60 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEAVCVisual@@0PEBVCVisualTree@@@Z @ 0x180253FF8 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEAVCVisual@@0PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000BF44 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180035AFC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007DC30 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x1800C00C0 (-IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetWorldTransform(
        struct _LIST_ENTRY *Flink,
        __int64 a2,
        int a3,
        __int64 a4,
        _BYTE *a5,
        __int64 a6)
{
  __int64 v6; // rbp
  int v7; // r10d
  CVisual *v9; // rdi
  struct _LIST_ENTRY *v10; // rbx
  _DWORD *v11; // r8
  signed int v12; // r15d
  __int64 **TreeData; // rsi
  char v14; // r13
  struct _LIST_ENTRY *v15; // r12
  unsigned __int64 v16; // rax
  signed int updated; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v20; // rax
  __int64 v21; // rcx
  _BYTE *v22; // rdx
  unsigned int i; // eax
  struct _LIST_ENTRY **v24; // rcx
  CVisual *v25; // rax
  struct _LIST_ENTRY *v26; // rax
  __int64 v27; // rcx

  v6 = a4;
  v7 = a3;
  v9 = (CVisual *)Flink;
  if ( *(_BYTE *)(a2 + 32) )
  {
    v10 = (struct _LIST_ENTRY *)((char *)Flink + 328);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)Flink);
    if ( !TreeDataListHead )
      return 2291674884LL;
    Flink = TreeDataListHead->Flink;
    if ( TreeDataListHead->Flink == TreeDataListHead )
      return 2291674884LL;
    while ( 1 )
    {
      v10 = Flink - 14;
      if ( Flink[2].Flink == (struct _LIST_ENTRY *)a2 )
        break;
      Flink = Flink->Flink;
      if ( Flink == TreeDataListHead )
        return 2291674884LL;
    }
  }
  if ( !v10 )
    return 2291674884LL;
  LOBYTE(a4) = 0;
  if ( v7 != 5 || v10[7].Blink && CVisualTree::IsVisibleInTree((CVisualTree *)a2, v9) )
  {
    v11 = (_DWORD *)*((_QWORD *)v9 + 28);
    v12 = 0;
    TreeData = 0LL;
    v14 = 0;
    v15 = *(struct _LIST_ENTRY **)(*((_QWORD *)v9 + 2) + 384LL);
    if ( (*v11 & 0x800000) != 0 )
    {
      v21 = (unsigned int)v11[1];
      v22 = v11 + 2;
      for ( i = 0; i < (unsigned int)v21; ++v22 )
      {
        if ( *v22 == 9 )
          break;
        ++i;
      }
      if ( i >= (unsigned int)v21 )
      {
        v24 = 0LL;
      }
      else
      {
        v22 = (_BYTE *)(v21 + 15);
        v24 = (struct _LIST_ENTRY **)((char *)v11 + 8LL * i - (((_BYTE)v21 + 15) & 7) + v21 + 15);
      }
      Flink = *v24;
      if ( Flink )
      {
        v25 = (CVisual *)((__int64 (__fastcall *)(struct _LIST_ENTRY *, _BYTE *, _DWORD *, __int64))Flink->Flink->Flink[12].Flink)(
                           Flink->Flink,
                           v22,
                           v11,
                           a4);
        if ( v25 )
        {
          if ( ((__int64)v10[1].Flink & 4) == 0 || v10[13].Blink != v15 )
          {
            v14 = 1;
            TreeData = CVisual::FindTreeData(v25, (const struct CVisualTree *)a2);
            if ( TreeData )
              goto LABEL_10;
          }
        }
      }
    }
    if ( v9 != *(CVisual **)(a2 + 24) )
    {
      Flink = (struct _LIST_ENTRY *)*((_QWORD *)v9 + 10);
      TreeData = 0LL;
      if ( *(_BYTE *)(a2 + 32) )
      {
        TreeData = (__int64 **)&Flink[20].Blink;
      }
      else
      {
        v20 = CVisual::GetTreeDataListHead((CVisual *)Flink);
        if ( v20 )
        {
          Flink = v20->Flink;
          if ( v20->Flink != v20 )
          {
            while ( Flink[2].Flink != (struct _LIST_ENTRY *)a2 )
            {
              Flink = Flink->Flink;
              if ( Flink == v20 )
                goto LABEL_9;
            }
            TreeData = (__int64 **)&Flink[-14];
          }
        }
      }
    }
LABEL_9:
    if ( TreeData )
LABEL_10:
      v16 = (unsigned __int64)TreeData[15];
    else
      v16 = 1LL;
    if ( v10[7].Blink < (struct _LIST_ENTRY *)v16 )
    {
      updated = CVisual::UpdateWorldTransform(
                  v9,
                  (CVisual **)a2,
                  (struct CTreeData *)v10,
                  v14,
                  (const struct CTreeData *)TreeData);
      v12 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((__int64)Flink, 0LL, 0, updated, 0x80Bu, 0LL);
    }
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)Flink, 0LL, 0, v12, 0x768u, 0LL);
      return (unsigned int)v12;
    }
    if ( !v10[7].Blink )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)Flink, 0LL, 0, 0x88982F04, 0x65u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, 0x88982F04, 0x76Fu, 0LL);
      return 2291674884LL;
    }
    *(struct _LIST_ENTRY *)v6 = *(struct _LIST_ENTRY *)((char *)v10 + 40);
    *(struct _LIST_ENTRY *)(v6 + 16) = *(struct _LIST_ENTRY *)((char *)v10 + 56);
    *(struct _LIST_ENTRY *)(v6 + 32) = *(struct _LIST_ENTRY *)((char *)v10 + 72);
    *(struct _LIST_ENTRY *)(v6 + 48) = *(struct _LIST_ENTRY *)((char *)v10 + 88);
    *(_DWORD *)(v6 + 64) = v10[6].Blink;
    LOBYTE(a4) = ((__int64)v10[1].Flink & 2) != 0;
    if ( a6 )
    {
      v26 = v10[7].Flink;
      *(struct _LIST_ENTRY *)a6 = *v26;
      *(struct _LIST_ENTRY *)(a6 + 16) = v26[1];
      *(struct _LIST_ENTRY *)(a6 + 32) = v26[2];
      *(struct _LIST_ENTRY *)(a6 + 48) = v26[3];
      *(_DWORD *)(a6 + 64) = v26[4].Flink;
    }
  }
  else
  {
    *(_WORD *)(v6 + 64) = 32085;
    *(_OWORD *)v6 = _xmm;
    *(_OWORD *)(v6 + 16) = _xmm;
    *(_OWORD *)(v6 + 32) = _xmm;
    *(_OWORD *)(v6 + 48) = _xmm;
    if ( a6 )
    {
      *(_OWORD *)a6 = _xmm;
      *(_WORD *)(a6 + 64) = 32085;
      *(_OWORD *)(a6 + 16) = _xmm;
      *(_OWORD *)(a6 + 32) = _xmm;
      *(_OWORD *)(a6 + 48) = _xmm;
    }
  }
  if ( a5 )
    *a5 = a4;
  return 0LL;
}
