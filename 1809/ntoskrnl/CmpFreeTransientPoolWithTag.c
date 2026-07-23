/*
 * XREFs of CmpFreeTransientPoolWithTag @ 0x140017768
 * Callers:
 *     CmLoadDifferencingKey @ 0x1405B5DBC (CmLoadDifferencingKey.c)
 *     CmDeleteValueKey @ 0x1405B7634 (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405B8C5C (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x1405B9380 (CmpTraceSecurityChanging.c)
 *     CmpLinkHiveToMaster @ 0x1405B9C48 (CmpLinkHiveToMaster.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1405D549C (CmpDereferenceNameControlBlockWithLock.c)
 *     CmQueryKey @ 0x1405D7900 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmpFreeKeyControlBlock @ 0x140693DB4 (CmpFreeKeyControlBlock.c)
 *     CmpCleanupLightWeightUoWData @ 0x140695AAC (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406962A4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140696678 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x140696790 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406967C8 (CmpLightWeightCreateSetValueData.c)
 *     CmCallbackReleaseKeyObjectIDEx @ 0x1406BBAC0 (CmCallbackReleaseKeyObjectIDEx.c)
 *     CmAddLogForAction @ 0x1406BE17C (CmAddLogForAction.c)
 *     CmpConstructAndCacheName @ 0x1406C9D48 (CmpConstructAndCacheName.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406D0908 (CmpLogTransactionAbortedWithChildName.c)
 *     CmEtwRunDown @ 0x1407EC8A0 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x1407ECB80 (CmpEtwDumpKcb.c)
 *     CmpTraceHiveSaveStart @ 0x1407ED450 (CmpTraceHiveSaveStart.c)
 *     CmpFreeExtraParameter @ 0x1407ED7DC (CmpFreeExtraParameter.c)
 *     CmpDumpKeyBodyList @ 0x1407F1F70 (CmpDumpKeyBodyList.c)
 *     CmRealKCBToVirtualPath @ 0x1407F31A8 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x1407F33A0 (CmVirtualKCBToRealPath.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1407F616C (CmpDoAccessCheckOnSubtree.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407F66E0 (CmpReportAuditVirtualizationEvent.c)
 *     CmpFreeSiloKeyLockEntry @ 0x1407F70D0 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1407F7110 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpLoadHiveVolatile @ 0x140803AF8 (CmpLoadHiveVolatile.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x1408047A0 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140804B64 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140805610 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeTransientPoolWithTag(void *a1, ULONG a2)
{
  ExFreePoolWithTag(a1, a2);
}
