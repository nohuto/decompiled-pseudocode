/*
 * XREFs of CmpGetKcbAtLayerHeight @ 0x1405D8AC0
 * Callers:
 *     CmQueryLayeredKey @ 0x14026BE18 (CmQueryLayeredKey.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14026C344 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x14026C3CC (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpCreateTombstone @ 0x14026D05C (CmpCreateTombstone.c)
 *     CmRmIsKcbStackVisible @ 0x1405812B8 (CmRmIsKcbStackVisible.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140596210 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpLockKcbStackExclusive @ 0x1405AA5D8 (CmpLockKcbStackExclusive.c)
 *     CmpCreateChild @ 0x1405AB7A4 (CmpCreateChild.c)
 *     CmDeleteValueKey @ 0x1405B6634 (CmDeleteValueKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405CF478 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpWalkOneLevel @ 0x1405D4560 (CmpWalkOneLevel.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D7CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405D8920 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpReportNotifyHelper @ 0x1405DBEE0 (CmpReportNotifyHelper.c)
 *     CmpReportNotifyForKcbStack @ 0x1405DC11C (CmpReportNotifyForKcbStack.c)
 *     CmpDoWritethroughReparse @ 0x14063C100 (CmpDoWritethroughReparse.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407ED370 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1407ED64C (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x1407EFDA0 (CmpEnumerateLayeredKey.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x1407FA110 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x1407FA5CC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x1407FF208 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x1407FFB9C (CmpKeyEnumStackVerifyResumeContext.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140804DE4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSubkeys @ 0x140805410 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140805600 (CmpPromoteKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1408058E0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140805A4C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetKcbAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * a2 - 16);
  else
    return *(_QWORD *)(a1 + 8LL * a2 + 8);
}
