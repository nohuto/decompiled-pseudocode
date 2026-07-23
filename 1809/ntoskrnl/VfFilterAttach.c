/*
 * XREFs of VfFilterAttach @ 0x140943F44
 * Callers:
 *     VfDevObjPostAddDevice @ 0x140935088 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x1409350DC (VfDevObjPreAddDevice.c)
 * Callees:
 *     IoGetAttachedDevice @ 0x1400B9190 (IoGetAttachedDevice.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     IoDeleteDevice @ 0x1400DAB60 (IoDeleteDevice.c)
 *     IoInitializeRemoveLockEx @ 0x14016C870 (IoInitializeRemoveLockEx.c)
 *     IoAttachDeviceToDeviceStack @ 0x14016CE50 (IoAttachDeviceToDeviceStack.c)
 *     IoCreateDevice @ 0x140653B90 (IoCreateDevice.c)
 *     IoCreateDriver @ 0x14073B280 (IoCreateDriver.c)
 *     ViFilterIsDeviceExcluded @ 0x140944588 (ViFilterIsDeviceExcluded.c)
 */

void __fastcall VfFilterAttach(PDEVICE_OBJECT TargetDevice, int a2)
{
  PDEVICE_OBJECT AttachedDevice; // rax
  PDEVICE_OBJECT v5; // rbx
  struct _IO_REMOVE_LOCK *DeviceExtension; // rdi
  PDEVICE_OBJECT v7; // rax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  PDEVICE_OBJECT SourceDevice; // [rsp+70h] [rbp+18h] BYREF

  if ( !VfFilterCreated )
  {
    RtlInitUnicodeString(&DestinationString, L"\\DRIVER\\VERIFIER_FILTER");
    IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(PVOID, _QWORD))ViFilterDriverEntry);
    VfFilterCreated = 1;
  }
  if ( VfFilterDriverObject && a2 >= 2 && (a2 <= 3 || (unsigned int)(a2 - 5) <= 1) )
  {
    AttachedDevice = IoGetAttachedDevice(TargetDevice);
    if ( !(unsigned int)ViFilterIsDeviceExcluded(AttachedDevice)
      && IoCreateDevice(VfFilterDriverObject, 0x68u, 0LL, 0x22u, 0x100u, 0, &SourceDevice) >= 0 )
    {
      v5 = SourceDevice;
      DeviceExtension = (struct _IO_REMOVE_LOCK *)SourceDevice->DeviceExtension;
      IoInitializeRemoveLockEx(DeviceExtension + 1, 0x4C526656u, 0, 0, 0x20u);
      DeviceExtension[2].Common.RemoveEvent.Header.WaitListHead.Blink = 0LL;
      v7 = IoAttachDeviceToDeviceStack(v5, TargetDevice);
      *(_QWORD *)&DeviceExtension->Common.RemoveEvent.Header.Lock = v7;
      if ( v7 )
      {
        v5->Flags |= v7->Flags & 0x86014;
        v5->DeviceType = *(_DWORD *)(*(_QWORD *)&DeviceExtension->Common.RemoveEvent.Header.Lock + 72LL);
        v5->Characteristics = *(_DWORD *)(*(_QWORD *)&DeviceExtension->Common.RemoveEvent.Header.Lock + 52LL);
        v5->Flags &= ~0x80u;
        DeviceExtension->Common.RemoveEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v5;
        *(_QWORD *)&DeviceExtension->Common.Removed = TargetDevice;
        _InterlockedOr(&DeviceExtension[3].Common.IoCount, 1u);
      }
      else
      {
        IoDeleteDevice(v5);
      }
    }
  }
}
