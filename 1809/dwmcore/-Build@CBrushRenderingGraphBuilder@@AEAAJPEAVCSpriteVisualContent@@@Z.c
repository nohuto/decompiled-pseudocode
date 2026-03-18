/*
 * XREFs of ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x1800E02EC
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x1800E0244 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x1800E03BC (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x1800E0494 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x1800E0554 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x1800E06B4 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0810 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x1800E1608 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::Build(
        CBrushRenderingGraphBuilder *this,
        struct CSpriteVisualContent *a2)
{
  CRenderingTechniqueFragment *v3; // rcx
  int v4; // ebx
  int ShaderBodies; // eax
  unsigned int v6; // edx
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-30h]
  struct CRenderingTechniqueFragment *v10; // [rsp+38h] [rbp-18h] BYREF
  char v11; // [rsp+40h] [rbp-10h]
  char v12; // [rsp+70h] [rbp+20h] BYREF
  CRenderingTechniqueFragment *v13; // [rsp+78h] [rbp+28h] BYREF

  v13 = 0LL;
  v10 = 0LL;
  v11 = 1;
  v4 = CBrushRenderingGraphBuilder::AddBrush(this, a2, 0, &v10);
  if ( v11 )
  {
    v3 = v13;
    v13 = v10;
    if ( v3 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v3, (unsigned int)v10);
  }
  if ( v4 < 0 )
  {
    v9 = 49;
    v8 = v4;
  }
  else
  {
    ShaderBodies = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, &v13, &v12);
    v4 = ShaderBodies;
    if ( ShaderBodies < 0 )
    {
      v9 = 52;
    }
    else
    {
      ShaderBodies = CBrushRenderingGraphBuilder::EnsureShaderCache(this);
      v4 = ShaderBodies;
      if ( ShaderBodies < 0 )
      {
        v9 = 54;
      }
      else
      {
        ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies(this);
        v4 = ShaderBodies;
        if ( ShaderBodies >= 0 )
        {
          CBrushRenderingGraphBuilder::CheckBackdropInputs(this);
          goto LABEL_9;
        }
        v9 = 55;
      }
    }
    v8 = ShaderBodies;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v3, 0LL, 0, v8, v9);
LABEL_9:
  if ( v13 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v13, v6);
  return (unsigned int)v4;
}
