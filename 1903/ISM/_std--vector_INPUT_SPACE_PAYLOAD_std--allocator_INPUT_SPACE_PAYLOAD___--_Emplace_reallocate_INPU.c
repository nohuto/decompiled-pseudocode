/*
 * XREFs of _std::vector_INPUT_SPACE_PAYLOAD_std::allocator_INPUT_SPACE_PAYLOAD___::_Emplace_reallocate_INPUT_SPACE_PAYLOAD_const_&__::_1_::catch$48 @ 0x18003B05B
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_INPUT_SPACE_PAYLOAD_std::allocator_INPUT_SPACE_PAYLOAD___::_Emplace_reallocate_INPUT_SPACE_PAYLOAD_const____::_1_::catch_48(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 136), (const struct std::nothrow_t *)(24LL * *(_QWORD *)(a2 + 120)));
  throw;
}
