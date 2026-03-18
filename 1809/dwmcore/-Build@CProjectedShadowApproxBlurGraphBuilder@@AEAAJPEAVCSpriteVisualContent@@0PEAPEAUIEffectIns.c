/*
 * XREFs of ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1801DF444
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCSpriteVisualContent@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1801DF56C (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCSpriteVisualContent@@0PEAPEAVCBrushRender.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x1800E03BC (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x1800E0494 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x1800E0554 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x1800E06B4 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0A98 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x1800E1608 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1801DF2AC (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAP.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurGraphBuilder::Build(
        void **this,
        struct CSpriteVisualContent *a2,
        struct CSpriteVisualContent *a3,
        struct Windows::UI::Composition::IEffectInstance **a4)
{
  CRenderingTechniqueFragment *v6; // rcx
  int v7; // ebx
  unsigned int v8; // edx
  int ShaderBodies; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edx
  int v14; // r9d
  unsigned int v16; // [rsp+20h] [rbp-40h]
  int v17; // [rsp+30h] [rbp-30h] BYREF
  struct CRenderingTechniqueFragment *v18; // [rsp+38h] [rbp-28h] BYREF
  struct CRenderingTechniqueFragment **v19; // [rsp+40h] [rbp-20h]
  struct CRenderingTechniqueFragment *v20; // [rsp+48h] [rbp-18h] BYREF
  char v21; // [rsp+50h] [rbp-10h]

  v18 = 0LL;
  v20 = 0LL;
  v19 = &v18;
  v21 = 1;
  v7 = CProjectedShadowApproxBlurGraphBuilder::AddApproxBlurBrush(this, a2, a3, &v20);
  if ( v21 )
  {
    v8 = (unsigned int)v20;
    v6 = *v19;
    *v19 = v20;
    if ( v6 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v6, v8);
  }
  if ( v7 < 0 )
  {
    v16 = 56;
    v14 = v7;
  }
  else
  {
    ShaderBodies = CBrushRenderingGraphBuilder::CheckFragmentSize((struct CBrushRenderingGraph **)this, v18);
    v7 = ShaderBodies;
    if ( ShaderBodies < 0 )
    {
      v16 = 59;
    }
    else
    {
      *a4 = *(struct Windows::UI::Composition::IEffectInstance **)v18;
      ShaderBodies = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v18, &v17);
      v7 = ShaderBodies;
      if ( ShaderBodies < 0 )
      {
        v16 = 64;
      }
      else
      {
        ShaderBodies = CBrushRenderingGraphBuilder::EnsureShaderCache((CBrushRenderingGraphBuilder *)this);
        v7 = ShaderBodies;
        if ( ShaderBodies < 0 )
        {
          v16 = 66;
        }
        else
        {
          ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies((CBrushRenderingGraphBuilder *)this);
          v7 = ShaderBodies;
          if ( ShaderBodies >= 0 )
          {
            CBrushRenderingGraphBuilder::CheckBackdropInputs((CBrushRenderingGraphBuilder *)this, v10, v11, v12);
            goto LABEL_17;
          }
          v16 = 67;
        }
      }
    }
    v14 = ShaderBodies;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, v14, v16);
LABEL_17:
  if ( v18 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v18, v13);
  return (unsigned int)v7;
}
