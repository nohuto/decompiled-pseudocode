/*
 * XREFs of _std::_List_buy_std::pair_unsigned_long_const__Win32kInterop::TargetingInfo__std::allocator_std::pair_unsigned_long_const__Win32kInterop::TargetingInfo_____::_Buynode_unsigned_long_&___ptr64_Win32kInterop::TargetingInfo__::_1_::catch$3 @ 0x180131F62
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@2@_K@Z @ 0x180085C78 (-deallocate@-$allocator@U-$_List_node@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_buy_std::pair_unsigned_long_const__Win32kInterop::TargetingInfo__std::allocator_std::pair_unsigned_long_const__Win32kInterop::TargetingInfo_____::_Buynode_unsigned_long_____ptr64_Win32kInterop::TargetingInfo__::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<std::pair<unsigned long const,Win32kInterop::TargetingInfo>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 64));
  throw;
}
