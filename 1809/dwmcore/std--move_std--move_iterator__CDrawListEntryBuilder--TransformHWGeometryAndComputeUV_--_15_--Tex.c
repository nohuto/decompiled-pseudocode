/*
 * XREFs of std::move_std::move_iterator__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_____ptr64__stdext::checked_array_iterator__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_____ptr64___ @ 0x18005A534
 * Callers:
 *     detail::vector_facade__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_detail::buffer_impl__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_2_1_detail::liberal_expansion_policy___::clear_region @ 0x1800EEC48 (detail--vector_facade__CDrawListEntryBuilder--TransformHWGeometryAndComputeUV_--_15_ea_1800EEC48.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move_std::move_iterator__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_____ptr64__stdext::checked_array_iterator__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_____ptr64___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4)
{
  __int128 v4; // xmm2
  __int64 v5; // r9
  __int64 result; // rax

  v4 = *a4;
  v5 = *(_QWORD *)a4 + 36LL * *((_QWORD *)a4 + 2);
  while ( a2 != a3 )
  {
    *(_OWORD *)v5 = *(_OWORD *)a2;
    *(_OWORD *)(v5 + 16) = *(_OWORD *)(a2 + 16);
    *(_DWORD *)(v5 + 32) = *(_DWORD *)(a2 + 32);
    v5 += 36LL;
    a2 += 36LL;
  }
  *(_OWORD *)a1 = v4;
  result = a1;
  *(_QWORD *)(a1 + 16) = (v5 - (__int64)v4) / 36;
  return result;
}
