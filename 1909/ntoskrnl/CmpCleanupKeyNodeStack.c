/*
 * XREFs of CmpCleanupKeyNodeStack @ 0x1408324B0
 * Callers:
 *     CmQueryLayeredKey @ 0x14027F678 (CmQueryLayeredKey.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140833210 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x1408377AC (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackCleanup @ 0x140837BDC (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140838490 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140839A28 (CmpValueEnumStackStartFromKcbStack.c)
 *     CmSaveKey @ 0x14083AA9C (CmSaveKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14083DBA4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14083E6F0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14083E884 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1408329B8 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
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
