/*
 * XREFs of PpDevNodeUnlockTree @ 0x14059BEB4
 * Callers:
 *     PnpUnlockDeviceActionQueue @ 0x140135390 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140135434 (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x14015F300 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x1402880A0 (IoTranslateBusAddress.c)
 *     PipForDeviceNodeSubtree @ 0x140585750 (PipForDeviceNodeSubtree.c)
 *     PiControlGetPropertyData @ 0x1405874A0 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140587EF8 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiControlGetSetDeviceStatus @ 0x14059BD40 (PiControlGetSetDeviceStatus.c)
 *     PnpDeleteAllDependencyRelations @ 0x14059F218 (PnpDeleteAllDependencyRelations.c)
 *     IoGetLegacyVetoList @ 0x1405B0B64 (IoGetLegacyVetoList.c)
 *     PiGetDeviceDepth @ 0x1406C89A8 (PiGetDeviceDepth.c)
 *     PipProcessDevNodeTree @ 0x1406E655C (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x1406E6B80 (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1406EB5B8 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1406EB72C (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x1406EB7A0 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406EB810 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpProcessDependencyRelations @ 0x1406EC890 (PnpProcessDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1406ED428 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1406ED72C (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1406ED8AC (PnpQueuePendingSurpriseRemoval.c)
 *     PnpDelayedRemoveWorker @ 0x1406EE820 (PnpDelayedRemoveWorker.c)
 *     IopSortRelationListForRemove @ 0x1406EF0FC (IopSortRelationListForRemove.c)
 *     PnpRequestDeviceRemoval @ 0x1406EF20C (PnpRequestDeviceRemoval.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF790 (PnpProcessQueryRemoveAndEject.c)
 *     PiGetRelatedDevice @ 0x1406F882C (PiGetRelatedDevice.c)
 *     PiQueryPowerRelations @ 0x14070B948 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14070BD1C (PiQueryPowerDependencyRelations.c)
 *     IoReportDetectedDevice @ 0x14072D220 (IoReportDetectedDevice.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140739DC4 (PnpReleaseDependencyRelationsLock.c)
 *     PpDevCfgProcessDevices @ 0x14073A48C (PpDevCfgProcessDevices.c)
 *     IopQueryInterfaceRecurseUp @ 0x140755AF0 (IopQueryInterfaceRecurseUp.c)
 *     IoReportRootDevice @ 0x140758BF0 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x14075C1DC (PiPagePathSetState.c)
 *     PnpRestartDeviceNode @ 0x14075FE6C (PnpRestartDeviceNode.c)
 *     IoDuplicateDependency @ 0x1408238C0 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x1408239F0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x140823A80 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x1408242F0 (PnpGetDeviceDependencyList.c)
 *     IoLockUnlockPnpDeviceTree @ 0x14082461C (IoLockUnlockPnpDeviceTree.c)
 *     IopRetryDeviceRemovalForReset @ 0x140826BB0 (IopRetryDeviceRemovalForReset.c)
 *     PnpDiagRundownRegisterCallback @ 0x1408271B0 (PnpDiagRundownRegisterCallback.c)
 *     PnpProcessCompletedEject @ 0x140828280 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x140828540 (PnpQueuePendingEject.c)
 *     PipSetDevNodeStateFlags @ 0x140828598 (PipSetDevNodeStateFlags.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x140832560 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x1408367B4 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140837188 (PiCMDeleteDevice.c)
 *     PpResetProblemDevices @ 0x14083A70C (PpResetProblemDevices.c)
 *     PiControlQueryConflictList @ 0x14083BD60 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x14083C164 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x14083C58C (PiQueryDeviceRelations.c)
 *     IopWarmEjectDevice @ 0x14083CE54 (IopWarmEjectDevice.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408695F4 (PopFxDestroyDripsBlockingDeviceList.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x140120F50 (ExConvertExclusiveToSharedLite.c)
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
