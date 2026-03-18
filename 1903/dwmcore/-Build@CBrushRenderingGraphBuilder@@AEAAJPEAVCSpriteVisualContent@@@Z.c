/*
 * XREFs of ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x180034854
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18003468C (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 * Callees:
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z @ 0x180034728 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x180034A00 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x180034CA0 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x180034F10 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x18003504C (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180037EBC (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::Build(
        CBrushRenderingGraphBuilder *this,
        struct CSpriteVisualContent *a2)
{
  CRenderingTechniqueFragment *v4; // rcx
  int v5; // ebx
  int ShaderBodies; // eax
  char v7; // al
  unsigned int v8; // edx
  int v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-30h]
  struct CRenderingTechniqueFragment *v12; // [rsp+38h] [rbp-18h] BYREF
  char v13; // [rsp+40h] [rbp-10h]
  char v14; // [rsp+80h] [rbp+30h] BYREF
  CRenderingTechniqueFragment *v15; // [rsp+88h] [rbp+38h] BYREF

  v15 = 0LL;
  v12 = 0LL;
  v13 = 1;
  v5 = CBrushRenderingGraphBuilder::AddBrush(this, a2, 0, &v12);
  if ( v13 )
  {
    v4 = v15;
    v15 = v12;
    if ( v4 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v4, (unsigned int)v12);
  }
  if ( v5 < 0 )
  {
    v10 = v5;
    v11 = 48;
  }
  else
  {
    ShaderBodies = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, &v15, &v14);
    v5 = ShaderBodies;
    if ( ShaderBodies < 0 )
    {
      v11 = 51;
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(struct CSpriteVisualContent *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 102LL);
      ShaderBodies = CBrushRenderingGraphBuilder::EnsureShaderCache(this, v7);
      v5 = ShaderBodies;
      if ( ShaderBodies < 0 )
      {
        v11 = 53;
      }
      else
      {
        ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies(this);
        v5 = ShaderBodies;
        if ( ShaderBodies >= 0 )
        {
          CBrushRenderingGraphBuilder::CheckBackdropInputs(this);
          goto LABEL_9;
        }
        v11 = 54;
      }
    }
    v10 = ShaderBodies;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v4, 0LL, 0, v10, v11, 0LL);
LABEL_9:
  if ( v15 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v15, v8);
  return (unsigned int)v5;
}
