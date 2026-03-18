/*
 * XREFs of ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x18005D438
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x1800CB2C0 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x18005D4DC (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x1800AE83C (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetEffectStageInput(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6,
        _QWORD *a7,
        struct EffectInput *a8)
{
  __int64 v10; // rbx
  unsigned int v12; // edi
  __int64 v14; // r10
  int InputBrushParameters; // eax
  unsigned int v18; // ecx

  v10 = 60LL * a5;
  v12 = 0;
  v14 = *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * a4);
  if ( !*(_BYTE *)(v14 + v10 + 104) )
    a7 = a6;
  EffectInput::operator=(a8, *a7 + 104LL * *(unsigned int *)(v14 + v10 + 100));
  if ( !*((_BYTE *)a8 + 44) )
  {
    InputBrushParameters = CBrushRenderingGraph::GetInputBrushParameters(this, a2, a3, a4, a5, a8);
    v12 = InputBrushParameters;
    if ( InputBrushParameters < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, InputBrushParameters, 0x4FFu);
  }
  return v12;
}
