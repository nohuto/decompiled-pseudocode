/*
 * XREFs of ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x180042F0C
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180046004 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180046334 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x180046948 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18020B870 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectIns.c)
 * Callees:
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x180042A5C (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x180042FE0 (--0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV-$unique_ptr@VCRenderingTechniqueFr.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::CreateTechniqueForFragment(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  CRenderingTechnique *v5; // rax
  unsigned int v6; // ecx
  CRenderingTechnique *v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // ebx
  int v13; // eax
  unsigned int v14; // ecx
  CRenderingTechnique *v15; // [rsp+58h] [rbp+20h] BYREF

  v5 = (CRenderingTechnique *)DefaultHeap::Alloc(0x118uLL);
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
    if ( v9 + 1 < v9 )
    {
      v11 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024362, 0xB8u, 0LL);
    }
    else
    {
      if ( v10 <= *(_DWORD *)(v8 + 20) )
      {
        *(_QWORD *)(*(_QWORD *)v8 + 8LL * v9) = v15;
        *(_DWORD *)(v8 + 24) = v10;
LABEL_7:
        *a3 = *(_DWORD *)(v8 + 24) - 1;
        return 0;
      }
      v13 = DynArrayImpl<0>::AddMultipleAndSet(v8, 8LL, 1LL, &v15);
      v11 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC3u, 0LL);
    }
    if ( v11 >= 0 )
      goto LABEL_7;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v11, 0x238u, 0LL);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x235u, 0LL);
  }
  if ( v7 )
    CRenderingTechnique::`scalar deleting destructor'(v7);
  return (unsigned int)v11;
}
