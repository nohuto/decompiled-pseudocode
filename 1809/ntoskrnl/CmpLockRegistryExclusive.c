/*
 * XREFs of CmpLockRegistryExclusive @ 0x1405B16C8
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CCCC (CmDeleteLayeredKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405A9000 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1405A9DD8 (CmDeleteKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1405B1640 (CmpLockRegistryFreezeAware.c)
 *     CmpSetKeySecurity @ 0x1405B8548 (CmpSetKeySecurity.c)
 *     CmEnumerateKey @ 0x1405D2A20 (CmEnumerateKey.c)
 *     CmpDoParseKey @ 0x140641CA0 (CmpDoParseKey.c)
 *     CmpCommitLightWeightTransaction @ 0x140693544 (CmpCommitLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x140693A3C (CmpCleanupLightWeightTransaction.c)
 *     CmpDelayFreeRMWorker @ 0x1406CC790 (CmpDelayFreeRMWorker.c)
 *     CmpCleanupTransactionState @ 0x140701C2C (CmpCleanupTransactionState.c)
 *     CmpMarkCurrentProfileDirty @ 0x140730D84 (CmpMarkCurrentProfileDirty.c)
 *     CmpFinishSystemHivesLoad @ 0x140732580 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407357E0 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140735B30 (CmpLoadHiveThread.c)
 *     CmCompleteRegistryInitialization @ 0x1407455B4 (CmCompleteRegistryInitialization.c)
 *     CmpSaveBootControlSet @ 0x1407E88D0 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x1407E8EB0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407E91B0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1407E95C0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407E9810 (NtQueryOpenSubKeysEx.c)
 *     CmEtwRunDown @ 0x1407EB6A0 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x1407EC8B4 (CmShutdownSystem.c)
 *     CmRenameKey @ 0x1407EDAF4 (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x1407EFD80 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F1C74 (CmKeyBodyReplicateToVirtual.c)
 *     CmFreezeRegistry @ 0x1407F5824 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407F5A74 (CmThawRegistry.c)
 *     CmpCloneHwProfile @ 0x1407FB5DC (CmpCloneHwProfile.c)
 *     CmpLoadHiveVolatile @ 0x1408028F8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140802DAC (CmpRefreshHive.c)
 *     CmInitSystem1 @ 0x1409C3050 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x1409CC66C (CmGetSystemDriverList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIo @ 0x1400BBF70 (PsBoostThreadIo.c)
 *     CmpRecordRegistryLockAcquire @ 0x1401B2FF4 (CmpRecordRegistryLockAcquire.c)
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
