/*
 * XREFs of CmpKeyEnumStackCleanup @ 0x1407FF1A0
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1407EFDA0 (CmpEnumerateLayeredKey.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x1407FA844 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1407FEDFC (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpPartialPromoteSubkeys @ 0x140805410 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpCleanupKeyNodeStack @ 0x1407F99C0 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x1407FF5E8 (CmpKeyEnumStackEntryCleanup.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1407FF888 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpKeyEnumStackCleanup(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int16 i; // di
  __int64 EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v6; // rcx

  CmpCleanupKeyNodeStack(a1 + 8);
  for ( i = 0; i <= *(_WORD *)a1; ++i )
  {
    EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(a1, i, v2, v3);
    CmpKeyEnumStackEntryCleanup(EntryAtLayerHeight);
  }
  v6 = *(struct _PRIVILEGE_SET **)(a1 + 344);
  if ( v6 )
    CmSiFreeMemory(v6);
}
