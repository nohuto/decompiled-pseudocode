/*
 * XREFs of CmpInitializeKeyNodeStack @ 0x1407F9F28
 * Callers:
 *     CmQueryLayeredKey @ 0x14026BF18 (CmQueryLayeredKey.c)
 *     CmRenameKey @ 0x1407EDAF4 (CmRenameKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x1407F4E14 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x1407FED48 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackInitialize @ 0x1407FF894 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x1407FFA90 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140800E90 (CmpValueEnumStackStartFromKcbStack.c)
 *     CmSaveKey @ 0x140801F30 (CmSaveKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140804DC4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1408058C0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140805A2C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSubtree @ 0x140805B3C (CmpPromoteSubtree.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 */

__int64 __fastcall CmpInitializeKeyNodeStack(char *a1)
{
  char *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  memset(a1, 0, 0x50uLL);
  v2 = a1 + 32;
  v3 = 2LL;
  do
  {
    memset(v2 - 24, 0, 0x20uLL);
    *((_DWORD *)v2 - 4) = -1;
    result = 0LL;
    *(_QWORD *)v2 = 0LL;
    *(_DWORD *)v2 = -1;
    *((_WORD *)v2 + 2) = 0;
    v2 += 32;
    --v3;
  }
  while ( v3 );
  return result;
}
