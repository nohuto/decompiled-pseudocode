/*
 * XREFs of ?size@?$vector_facade@UTextureStageInfo@@V?$buffer_impl@UTextureStageInfo@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEBA_KXZ @ 0x180009CC0
 * Callers:
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x1800B9100 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<TextureStageInfo,detail::buffer_impl<TextureStageInfo,2,1,detail::liberal_expansion_policy>>::size(
        _QWORD *a1)
{
  return (a1[1] - *a1) / 56LL;
}
