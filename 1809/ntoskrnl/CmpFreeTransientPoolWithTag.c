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
 *     CmpDoParseKey @ 0x140641CA0 (CmpDoParseKey.c)
 *     CmpFreeKeyControlBlock @ 0x140692BF4 (CmpFreeKeyControlBlock.c)
 *     CmpCleanupLightWeightUoWData @ 0x1406948EC (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406950E4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x1406954B8 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x1406955D0 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x140695608 (CmpLightWeightCreateSetValueData.c)
 *     CmCallbackReleaseKeyObjectIDEx @ 0x1406BA820 (CmCallbackReleaseKeyObjectIDEx.c)
 *     CmAddLogForAction @ 0x1406BCEDC (CmAddLogForAction.c)
 *     CmpConstructAndCacheName @ 0x1406C8AA8 (CmpConstructAndCacheName.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406CF668 (CmpLogTransactionAbortedWithChildName.c)
 *     CmEtwRunDown @ 0x1407EB6A0 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x1407EB980 (CmpEtwDumpKcb.c)
 *     CmpTraceHiveSaveStart @ 0x1407EC250 (CmpTraceHiveSaveStart.c)
 *     CmpFreeExtraParameter @ 0x1407EC5DC (CmpFreeExtraParameter.c)
 *     CmpDumpKeyBodyList @ 0x1407F0D70 (CmpDumpKeyBodyList.c)
 *     CmRealKCBToVirtualPath @ 0x1407F1FA8 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x1407F21A0 (CmVirtualKCBToRealPath.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1407F4F6C (CmpDoAccessCheckOnSubtree.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407F54E0 (CmpReportAuditVirtualizationEvent.c)
 *     CmpFreeSiloKeyLockEntry @ 0x1407F5ED0 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1407F5F10 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpLoadHiveVolatile @ 0x1408028F8 (CmpLoadHiveVolatile.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x1408035A0 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140803964 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140804410 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeTransientPoolWithTag(void *a1, ULONG a2)
{
  ExFreePoolWithTag(a1, a2);
}
