/*
 * XREFs of CmpSubtreeEnumeratorCleanup @ 0x1407FA844
 * Callers:
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x1407F4E34 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x140805B5C (CmpPromoteSubtree.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpCleanupKeyNodeStack @ 0x1407F99C0 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyEnumStackCleanup @ 0x1407FF1A0 (CmpKeyEnumStackCleanup.c)
 */

void __fastcall CmpSubtreeEnumeratorCleanup(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbp
  struct _PRIVILEGE_SET *v5; // rcx

  if ( *(_QWORD *)(a1 + 96) )
  {
    v2 = 0LL;
    v3 = 512LL;
    do
    {
      v4 = *(_QWORD *)(a1 + 96);
      v5 = *(struct _PRIVILEGE_SET **)(v2 + v4 + 48);
      if ( v5 )
        CmSiFreeMemory(v5);
      CmpKeyEnumStackCleanup(v2 + v4 + 56);
      v2 += 408LL;
      --v3;
    }
    while ( v3 );
    CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 96));
  }
  CmpCleanupKeyNodeStack(a1 + 16);
}
