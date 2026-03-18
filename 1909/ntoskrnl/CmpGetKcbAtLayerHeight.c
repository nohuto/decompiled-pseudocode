/*
 * XREFs of CmpGetKcbAtLayerHeight @ 0x140600710
 * Callers:
 *     CmQueryLayeredKey @ 0x14027F678 (CmQueryLayeredKey.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14027FBEC (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x14027FC74 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpCreateTombstone @ 0x14028097C (CmpCreateTombstone.c)
 *     CmQueryValueKey @ 0x1405FE220 (CmQueryValueKey.c)
 *     CmpDoWritethroughReparse @ 0x140603B90 (CmpDoWritethroughReparse.c)
 *     CmpReportNotifyForKcbStack @ 0x140631320 (CmpReportNotifyForKcbStack.c)
 *     CmpReportNotifyHelper @ 0x1406313B0 (CmpReportNotifyHelper.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140635968 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpLockKcbStackExclusive @ 0x14063BBC8 (CmpLockKcbStackExclusive.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14063D450 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14064D420 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpWalkOneLevel @ 0x140665590 (CmpWalkOneLevel.c)
 *     CmpGetSymbolicLinkTarget @ 0x140668CB0 (CmpGetSymbolicLinkTarget.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14082750C (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1408277E4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x140829C6C (CmpEnumerateLayeredKey.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140832A90 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140832F94 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140837C44 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x14083857C (CmpKeyEnumStackVerifyResumeContext.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14083DBA4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSubkeys @ 0x14083E220 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x14083E42C (CmpPromoteKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14083E6F0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14083E884 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
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
