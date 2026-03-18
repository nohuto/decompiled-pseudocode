/*
 * XREFs of std::move_std::move_iterator__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt____stdext::checked_array_iterator__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_____ @ 0x1801AEF44
 * Callers:
 *     detail::vector_facade__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_detail::buffer_impl__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_2_1_detail::liberal_expansion_policy___::clear_region @ 0x1801AFE08 (detail--vector_facade__CDrawListEntryBuilder--TransformHWGeometryAndComputeUV_--_15_--TexStageIn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move_std::move_iterator__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt____stdext::checked_array_iterator__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_____(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // r10
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r11
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v4 = a2;
  v5 = (__int64)((unsigned __int128)((a3 - a2) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 1;
  v6 = (v5 >> 63) + v5;
  if ( v6 < 0 && a4[2] < (unsigned __int64)-v6 || v6 > 0 && a4[1] - a4[2] < (unsigned __int64)v6 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v6, a3, a4);
    __debugbreak();
  }
  v7 = *a4;
  v8 = *a4 + 36 * a4[2];
  while ( v4 != a3 )
  {
    *(_OWORD *)v8 = *(_OWORD *)v4;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(v4 + 16);
    *(_DWORD *)(v8 + 32) = *(_DWORD *)(v4 + 32);
    v8 += 36LL;
    v4 += 36LL;
  }
  v9 = (__int64)((unsigned __int128)((v8 - v7) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 1;
  result = a1;
  a4[2] = (v9 >> 63) + v9;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
