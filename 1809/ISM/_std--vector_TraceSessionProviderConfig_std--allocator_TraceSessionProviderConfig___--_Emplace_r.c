/*
 * XREFs of _std::vector_TraceSessionProviderConfig_std::allocator_TraceSessionProviderConfig___::_Emplace_reallocate_unsigned_short_const_(&___ptr64)[39]_int_int_int__::_1_::catch$0 @ 0x18013131E
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@UCandidateIdentity@@@std@@QEAAXQEAUCandidateIdentity@@_K@Z @ 0x1800640E4 (-deallocate@-$allocator@UCandidateIdentity@@@std@@QEAAXQEAUCandidateIdentity@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_TraceSessionProviderConfig_std::allocator_TraceSessionProviderConfig___::_Emplace_reallocate_unsigned_short_const______ptr64__39__int_int_int__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<CandidateIdentity>::deallocate(a1, *(_QWORD **)(a2 + 112), *(_QWORD *)(a2 + 120));
  throw;
}
