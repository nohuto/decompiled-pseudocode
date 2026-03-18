/*
 * XREFs of CmpCleanupKeyNodeStack @ 0x140832E50
 * Callers:
 *     CmQueryLayeredKey @ 0x14027F918 (CmQueryLayeredKey.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140833BB0 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x14083814C (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackCleanup @ 0x14083857C (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140838E30 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14083A3C8 (CmpValueEnumStackStartFromKcbStack.c)
 *     CmSaveKey @ 0x14083B43C (CmSaveKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14083E544 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14083F090 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14083F224 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140833358 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpCleanupKeyNodeStack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 i; // bx
  _QWORD *EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v7; // rcx

  for ( i = 0; i <= *(_WORD *)a1; ++i )
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, i, a3, a4);
    if ( EntryAtLayerHeight[2] )
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*EntryAtLayerHeight + 16LL))(
        *EntryAtLayerHeight,
        EntryAtLayerHeight + 3);
  }
  v7 = *(struct _PRIVILEGE_SET **)(a1 + 72);
  if ( v7 )
    CmSiFreeMemory(v7);
}
