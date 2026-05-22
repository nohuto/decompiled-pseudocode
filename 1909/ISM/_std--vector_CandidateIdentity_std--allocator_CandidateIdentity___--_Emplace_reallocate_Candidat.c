/*
 * XREFs of _std::vector_CandidateIdentity_std::allocator_CandidateIdentity___::_Emplace_reallocate_CandidateIdentity_&__::_1_::catch$68 @ 0x180101077
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAXPEAUCandidateIdentity@@0@Z @ 0x180102700 (-_Destroy@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@AEAAXPEAUCan.c)
 */

void __fastcall __noreturn std::vector_CandidateIdentity_std::allocator_CandidateIdentity___::_Emplace_reallocate_CandidateIdentity____::_1_::catch_68(
        __int64 a1,
        __int64 a2)
{
  std::vector<CandidateIdentity>::_Destroy(a1, *(_QWORD *)(a2 + 136), *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), (const struct std::nothrow_t *)(40LL * *(_QWORD *)(a2 + 152)));
  throw;
}
