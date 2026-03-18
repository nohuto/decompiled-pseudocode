/*
 * XREFs of CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140833358
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1402803E8 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14028061C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140280F48 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x14082E210 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x140832E50 (CmpCleanupKeyNodeStack.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140833430 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpResetKeyNodeStack @ 0x1408336D8 (CmpResetKeyNodeStack.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140833934 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x140833B14 (CmpSubtreeEnumeratorBeginForKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140835D24 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1408381EC (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x1408382CC (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14083833C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x1408384B8 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140838C84 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140839EFC (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmSaveKey @ 0x14083B43C (CmSaveKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14083E544 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14083E630 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14083EA38 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSubkeys @ 0x14083EBC0 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14083F090 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14083F224 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSubtree @ 0x14083F344 (CmpPromoteSubtree.c)
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
