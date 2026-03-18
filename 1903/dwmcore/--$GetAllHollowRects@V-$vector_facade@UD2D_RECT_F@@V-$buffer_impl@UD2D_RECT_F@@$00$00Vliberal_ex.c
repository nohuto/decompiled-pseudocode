/*
 * XREFs of ??$GetAllHollowRects@V?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@QEBAXPEAV?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180010478
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x180010230 (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18000E5BC (-clear_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_.c)
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18001050C (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansio.c)
 */

_OWORD *__fastcall CoordMap::GetAllHollowRects<detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // r8
  __int128 *v7; // rdi
  __int128 *v8; // rbx
  _OWORD *result; // rax
  __int128 v10; // xmm0

  v4 = a2[1];
  v5 = *a2;
  v6 = (v4 - *a2) >> 4;
  if ( v6 )
  {
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64)a2,
      v4,
      v6);
    v4 = a2[1];
    v5 = *a2;
  }
  v7 = *(__int128 **)(a1 + 376);
  v8 = *(__int128 **)(a1 + 368);
  result = (_OWORD *)detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>::reserve_region(
                       a2,
                       (v4 - v5) >> 4,
                       v7 - v8);
  while ( v8 != v7 )
  {
    v10 = *v8++;
    *result++ = v10;
  }
  return result;
}
