/*
 * XREFs of _std::vector_std::pair_unsigned_long_IInputProcessor____std::allocator_std::pair_unsigned_long_IInputProcessor_______::_Emplace_reallocate_unsigned_long_&_IInputProcessor___&__::_1_::catch$40 @ 0x18009240B
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::pair_unsigned_long_IInputProcessor____std::allocator_std::pair_unsigned_long_IInputProcessor_______::_Emplace_reallocate_unsigned_long___IInputProcessor______::_1_::catch_40(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 104), (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a2 + 96)));
  throw;
}
