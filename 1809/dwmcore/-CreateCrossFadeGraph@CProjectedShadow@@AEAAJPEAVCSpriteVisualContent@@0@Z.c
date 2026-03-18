/*
 * XREFs of ?CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCSpriteVisualContent@@0@Z @ 0x1801C876C
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801C8B78 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCSpriteVisualContent@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1801DF56C (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCSpriteVisualContent@@0PEAPEAVCBrushRender.c)
 */

__int64 __fastcall CProjectedShadow::CreateCrossFadeGraph(
        CProjectedShadow *this,
        struct CSpriteVisualContent *a2,
        struct CSpriteVisualContent *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct CBrushRenderingGraph *v7; // rax
  struct CBrushRenderingGraph *v8; // rbx
  struct CBrushRenderingGraph *v9; // rax
  struct Windows::UI::Composition::IEffectInstance *v10; // rbx
  struct Windows::UI::Composition::IEffectInstance *v11; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CBrushRenderingGraph *v13; // [rsp+58h] [rbp+20h] BYREF

  v4 = CProjectedShadowApproxBlurGraphBuilder::Build(a2, a3, &v13, &v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = (struct CBrushRenderingGraph *)*((_QWORD *)this + 8);
    v8 = v13;
    if ( v7 != v13 )
    {
      if ( v13 )
      {
        (**(void (__fastcall ***)(struct CBrushRenderingGraph *))v13)(v13);
        v7 = (struct CBrushRenderingGraph *)*((_QWORD *)this + 8);
      }
      v13 = v7;
      *((_QWORD *)this + 8) = v8;
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v13);
    }
    v9 = (struct CBrushRenderingGraph *)*((_QWORD *)this + 49);
    v10 = v11;
    if ( v9 != v11 )
    {
      if ( v11 )
      {
        (**(void (__fastcall ***)(struct Windows::UI::Composition::IEffectInstance *))v11)(v11);
        v9 = (struct CBrushRenderingGraph *)*((_QWORD *)this + 49);
      }
      v13 = v9;
      *((_QWORD *)this + 49) = v10;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v13);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x558,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\projectedshadow.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
