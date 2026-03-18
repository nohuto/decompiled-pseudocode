/*
 * XREFs of ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18002CB70
 * Callers:
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x180020A80 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N@Z @ 0x18002C198 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18002D180 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x18003A040 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180041660 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x18018F8F0 (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x18018FE5C (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801915F0 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?GetSrcToDestVisualTransform@CProjectedShadow@@CAJPEBVCDrawingContext@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAVCVisual@@V?$span@PEAVCMILMatrix@@$0?0@4@@Z @ 0x1801CB2A8 (-GetSrcToDestVisualTransform@CProjectedShadow@@CAJPEBVCDrawingContext@@V-$span@PEAVCVisual@@$0-0.c)
 *     ?IsValidVisual@CProjectedShadow@@AEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801CBD40 (-IsValidVisual@CProjectedShadow@@AEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1801F7A94 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEAVCVisual@@0PEBVCVisualTree@@@Z @ 0x1802255A8 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEAVCVisual@@0PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800039BC (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18002CDDC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180030964 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180067D14 (-IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetWorldTransform(
        struct _LIST_ENTRY *Flink,
        __int64 a2,
        int a3,
        __int64 a4,
        _BYTE *a5,
        CVisual *a6)
{
  __int64 v6; // rbp
  int v7; // r10d
  struct _LIST_ENTRY *v9; // rdi
  struct _LIST_ENTRY *v10; // rbx
  struct _LIST_ENTRY *v11; // r8
  int v12; // r15d
  struct CTreeData *TreeData; // rsi
  char v14; // r13
  struct _LIST_ENTRY *v15; // r12
  unsigned __int64 v16; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v19; // rax
  int updated; // eax
  __int64 Flink_high; // rcx
  struct _LIST_ENTRY **p_Blink; // rdx
  unsigned int i; // eax
  struct _LIST_ENTRY **v24; // rcx
  CVisual *v25; // rax
  struct _LIST_ENTRY *v26; // rax
  unsigned int v27; // ecx

  v6 = a4;
  v7 = a3;
  v9 = Flink;
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
  if ( v7 != 5 || v10[7].Blink && CVisualTree::IsVisibleInTree((CVisualTree *)a2, (const struct CVisual *)v9) )
  {
    v11 = v9[14].Flink;
    v12 = 0;
    TreeData = 0LL;
    v14 = 0;
    v15 = v9[1].Flink[23].Flink;
    if ( ((__int64)v11->Flink & 0x800000) != 0 )
    {
      Flink_high = HIDWORD(v11->Flink);
      p_Blink = &v11->Blink;
      for ( i = 0; i < (unsigned int)Flink_high; p_Blink = (struct _LIST_ENTRY **)((char *)p_Blink + 1) )
      {
        if ( *(_BYTE *)p_Blink == 9 )
          break;
        ++i;
      }
      if ( i >= (unsigned int)Flink_high )
      {
        v24 = 0LL;
      }
      else
      {
        p_Blink = (struct _LIST_ENTRY **)(Flink_high + 15);
        v24 = (struct _LIST_ENTRY **)((char *)p_Blink + 8LL * i - ((unsigned __int8)p_Blink & 7) + (_QWORD)v11);
      }
      Flink = *v24;
      if ( Flink )
      {
        v25 = (CVisual *)((__int64 (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY *, __int64))Flink->Flink->Flink[9].Blink)(
                           Flink->Flink,
                           p_Blink,
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
    if ( v9 != *(struct _LIST_ENTRY **)(a2 + 24) )
    {
      Flink = v9[5].Flink;
      TreeData = 0LL;
      if ( *(_BYTE *)(a2 + 32) )
      {
        TreeData = (struct CTreeData *)&Flink[20].Blink;
      }
      else
      {
        v19 = CVisual::GetTreeDataListHead((CVisual *)Flink);
        if ( v19 )
        {
          Flink = v19->Flink;
          if ( v19->Flink != v19 )
          {
            while ( Flink[2].Flink != (struct _LIST_ENTRY *)a2 )
            {
              Flink = Flink->Flink;
              if ( Flink == v19 )
                goto LABEL_9;
            }
            TreeData = (struct CTreeData *)&Flink[-14];
          }
        }
      }
    }
LABEL_9:
    if ( TreeData )
LABEL_10:
      v16 = *((_QWORD *)TreeData + 15);
    else
      v16 = 1LL;
    if ( v10[7].Blink < (struct _LIST_ENTRY *)v16 )
    {
      updated = CVisual::UpdateWorldTransform(
                  (CComposition **)v9,
                  (CVisual **)a2,
                  (struct CTreeData *)v10,
                  v14,
                  TreeData);
      v12 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, updated, 0x7BEu);
    }
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, v12, 0x71Bu);
      return (unsigned int)v12;
    }
    if ( !v10[7].Blink )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, -2003292412, 0x65u);
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, -2003292412, 0x722u);
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
      *((struct _LIST_ENTRY *)a6 + 1) = v26[1];
      *((struct _LIST_ENTRY *)a6 + 2) = v26[2];
      *((struct _LIST_ENTRY *)a6 + 3) = v26[3];
      *((_DWORD *)a6 + 16) = v26[4].Flink;
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
      *((_WORD *)a6 + 32) = 32085;
      *((_OWORD *)a6 + 1) = _xmm;
      *((_OWORD *)a6 + 2) = _xmm;
      *((_OWORD *)a6 + 3) = _xmm;
    }
  }
  if ( a5 )
    *a5 = a4;
  return 0LL;
}
