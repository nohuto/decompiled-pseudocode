/*
 * XREFs of ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x1800DF8B0
 * Callers:
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800DF50C (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0CA4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1801DF2AC (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAP.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800E1440 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x1800E1454 (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        CBrushRenderingGraphBuilder *this,
        struct CRenderingTechniqueFragment *a2,
        const struct CBrushRenderingGraph::GraphInputParameters *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 v7; // r9
  unsigned int v8; // edx
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // [rsp+30h] [rbp-18h] BYREF
  __int64 v18; // [rsp+38h] [rbp-10h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *(_QWORD *)this;
  v5 = 0LL;
  v7 = *(unsigned int *)(v3 + 40);
  if ( (_DWORD)v7 )
  {
    v13 = *(_QWORD *)(v3 + 16);
    do
    {
      if ( *(_QWORD *)(v13 + 24 * v5) == *(_QWORD *)a3
        && *(_QWORD *)(v13 + 24 * v5 + 8) == *((_QWORD *)a3 + 1)
        && *(_DWORD *)(v13 + 24 * v5 + 16) == *((_DWORD *)a3 + 4) )
      {
        break;
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < (unsigned int)v7 );
  }
  if ( (unsigned int)v5 >= (unsigned int)v7 )
  {
    v8 = v7 + 1;
    v9 = (int)v7 + 1 < (unsigned int)v7 ? 0x80070216 : 0;
    if ( (int)v7 + 1 < (unsigned int)v7 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v9, 0xB5u);
    }
    else if ( v8 > *(_DWORD *)(v3 + 36) )
    {
      v14 = DynArrayImpl<0>::AddMultipleAndSet(v3 + 16, 24, 1, a3);
      v9 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xC0u);
    }
    else
    {
      v10 = *(_QWORD *)(v3 + 16);
      v11 = 3 * v7;
      *(_OWORD *)(v10 + 8 * v11) = *(_OWORD *)a3;
      *(_QWORD *)(v10 + 8 * v11 + 16) = *((_QWORD *)a3 + 2);
      *(_DWORD *)(v3 + 40) = v8;
    }
    if ( v9 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v9, retaddr);
    if ( *(_QWORD *)a3 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a3 + 8LL))(*(_QWORD *)a3);
    LODWORD(v5) = *(_DWORD *)(v3 + 40) - 1;
  }
  v18 = 0LL;
  LODWORD(v17) = v5;
  v12 = (_QWORD *)*((_QWORD *)a2 + 5);
  BYTE4(v17) = 0;
  if ( *((_QWORD **)a2 + 6) == v12 )
  {
    std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
      (char *)a2 + 32,
      v12,
      &v17);
  }
  else
  {
    *v12 = v17;
    v16 = v18;
    v18 = 0LL;
    v12[1] = v16;
    *((_QWORD *)a2 + 5) += 16LL;
  }
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v18);
}
