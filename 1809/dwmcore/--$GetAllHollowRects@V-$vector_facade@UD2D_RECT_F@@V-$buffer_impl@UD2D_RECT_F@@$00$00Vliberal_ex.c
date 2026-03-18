/*
 * XREFs of ??$GetAllHollowRects@V?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@QEBAXPEAV?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18000D3BC
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x18000D1DC (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18000D434 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansio.c)
 *     ?clear@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18000D5A4 (-clear@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@.c)
 */

_OWORD *__fastcall CoordMap::GetAllHollowRects<detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>>(
        __int64 a1,
        _QWORD *a2)
{
  __int128 *v4; // rdi
  __int128 *v5; // rbx
  _OWORD *result; // rax
  __int128 v7; // xmm0

  detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>::clear(a2);
  v4 = *(__int128 **)(a1 + 376);
  v5 = *(__int128 **)(a1 + 368);
  result = (_OWORD *)detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>::reserve_region(
                       a2,
                       (__int64)(a2[1] - *a2) >> 4,
                       v4 - v5);
  while ( v5 != v4 )
  {
    v7 = *v5++;
    *result++ = v7;
  }
  return result;
}
