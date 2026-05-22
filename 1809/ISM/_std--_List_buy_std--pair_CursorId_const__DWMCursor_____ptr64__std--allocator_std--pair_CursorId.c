/*
 * XREFs of _std::_List_buy_std::pair_CursorId_const__DWMCursor_____ptr64__std::allocator_std::pair_CursorId_const__DWMCursor_____ptr64_____::_Buynode_CursorId_const_&___ptr64_DWMCursor_____ptr64_&___ptr64__::_1_::catch$0 @ 0x1801358E6
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@PEAX@2@_K@Z @ 0x18000F8A4 (-deallocate@-$allocator@U-$_List_node@U-$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@st.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_buy_std::pair_CursorId_const__DWMCursor_____ptr64__std::allocator_std::pair_CursorId_const__DWMCursor_____ptr64_____::_Buynode_CursorId_const_____ptr64_DWMCursor_____ptr64_____ptr64__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<std::pair<unsigned long const,CameraControlDeviceCollection::UsageList>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 64));
  throw;
}
