/*
 * XREFs of ?push_back@?$vector_facade@IV?$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAI@Z @ 0x1801870CC
 * Callers:
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1801869E0 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@IV?$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAI_K0@Z @ 0x180187128 (-reserve_region@-$vector_facade@IV-$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@deta.c)
 */

_DWORD *__fastcall detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::push_back(
        _QWORD *a1,
        _DWORD *a2)
{
  _DWORD *result; // rax

  result = (_DWORD *)detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::reserve_region(
                       a1,
                       (__int64)(a1[1] - *a1) >> 2);
  *result = *a2;
  return result;
}
