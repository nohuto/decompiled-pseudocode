/*
 * XREFs of CmpFreeTransientPoolWithTag @ 0x140092A90
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmAddLogForAction @ 0x140633958 (CmAddLogForAction.c)
 *     CmLoadDifferencingKey @ 0x140638BDC (CmLoadDifferencingKey.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063BAF0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x14063D600 (CmpTraceSecurityChanging.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140654CC8 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmQueryKey @ 0x140654E60 (CmQueryKey.c)
 *     CmCallbackReleaseKeyObjectIDEx @ 0x140657870 (CmCallbackReleaseKeyObjectIDEx.c)
 *     CmpLinkHiveToMaster @ 0x1406622B0 (CmpLinkHiveToMaster.c)
 *     CmpFreeKeyControlBlock @ 0x14069B720 (CmpFreeKeyControlBlock.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406E20D8 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406E23D8 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x1406E2734 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x1406E285C (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406E28E0 (CmpLightWeightCreateSetValueData.c)
 *     CmpConstructAndCacheName @ 0x1406E8018 (CmpConstructAndCacheName.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406EE5BC (CmpLogTransactionAbortedWithChildName.c)
 *     CmRealKCBToVirtualPath @ 0x1406F507C (CmRealKCBToVirtualPath.c)
 *     CmEtwRunDown @ 0x1408261C8 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x1408264E8 (CmpEtwDumpKcb.c)
 *     CmpTraceHiveSaveStart @ 0x140826D5C (CmpTraceHiveSaveStart.c)
 *     CmpFreeExtraParameter @ 0x1408270E8 (CmpFreeExtraParameter.c)
 *     CmpDumpKeyBodyList @ 0x14082B050 (CmpDumpKeyBodyList.c)
 *     CmVirtualKCBToRealPath @ 0x14082C2DC (CmVirtualKCBToRealPath.c)
 *     CmpDoAccessCheckOnSubtree @ 0x14082DD0C (CmpDoAccessCheckOnSubtree.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14082E2B4 (CmpReportAuditVirtualizationEvent.c)
 *     CmpFreeSiloKeyLockEntry @ 0x14082ECE8 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x14082ED28 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpLoadHiveVolatile @ 0x14083BD70 (CmpLoadHiveVolatile.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14083CE5C (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14083D208 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14083DCC8 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeTransientPoolWithTag(void *a1, ULONG a2)
{
  ExFreePoolWithTag(a1, a2);
}
