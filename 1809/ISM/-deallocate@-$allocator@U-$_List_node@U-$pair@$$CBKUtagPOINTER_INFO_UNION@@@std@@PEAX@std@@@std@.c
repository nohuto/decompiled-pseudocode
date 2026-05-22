/*
 * XREFs of ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@PEAX@2@_K@Z @ 0x180055D78
 * Callers:
 *     _std::_List_alloc_std::_List_base_types_std::pair_unsigned_long_const__tagPOINTER_INFO_UNION__std::allocator_std::pair_unsigned_long_const__tagPOINTER_INFO_UNION_______::_Buynode0_::_1_::catch$0 @ 0x18013088F (_std--_List_alloc_std--_List_base_types_std--pair_unsigned_long_const__tagPOINTER_INFO_UNION__st.c)
 *     _std::_List_buy_std::pair_unsigned_long_const__tagPOINTER_INFO_UNION__std::allocator_std::pair_unsigned_long_const__tagPOINTER_INFO_UNION_____::_Buynode_unsigned_long_const_&___ptr64_tagPOINTER_INFO_UNION_&___ptr64__::_1_::catch$0 @ 0x180130A1B (_std--_List_buy_std--pair_unsigned_long_const__tagPOINTER_INFO_UNION__std--allocator_std--pair_u.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINTER_INFO_UNION>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2, (const struct std::nothrow_t *)0xA8);
}
