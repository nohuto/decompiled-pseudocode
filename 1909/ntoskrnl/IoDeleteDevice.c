/*
 * XREFs of IoDeleteDevice @ 0x1400F0E80
 * Callers:
 *     RawMountVolume @ 0x140691310 (RawMountVolume.c)
 *     RawDeleteVcb @ 0x1406A0AB4 (RawDeleteVcb.c)
 *     PiSwGetChildPdo @ 0x14071F1B0 (PiSwGetChildPdo.c)
 *     IopPnPDispatch @ 0x140722DA0 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x140723480 (IopInitializeDeviceInstanceKey.c)
 *     IopLegacyResourceAllocation @ 0x1407515AC (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x1407516D0 (IopRemoveLegacyDeviceNode.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x140782B24 (IopCreateRootEnumeratedDeviceObject.c)
 *     PiSwDestroyDeviceObject @ 0x140782C60 (PiSwDestroyDeviceObject.c)
 *     VrpRegistryUnload @ 0x1408410C0 (VrpRegistryUnload.c)
 *     PiInitializeDevice @ 0x1408769E0 (PiInitializeDevice.c)
 *     RawShutdown @ 0x1408CD480 (RawShutdown.c)
 *     ViDdiDriverEntry @ 0x140966040 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x140982824 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x140982C00 (ViFilterDispatchPnp.c)
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x140A189B0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140A18C20 (WmipDriverEntry.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400897F4 (IopVerifierExAllocatePool_0.c)
 *     PoRunDownDeviceObject @ 0x1400F0FD8 (PoRunDownDeviceObject.c)
 *     IopCompleteUnloadOrDelete @ 0x1400F10C4 (IopCompleteUnloadOrDelete.c)
 *     IopRemoveTimerFromTimerList @ 0x14019DAA0 (IopRemoveTimerFromTimerList.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IoUnregisterShutdownNotification @ 0x1405A7BA0 (IoUnregisterShutdownNotification.c)
 *     ObQueryNameString @ 0x14062BC10 (ObQueryNameString.c)
 *     PnpFreeInterruptInformation @ 0x14069F62C (PnpFreeInterruptInformation.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x14069FCF8 (EtwTiLogDeviceObjectLoadUnload.c)
 *     ObMakeTemporaryObject @ 0x1406A12C0 (ObMakeTemporaryObject.c)
 *     IovDeleteDevice @ 0x14096333C (IovDeleteDevice.c)
 */

void __stdcall IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  ULONG Flags; // eax
  _OBJECT_NAME_INFORMATION *v2; // rsi
  _OBJECT_NAME_INFORMATION *v3; // rdi
  PIO_TIMER Timer; // rdi
  KIRQL v6; // al
  _OBJECT_NAME_INFORMATION *Pool_0; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  Flags = DeviceObject->Flags;
  v2 = 0LL;
  ReturnLength = 0;
  v3 = 0LL;
  if ( (Flags & 0x40) != 0 && ObQueryNameString(DeviceObject, 0LL, 0, &ReturnLength) == -1073741820 )
  {
    Pool_0 = (_OBJECT_NAME_INFORMATION *)IopVerifierExAllocatePool_0(PagedPool, ReturnLength);
    v3 = Pool_0;
    if ( Pool_0 )
    {
      if ( ObQueryNameString(DeviceObject, Pool_0, ReturnLength, &ReturnLength) >= 0 )
        v2 = v3;
    }
  }
  EtwTiLogDeviceObjectLoadUnload(0LL, &DeviceObject->DriverObject->DriverName, v2);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( (MmVerifierData & 0x90) != 0 )
    IovDeleteDevice(DeviceObject, retaddr);
  if ( (DeviceObject->Flags & 0x800) != 0 )
    IoUnregisterShutdownNotification(DeviceObject);
  Timer = DeviceObject->Timer;
  if ( Timer )
  {
    IopRemoveTimerFromTimerList(DeviceObject->Timer);
    ExFreePoolWithTag(Timer, 0);
  }
  if ( (DeviceObject->Flags & 0x40) != 0 )
    ObMakeTemporaryObject(DeviceObject);
  PoRunDownDeviceObject(DeviceObject);
  PnpFreeInterruptInformation(DeviceObject);
  v6 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceObject->DeviceObjectExtension->ExtensionFlags |= 2u;
  if ( DeviceObject->ReferenceCount )
    KeReleaseQueuedSpinLock(0xAuLL, v6);
  else
    IopCompleteUnloadOrDelete((ULONG_PTR)DeviceObject);
}
