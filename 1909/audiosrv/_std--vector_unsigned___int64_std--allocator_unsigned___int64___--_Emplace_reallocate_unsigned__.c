/*
 * XREFs of _std::vector_unsigned___int64_std::allocator_unsigned___int64___::_Emplace_reallocate_unsigned___int64__::_1_::catch$33 @ 0x1800FC877
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180048E78 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18006C94B (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned___int64_std::allocator_unsigned___int64___::_Emplace_reallocate_unsigned___int64__::_1_::catch_33(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 104), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 96)));
  throw;
}
