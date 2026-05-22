/*
 * XREFs of ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@2@_K@Z @ 0x180037DF8
 * Callers:
 *     _std::_List_alloc_std::_List_base_types_std::pair_unsigned_long_const__unsigned_short__std::allocator_std::pair_unsigned_long_const__unsigned_short_______::_Buynode0_::_1_::catch$0 @ 0x18012F439 (_std--_List_alloc_std--_List_base_types_std--pair_unsigned_long_const__unsigned_short__std--allo.c)
 *     _std::_List_buy_std::pair_unsigned_long_const__unsigned_short__std::allocator_std::pair_unsigned_long_const__unsigned_short_____::_Buynode_unsigned_long_const_&___ptr64_unsigned_short_&___ptr64__::_1_::catch$0 @ 0x18012F51B (_std--_List_buy_std--pair_unsigned_long_const__unsigned_short__std--allocator_std--pair_unsigned.c)
 *     _std::_List_buy_std::pair_unsigned_short_const__ControllerProcessor::ActiveKeyProperties__std::allocator_std::pair_unsigned_short_const__ControllerProcessor::ActiveKeyProperties_____::_Buynode_unsigned_short_const_&___ptr64_ControllerProcessor::ActiveKeyProperties__::_1_::catch$0 @ 0x18012F541 (_std--_List_buy_std--pair_unsigned_short_const__ControllerProcessor--ActiveKeyProperties__std--a.c)
 *     _std::_List_buy_IDWMSupportedInputTarget_____ptr64_std::allocator_IDWMSupportedInputTarget_____ptr64___::_Buynode_IDWMSupportedInputTarget_____ptr64_const_&___ptr64__::_1_::catch$0 @ 0x18012F642 (_std--_List_buy_IDWMSupportedInputTarget_____ptr64_std--allocator_IDWMSupportedInputTarget_____p.c)
 *     _std::_List_buy_std::pair_unsigned_long_const__unsigned_long__std::allocator_std::pair_unsigned_long_const__unsigned_long_____::_Buynode_unsigned_long_int__::_1_::catch$0 @ 0x1801309F5 (_std--_List_buy_std--pair_unsigned_long_const__unsigned_long__std--allocator_std--pair_unsigned_.c)
 *     _std::_List_buy_enum__Button_std::allocator_enum__Button___::_Buynode_enum__Button_const_&___ptr64__::_1_::catch$0 @ 0x1801315BD (_std--_List_buy_enum__Button_std--allocator_enum__Button___--_Buynode_enum__Button_const_-___ptr.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_List_node<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2, (const struct std::nothrow_t *)0x18);
}
