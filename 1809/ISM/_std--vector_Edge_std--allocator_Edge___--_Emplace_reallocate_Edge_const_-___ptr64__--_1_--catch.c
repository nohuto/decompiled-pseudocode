/*
 * XREFs of _std::vector_Edge_std::allocator_Edge___::_Emplace_reallocate_Edge_const_&___ptr64__::_1_::catch$2 @ 0x180134167
 * Callers:
 *     <none>
 * Callees:
 *     ?_Destroy@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXPEAVEdge@@0@Z @ 0x1800CA470 (-_Destroy@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXPEAVEdge@@0@Z.c)
 *     ?deallocate@?$allocator@VEdge@@@std@@QEAAXQEAVEdge@@_K@Z @ 0x1800CA4CC (-deallocate@-$allocator@VEdge@@@std@@QEAAXQEAVEdge@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Edge_std::allocator_Edge___::_Emplace_reallocate_Edge_const_____ptr64__::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<Edge>::_Destroy(a1, *(__int64 **)(a2 + 128), *(__int64 **)(a2 + 48));
  std::allocator<Edge>::deallocate(v3, *(_QWORD **)(a2 + 152), *(_QWORD *)(a2 + 32));
  throw;
}
