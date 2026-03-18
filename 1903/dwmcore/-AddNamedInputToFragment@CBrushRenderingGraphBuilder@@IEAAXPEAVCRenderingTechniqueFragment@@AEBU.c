/*
 * XREFs of ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x180034568
 * Callers:
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180038334 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180038B7C (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020CE18 (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAP.c)
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020F684 (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 * Callees:
 *     ?FindExistingNamedInput@CBrushRenderingGraphBuilder@@AEBA_NAEBUGraphInputParameters@CBrushRenderingGraph@@PEAI@Z @ 0x18003451C (-FindExistingNamedInput@CBrushRenderingGraphBuilder@@AEBA_NAEBUGraphInputParameters@CBrushRender.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800349EC (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x18007B0B4 (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        CBrushRenderingGraphBuilder *this,
        struct CRenderingTechniqueFragment *a2,
        const struct CBrushRenderingGraph::GraphInputParameters *a3)
{
  unsigned int v6; // ecx
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // eax
  _QWORD *v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // [rsp+30h] [rbp-18h] BYREF
  __int64 v19; // [rsp+38h] [rbp-10h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v21; // [rsp+68h] [rbp+20h] BYREF

  if ( !CBrushRenderingGraphBuilder::FindExistingNamedInput(this, a3, &v21) )
  {
    v7 = *(_QWORD *)this;
    v8 = *(unsigned int *)(v7 + 40);
    v9 = v8 + 1;
    if ( (int)v8 + 1 < (unsigned int)v8 )
    {
      v14 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024362, 0xB8u, 0LL);
    }
    else
    {
      if ( v9 <= *(_DWORD *)(v7 + 36) )
      {
        v10 = 3 * v8;
        v11 = *(_QWORD *)(v7 + 16);
        *(_OWORD *)(v11 + 8 * v10) = *(_OWORD *)a3;
        *(_QWORD *)(v11 + 8 * v10 + 16) = *((_QWORD *)a3 + 2);
        *(_DWORD *)(v7 + 40) = v9;
LABEL_5:
        v12 = *(_DWORD *)(v7 + 40) - 1;
        goto LABEL_6;
      }
      v16 = DynArrayImpl<0>::AddMultipleAndSet(v7 + 16, 24LL, 1LL, a3);
      v14 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xC3u, 0LL);
    }
    if ( v14 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v14, retaddr, v15);
    goto LABEL_5;
  }
  v12 = v21;
LABEL_6:
  v19 = 0LL;
  v13 = (_QWORD *)*((_QWORD *)a2 + 5);
  LODWORD(v18) = v12;
  BYTE4(v18) = 0;
  if ( *((_QWORD **)a2 + 6) == v13 )
  {
    std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
      (char *)a2 + 32,
      v13,
      &v18);
  }
  else
  {
    *v13 = v18;
    v13[1] = v19;
    *((_QWORD *)a2 + 5) += 16LL;
  }
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v19);
}
