/*
 * XREFs of ?deallocate@?$allocator@UCandidateIdentity@@@std@@QEAAXQEAUCandidateIdentity@@_K@Z @ 0x1800640E4
 * Callers:
 *     _std::vector_TraceSessionProviderConfig_std::allocator_TraceSessionProviderConfig___::_Emplace_reallocate_unsigned_short_const_(&___ptr64)[39]_int_int_int__::_1_::catch$0 @ 0x18013131E (_std--vector_TraceSessionProviderConfig_std--allocator_TraceSessionProviderConfig___--_Emplace_r.c)
 *     _std::vector_CandidateIdentity_std::allocator_CandidateIdentity___::_Emplace_reallocate_CandidateIdentity_&___ptr64__::_1_::catch$11 @ 0x18013412A (_std--vector_CandidateIdentity_std--allocator_CandidateIdentity___--_Emplace_reallocate_Candidat.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<CandidateIdentity>::deallocate(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  v4 = 40 * a3;
  if ( (unsigned __int64)(40 * a3) >= 0x1000 )
  {
    v5 = *(a2 - 1);
    v4 += 39LL;
    if ( (unsigned __int64)a2 - v5 - 8 > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v5, v4);
      JUMPOUT(0x180064126LL);
    }
    a2 = (_QWORD *)*(a2 - 1);
  }
  operator delete(a2, (const struct std::nothrow_t *)v4);
}
