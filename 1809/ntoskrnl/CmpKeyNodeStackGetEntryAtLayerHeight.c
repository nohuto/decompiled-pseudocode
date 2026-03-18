/*
 * XREFs of CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FA038
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x14026C868 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14026CA8C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14026D374 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x1407F5458 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x1407F99C0 (CmpCleanupKeyNodeStack.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x1407FA110 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpResetKeyNodeStack @ 0x1407FA378 (CmpResetKeyNodeStack.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x1407FA5CC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x1407FA7A8 (CmpSubtreeEnumeratorBeginForKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407FC8C8 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1407FEDFC (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x1407FEECC (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x1407FEF60 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x1407FF0E0 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x1407FF904 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140800A00 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmSaveKey @ 0x140801F50 (CmSaveKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140804DE4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140804EA0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140805288 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSubkeys @ 0x140805410 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1408058E0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140805A4C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSubtree @ 0x140805B5C (CmpPromoteSubtree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpKeyNodeStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 < 2 )
    return a1 + 32LL * a2 + 8;
  else
    return *(_QWORD *)(a1 + 72) + 32LL * (__int16)(a2 - 2);
}
