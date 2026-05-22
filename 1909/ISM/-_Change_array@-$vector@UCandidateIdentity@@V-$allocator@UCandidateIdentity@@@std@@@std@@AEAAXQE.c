/*
 * XREFs of ?_Change_array@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAXQEAUCandidateIdentity@@_K1@Z @ 0x180102588
 * Callers:
 *     ??$_Emplace_reallocate@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAUCandidateIdentity@@QEAU2@AEAU2@@Z @ 0x180100DEC (--$_Emplace_reallocate@AEAUCandidateIdentity@@@-$vector@UCandidateIdentity@@V-$allocator@UCandid.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_GCandidateIdentity@@QEAAPEAXI@Z @ 0x1801016AC (--_GCandidateIdentity@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall std::vector<CandidateIdentity>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CandidateIdentity *v4; // rbx
  CandidateIdentity *v9; // rsi
  __int64 result; // rax

  v4 = *(CandidateIdentity **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(CandidateIdentity **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        CandidateIdentity::`scalar deleting destructor'(v4, 0);
        v4 = (CandidateIdentity *)((char *)v4 + 40);
      }
      while ( v4 != v9 );
      v4 = *(CandidateIdentity **)a1;
    }
    std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)(40 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v4) / 40LL)));
  }
  *(_QWORD *)a1 = a2;
  result = 5 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 40 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 40 * a4;
  return result;
}
