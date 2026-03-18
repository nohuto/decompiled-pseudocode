/*
 * XREFs of PpDevNodeUnlockTree @ 0x14066FFEC
 * Callers:
 *     PnpUnlockDeviceActionQueue @ 0x1401595B8 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x14015965C (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x14015DBE0 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x14029DF00 (IoTranslateBusAddress.c)
 *     PipForDeviceNodeSubtree @ 0x140623BC8 (PipForDeviceNodeSubtree.c)
 *     IoGetLegacyVetoList @ 0x14066F0F8 (IoGetLegacyVetoList.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14066FC88 (PnpReleaseDependencyRelationsLock.c)
 *     PiGetRelatedDevice @ 0x14066FCAC (PiGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x14066FE60 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetPropertyData @ 0x140671A60 (PiControlGetPropertyData.c)
 *     PiGetDeviceDepth @ 0x1406EADA0 (PiGetDeviceDepth.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1406ED86C (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1407008C0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipNotifyDeviceDependencyList @ 0x140700A38 (PipNotifyDeviceDependencyList.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140700AA8 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PipProcessDevNodeTree @ 0x14070443C (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x140704A6C (PnpCheckForActiveDependencies.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140730890 (PnpProcessQueryRemoveAndEject.c)
 *     IopSortRelationListForRemove @ 0x140730FFC (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x1407315BC (PnpProcessDependencyRelations.c)
 *     PnpDelayedRemoveWorker @ 0x140731890 (PnpDelayedRemoveWorker.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140731B24 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140732734 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemoval @ 0x140733830 (PnpRequestDeviceRemoval.c)
 *     PiQueryPowerRelations @ 0x14073922C (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140739600 (PiQueryPowerDependencyRelations.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     PpDevCfgProcessDevices @ 0x140755A2C (PpDevCfgProcessDevices.c)
 *     IopQueryInterfaceRecurseUp @ 0x14077DFF0 (IopQueryInterfaceRecurseUp.c)
 *     IoReportRootDevice @ 0x140781440 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x140783ABC (PiPagePathSetState.c)
 *     IoReserveDependency @ 0x14085D520 (IoReserveDependency.c)
 *     IoSetDependency @ 0x14085D5C0 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14085DE40 (PnpGetDeviceDependencyList.c)
 *     IoLockUnlockPnpDeviceTree @ 0x14085E16C (IoLockUnlockPnpDeviceTree.c)
 *     IopRetryDeviceRemovalForReset @ 0x140860710 (IopRetryDeviceRemovalForReset.c)
 *     PnpDiagRundownRegisterCallback @ 0x140860D30 (PnpDiagRundownRegisterCallback.c)
 *     PnpRestartDeviceNode @ 0x140861AE8 (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140861E70 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x14086212C (PnpQueuePendingEject.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14086C670 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x140870890 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1408712B4 (PiCMDeleteDevice.c)
 *     PpResetProblemDevices @ 0x140874BA0 (PpResetProblemDevices.c)
 *     PiControlQueryConflictList @ 0x1408765C0 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x1408769E0 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x140876DE8 (PiQueryDeviceRelations.c)
 *     IopWarmEjectDevice @ 0x140877740 (IopWarmEjectDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExConvertExclusiveToSharedLite @ 0x140121820 (ExConvertExclusiveToSharedLite.c)
 */

void __fastcall PpDevNodeUnlockTree(int a1)
{
  struct _ERESOURCE *v1; // rcx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
  {
    v1 = &IopDeviceTreeLock;
LABEL_3:
    ExReleaseResourceLite(v1);
    goto LABEL_4;
  }
  v2 = a1 - 1;
  if ( !v2 || (v3 = v2 - 1) == 0 || (v4 = v3 - 1) == 0 )
  {
    ExReleaseResourceLite(&IopDeviceTreeLock);
    v1 = &PiEngineLock;
    goto LABEL_3;
  }
  if ( v4 == 1 )
    ExConvertExclusiveToSharedLite(&IopDeviceTreeLock);
LABEL_4:
  KeLeaveCriticalRegion();
}
