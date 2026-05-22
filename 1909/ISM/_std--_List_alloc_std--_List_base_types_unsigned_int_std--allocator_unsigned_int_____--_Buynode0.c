/*
 * XREFs of _std::_List_alloc_std::_List_base_types_unsigned_int_std::allocator_unsigned_int_____::_Buynode0_::_1_::catch$6 @ 0x18003384E
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@U?$_List_node@IPEAX@std@@@std@@QEAAXQEAU?$_List_node@IPEAX@2@_K@Z @ 0x180034548 (-deallocate@-$allocator@U-$_List_node@IPEAX@std@@@std@@QEAAXQEAU-$_List_node@IPEAX@2@_K@Z.c)
 */

void __fastcall __noreturn std::_List_alloc_std::_List_base_types_unsigned_int_std::allocator_unsigned_int_____::_Buynode0_::_1_::catch_6(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<unsigned int,void *>>::deallocate(a1, *(_QWORD *)(a2 + 64));
  throw;
}
