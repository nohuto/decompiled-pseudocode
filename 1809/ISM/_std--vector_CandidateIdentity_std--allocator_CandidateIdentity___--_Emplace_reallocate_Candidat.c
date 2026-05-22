/*
 * XREFs of _std::vector_CandidateIdentity_std::allocator_CandidateIdentity___::_Emplace_reallocate_CandidateIdentity_&___ptr64__::_1_::catch$11 @ 0x18013412A
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@UCandidateIdentity@@@std@@QEAAXQEAUCandidateIdentity@@_K@Z @ 0x1800640E4 (-deallocate@-$allocator@UCandidateIdentity@@@std@@QEAAXQEAUCandidateIdentity@@_K@Z.c)
 *     ?_Destroy@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAXPEAUCandidateIdentity@@0@Z @ 0x1800CC14C (-_Destroy@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@AEAAXPEAUCan.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CandidateIdentity_std::allocator_CandidateIdentity___::_Emplace_reallocate_CandidateIdentity_____ptr64__::_1_::catch_11(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<CandidateIdentity>::_Destroy(a1, *(_QWORD *)(a2 + 136), *(_QWORD *)(a2 + 48));
  std::allocator<CandidateIdentity>::deallocate(v3, *(_QWORD **)(a2 + 152), *(_QWORD *)(a2 + 32));
  throw;
}
