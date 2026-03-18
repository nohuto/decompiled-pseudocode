/*
 * XREFs of CmpAcquireShutdownRundown @ 0x1405FE010
 * Callers:
 *     CmpTryToRundownHive @ 0x1400993CC (CmpTryToRundownHive.c)
 *     NtQueryValueKey @ 0x1405FD5A0 (NtQueryValueKey.c)
 *     CmOpenKey @ 0x1405FDBD0 (CmOpenKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14062B6E0 (NtNotifyChangeMultipleKeys.c)
 *     CmLoadAppKey @ 0x14063744C (CmLoadAppKey.c)
 *     NtDeleteKey @ 0x140638040 (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x140638BDC (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x1406397C0 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14063B060 (NtQueryMultipleValueKey.c)
 *     CmpSetKeySecurity @ 0x14063D6B0 (CmpSetKeySecurity.c)
 *     NtEnumerateValueKey @ 0x14064D920 (NtEnumerateValueKey.c)
 *     CmpReorganizeHive @ 0x14065EAFC (CmpReorganizeHive.c)
 *     CmpLateUnloadHiveWorker @ 0x140662850 (CmpLateUnloadHiveWorker.c)
 *     CmUnloadKey @ 0x14069A6C4 (CmUnloadKey.c)
 *     NtSetInformationKey @ 0x1406BC830 (NtSetInformationKey.c)
 *     NtCommitRegistryTransaction @ 0x1406E1C50 (NtCommitRegistryTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x1406E7950 (NtOpenKeyTransactedEx.c)
 *     CmLoadKey @ 0x1406E94C4 (CmLoadKey.c)
 *     NtLockRegistryKey @ 0x140739FB0 (NtLockRegistryKey.c)
 *     CmpSaveBootControlSet @ 0x140823590 (CmpSaveBootControlSet.c)
 *     NtQueryOpenSubKeysEx @ 0x140824470 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140824780 (NtRenameKey.c)
 *     NtSaveMergedKeys @ 0x1408254F0 (NtSaveMergedKeys.c)
 *     CmpLazyCommitWorker @ 0x14082F030 (CmpLazyCommitWorker.c)
 *     CmpLoadHiveVolatile @ 0x14083BD70 (CmpLoadHiveVolatile.c)
 *     CmGetSystemDriverList @ 0x140A11BA0 (CmGetSystemDriverList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
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
