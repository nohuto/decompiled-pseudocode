/*
 * XREFs of ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@PEAX@2@_K@Z @ 0x180026944
 * Callers:
 *     _std::_List_alloc_std::_List_base_types_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__std::allocator_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo_______::_Buynode0_::_1_::catch$0 @ 0x18012EE2E (_std--_List_alloc_std--_List_base_types_std--pair_unsigned_long_const__DragNDropProcessor--Messa.c)
 *     _std::_List_buy_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__std::allocator_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo_____::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple_unsigned_long_const_&___ptr64__std::tuple_____::_1_::catch$1 @ 0x18012EFA8 (_std--_List_buy_std--pair_unsigned_long_const__DragNDropProcessor--MessageInfo__std--allocator_s.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2, (const struct std::nothrow_t *)0x58);
}
