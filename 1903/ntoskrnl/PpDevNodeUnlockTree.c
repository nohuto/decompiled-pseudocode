/*
 * XREFs of PpDevNodeUnlockTree @ 0x1406A2B0C
 * Callers:
 *     PnpUnlockDeviceActionQueue @ 0x140158F18 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140158FBC (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x14015D540 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x14029E1A0 (IoTranslateBusAddress.c)
 *     PiControlGetPropertyData @ 0x1406A02E0 (PiControlGetPropertyData.c)
 *     IoGetLegacyVetoList @ 0x1406A23A4 (IoGetLegacyVetoList.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1406A27A8 (PnpReleaseDependencyRelationsLock.c)
 *     PiGetRelatedDevice @ 0x1406A27CC (PiGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1406A2980 (PiControlGetSetDeviceStatus.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1406A3298 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiGetDeviceDepth @ 0x1406A3310 (PiGetDeviceDepth.c)
 *     PipForDeviceNodeSubtree @ 0x1406A38F8 (PipForDeviceNodeSubtree.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406FEAE0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipNotifyDeviceDependencyList @ 0x1406FEC58 (PipNotifyDeviceDependencyList.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1406FECC8 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PipProcessDevNodeTree @ 0x14070265C (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x140702C8C (PnpCheckForActiveDependencies.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14072E630 (PnpProcessQueryRemoveAndEject.c)
 *     IopSortRelationListForRemove @ 0x14072ED9C (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x14072F35C (PnpProcessDependencyRelations.c)
 *     PnpDelayedRemoveWorker @ 0x14072F630 (PnpDelayedRemoveWorker.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14072F8C4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1407304D4 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemoval @ 0x1407315D0 (PnpRequestDeviceRemoval.c)
 *     PiQueryPowerRelations @ 0x140736FCC (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x1407373A0 (PiQueryPowerDependencyRelations.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     PpDevCfgProcessDevices @ 0x140754F9C (PpDevCfgProcessDevices.c)
 *     IopQueryInterfaceRecurseUp @ 0x14077B720 (IopQueryInterfaceRecurseUp.c)
 *     IoReportRootDevice @ 0x14077EA20 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x14078175C (PiPagePathSetState.c)
 *     IoReserveDependency @ 0x14085DE20 (IoReserveDependency.c)
 *     IoSetDependency @ 0x14085DEC0 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14085E740 (PnpGetDeviceDependencyList.c)
 *     IoLockUnlockPnpDeviceTree @ 0x14085EA6C (IoLockUnlockPnpDeviceTree.c)
 *     IopRetryDeviceRemovalForReset @ 0x140861010 (IopRetryDeviceRemovalForReset.c)
 *     PnpDiagRundownRegisterCallback @ 0x140861630 (PnpDiagRundownRegisterCallback.c)
 *     PnpRestartDeviceNode @ 0x1408623E8 (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140862770 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x140862A2C (PnpQueuePendingEject.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14086CF70 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x140871190 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140871BB4 (PiCMDeleteDevice.c)
 *     PpResetProblemDevices @ 0x1408754A0 (PpResetProblemDevices.c)
 *     PiControlQueryConflictList @ 0x140876EC0 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x1408772E0 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1408776E8 (PiQueryDeviceRelations.c)
 *     IopWarmEjectDevice @ 0x140878040 (IopWarmEjectDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400EECC0 (ExConvertExclusiveToSharedLite.c)
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
