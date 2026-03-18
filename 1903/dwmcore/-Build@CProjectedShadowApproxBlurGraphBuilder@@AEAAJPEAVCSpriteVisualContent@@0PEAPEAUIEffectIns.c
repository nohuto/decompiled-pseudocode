/*
 * XREFs of ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18020CF60
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCSpriteVisualContent@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18020D0F4 (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCSpriteVisualContent@@0PEAPEAVCBrushRender.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z @ 0x180034728 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x180034A00 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x180034CA0 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x180034F10 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x18003504C (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180038004 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020CE18 (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAP.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurGraphBuilder::Build(
        CProjectedShadowApproxBlurGraphBuilder *this,
        struct CSpriteVisualContent *a2,
        struct CSpriteVisualContent *a3,
        struct Windows::UI::Composition::IEffectInstance **a4)
{
  CRenderingTechniqueFragment *v6; // rcx
  int v7; // ebx
  unsigned int v8; // edx
  int ShaderBodies; // eax
  struct Windows::UI::Composition::IEffectInstance *v10; // rsi
  struct Windows::UI::Composition::IEffectInstance *v11; // rbx
  unsigned int v12; // edx
  unsigned int v13; // r9d
  unsigned int v15; // [rsp+20h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  CRenderingTechniqueFragment *v17; // [rsp+38h] [rbp-28h] BYREF
  struct Windows::UI::Composition::IEffectInstance *v18; // [rsp+40h] [rbp-20h] BYREF
  CRenderingTechniqueFragment **v19; // [rsp+48h] [rbp-18h]
  struct CRenderingTechniqueFragment *v20; // [rsp+50h] [rbp-10h] BYREF
  char v21; // [rsp+58h] [rbp-8h]

  v18 = 0LL;
  v17 = 0LL;
  v20 = 0LL;
  v19 = &v17;
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
    v13 = v7;
    v15 = 54;
  }
  else
  {
    ShaderBodies = CBrushRenderingGraphBuilder::CheckFragmentSize((struct CBrushRenderingGraph **)this, v17);
    v7 = ShaderBodies;
    if ( ShaderBodies < 0 )
    {
      v15 = 57;
    }
    else
    {
      v10 = 0LL;
      v11 = *(struct Windows::UI::Composition::IEffectInstance **)v17;
      if ( *(_QWORD *)v17 )
      {
        (**(void (__fastcall ***)(_QWORD))v11)(*(_QWORD *)v17);
        v16 = 0LL;
        v10 = v11;
        v18 = v11;
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v16);
      }
      ShaderBodies = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v17, &v16);
      v7 = ShaderBodies;
      if ( ShaderBodies < 0 )
      {
        v15 = 62;
      }
      else
      {
        ShaderBodies = CBrushRenderingGraphBuilder::EnsureShaderCache(this, 0);
        v7 = ShaderBodies;
        if ( ShaderBodies < 0 )
        {
          v15 = 64;
        }
        else
        {
          ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies(this);
          v7 = ShaderBodies;
          if ( ShaderBodies >= 0 )
          {
            CBrushRenderingGraphBuilder::CheckBackdropInputs(this);
            v18 = 0LL;
            *a4 = v10;
            goto LABEL_19;
          }
          v15 = 65;
        }
      }
    }
    v13 = ShaderBodies;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, v13, v15, 0LL);
LABEL_19:
  if ( v17 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v17, v12);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v18);
  return (unsigned int)v7;
}
