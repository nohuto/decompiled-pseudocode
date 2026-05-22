/*
 * XREFs of _std::_Tree_comp_alloc_std::_Tset_traits_HOTKEY___std::less_HOTKEY____std::allocator_HOTKEY____0___::_Buyheadnode_::_1_::catch$8 @ 0x180096183
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Tree_comp_alloc_std::_Tset_traits_HOTKEY___std::less_HOTKEY____std::allocator_HOTKEY____0___::_Buyheadnode_::_1_::catch_8(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 64), (const struct std::nothrow_t *)0x28);
  throw;
}
