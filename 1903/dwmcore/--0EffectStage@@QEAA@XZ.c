/*
 * XREFs of ??0EffectStage@@QEAA@XZ @ 0x180077424
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x180076874 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ??0EffectInput@@QEAA@XZ @ 0x180077140 (--0EffectInput@@QEAA@XZ.c)
 */

EffectStage *__fastcall EffectStage::EffectStage(EffectStage *this)
{
  EffectInput *v1; // rdi
  __int64 v3; // rsi

  *(_DWORD *)this = 0;
  v1 = (EffectStage *)((char *)this + 8);
  *((_DWORD *)this + 1) = 0;
  v3 = 4LL;
  do
  {
    EffectInput::EffectInput(v1);
    v1 = (EffectInput *)((char *)v1 + 104);
    --v3;
  }
  while ( v3 );
  return this;
}
