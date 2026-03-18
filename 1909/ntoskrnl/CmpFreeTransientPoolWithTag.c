/*
 * XREFs of CmpFreeTransientPoolWithTag @ 0x1400CFDB0
 * Callers:
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmLoadDifferencingKey @ 0x14063BC6C (CmLoadDifferencingKey.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063EB80 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x140640940 (CmpTraceSecurityChanging.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140667DC8 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmQueryKey @ 0x140667F60 (CmQueryKey.c)
 *     CmCallbackReleaseKeyObjectIDEx @ 0x14066A890 (CmCallbackReleaseKeyObjectIDEx.c)
 *     CmpLinkHiveToMaster @ 0x14068C808 (CmpLinkHiveToMaster.c)
 *     CmpFreeKeyControlBlock @ 0x1406BA6D0 (CmpFreeKeyControlBlock.c)
 *     CmAddLogForAction @ 0x1406BB324 (CmAddLogForAction.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406E3758 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406E3A58 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x1406E3DB4 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x1406E3EDC (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406E3F60 (CmpLightWeightCreateSetValueData.c)
 *     CmpConstructAndCacheName @ 0x1406E9118 (CmpConstructAndCacheName.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406F010C (CmpLogTransactionAbortedWithChildName.c)
 *     CmRealKCBToVirtualPath @ 0x1406F6DEC (CmRealKCBToVirtualPath.c)
 *     CmEtwRunDown @ 0x1408258C8 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x140825BE8 (CmpEtwDumpKcb.c)
 *     CmpTraceHiveSaveStart @ 0x14082645C (CmpTraceHiveSaveStart.c)
 *     CmpFreeExtraParameter @ 0x1408267E8 (CmpFreeExtraParameter.c)
 *     CmpDumpKeyBodyList @ 0x14082A750 (CmpDumpKeyBodyList.c)
 *     CmVirtualKCBToRealPath @ 0x14082B9DC (CmVirtualKCBToRealPath.c)
 *     CmpDoAccessCheckOnSubtree @ 0x14082DB88 (CmpDoAccessCheckOnSubtree.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14082E130 (CmpReportAuditVirtualizationEvent.c)
 *     CmpFreeSiloKeyLockEntry @ 0x14082EB58 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x14082EB98 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpLoadHiveVolatile @ 0x14083B3D0 (CmpLoadHiveVolatile.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14083C4BC (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14083C868 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14083D328 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeTransientPoolWithTag(void *a1, ULONG a2)
{
  ExFreePoolWithTag(a1, a2);
}
