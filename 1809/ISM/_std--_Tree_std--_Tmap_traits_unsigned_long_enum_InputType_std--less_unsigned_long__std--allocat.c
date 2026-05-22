/*
 * XREFs of _std::_Tree_std::_Tmap_traits_unsigned_long_enum_InputType_std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__enum_InputType____0___::_Insert_nohint_std::pair_unsigned_long_const__enum_InputType__&___ptr64_std::_Tree_node_std::pair_unsigned_long_const__enum_InputType__void_____ptr64______ptr64__::_1_::catch$0 @ 0x180130335
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@PEAX@2@_K@Z @ 0x18000F8A4 (-deallocate@-$allocator@U-$_List_node@U-$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@st.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Tree_std::_Tmap_traits_unsigned_long_enum_InputType_std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__enum_InputType____0___::_Insert_nohint_std::pair_unsigned_long_const__enum_InputType______ptr64_std::_Tree_node_std::pair_unsigned_long_const__enum_InputType__void_____ptr64______ptr64__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<std::pair<unsigned long const,CameraControlDeviceCollection::UsageList>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 112));
  throw;
}
