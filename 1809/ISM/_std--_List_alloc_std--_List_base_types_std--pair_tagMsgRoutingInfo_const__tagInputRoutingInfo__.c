/*
 * XREFs of _std::_List_alloc_std::_List_base_types_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__std::allocator_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo_______::_Buynode0_::_1_::catch$0 @ 0x180134461
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@2@_K@Z @ 0x18003BA94 (-deallocate@-$allocator@U-$_List_node@U-$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_alloc_std::_List_base_types_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__std::allocator_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo_______::_Buynode0_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 64));
  throw;
}
