/*
 * XREFs of _std::_List_buy_enum__Button_std::allocator_enum__Button___::_Buynode_enum__Button_const_&__::_1_::catch$2 @ 0x1800A0643
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_buy_enum__Button_std::allocator_enum__Button___::_Buynode_enum__Button_const____::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 64), (const struct std::nothrow_t *)0x18);
  throw;
}
