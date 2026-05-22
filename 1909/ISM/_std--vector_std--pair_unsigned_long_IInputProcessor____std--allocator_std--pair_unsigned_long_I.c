/*
 * XREFs of _std::vector_std::pair_unsigned_long_IInputProcessor____std::allocator_std::pair_unsigned_long_IInputProcessor_______::_Emplace_reallocate_unsigned_long_&_IInputProcessor____::_1_::catch$65 @ 0x18003B302
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::pair_unsigned_long_IInputProcessor____std::allocator_std::pair_unsigned_long_IInputProcessor_______::_Emplace_reallocate_unsigned_long___IInputProcessor____::_1_::catch_65(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a2 + 104)));
  throw;
}
