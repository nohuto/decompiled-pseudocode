/*
 * XREFs of ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020B728
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18020B870 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectIns.c)
 * Callees:
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEffectCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x18004671C (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEf.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x180047640 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??0CProjectedShadowApproxBlurEffect@@QEAA@XZ @ 0x180258B18 (--0CProjectedShadowApproxBlurEffect@@QEAA@XZ.c)
 *     ?GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCCompiledEffectCache@@XZ @ 0x180258C78 (-GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCCompiledEffectCache@@XZ.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurGraphBuilder::AddApproxBlurBrush(
        CProjectedShadowApproxBlurGraphBuilder *this,
        struct CSpriteVisualContent *a2,
        struct CSpriteVisualContent *a3,
        struct CRenderingTechniqueFragment **a4)
{
  unsigned int v8; // esi
  CProjectedShadowApproxBlurEffect *v9; // rax
  CProjectedShadowApproxBlurEffect *v10; // rbx
  CProjectedShadowApproxBlurEffect *v11; // rcx
  LPVOID v12; // rdi
  struct CCompiledEffectCache *ShaderCache; // rax
  struct CRenderingTechniqueFragment *v14; // rdi
  __int64 *v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rax
  _QWORD v19[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-38h] BYREF
  int v21; // [rsp+50h] [rbp-28h]

  v8 = 0;
  v9 = (CProjectedShadowApproxBlurEffect *)operator new(0xA8uLL);
  if ( v9 )
    v10 = CProjectedShadowApproxBlurEffect::CProjectedShadowApproxBlurEffect(v9);
  else
    v10 = 0LL;
  if ( v10 )
    (**(void (__fastcall ***)(CProjectedShadowApproxBlurEffect *))v10)(v10);
  v12 = DefaultHeap::Alloc(0x80uLL);
  if ( v12 )
  {
    ShaderCache = CProjectedShadowApproxBlurEffect::GetShaderCache(v11);
    v14 = (struct CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                                  (__int64)v12,
                                                  ((unsigned __int64)v10 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v10 >> 64),
                                                  (__int64)ShaderCache,
                                                  0,
                                                  0,
                                                  0);
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
  {
    v19[0] = a2;
    v15 = v19;
    v19[1] = a3;
    v16 = 2LL;
    do
    {
      v17 = *v15;
      v20[1] = 0LL;
      v21 = 0;
      v20[0] = v17;
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        this,
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
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, 0x8007000E, 0x5Du, 0LL);
  }
  if ( v10 )
    (*(void (__fastcall **)(CProjectedShadowApproxBlurEffect *))(*(_QWORD *)v10 + 8LL))(v10);
  return v8;
}
