/*
 * XREFs of _std::vector_std::pair_float_int__std::allocator_std::pair_float_int_____::_Emplace_reallocate_std::pair_float_int____::_1_::catch$40 @ 0x180420E41
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18008A8BC (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::pair_float_int__std::allocator_std::pair_float_int_____::_Emplace_reallocate_std::pair_float_int____::_1_::catch_40(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 104), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 96)));
  throw;
}
