/*
 * XREFs of CmpFreeTransientPoolWithTag @ 0x140017768
 * Callers:
 *     CmLoadDifferencingKey @ 0x1405B4DBC (CmLoadDifferencingKey.c)
 *     CmDeleteValueKey @ 0x1405B6634 (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405B7C5C (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x1405B8380 (CmpTraceSecurityChanging.c)
 *     CmpLinkHiveToMaster @ 0x1405B8C48 (CmpLinkHiveToMaster.c)
 *     CmSetValueKey @ 0x1405CBE28 (CmSetValueKey.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1405D449C (CmpDereferenceNameControlBlockWithLock.c)
 *     CmQueryKey @ 0x1405D6900 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 *     CmpFreeKeyControlBlock @ 0x140692C14 (CmpFreeKeyControlBlock.c)
 *     CmpCleanupLightWeightUoWData @ 0x14069490C (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140695104 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x1406954D8 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x1406955F0 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x140695628 (CmpLightWeightCreateSetValueData.c)
 *     CmCallbackReleaseKeyObjectIDEx @ 0x1406BA840 (CmCallbackReleaseKeyObjectIDEx.c)
 *     CmAddLogForAction @ 0x1406BCEFC (CmAddLogForAction.c)
 *     CmpConstructAndCacheName @ 0x1406C8AC8 (CmpConstructAndCacheName.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406CF688 (CmpLogTransactionAbortedWithChildName.c)
 *     CmEtwRunDown @ 0x1407EB6C0 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x1407EB9A0 (CmpEtwDumpKcb.c)
 *     CmpTraceHiveSaveStart @ 0x1407EC270 (CmpTraceHiveSaveStart.c)
 *     CmpFreeExtraParameter @ 0x1407EC5FC (CmpFreeExtraParameter.c)
 *     CmpDumpKeyBodyList @ 0x1407F0D90 (CmpDumpKeyBodyList.c)
 *     CmRealKCBToVirtualPath @ 0x1407F1FC8 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x1407F21C0 (CmVirtualKCBToRealPath.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1407F4F8C (CmpDoAccessCheckOnSubtree.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407F5500 (CmpReportAuditVirtualizationEvent.c)
 *     CmpFreeSiloKeyLockEntry @ 0x1407F5EF0 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1407F5F30 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpLoadHiveVolatile @ 0x140802918 (CmpLoadHiveVolatile.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x1408035C0 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140803984 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140804430 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeTransientPoolWithTag(void *a1, ULONG a2)
{
  ExFreePoolWithTag(a1, a2);
}
