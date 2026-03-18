/*
 * XREFs of ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCSpriteVisualContent@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1801DF56C
 * Callers:
 *     ?CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCSpriteVisualContent@@0@Z @ 0x1801C876C (-CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCSpriteVisualContent@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CBrushRenderingGraph@@AEAA@XZ @ 0x1800E16A0 (--0CBrushRenderingGraph@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1801DF444 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectIns.c)
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
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  CBrushRenderingGraph *v15; // [rsp+30h] [rbp-28h] BYREF
  CBrushRenderingGraph *v16; // [rsp+38h] [rbp-20h] BYREF
  char v17; // [rsp+40h] [rbp-18h]

  v8 = (CBrushRenderingGraph *)HeapAlloc(WPF::g_processHeap, 0, 0xC8uLL);
  if ( v8 )
    v10 = CBrushRenderingGraph::CBrushRenderingGraph(v8);
  else
    v10 = 0LL;
  v15 = v10;
  if ( v10 )
  {
    (**(void (__fastcall ***)(CBrushRenderingGraph *))v10)(v10);
    v16 = v10;
    v17 = 0;
    v11 = CProjectedShadowApproxBlurGraphBuilder::Build((void **)&v16, a1, a2, a4);
    v13 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1Eu);
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
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x1Au);
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v15);
  return v13;
}
