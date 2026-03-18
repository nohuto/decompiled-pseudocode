/*
 * XREFs of ?BeginFigure@CDrawListPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x180181BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800E64F8 (-clear@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_p.c)
 *     ?push_back@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBUD2D_POINT_2F@@@Z @ 0x1801822E0 (-push_back@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansi.c)
 */

void __fastcall CDrawListPolygonBuilder::BeginFigure(
        CDrawListPolygonBuilder *this,
        struct D2D_POINT_2F a2,
        enum D2D1_FIGURE_BEGIN a3)
{
  char *v3; // rbx
  struct D2D_POINT_2F v4; // [rsp+20h] [rbp-18h] BYREF

  v3 = (char *)this + 8;
  v4 = a2;
  detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 1);
  detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::push_back(
    v3,
    &v4);
}
