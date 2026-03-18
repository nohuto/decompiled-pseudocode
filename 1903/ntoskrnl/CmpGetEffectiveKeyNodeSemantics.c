/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x14083319C
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140280F48 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x14082E210 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140835D24 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpKeyEnumStackAdvance @ 0x1408382CC (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x1408384B8 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140839EFC (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
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
