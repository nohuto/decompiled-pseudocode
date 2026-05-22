/*
 * XREFs of ?_Destroy@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAXPEAUCandidateIdentity@@0@Z @ 0x180102700
 * Callers:
 *     _std::vector_CandidateIdentity_std::allocator_CandidateIdentity___::_Emplace_reallocate_CandidateIdentity_&__::_1_::catch$68 @ 0x180101077 (_std--vector_CandidateIdentity_std--allocator_CandidateIdentity___--_Emplace_reallocate_Candidat.c)
 * Callees:
 *     ??_GCandidateIdentity@@QEAAPEAXI@Z @ 0x1801016AC (--_GCandidateIdentity@@QEAAPEAXI@Z.c)
 */

CandidateIdentity *__fastcall std::vector<CandidateIdentity>::_Destroy(
        __int64 a1,
        CandidateIdentity *a2,
        CandidateIdentity *a3)
{
  CandidateIdentity *v4; // rbx
  CandidateIdentity *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = CandidateIdentity::`scalar deleting destructor'(v4, 0);
      v4 = (CandidateIdentity *)((char *)v4 + 40);
    }
    while ( v4 != a3 );
  }
  return result;
}
