/*
 * XREFs of CmpCleanupKeyNodeStack @ 0x1407F99C0
 * Callers:
 *     CmQueryLayeredKey @ 0x14026BE18 (CmQueryLayeredKey.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x1407FA844 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x1407FED68 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackCleanup @ 0x1407FF1A0 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x1407FFAB0 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140800EB0 (CmpValueEnumStackStartFromKcbStack.c)
 *     CmSaveKey @ 0x140801F50 (CmSaveKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140804DE4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1408058E0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140805A4C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FA038 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpCleanupKeyNodeStack(__int64 a1)
{
  unsigned __int16 i; // bx
  _QWORD *EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v4; // rcx

  for ( i = 0; i <= *(_WORD *)a1; ++i )
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, i);
    if ( EntryAtLayerHeight[2] )
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*EntryAtLayerHeight + 16LL))(
        *EntryAtLayerHeight,
        EntryAtLayerHeight + 3);
  }
  v4 = *(struct _PRIVILEGE_SET **)(a1 + 72);
  if ( v4 )
    CmSiFreeMemory(v4);
}
