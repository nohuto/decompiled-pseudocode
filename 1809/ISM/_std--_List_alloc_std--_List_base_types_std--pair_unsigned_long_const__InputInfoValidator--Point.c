/*
 * XREFs of _std::_List_alloc_std::_List_base_types_std::pair_unsigned_long_const__InputInfoValidator::PointerState__std::allocator_std::pair_unsigned_long_const__InputInfoValidator::PointerState_______::_Buynode0_::_1_::catch$0 @ 0x18012E10E
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@PEAX@2@_K@Z @ 0x180008EF4 (-deallocate@-$allocator@U-$_List_node@U-$pair@$$CBKPEAULegacyDeviceInfo@@@std@@PEAX@std@@@std@@Q.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_alloc_std::_List_base_types_std::pair_unsigned_long_const__InputInfoValidator::PointerState__std::allocator_std::pair_unsigned_long_const__InputInfoValidator::PointerState_______::_Buynode0_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<std::pair<unsigned long const,LegacyDeviceInfo *>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 64));
  throw;
}
