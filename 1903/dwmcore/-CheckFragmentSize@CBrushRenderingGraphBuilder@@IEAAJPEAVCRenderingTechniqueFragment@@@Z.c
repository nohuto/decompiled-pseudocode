/*
 * XREFs of ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180038004
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180037EBC (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180038334 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18020CF60 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectIns.c)
 * Callees:
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x180034A00 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x180034F10 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z @ 0x180038044 (-NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x18025A698 (-RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA-AV-$unique_ptr@VCRenderingTechniqu.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::CheckFragmentSize(
        struct CBrushRenderingGraph **this,
        struct CRenderingTechniqueFragment *a2)
{
  struct CBrushRenderingGraph *v2; // rbp
  unsigned int v5; // ebx
  struct CBrushRenderingGraph *v7; // r8
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  int v12; // [rsp+50h] [rbp+8h] BYREF
  CRenderingTechniqueFragment *v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = *this;
  v5 = 0;
  while ( CRenderingTechniqueFragment::NeedsToBeBrokenUp(a2, *this) )
  {
    v7 = *this;
    v12 = *((_DWORD *)v2 + 42);
    CRenderingTechniqueFragment::RemoveLargestInputFragment(a2, &v13, v7);
    v8 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v13, &v12);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v8, 0x225u, 0LL);
      if ( v13 )
        CRenderingTechniqueFragment::`scalar deleting destructor'(v13, v11);
      return v5;
    }
    if ( v13 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v13, v9);
  }
  return v5;
}
