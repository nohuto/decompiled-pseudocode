/*
 * XREFs of ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCSpriteVisualContent@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18020D0F4
 * Callers:
 *     ?CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCSpriteVisualContent@@0@Z @ 0x1801F02C4 (-CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCSpriteVisualContent@@0@Z.c)
 * Callees:
 *     ??0CBrushRenderingGraph@@AEAA@XZ @ 0x180034624 (--0CBrushRenderingGraph@@AEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C57A0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18020CF60 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectIns.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurGraphBuilder::Build(
        struct CSpriteVisualContent *a1,
        struct CSpriteVisualContent *a2,
        struct CBrushRenderingGraph **a3,
        struct Windows::UI::Composition::IEffectInstance **a4)
{
  CBrushRenderingGraph *v8; // rax
  __int64 v9; // rcx
  CBrushRenderingGraph *v10; // rbx
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  CBrushRenderingGraph *v15; // [rsp+30h] [rbp-28h] BYREF
  CBrushRenderingGraph *v16; // [rsp+38h] [rbp-20h] BYREF
  int v17; // [rsp+40h] [rbp-18h]

  v8 = (CBrushRenderingGraph *)DefaultHeap::Alloc(0xD0uLL);
  if ( v8 )
    v10 = CBrushRenderingGraph::CBrushRenderingGraph(v8);
  else
    v10 = 0LL;
  v15 = v10;
  if ( v10 )
  {
    (**(void (__fastcall ***)(CBrushRenderingGraph *))v10)(v10);
    v17 = 0;
    v16 = v10;
    v11 = CProjectedShadowApproxBlurGraphBuilder::Build((CProjectedShadowApproxBlurGraphBuilder *)&v16, a1, a2, a4);
    v13 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1Bu, 0LL);
    }
    else
    {
      v15 = 0LL;
      *a3 = v10;
    }
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x8007000E, 0x17u, 0LL);
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v15);
  return v13;
}
