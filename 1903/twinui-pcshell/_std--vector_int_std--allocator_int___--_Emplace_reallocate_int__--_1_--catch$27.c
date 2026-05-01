/*
 * XREFs of _std::vector_int_std::allocator_int___::_Emplace_reallocate_int__::_1_::catch$27 @ 0x18040164D
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180087D7C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_int_std::allocator_int___::_Emplace_reallocate_int__::_1_::catch_27(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 104), (const struct std::nothrow_t *)(4LL * *(_QWORD *)(a2 + 96)));
  throw;
}
