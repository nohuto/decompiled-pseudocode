/*
 * XREFs of _std::vector_unsigned_short_std::allocator_unsigned_short___::_Emplace_reallocate_unsigned_short_const_&__::_1_::catch$34 @ 0x1800A094F
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_short_std::allocator_unsigned_short___::_Emplace_reallocate_unsigned_short_const____::_1_::catch_34(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 120), (const struct std::nothrow_t *)(2LL * *(_QWORD *)(a2 + 112)));
  throw;
}
