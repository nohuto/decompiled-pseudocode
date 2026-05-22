/*
 * XREFs of _std::_List_buy_unsigned_int_std::allocator_unsigned_int___::_Buynode_unsigned_int_const_&__::_1_::catch$2 @ 0x1800307AF
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@U?$_List_node@IPEAX@std@@@std@@QEAAXQEAU?$_List_node@IPEAX@2@_K@Z @ 0x180034868 (-deallocate@-$allocator@U-$_List_node@IPEAX@std@@@std@@QEAAXQEAU-$_List_node@IPEAX@2@_K@Z.c)
 */

void __fastcall __noreturn std::_List_buy_unsigned_int_std::allocator_unsigned_int___::_Buynode_unsigned_int_const____::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<unsigned int,void *>>::deallocate(a1, *(_QWORD *)(a2 + 64));
  throw;
}
