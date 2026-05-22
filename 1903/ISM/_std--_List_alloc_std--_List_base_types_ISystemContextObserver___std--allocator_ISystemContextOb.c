/*
 * XREFs of _std::_List_alloc_std::_List_base_types_ISystemContextObserver___std::allocator_ISystemContextObserver_______::_Buynode0_::_1_::catch$6 @ 0x18003B0BB
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_alloc_std::_List_base_types_ISystemContextObserver___std::allocator_ISystemContextObserver_______::_Buynode0_::_1_::catch_6(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 64), (const struct std::nothrow_t *)0x18);
  throw;
}
