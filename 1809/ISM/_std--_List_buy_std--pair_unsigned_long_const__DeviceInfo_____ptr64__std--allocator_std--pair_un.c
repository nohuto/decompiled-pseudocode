/*
 * XREFs of _std::_List_buy_std::pair_unsigned_long_const__DeviceInfo_____ptr64__std::allocator_std::pair_unsigned_long_const__DeviceInfo_____ptr64_____::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple_unsigned_long_const_&___ptr64__std::tuple_____::_1_::catch$0 @ 0x18012EF5C
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@PEAX@2@_K@Z @ 0x180008EF4 (-deallocate@-$allocator@U-$_List_node@U-$pair@$$CBKPEAULegacyDeviceInfo@@@std@@PEAX@std@@@std@@Q.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_buy_std::pair_unsigned_long_const__DeviceInfo_____ptr64__std::allocator_std::pair_unsigned_long_const__DeviceInfo_____ptr64_____::_Buynode_std::piecewise_construct_t_const_____ptr64_std::tuple_unsigned_long_const_____ptr64__std::tuple_____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<std::pair<unsigned long const,LegacyDeviceInfo *>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 88));
  throw;
}
