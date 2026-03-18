/*
 * XREFs of ?EndFigure@CDrawListPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x1801AF530
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801AFA24 (-clear@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_p.c)
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AFC94 (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 */

void __fastcall CDrawListPolygonBuilder::EndFigure(CDrawListPolygonBuilder *this, enum D2D1_FIGURE_END a2)
{
  _QWORD *v2; // rbx

  v2 = (_QWORD *)((char *)this + 8);
  detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
    v2,
    (*((_QWORD *)this + 2) - 8LL - *v2) >> 3);
  if ( (unsigned __int64)((__int64)(v2[1] - *v2) >> 3) < 3 )
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear(v2);
}
