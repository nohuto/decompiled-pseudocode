/*
 * XREFs of ?CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCSpriteVisualContent@@0@Z @ 0x1801F02C4
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F0764 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C57A0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCSpriteVisualContent@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18020D0F4 (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCSpriteVisualContent@@0PEAPEAVCBrushRender.c)
 */

__int64 __fastcall CProjectedShadow::CreateCrossFadeGraph(
        CProjectedShadow *this,
        struct CSpriteVisualContent *a2,
        struct CSpriteVisualContent *a3)
{
  struct Windows::UI::Composition::IEffectInstance **v3; // rbx
  __int64 *v5; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct Windows::UI::Composition::IEffectInstance **)((char *)this + 304);
  v5 = (__int64 *)((char *)this + 296);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 38);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v5);
  v7 = CProjectedShadowApproxBlurGraphBuilder::Build(a2, a3, (struct CBrushRenderingGraph **)v5, v3);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x330,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\projectedshadow.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
