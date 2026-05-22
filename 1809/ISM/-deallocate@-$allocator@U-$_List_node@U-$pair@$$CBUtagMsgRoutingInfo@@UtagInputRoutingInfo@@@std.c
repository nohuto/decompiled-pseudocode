/*
 * XREFs of ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@2@_K@Z @ 0x18003BA94
 * Callers:
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_unsigned_int_std::function_void___cdecl(bool)__std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__std::function_void___cdecl(bool)______0___::_Buyheadnode_::_1_::catch$0 @ 0x18012F778 (_std--_Tree_comp_alloc_std--_Tmap_traits_unsigned_int_std--function_void___cdecl(bool)__std--les.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_unsigned_int_std::function_void___cdecl(bool)__std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__std::function_void___cdecl(bool)______0___::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple_unsigned_int_const_&___ptr64__std::tuple_____::_1_::catch$1 @ 0x18012F8B1 (_std--_Tree_comp_alloc_std--_Tmap_traits_unsigned_int_std--function_void___cdecl(bo_ea_18012F8B1.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_unsigned_int_std::function_void___cdecl(bool)__std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__std::function_void___cdecl(bool)______0___::_Buynode0_::_1_::catch$0 @ 0x18012F900 (_std--_Tree_comp_alloc_std--_Tmap_traits_unsigned_int_std--function_void___cdecl(bo_ea_18012F900.c)
 *     _std::_List_buy_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__std::allocator_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo_____::_Buynode_tagMsgRoutingInfo_const_&___ptr64_tagInputRoutingInfo_const_&___ptr64__::_1_::catch$0 @ 0x18013443B (_std--_List_buy_std--pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__std--allocator_std--pair.c)
 *     _std::_List_alloc_std::_List_base_types_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__std::allocator_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo_______::_Buynode0_::_1_::catch$0 @ 0x180134461 (_std--_List_alloc_std--_List_base_types_std--pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_List_node<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2, (const struct std::nothrow_t *)0x68);
}
