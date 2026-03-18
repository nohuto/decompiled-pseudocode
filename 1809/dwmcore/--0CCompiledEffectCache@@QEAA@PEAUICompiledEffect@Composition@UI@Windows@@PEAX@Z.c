/*
 * XREFs of ??0CCompiledEffectCache@@QEAA@PEAUICompiledEffect@Composition@UI@Windows@@PEAX@Z @ 0x180076CCC
 * Callers:
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x180076BE8 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x1800E0554 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1801DF2AC (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

CCompiledEffectCache *__fastcall CCompiledEffectCache::CCompiledEffectCache(
        CCompiledEffectCache *this,
        struct Windows::UI::Composition::ICompiledEffect *a2,
        void *a3)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct Windows::UI::Composition::ICompiledEffect *))a2)(a2);
  *((_QWORD *)this + 4) = a3;
  return this;
}
