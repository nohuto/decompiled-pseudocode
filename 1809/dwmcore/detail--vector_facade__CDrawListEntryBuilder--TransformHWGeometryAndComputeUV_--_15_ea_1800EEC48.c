/*
 * XREFs of detail::vector_facade__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_detail::buffer_impl__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_2_1_detail::liberal_expansion_policy___::clear_region @ 0x1800EEC48
 * Callers:
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x1800B9100 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 * Callees:
 *     std::move_std::move_iterator__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_____ptr64__stdext::checked_array_iterator__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_____ptr64___ @ 0x18005A534 (std--move_std--move_iterator__CDrawListEntryBuilder--TransformHWGeometryAndComputeUV_--_15_--Tex.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall detail::vector_facade__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_detail::buffer_impl__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_2_1_detail::liberal_expansion_policy___::clear_region(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  const char *v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r11
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h]
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h]

  v4 = *(const char **)a1;
  v5 = (*(_QWORD *)(a1 + 8) - (_QWORD)v4) / 36LL;
  if ( a3 > v5 )
    std::_Xoverflow_error(v4);
  v9 = 0LL;
  v6 = 36 * a3;
  result = 9 * v5;
  *(_QWORD *)&v8 = v4;
  *((_QWORD *)&v8 + 1) = v5;
  if ( a3 != v5 )
  {
    v9 = 0LL;
    v11 = 0LL;
    v10 = v8;
    result = std::move_std::move_iterator__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_____ptr64__stdext::checked_array_iterator__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_____ptr64___(
               (__int64)&v8,
               (__int64)&v4[v6],
               (__int64)&v4[36 * v5],
               &v10);
  }
  *(_QWORD *)(a1 + 8) -= v6;
  return result;
}
