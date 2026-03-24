/*
 * XREFs of CmpInitializeThreadInfo @ 0x1401B2F7C
 * Callers:
 *     CmpDoQueryKeyName @ 0x140016840 (CmpDoQueryKeyName.c)
 *     CmpLazyWriteWorker @ 0x140188B10 (CmpLazyWriteWorker.c)
 *     CmInitializeThreadInfo @ 0x1401B2F58 (CmInitializeThreadInfo.c)
 *     NtDeleteKey @ 0x1405A9940 (NtDeleteKey.c)
 *     CmpDelayDerefKCBWorker @ 0x1405B10B0 (CmpDelayDerefKCBWorker.c)
 *     CmLoadDifferencingKey @ 0x1405B4DBC (CmLoadDifferencingKey.c)
 *     NtCreateKey @ 0x1405B59F0 (NtCreateKey.c)
 *     NtDeleteValueKey @ 0x1405B6030 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1405B7130 (NtQueryMultipleValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1405CB1A0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpSecurityMethod @ 0x1405CB2E0 (CmpSecurityMethod.c)
 *     NtSetValueKey @ 0x1405CC8E0 (NtSetValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405CE180 (NtNotifyChangeMultipleKeys.c)
 *     CmpDelayCloseWorker @ 0x1405D1760 (CmpDelayCloseWorker.c)
 *     NtEnumerateKey @ 0x1405D22F0 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1405D3890 (NtEnumerateValueKey.c)
 *     NtOpenKey @ 0x1405E04C0 (NtOpenKey.c)
 *     NtOpenKeyEx @ 0x1405E0E50 (NtOpenKeyEx.c)
 *     CmNotifyRunDown @ 0x1405F917C (CmNotifyRunDown.c)
 *     CmpDeleteKeyObject @ 0x14063F500 (CmpDeleteKeyObject.c)
 *     NtQueryKey @ 0x14063FB90 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140640340 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x140641350 (CmpParseKey.c)
 *     NtLockRegistryKey @ 0x14068E270 (NtLockRegistryKey.c)
 *     NtUnloadKeyEx @ 0x140691CD0 (NtUnloadKeyEx.c)
 *     NtRollbackRegistryTransaction @ 0x1406932D0 (NtRollbackRegistryTransaction.c)
 *     NtCommitRegistryTransaction @ 0x140693410 (NtCommitRegistryTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x1406938F0 (CmpRollbackLightWeightTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x140693B10 (NtOpenKeyTransactedEx.c)
 *     NtCreateKeyTransacted @ 0x140693C70 (NtCreateKeyTransacted.c)
 *     CmKtmNotification @ 0x1406942B0 (CmKtmNotification.c)
 *     CmpCloseKeyObject @ 0x140694D80 (CmpCloseKeyObject.c)
 *     NtSetInformationKey @ 0x140696FE0 (NtSetInformationKey.c)
 *     CmpWorkerEngineWorker @ 0x1406978A0 (CmpWorkerEngineWorker.c)
 *     ExpWatchProductTypeWork @ 0x1406BF910 (ExpWatchProductTypeWork.c)
 *     NtFlushKey @ 0x1406BFF70 (NtFlushKey.c)
 *     NtCreateRegistryTransaction @ 0x1406C7CE0 (NtCreateRegistryTransaction.c)
 *     CmpDelayFreeRMWorker @ 0x1406CC790 (CmpDelayFreeRMWorker.c)
 *     CmpEnumerateCallback @ 0x1406D0710 (CmpEnumerateCallback.c)
 *     NtUnloadKey @ 0x140702850 (NtUnloadKey.c)
 *     NtInitializeRegistry @ 0x14071DCD0 (NtInitializeRegistry.c)
 *     NtUnloadKey2 @ 0x14071F1F0 (NtUnloadKey2.c)
 *     CmInitServerSiloState @ 0x140730704 (CmInitServerSiloState.c)
 *     CmpFinishSystemHivesLoad @ 0x140732580 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140735B30 (CmpLoadHiveThread.c)
 *     AdtpObjsInitialize @ 0x140737228 (AdtpObjsInitialize.c)
 *     CmpRegisterCallbackInternal @ 0x14075F0C8 (CmpRegisterCallbackInternal.c)
 *     NtCompactKeys @ 0x1407E8EB0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407E91B0 (NtCompressKey.c)
 *     NtFreezeRegistry @ 0x1407E9390 (NtFreezeRegistry.c)
 *     NtOpenRegistryTransaction @ 0x1407E9450 (NtOpenRegistryTransaction.c)
 *     NtQueryOpenSubKeys @ 0x1407E95C0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407E9810 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1407E9B80 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1407EA070 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407EA3F0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x1407EA6B0 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1407EA960 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x1407EABA0 (NtThawRegistry.c)
 *     CmCallbackGetKeyObjectID @ 0x1407EAC30 (CmCallbackGetKeyObjectID.c)
 *     CmSetCallbackObjectContext @ 0x1407EADD0 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x1407EB010 (CmUnRegisterCallback.c)
 *     CmEtwRunDown @ 0x1407EB6A0 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x1407EC8B4 (CmShutdownSystem.c)
 *     CmpFreezeThawWorker @ 0x1407F5C50 (CmpFreezeThawWorker.c)
 *     CmReconcileAndValidateAllHives @ 0x1407F5CF0 (CmReconcileAndValidateAllHives.c)
 *     CmpLazyCommitWorker @ 0x1407F6240 (CmpLazyCommitWorker.c)
 *     CmGetRootKeyObjectForSilo @ 0x1407F6BD0 (CmGetRootKeyObjectForSilo.c)
 *     CmInitSiloNamespace @ 0x1407F6C48 (CmInitSiloNamespace.c)
 *     CmpFreeSiloContextCallback @ 0x1407F6CA0 (CmpFreeSiloContextCallback.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407F9C88 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpForceFlushWorker @ 0x1407FB160 (CmpForceFlushWorker.c)
 *     CmpCloneHwProfile @ 0x1407FB5DC (CmpCloneHwProfile.c)
 *     PspDeleteExternalServerSiloState @ 0x1408870D4 (PspDeleteExternalServerSiloState.c)
 *     ExpWatchLicenseInfoWork @ 0x1408CD560 (ExpWatchLicenseInfoWork.c)
 *     CmInitSystem1 @ 0x1409C3050 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x1409CC66C (CmGetSystemDriverList.c)
 *     CmpGetSystemControlValues @ 0x1409CE008 (CmpGetSystemControlValues.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall CmpInitializeThreadInfo(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  _OWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].WaitBlock[2].SparePtr;
  if ( result )
  {
    *(_OWORD *)a1 = *result;
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  *a1 = result;
  CurrentThread[1].WaitBlock[2].SparePtr = a1;
  return result;
}
