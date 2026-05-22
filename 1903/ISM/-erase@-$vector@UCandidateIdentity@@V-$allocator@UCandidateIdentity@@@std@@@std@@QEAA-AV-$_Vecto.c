/*
 * XREFs of ?erase@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@@Z @ 0x18010296C
 * Callers:
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x180101FC4 (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180088B28 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??_GCandidateIdentity@@QEAAPEAXI@Z @ 0x1801018DC (--_GCandidateIdentity@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall std::vector<CandidateIdentity>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a3 + 40;
  if ( a3 + 40 != v3 )
  {
    do
    {
      std::wstring::operator=((_OWORD *)(v4 - 40), v4);
      *(_DWORD *)(v4 - 8) = *(_DWORD *)(v4 + 32);
      v4 += 40LL;
    }
    while ( v4 != v3 );
    v3 = *(_QWORD *)(a1 + 8);
  }
  CandidateIdentity::`scalar deleting destructor'((CandidateIdentity *)(v3 - 40), 0);
  *(_QWORD *)(a1 + 8) -= 40LL;
  result = a2;
  *a2 = a3;
  return result;
}
