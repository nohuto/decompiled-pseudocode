/*
 * XREFs of ?deallocate@?$allocator@U?$_List_node@IPEAX@std@@@std@@QEAAXQEAU?$_List_node@IPEAX@2@_K@Z @ 0x180034548
 * Callers:
 *     _std::_List_buy_unsigned_int_std::allocator_unsigned_int___::_Buynode_unsigned_int_const_&__::_1_::catch$2 @ 0x18003048F (_std--_List_buy_unsigned_int_std--allocator_unsigned_int___--_Buynode_unsigned_int_const_-__--_1.c)
 *     _std::_List_alloc_std::_List_base_types_unsigned_int_std::allocator_unsigned_int_____::_Buynode0_::_1_::catch$6 @ 0x18003384E (_std--_List_alloc_std--_List_base_types_unsigned_int_std--allocator_unsigned_int_____--_Buynode0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_List_node<unsigned int,void *>>::deallocate(__int64 a1, void *a2)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x18);
}
