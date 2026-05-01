/*
 * XREFs of _std::vector_int_std::allocator_int___::_Emplace_reallocate_int__::_1_::catch$26 @ 0x18039BD7D
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_int_std::allocator_int___::_Emplace_reallocate_int__::_1_::catch_26(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 104), (const struct std::nothrow_t *)(4LL * *(_QWORD *)(a2 + 96)));
  throw;
}
