/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x1408327FC
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140280CA8 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x14082E08C (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140835384 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpKeyEnumStackAdvance @ 0x14083792C (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140837B18 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14083955C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetEffectiveKeyNodeSemantics(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x80000) != 0 )
    return *(_BYTE *)(a2 + 13) & 3;
  else
    return 0LL;
}
