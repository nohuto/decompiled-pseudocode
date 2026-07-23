/*
 * XREFs of CmpLockRegistryExclusive @ 0x1405B26C8
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CEBC (CmDeleteLayeredKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405AA000 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1405AADD8 (CmDeleteKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1405B2640 (CmpLockRegistryFreezeAware.c)
 *     CmpSetKeySecurity @ 0x1405B9548 (CmpSetKeySecurity.c)
 *     CmEnumerateKey @ 0x1405D3A20 (CmEnumerateKey.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmpCommitLightWeightTransaction @ 0x140694704 (CmpCommitLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x140694BFC (CmpCleanupLightWeightTransaction.c)
 *     CmpDelayFreeRMWorker @ 0x1406CDA30 (CmpDelayFreeRMWorker.c)
 *     CmpCleanupTransactionState @ 0x140702ECC (CmpCleanupTransactionState.c)
 *     CmpMarkCurrentProfileDirty @ 0x140731F74 (CmpMarkCurrentProfileDirty.c)
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407369D0 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140736D20 (CmpLoadHiveThread.c)
 *     CmCompleteRegistryInitialization @ 0x1407467A4 (CmCompleteRegistryInitialization.c)
 *     CmpSaveBootControlSet @ 0x1407E9AD0 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x1407EA0B0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407EA3B0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1407EA7C0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407EAA10 (NtQueryOpenSubKeysEx.c)
 *     CmEtwRunDown @ 0x1407EC8A0 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x1407EDAB4 (CmShutdownSystem.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x1407F0F80 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F2E74 (CmKeyBodyReplicateToVirtual.c)
 *     CmFreezeRegistry @ 0x1407F6A24 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407F6C74 (CmThawRegistry.c)
 *     CmpCloneHwProfile @ 0x1407FC7DC (CmpCloneHwProfile.c)
 *     CmpLoadHiveVolatile @ 0x140803AF8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140803FAC (CmpRefreshHive.c)
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x1409CD66C (CmGetSystemDriverList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     CmpRecordRegistryLockAcquire @ 0x1401B3134 (CmpRecordRegistryLockAcquire.c)
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
