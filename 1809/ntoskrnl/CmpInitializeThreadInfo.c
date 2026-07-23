/*
 * XREFs of CmpInitializeThreadInfo @ 0x1401B30BC
 * Callers:
 *     CmpDoQueryKeyName @ 0x140016840 (CmpDoQueryKeyName.c)
 *     CmpLazyWriteWorker @ 0x140188C50 (CmpLazyWriteWorker.c)
 *     CmInitializeThreadInfo @ 0x1401B3098 (CmInitializeThreadInfo.c)
 *     NtDeleteKey @ 0x1405AA940 (NtDeleteKey.c)
 *     CmpDelayDerefKCBWorker @ 0x1405B20B0 (CmpDelayDerefKCBWorker.c)
 *     CmLoadDifferencingKey @ 0x1405B5DBC (CmLoadDifferencingKey.c)
 *     NtCreateKey @ 0x1405B69F0 (NtCreateKey.c)
 *     NtDeleteValueKey @ 0x1405B7030 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1405B8130 (NtQueryMultipleValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1405CC1A0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpSecurityMethod @ 0x1405CC2E0 (CmpSecurityMethod.c)
 *     NtSetValueKey @ 0x1405CD8E0 (NtSetValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405CF180 (NtNotifyChangeMultipleKeys.c)
 *     CmpDelayCloseWorker @ 0x1405D2760 (CmpDelayCloseWorker.c)
 *     NtEnumerateKey @ 0x1405D32F0 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1405D4890 (NtEnumerateValueKey.c)
 *     NtOpenKey @ 0x1405E14C0 (NtOpenKey.c)
 *     NtOpenKeyEx @ 0x1405E1E50 (NtOpenKeyEx.c)
 *     CmNotifyRunDown @ 0x1405FA17C (CmNotifyRunDown.c)
 *     CmpDeleteKeyObject @ 0x140640520 (CmpDeleteKeyObject.c)
 *     NtQueryKey @ 0x140640BB0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140641360 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x140642370 (CmpParseKey.c)
 *     NtLockRegistryKey @ 0x14068F430 (NtLockRegistryKey.c)
 *     NtUnloadKeyEx @ 0x140692E90 (NtUnloadKeyEx.c)
 *     NtRollbackRegistryTransaction @ 0x140694490 (NtRollbackRegistryTransaction.c)
 *     NtCommitRegistryTransaction @ 0x1406945D0 (NtCommitRegistryTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x140694AB0 (CmpRollbackLightWeightTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x140694CD0 (NtOpenKeyTransactedEx.c)
 *     NtCreateKeyTransacted @ 0x140694E30 (NtCreateKeyTransacted.c)
 *     CmKtmNotification @ 0x140695470 (CmKtmNotification.c)
 *     CmpCloseKeyObject @ 0x140695F40 (CmpCloseKeyObject.c)
 *     NtSetInformationKey @ 0x1406981A0 (NtSetInformationKey.c)
 *     CmpWorkerEngineWorker @ 0x140698A60 (CmpWorkerEngineWorker.c)
 *     ExpWatchProductTypeWork @ 0x1406C0BB0 (ExpWatchProductTypeWork.c)
 *     NtFlushKey @ 0x1406C1210 (NtFlushKey.c)
 *     NtCreateRegistryTransaction @ 0x1406C8F80 (NtCreateRegistryTransaction.c)
 *     CmpDelayFreeRMWorker @ 0x1406CDA30 (CmpDelayFreeRMWorker.c)
 *     CmpEnumerateCallback @ 0x1406D19B0 (CmpEnumerateCallback.c)
 *     NtUnloadKey @ 0x140703AF0 (NtUnloadKey.c)
 *     NtInitializeRegistry @ 0x14071EF70 (NtInitializeRegistry.c)
 *     NtUnloadKey2 @ 0x140720490 (NtUnloadKey2.c)
 *     CmInitServerSiloState @ 0x1407318F4 (CmInitServerSiloState.c)
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140736D20 (CmpLoadHiveThread.c)
 *     AdtpObjsInitialize @ 0x140738418 (AdtpObjsInitialize.c)
 *     CmpRegisterCallbackInternal @ 0x1407602B8 (CmpRegisterCallbackInternal.c)
 *     NtCompactKeys @ 0x1407EA0B0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407EA3B0 (NtCompressKey.c)
 *     NtFreezeRegistry @ 0x1407EA590 (NtFreezeRegistry.c)
 *     NtOpenRegistryTransaction @ 0x1407EA650 (NtOpenRegistryTransaction.c)
 *     NtQueryOpenSubKeys @ 0x1407EA7C0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407EAA10 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1407EAD80 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1407EB270 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407EB5F0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x1407EB8B0 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1407EBB60 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x1407EBDA0 (NtThawRegistry.c)
 *     CmCallbackGetKeyObjectID @ 0x1407EBE30 (CmCallbackGetKeyObjectID.c)
 *     CmSetCallbackObjectContext @ 0x1407EBFD0 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x1407EC210 (CmUnRegisterCallback.c)
 *     CmEtwRunDown @ 0x1407EC8A0 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x1407EDAB4 (CmShutdownSystem.c)
 *     CmpFreezeThawWorker @ 0x1407F6E50 (CmpFreezeThawWorker.c)
 *     CmReconcileAndValidateAllHives @ 0x1407F6EF0 (CmReconcileAndValidateAllHives.c)
 *     CmpLazyCommitWorker @ 0x1407F7440 (CmpLazyCommitWorker.c)
 *     CmGetRootKeyObjectForSilo @ 0x1407F7DD0 (CmGetRootKeyObjectForSilo.c)
 *     CmInitSiloNamespace @ 0x1407F7E48 (CmInitSiloNamespace.c)
 *     CmpFreeSiloContextCallback @ 0x1407F7EA0 (CmpFreeSiloContextCallback.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407FAE88 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpForceFlushWorker @ 0x1407FC360 (CmpForceFlushWorker.c)
 *     CmpCloneHwProfile @ 0x1407FC7DC (CmpCloneHwProfile.c)
 *     PspDeleteExternalServerSiloState @ 0x140888334 (PspDeleteExternalServerSiloState.c)
 *     ExpWatchLicenseInfoWork @ 0x1408CE820 (ExpWatchLicenseInfoWork.c)
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x1409CD66C (CmGetSystemDriverList.c)
 *     CmpGetSystemControlValues @ 0x1409CF008 (CmpGetSystemControlValues.c)
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
