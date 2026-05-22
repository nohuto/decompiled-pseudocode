/*
 * XREFs of ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@PEAX@2@_K@Z @ 0x180008EF4
 * Callers:
 *     _std::_List_alloc_std::_List_base_types_std::pair_unsigned_long_const__InputInfoValidator::PointerState__std::allocator_std::pair_unsigned_long_const__InputInfoValidator::PointerState_______::_Buynode0_::_1_::catch$0 @ 0x18012E10E (_std--_List_alloc_std--_List_base_types_std--pair_unsigned_long_const__InputInfoValidator--Point.c)
 *     _std::_List_buy_std::pair_unsigned___int64_const__IMPCTarget_____ptr64__std::allocator_std::pair_unsigned___int64_const__IMPCTarget_____ptr64_____::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple_unsigned___int64_&&___ptr64__std::tuple_____::_1_::catch$0 @ 0x18012E192 (_std--_List_buy_std--pair_unsigned___int64_const__IMPCTarget_____ptr64__std--allocator_std--pair.c)
 *     _std::_List_buy_std::pair_unsigned___int64_const__Microsoft::WRL::ComPtr_MagnifierProcessor::DeviceState____std::allocator_std::pair_unsigned___int64_const__Microsoft::WRL::ComPtr_MagnifierProcessor::DeviceState_______::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple_unsigned___int64_const_&___ptr64__std::tuple_____::_1_::catch$0 @ 0x18012E1B8 (_std--_List_buy_std--pair_unsigned___int64_const__Microsoft--WRL--ComPtr_MagnifierProcessor--Dev.c)
 *     _std::_List_buy_std::pair_unsigned_long_const__LegacyDeviceInfo_____ptr64__std::allocator_std::pair_unsigned_long_const__LegacyDeviceInfo_____ptr64_____::_Buynode_unsigned_long_const_&___ptr64_LegacyDeviceInfo_____ptr64_&___ptr64__::_1_::catch$0 @ 0x18012EE7A (_std--_List_buy_std--pair_unsigned_long_const__LegacyDeviceInfo_____ptr64__std--allocator_std--p.c)
 *     _std::_List_buy_std::pair_unsigned_long_const__DeviceInfo_____ptr64__std::allocator_std::pair_unsigned_long_const__DeviceInfo_____ptr64_____::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple_unsigned_long_const_&___ptr64__std::tuple_____::_1_::catch$0 @ 0x18012EF5C (_std--_List_buy_std--pair_unsigned_long_const__DeviceInfo_____ptr64__std--allocator_std--pair_un.c)
 *     _std::_List_buy_std::pair_unsigned_long_const__std::unique_ptr_PointerInfoAdapter::LastDeviceFrame_std::default_delete_PointerInfoAdapter::LastDeviceFrame______std::allocator_std::pair_unsigned_long_const__std::unique_ptr_PointerInfoAdapter::LastDeviceFrame_std::default_delete_PointerInfoAdapter::LastDeviceFrame_________::_Buynode_unsigned_long_const_&___ptr64_std::unique_ptr_PointerInfoAdapter::LastDeviceFrame_std::default_delete_PointerInfoAdapter::LastDeviceFrame______::_1_::catch$1 @ 0x1801309CF (_std--_List_buy_std--pair_unsigned_long_const__std--unique_ptr_PointerInfoAdapter--LastDeviceFra.c)
 *     _std::_List_alloc_std::_List_base_types_std::pair_unsigned_long_const__InputInfoValidator_____ptr64__std::allocator_std::pair_unsigned_long_const__InputInfoValidator_____ptr64_______::_Buynode0_::_1_::catch$0 @ 0x180131F3C (_std--_List_alloc_std--_List_base_types_std--pair_unsigned_long_const__InputInfoValidator_____pt.c)
 *     _std::_List_buy_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_PointerInfoAdapter____std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_PointerInfoAdapter_______::_Buynode_unsigned_long_const_&___ptr64_PointerInfoAdapter_____ptr64__::_1_::catch$1 @ 0x180131F88 (_std--_List_buy_std--pair_unsigned_long_const__Microsoft--WRL--ComPtr_PointerInfoAdapter____std-.c)
 *     _std::_List_buy_std::pair_unsigned_long_const__unsigned___int64__std::allocator_std::pair_unsigned_long_const__unsigned___int64_____::_Buynode_unsigned_long_&___ptr64_int__::_1_::catch$0 @ 0x18013403E (_std--_List_buy_std--pair_unsigned_long_const__unsigned___int64__std--allocator_std--pair_unsign.c)
 *     _std::_List_buy_std::pair_unsigned_long_const__InputInfoValidator::PointerState__std::allocator_std::pair_unsigned_long_const__InputInfoValidator::PointerState_____::_Buynode_unsigned_long_const_&___ptr64_InputInfoValidator::PointerState_&___ptr64__::_1_::catch$0 @ 0x1801357B1 (_std--_List_buy_std--pair_unsigned_long_const__InputInfoValidator--PointerState__std--allocator_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_List_node<std::pair<unsigned long const,LegacyDeviceInfo *>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2, (const struct std::nothrow_t *)0x20);
}
