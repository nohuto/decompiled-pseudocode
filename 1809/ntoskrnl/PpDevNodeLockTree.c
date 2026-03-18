/*
 * XREFs of PpDevNodeLockTree @ 0x14059BF10
 * Callers:
 *     PnpLockDeviceActionQueue @ 0x140135414 (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x14015F2E0 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x140287FA0 (IoTranslateBusAddress.c)
 *     PipForDeviceNodeSubtree @ 0x140585750 (PipForDeviceNodeSubtree.c)
 *     PiControlGetPropertyData @ 0x1405874A0 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140587EF8 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiControlGetSetDeviceStatus @ 0x14059BD40 (PiControlGetSetDeviceStatus.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14059D8F4 (PnpAcquireDependencyRelationsLock.c)
 *     IoGetLegacyVetoList @ 0x1405B0B64 (IoGetLegacyVetoList.c)
 *     PiGetDeviceDepth @ 0x1406C89C8 (PiGetDeviceDepth.c)
 *     PipProcessDevNodeTree @ 0x1406E657C (PipProcessDevNodeTree.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1406ED74C (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpDelayedRemoveWorker @ 0x1406EE840 (PnpDelayedRemoveWorker.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF7B0 (PnpProcessQueryRemoveAndEject.c)
 *     PiGetRelatedDevice @ 0x1406F884C (PiGetRelatedDevice.c)
 *     PiQueryPowerRelations @ 0x14070B968 (PiQueryPowerRelations.c)
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 *     PpDevCfgProcessDevices @ 0x14073A4AC (PpDevCfgProcessDevices.c)
 *     IopQueryInterfaceRecurseUp @ 0x140755B10 (IopQueryInterfaceRecurseUp.c)
 *     IoReportRootDevice @ 0x140758C10 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x14075C1FC (PiPagePathSetState.c)
 *     PnpRestartDeviceNode @ 0x14075FE8C (PnpRestartDeviceNode.c)
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
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400B9AC0 (ExIsResourceAcquiredSharedLite.c)
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
