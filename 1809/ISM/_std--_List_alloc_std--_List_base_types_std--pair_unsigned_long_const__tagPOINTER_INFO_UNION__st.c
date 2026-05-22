/*
 * XREFs of _std::_List_alloc_std::_List_base_types_std::pair_unsigned_long_const__tagPOINTER_INFO_UNION__std::allocator_std::pair_unsigned_long_const__tagPOINTER_INFO_UNION_______::_Buynode0_::_1_::catch$0 @ 0x18013088F
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@PEAX@2@_K@Z @ 0x180055D78 (-deallocate@-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@PEAX@std@@@std@.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_alloc_std::_List_base_types_std::pair_unsigned_long_const__tagPOINTER_INFO_UNION__std::allocator_std::pair_unsigned_long_const__tagPOINTER_INFO_UNION_______::_Buynode0_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINTER_INFO_UNION>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 64));
  throw;
}
