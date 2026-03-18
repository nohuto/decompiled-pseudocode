/*
 * XREFs of CmpLockRegistryExclusive @ 0x140631CA8
 * Callers:
 *     CmDeleteLayeredKey @ 0x140280714 (CmDeleteLayeredKey.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140631678 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrCommitUoW @ 0x14063367C (CmpTransMgrCommitUoW.c)
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x14063D6B0 (CmpSetKeySecurity.c)
 *     CmEnumerateKey @ 0x14064FF30 (CmEnumerateKey.c)
 *     CmpLockRegistryFreezeAware @ 0x140662030 (CmpLockRegistryFreezeAware.c)
 *     CmpCleanupTransactionState @ 0x140699E24 (CmpCleanupTransactionState.c)
 *     CmpCommitLightWeightTransaction @ 0x1406E1D34 (CmpCommitLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406E1F44 (CmpCleanupLightWeightTransaction.c)
 *     CmpDelayFreeRMWorker @ 0x1406EC9B0 (CmpDelayFreeRMWorker.c)
 *     CmpLoadHiveThread @ 0x140757530 (CmpLoadHiveThread.c)
 *     CmpMarkCurrentProfileDirty @ 0x14075C434 (CmpMarkCurrentProfileDirty.c)
 *     CmpFinishSystemHivesLoad @ 0x14075DD80 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x140760BCC (CmpMountPreloadedHives.c)
 *     CmCompleteRegistryInitialization @ 0x140769A5C (CmCompleteRegistryInitialization.c)
 *     CmpSaveBootControlSet @ 0x140823590 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x140823B40 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140823E30 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140824220 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140824470 (NtQueryOpenSubKeysEx.c)
 *     CmEtwRunDown @ 0x1408261C8 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x1408273C4 (CmShutdownSystem.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x14082A56C (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082BF48 (CmKeyBodyReplicateToVirtual.c)
 *     CmFreezeRegistry @ 0x14082E618 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x14082E868 (CmThawRegistry.c)
 *     CmpCloneHwProfile @ 0x1408349A8 (CmpCloneHwProfile.c)
 *     CmpLoadHiveVolatile @ 0x14083BD70 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14083C1EC (CmpRefreshHive.c)
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140A11BA0 (CmGetSystemDriverList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIo @ 0x14003DFB0 (PsBoostThreadIo.c)
 */

BOOLEAN CmpLockRegistryExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite((PERESOURCE)&CmpRegistryLock, 1u);
}
