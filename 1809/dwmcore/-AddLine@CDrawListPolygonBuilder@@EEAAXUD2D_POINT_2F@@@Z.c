/*
 * XREFs of ?AddLine@CDrawListPolygonBuilder@@EEAAXUD2D_POINT_2F@@@Z @ 0x180181B50
 * Callers:
 *     <none>
 * Callees:
 *     ?push_back@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBUD2D_POINT_2F@@@Z @ 0x1801822E0 (-push_back@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansi.c)
 */

void __fastcall CDrawListPolygonBuilder::AddLine(CDrawListPolygonBuilder *this, struct D2D_POINT_2F a2)
{
  struct D2D_POINT_2F v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::push_back(
    (char *)this + 8,
    &v2);
}
