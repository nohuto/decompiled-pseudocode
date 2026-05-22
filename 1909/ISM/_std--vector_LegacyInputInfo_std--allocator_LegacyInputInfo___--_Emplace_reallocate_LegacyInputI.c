/*
 * XREFs of _std::vector_LegacyInputInfo_std::allocator_LegacyInputInfo___::_Emplace_reallocate_LegacyInputInfo_&__::_1_::catch$42 @ 0x180093727
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_LegacyInputInfo_std::allocator_LegacyInputInfo___::_Emplace_reallocate_LegacyInputInfo____::_1_::catch_42(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 136), (const struct std::nothrow_t *)(2032LL * *(_QWORD *)(a2 + 120)));
  throw;
}
