/*
 * XREFs of PpDevNodeLockTree @ 0x1406A2C34
 * Callers:
 *     PnpLockDeviceActionQueue @ 0x140158FBC (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x14015D540 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x14029E1A0 (IoTranslateBusAddress.c)
 *     PiControlGetPropertyData @ 0x1406A02E0 (PiControlGetPropertyData.c)
 *     IoGetLegacyVetoList @ 0x1406A23A4 (IoGetLegacyVetoList.c)
 *     PiGetRelatedDevice @ 0x1406A27CC (PiGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1406A2980 (PiControlGetSetDeviceStatus.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A2C00 (PnpAcquireDependencyRelationsLock.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1406A3298 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiGetDeviceDepth @ 0x1406A3310 (PiGetDeviceDepth.c)
 *     PipForDeviceNodeSubtree @ 0x1406A38F8 (PipForDeviceNodeSubtree.c)
 *     PipProcessDevNodeTree @ 0x14070265C (PipProcessDevNodeTree.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14072E630 (PnpProcessQueryRemoveAndEject.c)
 *     PnpDelayedRemoveWorker @ 0x14072F630 (PnpDelayedRemoveWorker.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14072F8C4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiQueryPowerRelations @ 0x140736FCC (PiQueryPowerRelations.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     PpDevCfgProcessDevices @ 0x140754F9C (PpDevCfgProcessDevices.c)
 *     IopQueryInterfaceRecurseUp @ 0x14077B720 (IopQueryInterfaceRecurseUp.c)
 *     IoReportRootDevice @ 0x14077EA20 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x14078175C (PiPagePathSetState.c)
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
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F5C0 (ExIsResourceAcquiredSharedLite.c)
 */

char __fastcall PpDevNodeLockTree(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  ULONG IsResourceAcquiredSharedLite; // edi
  ULONG i; // esi

  CurrentThread = KeGetCurrentThread();
  v2 = 1;
  --CurrentThread->KernelApcDisable;
  if ( !a1 )
    goto LABEL_2;
  v4 = a1 - 1;
  if ( !v4 )
  {
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
LABEL_2:
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
    return v2;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    if ( !ExAcquireResourceExclusiveLite(&PiEngineLock, 0) )
    {
      v2 = 0;
      KeLeaveCriticalRegion();
      return v2;
    }
    goto LABEL_2;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(&IopDeviceTreeLock);
      for ( i = IsResourceAcquiredSharedLite; i; --i )
        ExReleaseResourceLite(&IopDeviceTreeLock);
      for ( ; IsResourceAcquiredSharedLite; --IsResourceAcquiredSharedLite )
        ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
    }
  }
  else
  {
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
    ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
  }
  return v2;
}
