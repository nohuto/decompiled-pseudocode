/*
 * XREFs of ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1801DF2AC
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1801DF444 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectIns.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ??0CCompiledEffectCache@@QEAA@PEAUICompiledEffect@Composition@UI@Windows@@PEAX@Z @ 0x180076CCC (--0CCompiledEffectCache@@QEAA@PEAUICompiledEffect@Composition@UI@Windows@@PEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x1800DF8B0 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEffectCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x1800E1218 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEf.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x1800E1608 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ??4?$ComPtr@VCProjectedShadowApproxBlurEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCProjectedShadowApproxBlurEffect@@@Z @ 0x1801DF250 (--4-$ComPtr@VCProjectedShadowApproxBlurEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCProjectedShadowA.c)
 *     ??0CProjectedShadowApproxBlurEffect@@QEAA@XZ @ 0x18022BD88 (--0CProjectedShadowApproxBlurEffect@@QEAA@XZ.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurGraphBuilder::AddApproxBlurBrush(
        void **this,
        struct CSpriteVisualContent *a2,
        struct CSpriteVisualContent *a3,
        struct CRenderingTechniqueFragment **a4)
{
  unsigned int v4; // esi
  CProjectedShadowApproxBlurEffect *v9; // rax
  __int64 v10; // rcx
  CCompiledEffectCache *v11; // r9
  __int64 v12; // rcx
  LPVOID v13; // r10
  struct CRenderingTechniqueFragment *v14; // rdi
  __int64 *v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rax
  _QWORD v19[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-38h] BYREF
  int v21; // [rsp+50h] [rbp-28h]

  v4 = 0;
  if ( !CProjectedShadowApproxBlurGraphBuilder::s_cpInstanceandCompiledEffect )
  {
    v9 = (CProjectedShadowApproxBlurEffect *)operator new(0xC0uLL);
    if ( v9 )
      v9 = CProjectedShadowApproxBlurEffect::CProjectedShadowApproxBlurEffect(v9);
    Microsoft::WRL::ComPtr<CProjectedShadowApproxBlurEffect>::operator=(v10, (void (__fastcall ***)(_QWORD))v9);
  }
  if ( !CProjectedShadowApproxBlurGraphBuilder::s_pCompiledEffectCache )
  {
    v11 = (CCompiledEffectCache *)HeapAlloc(WPF::g_processHeap, 0, 0x28uLL);
    if ( v11 )
      CProjectedShadowApproxBlurGraphBuilder::s_pCompiledEffectCache = CCompiledEffectCache::CCompiledEffectCache(
                                                                         v11,
                                                                         (struct Windows::UI::Composition::ICompiledEffect *)((CProjectedShadowApproxBlurGraphBuilder::s_cpInstanceandCompiledEffect + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)CProjectedShadowApproxBlurGraphBuilder::s_cpInstanceandCompiledEffect >> 64)),
                                                                         *this);
    else
      CProjectedShadowApproxBlurGraphBuilder::s_pCompiledEffectCache = 0LL;
  }
  v13 = HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
  if ( v13 )
    v14 = (struct CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                                  (__int64)v13,
                                                  (CProjectedShadowApproxBlurGraphBuilder::s_cpInstanceandCompiledEffect
                                                 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)CProjectedShadowApproxBlurGraphBuilder::s_cpInstanceandCompiledEffect >> 64),
                                                  (__int64)CProjectedShadowApproxBlurGraphBuilder::s_pCompiledEffectCache,
                                                  0,
                                                  0,
                                                  0);
  else
    v14 = 0LL;
  if ( v14 )
  {
    v19[1] = a3;
    v15 = v19;
    v16 = 2LL;
    v19[0] = a2;
    do
    {
      v17 = *v15;
      v20[1] = 0LL;
      v21 = 0;
      v20[0] = v17;
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        (CBrushRenderingGraphBuilder *)this,
        v14,
        (const struct CBrushRenderingGraph::GraphInputParameters *)v20);
      ++v15;
      --v16;
    }
    while ( v16 );
    *a4 = v14;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x64u);
  }
  return v4;
}
