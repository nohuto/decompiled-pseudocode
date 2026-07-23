/*
 * XREFs of CmpInitializeKeyNodeStack @ 0x1407FB128
 * Callers:
 *     CmQueryLayeredKey @ 0x14026C108 (CmQueryLayeredKey.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x1407F6014 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x1407FFF48 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackInitialize @ 0x140800A94 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140800C90 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140802090 (CmpValueEnumStackStartFromKcbStack.c)
 *     CmSaveKey @ 0x140803130 (CmSaveKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140805FC4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140806AC0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140806C2C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSubtree @ 0x140806D3C (CmpPromoteSubtree.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
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
