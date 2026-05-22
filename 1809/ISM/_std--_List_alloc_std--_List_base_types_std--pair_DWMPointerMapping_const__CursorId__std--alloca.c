/*
 * XREFs of _std::_List_alloc_std::_List_base_types_std::pair_DWMPointerMapping_const__CursorId__std::allocator_std::pair_DWMPointerMapping_const__CursorId_______::_Buynode0_::_1_::catch$0 @ 0x18012E5F1
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@PEAX@2@_K@Z @ 0x18000F8A4 (-deallocate@-$allocator@U-$_List_node@U-$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@st.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_alloc_std::_List_base_types_std::pair_DWMPointerMapping_const__CursorId__std::allocator_std::pair_DWMPointerMapping_const__CursorId_______::_Buynode0_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<std::pair<unsigned long const,CameraControlDeviceCollection::UsageList>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 64));
  throw;
}
