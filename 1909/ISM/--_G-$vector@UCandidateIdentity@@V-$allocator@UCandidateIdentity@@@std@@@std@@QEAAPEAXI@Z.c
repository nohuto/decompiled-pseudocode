/*
 * XREFs of ??_G?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAXI@Z @ 0x18010160C
 * Callers:
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1801047C8 (-Reset@EdgyImpl@@QEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_GCandidateIdentity@@QEAAPEAXI@Z @ 0x1801016AC (--_GCandidateIdentity@@QEAAPEAXI@Z.c)
 */

CandidateIdentity **__fastcall std::vector<CandidateIdentity>::`scalar deleting destructor'(CandidateIdentity **a1)
{
  CandidateIdentity *v1; // rbx
  CandidateIdentity *v3; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v1 != v3 )
    {
      do
      {
        CandidateIdentity::`scalar deleting destructor'(v1, 0);
        v1 = (CandidateIdentity *)((char *)v1 + 40);
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)(40 * ((a1[2] - v1) / 40)));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
