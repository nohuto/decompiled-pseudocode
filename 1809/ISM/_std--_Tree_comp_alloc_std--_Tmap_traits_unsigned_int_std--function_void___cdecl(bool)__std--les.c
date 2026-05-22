/*
 * XREFs of _std::_Tree_comp_alloc_std::_Tmap_traits_unsigned_int_std::function_void___cdecl(bool)__std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__std::function_void___cdecl(bool)______0___::_Buyheadnode_::_1_::catch$0 @ 0x18012F778
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@2@_K@Z @ 0x18003BA94 (-deallocate@-$allocator@U-$_List_node@U-$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Tree_comp_alloc_std::_Tmap_traits_unsigned_int_std::function_void___cdecl_bool___std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__std::function_void___cdecl_bool_______0___::_Buyheadnode_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 64));
  throw;
}
