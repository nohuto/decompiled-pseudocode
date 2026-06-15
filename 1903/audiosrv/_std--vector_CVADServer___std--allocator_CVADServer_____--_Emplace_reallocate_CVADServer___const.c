/*
 * XREFs of _std::vector_CVADServer___std::allocator_CVADServer_____::_Emplace_reallocate_CVADServer___const_&__::_1_::catch$58 @ 0x18006D9EE
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18006B8EB (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CVADServer___std::allocator_CVADServer_____::_Emplace_reallocate_CVADServer___const____::_1_::catch_58(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 104), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 96)));
  throw;
}
