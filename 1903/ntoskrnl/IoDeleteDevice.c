/*
 * XREFs of IoDeleteDevice @ 0x1400B3E60
 * Callers:
 *     RawMountVolume @ 0x140663EFC (RawMountVolume.c)
 *     RawDeleteVcb @ 0x140682554 (RawDeleteVcb.c)
 *     PiSwGetChildPdo @ 0x14071D320 (PiSwGetChildPdo.c)
 *     IopPnPDispatch @ 0x140720F00 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x1407215E0 (IopInitializeDeviceInstanceKey.c)
 *     IopLegacyResourceAllocation @ 0x140750B1C (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x140750C40 (IopRemoveLegacyDeviceNode.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x140780104 (IopCreateRootEnumeratedDeviceObject.c)
 *     PiSwDestroyDeviceObject @ 0x1407808F8 (PiSwDestroyDeviceObject.c)
 *     VrpRegistryUnload @ 0x140841A60 (VrpRegistryUnload.c)
 *     PiInitializeDevice @ 0x1408772E0 (PiInitializeDevice.c)
 *     RawShutdown @ 0x1408CDBA0 (RawShutdown.c)
 *     ViDdiDriverEntry @ 0x140966040 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x140982824 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x140982C00 (ViFilterDispatchPnp.c)
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x140A184F0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140A18760 (WmipDriverEntry.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400884F4 (IopVerifierExAllocatePool_0.c)
 *     PoRunDownDeviceObject @ 0x1400B3FB8 (PoRunDownDeviceObject.c)
 *     IopCompleteUnloadOrDelete @ 0x1400B40A4 (IopCompleteUnloadOrDelete.c)
 *     IopRemoveTimerFromTimerList @ 0x14019D320 (IopRemoveTimerFromTimerList.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IoUnregisterShutdownNotification @ 0x1405A7BC0 (IoUnregisterShutdownNotification.c)
 *     ObQueryNameString @ 0x140627DC0 (ObQueryNameString.c)
 *     PnpFreeInterruptInformation @ 0x1406810CC (PnpFreeInterruptInformation.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x140681798 (EtwTiLogDeviceObjectLoadUnload.c)
 *     ObMakeTemporaryObject @ 0x1406EA0A0 (ObMakeTemporaryObject.c)
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
