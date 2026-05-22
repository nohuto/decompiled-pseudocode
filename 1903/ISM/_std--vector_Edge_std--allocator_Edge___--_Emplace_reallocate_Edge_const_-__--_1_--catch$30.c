/*
 * XREFs of _std::vector_Edge_std::allocator_Edge___::_Emplace_reallocate_Edge_const_&__::_1_::catch$30 @ 0x1801014AE
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXPEAVEdge@@0@Z @ 0x1801007E4 (-_Destroy@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXPEAVEdge@@0@Z.c)
 */

void __fastcall __noreturn std::vector_Edge_std::allocator_Edge___::_Emplace_reallocate_Edge_const____::_1_::catch_30(
        __int64 a1,
        __int64 a2)
{
  std::vector<Edge>::_Destroy(a1, *(_QWORD *)(a2 + 144), *(_QWORD *)(a2 + 56));
  std::_Deallocate<16,0>(*(void **)(a2 + 64), (const struct std::nothrow_t *)(104LL * *(_QWORD *)(a2 + 168)));
  throw;
}
