/*
 * XREFs of PpDevNodeUnlockTree @ 0x14059BEB4
 * Callers:
 *     PnpUnlockDeviceActionQueue @ 0x140135370 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140135414 (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x14015F2E0 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x140287FA0 (IoTranslateBusAddress.c)
 *     PipForDeviceNodeSubtree @ 0x140585750 (PipForDeviceNodeSubtree.c)
 *     PiControlGetPropertyData @ 0x1405874A0 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140587EF8 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiControlGetSetDeviceStatus @ 0x14059BD40 (PiControlGetSetDeviceStatus.c)
 *     PnpDeleteAllDependencyRelations @ 0x14059F218 (PnpDeleteAllDependencyRelations.c)
 *     IoGetLegacyVetoList @ 0x1405B0B64 (IoGetLegacyVetoList.c)
 *     PiGetDeviceDepth @ 0x1406C89C8 (PiGetDeviceDepth.c)
 *     PipProcessDevNodeTree @ 0x1406E657C (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x1406E6BA0 (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1406EB5D8 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1406EB74C (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x1406EB7C0 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406EB830 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpProcessDependencyRelations @ 0x1406EC8B0 (PnpProcessDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1406ED448 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1406ED74C (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1406ED8CC (PnpQueuePendingSurpriseRemoval.c)
 *     PnpDelayedRemoveWorker @ 0x1406EE840 (PnpDelayedRemoveWorker.c)
 *     IopSortRelationListForRemove @ 0x1406EF11C (IopSortRelationListForRemove.c)
 *     PnpRequestDeviceRemoval @ 0x1406EF22C (PnpRequestDeviceRemoval.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF7B0 (PnpProcessQueryRemoveAndEject.c)
 *     PiGetRelatedDevice @ 0x1406F884C (PiGetRelatedDevice.c)
 *     PiQueryPowerRelations @ 0x14070B968 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14070BD3C (PiQueryPowerDependencyRelations.c)
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140739DE4 (PnpReleaseDependencyRelationsLock.c)
 *     PpDevCfgProcessDevices @ 0x14073A4AC (PpDevCfgProcessDevices.c)
 *     IopQueryInterfaceRecurseUp @ 0x140755B10 (IopQueryInterfaceRecurseUp.c)
 *     IoReportRootDevice @ 0x140758C10 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x14075C1FC (PiPagePathSetState.c)
 *     PnpRestartDeviceNode @ 0x14075FE8C (PnpRestartDeviceNode.c)
 *     IoDuplicateDependency @ 0x1408238E0 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x140823A10 (IoReserveDependency.c)
 *     IoSetDependency @ 0x140823AA0 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140824310 (PnpGetDeviceDependencyList.c)
 *     IoLockUnlockPnpDeviceTree @ 0x14082463C (IoLockUnlockPnpDeviceTree.c)
 *     IopRetryDeviceRemovalForReset @ 0x140826BD0 (IopRetryDeviceRemovalForReset.c)
 *     PnpDiagRundownRegisterCallback @ 0x1408271D0 (PnpDiagRundownRegisterCallback.c)
 *     PnpProcessCompletedEject @ 0x1408282A0 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x140828560 (PnpQueuePendingEject.c)
 *     PipSetDevNodeStateFlags @ 0x1408285B8 (PipSetDevNodeStateFlags.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x140832580 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x1408367D4 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1408371A8 (PiCMDeleteDevice.c)
 *     PpResetProblemDevices @ 0x14083A72C (PpResetProblemDevices.c)
 *     PiControlQueryConflictList @ 0x14083BD80 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x14083C184 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x14083C5AC (PiQueryDeviceRelations.c)
 *     IopWarmEjectDevice @ 0x14083CE74 (IopWarmEjectDevice.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140869614 (PopFxDestroyDripsBlockingDeviceList.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x140120F30 (ExConvertExclusiveToSharedLite.c)
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
