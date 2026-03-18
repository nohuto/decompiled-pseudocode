/*
 * XREFs of ?push_back@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBUD2D_POINT_2F@@@Z @ 0x1801822E0
 * Callers:
 *     ?AddLine@CDrawListPolygonBuilder@@EEAAXUD2D_POINT_2F@@@Z @ 0x180181B50 (-AddLine@CDrawListPolygonBuilder@@EEAAXUD2D_POINT_2F@@@Z.c)
 *     ?BeginFigure@CDrawListPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x180181BE0 (-BeginFigure@CDrawListPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1801869E0 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_POINT_2F@@_K0@Z @ 0x180182314 (-reserve_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_ex.c)
 */

_QWORD *__fastcall detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::push_back(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                       a1,
                       (__int64)(a1[1] - *a1) >> 3);
  *result = *a2;
  return result;
}
