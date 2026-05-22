/*
 * XREFs of _std::_List_buy_enum__Button_std::allocator_enum__Button___::_Buynode_enum__Button_const_&___ptr64__::_1_::catch$0 @ 0x1801315BD
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@2@_K@Z @ 0x180037DF8 (-deallocate@-$allocator@U-$_List_node@U-$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_buy_enum__Button_std::allocator_enum__Button___::_Buynode_enum__Button_const_____ptr64__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 64));
  throw;
}
