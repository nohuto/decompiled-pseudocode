/*
 * XREFs of CmpSubtreeEnumeratorCleanup @ 0x140833210
 * Callers:
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14082DA34 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x14083E9A4 (CmpPromoteSubtree.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     CmpCleanupKeyNodeStack @ 0x1408324B0 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyEnumStackCleanup @ 0x140837BDC (CmpKeyEnumStackCleanup.c)
 */

void __fastcall CmpSubtreeEnumeratorCleanup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbp
  struct _PRIVILEGE_SET *v8; // rcx

  if ( *(_QWORD *)(a1 + 96) )
  {
    v5 = 0LL;
    v6 = 512LL;
    do
    {
      v7 = *(_QWORD *)(a1 + 96);
      v8 = *(struct _PRIVILEGE_SET **)(v5 + v7 + 48);
      if ( v8 )
        CmSiFreeMemory(v8);
      CmpKeyEnumStackCleanup(v5 + v7 + 56);
      v5 += 408LL;
      --v6;
    }
    while ( v6 );
    CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 96));
  }
  CmpCleanupKeyNodeStack(a1 + 16, a2, a3, a4);
}
