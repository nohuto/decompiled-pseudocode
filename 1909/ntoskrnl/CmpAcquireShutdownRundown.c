/*
 * XREFs of CmpAcquireShutdownRundown @ 0x1405FFA40
 * Callers:
 *     CmpTryToRundownHive @ 0x1401129E0 (CmpTryToRundownHive.c)
 *     NtQueryValueKey @ 0x1405FEFD0 (NtQueryValueKey.c)
 *     CmOpenKey @ 0x1405FF600 (CmOpenKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14062F530 (NtNotifyChangeMultipleKeys.c)
 *     CmLoadAppKey @ 0x14063A4D4 (CmLoadAppKey.c)
 *     NtDeleteKey @ 0x14063B0D0 (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x14063BC6C (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x14063C850 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14063E0F0 (NtQueryMultipleValueKey.c)
 *     CmpSetKeySecurity @ 0x1406409F0 (CmpSetKeySecurity.c)
 *     NtEnumerateValueKey @ 0x140660AE0 (NtEnumerateValueKey.c)
 *     CmLoadKey @ 0x14068BED4 (CmLoadKey.c)
 *     CmpReorganizeHive @ 0x14068EB68 (CmpReorganizeHive.c)
 *     NtSetInformationKey @ 0x1406B8050 (NtSetInformationKey.c)
 *     CmUnloadKey @ 0x1406B8CA4 (CmUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x1406B9620 (CmpLateUnloadHiveWorker.c)
 *     NtCommitRegistryTransaction @ 0x1406E32D0 (NtCommitRegistryTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x1406E8A50 (NtOpenKeyTransactedEx.c)
 *     NtLockRegistryKey @ 0x14073C240 (NtLockRegistryKey.c)
 *     CmpLoadHiveThread @ 0x14075BB10 (CmpLoadHiveThread.c)
 *     CmpSaveBootControlSet @ 0x140822C90 (CmpSaveBootControlSet.c)
 *     NtQueryOpenSubKeysEx @ 0x140823B70 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140823E80 (NtRenameKey.c)
 *     NtSaveMergedKeys @ 0x140824BF0 (NtSaveMergedKeys.c)
 *     CmpLazyCommitWorker @ 0x14082EEA0 (CmpLazyCommitWorker.c)
 *     CmpLoadHiveVolatile @ 0x14083B3D0 (CmpLoadHiveVolatile.c)
 *     CmGetSystemDriverList @ 0x140A12338 (CmGetSystemDriverList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 */

__int64 CmpAcquireShutdownRundown()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v1; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v1 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v1;
}
