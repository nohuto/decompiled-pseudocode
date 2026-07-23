/*
 * XREFs of PpDevNodeUnlockTree @ 0x14059CEB4
 * Callers:
 *     PnpUnlockDeviceActionQueue @ 0x140135460 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140135504 (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x14015F400 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x140288290 (IoTranslateBusAddress.c)
 *     PipForDeviceNodeSubtree @ 0x140586750 (PipForDeviceNodeSubtree.c)
 *     PiControlGetPropertyData @ 0x1405884A0 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140588EF8 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiControlGetSetDeviceStatus @ 0x14059CD40 (PiControlGetSetDeviceStatus.c)
 *     PnpDeleteAllDependencyRelations @ 0x1405A0218 (PnpDeleteAllDependencyRelations.c)
 *     IoGetLegacyVetoList @ 0x1405B1B64 (IoGetLegacyVetoList.c)
 *     PiGetDeviceDepth @ 0x1406C9C48 (PiGetDeviceDepth.c)
 *     PipProcessDevNodeTree @ 0x1406E77FC (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x1406E7E20 (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1406EC858 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1406EC9CC (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x1406ECA40 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406ECAB0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpProcessDependencyRelations @ 0x1406EDB30 (PnpProcessDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1406EE6C8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1406EE9CC (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1406EEB4C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpDelayedRemoveWorker @ 0x1406EFAC0 (PnpDelayedRemoveWorker.c)
 *     IopSortRelationListForRemove @ 0x1406F039C (IopSortRelationListForRemove.c)
 *     PnpRequestDeviceRemoval @ 0x1406F04AC (PnpRequestDeviceRemoval.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 *     PiGetRelatedDevice @ 0x1406F9ACC (PiGetRelatedDevice.c)
 *     PiQueryPowerRelations @ 0x14070CBE8 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14070CFBC (PiQueryPowerDependencyRelations.c)
 *     IoReportDetectedDevice @ 0x14072E410 (IoReportDetectedDevice.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14073AFB4 (PnpReleaseDependencyRelationsLock.c)
 *     PpDevCfgProcessDevices @ 0x14073B67C (PpDevCfgProcessDevices.c)
 *     IopQueryInterfaceRecurseUp @ 0x140756CE0 (IopQueryInterfaceRecurseUp.c)
 *     IoReportRootDevice @ 0x140759DE0 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x14075D3CC (PiPagePathSetState.c)
 *     PnpRestartDeviceNode @ 0x14076105C (PnpRestartDeviceNode.c)
 *     IoDuplicateDependency @ 0x140824AC0 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x140824BF0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x140824C80 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x1408254F0 (PnpGetDeviceDependencyList.c)
 *     IoLockUnlockPnpDeviceTree @ 0x14082581C (IoLockUnlockPnpDeviceTree.c)
 *     IopRetryDeviceRemovalForReset @ 0x140827DB0 (IopRetryDeviceRemovalForReset.c)
 *     PnpDiagRundownRegisterCallback @ 0x1408283B0 (PnpDiagRundownRegisterCallback.c)
 *     PnpProcessCompletedEject @ 0x140829480 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x140829740 (PnpQueuePendingEject.c)
 *     PipSetDevNodeStateFlags @ 0x140829798 (PipSetDevNodeStateFlags.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1408337C0 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x140837A14 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1408383E8 (PiCMDeleteDevice.c)
 *     PpResetProblemDevices @ 0x14083B96C (PpResetProblemDevices.c)
 *     PiControlQueryConflictList @ 0x14083CFC0 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x14083D3C4 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x14083D7EC (PiQueryDeviceRelations.c)
 *     IopWarmEjectDevice @ 0x14083E0B4 (IopWarmEjectDevice.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14086A854 (PopFxDestroyDripsBlockingDeviceList.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x140121020 (ExConvertExclusiveToSharedLite.c)
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
