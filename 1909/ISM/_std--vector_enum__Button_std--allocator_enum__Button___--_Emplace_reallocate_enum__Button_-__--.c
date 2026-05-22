/*
 * XREFs of _std::vector_enum__Button_std::allocator_enum__Button___::_Emplace_reallocate_enum__Button_&__::_1_::catch$27 @ 0x1800ADDC2
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_enum__Button_std::allocator_enum__Button___::_Emplace_reallocate_enum__Button____::_1_::catch_27(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 120), (const struct std::nothrow_t *)(4LL * *(_QWORD *)(a2 + 112)));
  throw;
}
