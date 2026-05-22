/*
 * XREFs of _std::_List_buy_std::pair_unsigned_long_const__InputContext__std::allocator_std::pair_unsigned_long_const__InputContext_____::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple_unsigned_long_const_&___ptr64__std::tuple_____::_1_::catch$1 @ 0x1801325C8
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBKUInputContext@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBKUInputContext@@@std@@PEAX@2@_K@Z @ 0x18008D85C (-deallocate@-$allocator@U-$_List_node@U-$pair@$$CBKUInputContext@@@std@@PEAX@std@@@std@@QEAAXQEA.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_buy_std::pair_unsigned_long_const__InputContext__std::allocator_std::pair_unsigned_long_const__InputContext_____::_Buynode_std::piecewise_construct_t_const_____ptr64_std::tuple_unsigned_long_const_____ptr64__std::tuple_____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<std::pair<unsigned long const,InputContext>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 88));
  throw;
}
