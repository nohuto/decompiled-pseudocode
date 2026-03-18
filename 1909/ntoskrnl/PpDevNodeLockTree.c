/*
 * XREFs of PpDevNodeLockTree @ 0x140670114
 * Callers:
 *     PnpLockDeviceActionQueue @ 0x14015965C (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x14015DBE0 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x14029DF00 (IoTranslateBusAddress.c)
 *     PipForDeviceNodeSubtree @ 0x140623BC8 (PipForDeviceNodeSubtree.c)
 *     IoGetLegacyVetoList @ 0x14066F0F8 (IoGetLegacyVetoList.c)
 *     PiGetRelatedDevice @ 0x14066FCAC (PiGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x14066FE60 (PiControlGetSetDeviceStatus.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406700E0 (PnpAcquireDependencyRelationsLock.c)
 *     PiControlGetPropertyData @ 0x140671A60 (PiControlGetPropertyData.c)
 *     PiGetDeviceDepth @ 0x1406EADA0 (PiGetDeviceDepth.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1406ED86C (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PipProcessDevNodeTree @ 0x14070443C (PipProcessDevNodeTree.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140730890 (PnpProcessQueryRemoveAndEject.c)
 *     PnpDelayedRemoveWorker @ 0x140731890 (PnpDelayedRemoveWorker.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140731B24 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiQueryPowerRelations @ 0x14073922C (PiQueryPowerRelations.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     PpDevCfgProcessDevices @ 0x140755A2C (PpDevCfgProcessDevices.c)
 *     IopQueryInterfaceRecurseUp @ 0x14077DFF0 (IopQueryInterfaceRecurseUp.c)
 *     IoReportRootDevice @ 0x140781440 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x140783ABC (PiPagePathSetState.c)
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
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F300 (ExIsResourceAcquiredSharedLite.c)
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
