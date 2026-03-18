/*
 * XREFs of CmpInitializeKeyNodeStack @ 0x14083286C
 * Callers:
 *     CmQueryLayeredKey @ 0x14027F678 (CmQueryLayeredKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14082DA34 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpSubtreeEnumeratorInitialize @ 0x1408332C0 (CmpSubtreeEnumeratorInitialize.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x1408377AC (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackInitialize @ 0x140838294 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140838490 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140839A28 (CmpValueEnumStackStartFromKcbStack.c)
 *     CmSaveKey @ 0x14083AA9C (CmSaveKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14083DBA4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14083E6F0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14083E884 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSubtree @ 0x14083E9A4 (CmpPromoteSubtree.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall CmpInitializeKeyNodeStack(char *a1)
{
  char *v2; // rbx
  __int64 result; // rax

  memset(a1, 0, 0x50uLL);
  v2 = a1 + 32;
  result = 2LL;
  do
  {
    *((_QWORD *)v2 - 3) = 0LL;
    *(_QWORD *)(v2 - 12) = 0LL;
    *((_DWORD *)v2 - 1) = 0;
    *((_DWORD *)v2 - 4) = -1;
    *(_QWORD *)v2 = 0LL;
    *(_DWORD *)v2 = -1;
    *((_WORD *)v2 + 2) = 0;
    v2 += 32;
    --result;
  }
  while ( result );
  return result;
}
