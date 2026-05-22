/*
 * XREFs of _std::_List_alloc_std::_List_base_types_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__std::allocator_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo_______::_Buynode0_::_1_::catch$0 @ 0x18012EE2E
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@PEAX@2@_K@Z @ 0x180026944 (-deallocate@-$allocator@U-$_List_node@U-$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@PEAX@s.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_alloc_std::_List_base_types_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__std::allocator_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo_______::_Buynode0_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 64));
  throw;
}
