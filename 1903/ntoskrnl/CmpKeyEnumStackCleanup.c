/*
 * XREFs of CmpKeyEnumStackCleanup @ 0x14083857C
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x14082A56C (CmpEnumerateLayeredKey.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140833BB0 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1408381EC (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpPartialPromoteSubkeys @ 0x14083EBC0 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     CmpCleanupKeyNodeStack @ 0x140832E50 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x140838960 (CmpKeyEnumStackEntryCleanup.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140838C08 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpKeyEnumStackCleanup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 i; // di
  __int64 EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v7; // rcx

  CmpCleanupKeyNodeStack(a1 + 8, a2, a3, a4);
  for ( i = 0; i <= *(__int16 *)a1; ++i )
  {
    EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(a1);
    CmpKeyEnumStackEntryCleanup(EntryAtLayerHeight);
  }
  v7 = *(struct _PRIVILEGE_SET **)(a1 + 344);
  if ( v7 )
    CmSiFreeMemory(v7);
}
