/*
 * XREFs of CmpLockRegistryExclusive @ 0x1405B16C8
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CBCC (CmDeleteLayeredKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405A9000 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1405A9DD8 (CmDeleteKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1405B1640 (CmpLockRegistryFreezeAware.c)
 *     CmpSetKeySecurity @ 0x1405B8548 (CmpSetKeySecurity.c)
 *     CmEnumerateKey @ 0x1405D2A20 (CmEnumerateKey.c)
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 *     CmpCommitLightWeightTransaction @ 0x140693564 (CmpCommitLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x140693A5C (CmpCleanupLightWeightTransaction.c)
 *     CmpDelayFreeRMWorker @ 0x1406CC7B0 (CmpDelayFreeRMWorker.c)
 *     CmpCleanupTransactionState @ 0x140701C4C (CmpCleanupTransactionState.c)
 *     CmpMarkCurrentProfileDirty @ 0x140730DA4 (CmpMarkCurrentProfileDirty.c)
 *     CmpFinishSystemHivesLoad @ 0x1407325A0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x140735800 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140735B50 (CmpLoadHiveThread.c)
 *     CmCompleteRegistryInitialization @ 0x1407455D4 (CmCompleteRegistryInitialization.c)
 *     CmpSaveBootControlSet @ 0x1407E88F0 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x1407E8ED0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407E91D0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1407E95E0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407E9830 (NtQueryOpenSubKeysEx.c)
 *     CmEtwRunDown @ 0x1407EB6C0 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x1407EC8D4 (CmShutdownSystem.c)
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x1407EFDA0 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F1C94 (CmKeyBodyReplicateToVirtual.c)
 *     CmFreezeRegistry @ 0x1407F5844 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407F5A94 (CmThawRegistry.c)
 *     CmpCloneHwProfile @ 0x1407FB5FC (CmpCloneHwProfile.c)
 *     CmpLoadHiveVolatile @ 0x140802918 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140802DCC (CmpRefreshHive.c)
 *     CmInitSystem1 @ 0x1409C3050 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x1409CC66C (CmGetSystemDriverList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIo @ 0x1400BBF50 (PsBoostThreadIo.c)
 *     CmpRecordRegistryLockAcquire @ 0x1401B2FD4 (CmpRecordRegistryLockAcquire.c)
 */

BOOLEAN CmpLockRegistryExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  CmpRecordRegistryLockAcquire();
  return ExAcquireResourceExclusiveLite((PERESOURCE)&CmpRegistryLock, 1u);
}
