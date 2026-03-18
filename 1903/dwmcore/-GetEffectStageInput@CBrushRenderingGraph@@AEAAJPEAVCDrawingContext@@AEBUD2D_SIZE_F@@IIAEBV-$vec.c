/*
 * XREFs of ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x1800771B8
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x180076874 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180073D6C (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x18007727C (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetEffectStageInput(
        CDrawListBrush **this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        struct EffectInput *a8)
{
  unsigned int v11; // edi
  int InputBrushParameters; // eax
  unsigned int v15; // ecx

  v11 = 0;
  EffectInput::operator=(a8);
  if ( !*((_BYTE *)a8 + 44) )
  {
    InputBrushParameters = CBrushRenderingGraph::GetInputBrushParameters(this, a2, a3, a4, a5, a8);
    v11 = InputBrushParameters;
    if ( InputBrushParameters < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, InputBrushParameters, 0x500u, 0LL);
  }
  return v11;
}
