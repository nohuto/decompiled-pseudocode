/*
 * XREFs of CmpLockRegistry @ 0x1405F6EE0
 * Callers:
 *     CmpDoQueryKeyName @ 0x1400CFEE0 (CmpDoQueryKeyName.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1400ED6CC (CmpRecheckHiveVolumePolicy.c)
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x1405FE220 (CmQueryValueKey.c)
 *     CmpCleanupParseContext @ 0x1405FF960 (CmpCleanupParseContext.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FFBB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDeleteKeyObject @ 0x140603C70 (CmpDeleteKeyObject.c)
 *     CmNotifyRunDown @ 0x14060F400 (CmNotifyRunDown.c)
 *     NtNotifyChangeMultipleKeys @ 0x14062F530 (NtNotifyChangeMultipleKeys.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x140633EC0 (CmQueryMultipleValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406354F8 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrCommit @ 0x140636410 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x14063661C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommitUoW @ 0x140636C6C (CmpTransMgrCommitUoW.c)
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x140638760 (CmpLockRegistryFreezeAware.c)
 *     NtDeleteKey @ 0x14063B0D0 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x14063B4FC (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmReleaseLoadKeyContext @ 0x14063DDF0 (CmReleaseLoadKeyContext.c)
 *     CmpSetKeySecurity @ 0x1406409F0 (CmpSetKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406608E0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmEnumerateValueKey @ 0x140660F30 (CmEnumerateValueKey.c)
 *     CmpDelayCloseWorker @ 0x140661A50 (CmpDelayCloseWorker.c)
 *     CmpQueryKeySecurity @ 0x140662610 (CmpQueryKeySecurity.c)
 *     CmEnumerateKey @ 0x1406630F0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x140667F60 (CmQueryKey.c)
 *     CmpInitCmRM @ 0x14068AF98 (CmpInitCmRM.c)
 *     CmpLinkHiveToMaster @ 0x14068C808 (CmpLinkHiveToMaster.c)
 *     CmpTrimHive @ 0x14068CD48 (CmpTrimHive.c)
 *     CmpCreateHive @ 0x14068E190 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14068EB68 (CmpReorganizeHive.c)
 *     CmpCloseKeyObject @ 0x1406B6B30 (CmpCloseKeyObject.c)
 *     CmpLateUnloadHiveWorker @ 0x1406B9620 (CmpLateUnloadHiveWorker.c)
 *     CmpStopRMLog @ 0x1406BAA78 (CmpStopRMLog.c)
 *     CmpCleanupTransactionState @ 0x1406BBB5C (CmpCleanupTransactionState.c)
 *     HvpFinishPrimaryWrite @ 0x1406E66E4 (HvpFinishPrimaryWrite.c)
 *     CmpTransMgrSyncHive @ 0x1406EE840 (CmpTransMgrSyncHive.c)
 *     CmpDoLocalizeNextHive @ 0x1407357E0 (CmpDoLocalizeNextHive.c)
 *     CmLockKeyForWrite @ 0x14073C2DC (CmLockKeyForWrite.c)
 *     CmpLoadHiveThread @ 0x14075BB10 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14075C34C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077EB0C (CmpStartSiloRegistryNamespace.c)
 *     CmpAssignKeySecurity @ 0x140786470 (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x140824E80 (CmCallbackGetKeyObjectID.c)
 *     CmReplaceKey @ 0x140829094 (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x14082937C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1408297E0 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140829C6C (CmpEnumerateLayeredKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14082AEF4 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14082B300 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x14082B3B4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082B648 (CmKeyBodyReplicateToVirtual.c)
 *     CmpFlushBackupHive @ 0x14082CE80 (CmpFlushBackupHive.c)
 *     CmpStopSiloKeyLockTracker @ 0x14082ECB8 (CmpStopSiloKeyLockTracker.c)
 *     CmDumpKey @ 0x140839D60 (CmDumpKey.c)
 *     CmSaveKey @ 0x14083AA9C (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14083AE6C (CmSaveMergedKeys.c)
 *     CmpRefreshHive @ 0x14083B84C (CmpRefreshHive.c)
 *     CmpDoReOpenTransKey @ 0x1408404BC (CmpDoReOpenTransKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x14003DCF0 (PsBoostThreadIo.c)
 */

BOOLEAN CmpLockRegistry()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN result; // al

  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    return ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
  }
  return result;
}
