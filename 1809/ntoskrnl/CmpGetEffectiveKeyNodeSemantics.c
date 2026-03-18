/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x1407F9ECC
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x14026C868 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14026CA8C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14026D374 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x1407F5458 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407FC8C8 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpKeyEnumStackAdvance @ 0x1407FEECC (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x1407FF0E0 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140800A00 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
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
