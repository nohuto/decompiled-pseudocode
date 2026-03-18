/*
 * XREFs of ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x1800E06B4
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x1800E02EC (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0A98 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0CA4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1801DF444 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectIns.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x1800DFA5C (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x1800E079C (--0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV-$unique_ptr@VCRenderingTechniqueFr.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::CreateTechniqueForFragment(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  CRenderingTechnique *v5; // rax
  __int64 v6; // rcx
  CRenderingTechnique *v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // ebx
  __int64 v12; // rcx
  int v14; // eax
  CRenderingTechnique *v15; // [rsp+58h] [rbp+20h] BYREF

  v5 = (CRenderingTechnique *)HeapAlloc(WPF::g_processHeap, 0, 0x160uLL);
  if ( v5 )
    v7 = (CRenderingTechnique *)CRenderingTechnique::CRenderingTechnique(v5);
  else
    v7 = 0LL;
  if ( v7 )
  {
    v8 = *a1 + 144LL;
    v15 = v7;
    v9 = *(_DWORD *)(v8 + 24);
    v10 = v9 + 1;
    v11 = v9 + 1 < v9 ? 0x80070216 : 0;
    if ( v9 + 1 < v9 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v11, 0xB5u);
    }
    else if ( v10 > *(_DWORD *)(v8 + 20) )
    {
      v14 = DynArrayImpl<0>::AddMultipleAndSet(v8, 8, 1, &v15);
      v11 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v14, 0xC0u);
    }
    else
    {
      v12 = v9;
      *(_QWORD *)(*(_QWORD *)v8 + 8LL * v9) = v15;
      *(_DWORD *)(v8 + 24) = v10;
    }
    if ( v11 >= 0 )
    {
      *a3 = *(_DWORD *)(v8 + 24) - 1;
      return 0;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1CCu);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x1C9u);
  }
  if ( v7 )
    CRenderingTechnique::`scalar deleting destructor'(v7);
  return (unsigned int)v11;
}
