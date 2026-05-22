/*
 * XREFs of _std::_List_buy_std::pair_unsigned_long_const__CameraControlDeviceCollection::UsageList__std::allocator_std::pair_unsigned_long_const__CameraControlDeviceCollection::UsageList_____::_Buynode_unsigned_long_const_&___ptr64_CameraControlDeviceCollection::UsageList_&___ptr64__::_1_::catch$0 @ 0x180131597
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@PEAX@2@_K@Z @ 0x18000F8A4 (-deallocate@-$allocator@U-$_List_node@U-$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@st.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_buy_std::pair_unsigned_long_const__CameraControlDeviceCollection::UsageList__std::allocator_std::pair_unsigned_long_const__CameraControlDeviceCollection::UsageList_____::_Buynode_unsigned_long_const_____ptr64_CameraControlDeviceCollection::UsageList_____ptr64__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<std::pair<unsigned long const,CameraControlDeviceCollection::UsageList>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 64));
  throw;
}
