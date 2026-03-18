/*
 * XREFs of ??4?$ComPtr@VCProjectedShadowApproxBlurEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCProjectedShadowApproxBlurEffect@@@Z @ 0x1801DF250
 * Callers:
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1801DF2AC (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CProjectedShadowApproxBlurEffect>::operator=(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD))
{
  __int64 v2; // rcx

  v2 = CProjectedShadowApproxBlurGraphBuilder::s_cpInstanceandCompiledEffect;
  if ( (void (__fastcall ***)(_QWORD))CProjectedShadowApproxBlurGraphBuilder::s_cpInstanceandCompiledEffect != a2 )
  {
    if ( a2 )
    {
      (**a2)(a2);
      v2 = CProjectedShadowApproxBlurGraphBuilder::s_cpInstanceandCompiledEffect;
    }
    CProjectedShadowApproxBlurGraphBuilder::s_cpInstanceandCompiledEffect = (__int64)a2;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return &CProjectedShadowApproxBlurGraphBuilder::s_cpInstanceandCompiledEffect;
}
