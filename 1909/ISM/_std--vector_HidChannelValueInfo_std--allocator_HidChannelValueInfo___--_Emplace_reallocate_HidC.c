/*
 * XREFs of _std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo___::_Emplace_reallocate_HidChannelValueInfo_const_&__::_1_::catch$39 @ 0x1800B1996
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo___::_Emplace_reallocate_HidChannelValueInfo_const____::_1_::catch_39(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 104), (const struct std::nothrow_t *)(72LL * *(_QWORD *)(a2 + 96)));
  throw;
}
