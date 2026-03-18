/*
 * XREFs of PnpLockDeviceActionQueue @ 0x140135414
 * Callers:
 *     IoControlPnpDeviceActionQueue @ 0x140135350 (IoControlPnpDeviceActionQueue.c)
 *     PopUpdateWakeSourceWorker @ 0x1402DBD60 (PopUpdateWakeSourceWorker.c)
 *     IoBuildPoDeviceNotifyList @ 0x14056CE10 (IoBuildPoDeviceNotifyList.c)
 *     PopDisengageDirectedDrips @ 0x140868894 (PopDisengageDirectedDrips.c)
 *     PipInitializeCoreDriversByGroup @ 0x1409CA988 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeResetEvent @ 0x1400B8A80 (KeResetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     PpDevNodeUnlockTree @ 0x14059BEB4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14059BF10 (PpDevNodeLockTree.c)
 */

__int64 PnpLockDeviceActionQueue()
{
  KIRQL v0; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v3; // rcx

  while ( 1 )
  {
    PpDevNodeLockTree(1LL);
    v0 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
    if ( !PnpEnumerationInProgress )
      break;
    KxReleaseSpinLock(&PnpSpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v0 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v0);
    PpDevNodeUnlockTree(1LL);
    KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
  }
  PnpEnumerationInProgress = 1;
  KeResetEvent(&PnpEnumerationLock);
  KxReleaseSpinLock(&PnpSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v0 < 2u )
  {
    v3 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v3->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v3);
  }
  result = v0;
  __writecr8(v0);
  return result;
}
