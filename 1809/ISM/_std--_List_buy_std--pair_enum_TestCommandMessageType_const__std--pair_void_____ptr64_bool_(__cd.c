/*
 * XREFs of _std::_List_buy_std::pair_enum_TestCommandMessageType_const__std::pair_void_____ptr64_bool_(__cdecl_)(void_____ptr64_TestCommandMessageDataHeader_____ptr64)____std::allocator_std::pair_enum_TestCommandMessageType_const__std::pair_void_____ptr64_bool_(__cdecl_)(void_____ptr64_TestCommandMessageDataHeader_____ptr64)_______::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple_enum_TestCommandMessageType_const_&___ptr64__std::tuple_____::_1_::catch$0 @ 0x1801313A9
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@PEAX@2@_K@Z @ 0x18000F8A4 (-deallocate@-$allocator@U-$_List_node@U-$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@st.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_buy_std::pair_enum_TestCommandMessageType_const__std::pair_void_____ptr64_bool____cdecl___void_____ptr64_TestCommandMessageDataHeader_____ptr64_____std::allocator_std::pair_enum_TestCommandMessageType_const__std::pair_void_____ptr64_bool____cdecl___void_____ptr64_TestCommandMessageDataHeader_____ptr64________::_Buynode_std::piecewise_construct_t_const_____ptr64_std::tuple_enum_TestCommandMessageType_const_____ptr64__std::tuple_____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<std::pair<unsigned long const,CameraControlDeviceCollection::UsageList>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 88));
  throw;
}
