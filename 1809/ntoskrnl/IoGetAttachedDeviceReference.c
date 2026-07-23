/*
 * XREFs of IoGetAttachedDeviceReference @ 0x1400ACD80
 * Callers:
 *     IoBuildPoDeviceNotifyList @ 0x14056DE10 (IoBuildPoDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x140578C68 (IoShutdownSystem.c)
 *     CmpGetVolumeClusterSize @ 0x1405A5094 (CmpGetVolumeClusterSize.c)
 *     CmpVolumeManagerGetContextForFile @ 0x1405A5298 (CmpVolumeManagerGetContextForFile.c)
 *     WmipForwardWmiIrp @ 0x1405FC974 (WmipForwardWmiIrp.c)
 *     IopFilterResourceRequirementsCall @ 0x1406FCD90 (IopFilterResourceRequirementsCall.c)
 *     WmipRegisterDevice @ 0x14070C4CC (WmipRegisterDevice.c)
 *     WmipGetFilePDO @ 0x14071EDF0 (WmipGetFilePDO.c)
 *     VfIrpSendSynchronousIrp @ 0x140931534 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x14005B360 (ObpIncrPointerCount.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDeviceReference(PDEVICE_OBJECT DeviceObject)
{
  __int64 v1; // r8
  unsigned __int8 CurrentIrql; // si
  volatile __int64 **v4; // rcx
  struct _DEVICE_OBJECT *i; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v4 = (volatile __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  KxAcquireQueuedSpinLock((__int64)v4, v4[1], v1);
  for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
    DeviceObject = i;
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)DeviceObject - 48);
  ObpIncrPointerCount((volatile signed __int64 *)&DeviceObject[-1].DeviceLock.Header.WaitListHead);
  KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return DeviceObject;
}
