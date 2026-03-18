/*
 * XREFs of IoVerifyVolume @ 0x140856C30
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x140037180 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x14003BA80 (IopQueueThreadIrp.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     IopDereferenceVpbAndFree @ 0x1400B4D40 (IopDereferenceVpbAndFree.c)
 *     IopDecrementVpbRefCount @ 0x140102B20 (IopDecrementVpbRefCount.c)
 *     IopReferenceVerifyVpb @ 0x140293CD4 (IopReferenceVerifyVpb.c)
 *     IopMountVolume @ 0x140681CF4 (IopMountVolume.c)
 *     PoVolumeDevice @ 0x1407393C4 (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x14073ABE0 (IopCreateVpb.c)
 */

NTSTATUS __stdcall IoVerifyVolume(PDEVICE_OBJECT DeviceObject, BOOLEAN AllowRawMount)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_DeviceLock; // r15
  NTSTATUS v6; // edi
  struct _DEVICE_OBJECT *v7; // rdi
  struct _DEVICE_OBJECT *i; // rax
  __int64 Irp; // rax
  IRP *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r14
  _QWORD v14[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+40h] BYREF
  PDEVICE_OBJECT DeviceObjecta; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+58h] BYREF

  memset(&Event, 0, sizeof(Event));
  v14[0] = 0LL;
  v14[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  p_DeviceLock = &DeviceObject->DeviceLock;
  KeWaitForSingleObject(&DeviceObject->DeviceLock, Executive, 0, 0, 0LL);
  if ( !IopReferenceVerifyVpb((__int64)DeviceObject, (ULONG_PTR *)&v16, &DeviceObjecta) )
  {
    v6 = 0;
LABEL_11:
    if ( (int)IopCreateVpb((__int64)DeviceObject) < 0
      || (PoVolumeDevice((__int64)DeviceObject),
          v18 = 0LL,
          (int)IopMountVolume(DeviceObject, AllowRawMount, 1, 0, (ULONG_PTR *)&v18) < 0) )
    {
      DeviceObject->Flags &= ~2u;
    }
    else if ( v18 )
    {
      IopDecrementVpbRefCount(v18, 1);
    }
    goto LABEL_16;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v7 = DeviceObjecta;
  for ( i = DeviceObjecta->AttachedDevice; i; i = i->AttachedDevice )
    v7 = i;
  Irp = IopAllocateIrpExReturn();
  v10 = (IRP *)Irp;
  if ( !Irp )
  {
    IopDereferenceVpbAndFree(v16);
    v6 = -1073741670;
    goto LABEL_16;
  }
  *(_DWORD *)(Irp + 16) = 66;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 80) = &Event;
  *(_QWORD *)(Irp + 72) = v14;
  v11 = *(_QWORD *)(Irp + 184);
  v12 = v16;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v11 - 70) = AllowRawMount != 0;
  *(_QWORD *)(v11 - 56) = DeviceObjecta;
  *(_WORD *)(v11 - 72) = 525;
  *(_QWORD *)(v11 - 64) = v12;
  IopQueueThreadIrp(Irp, v11);
  v6 = IofCallDriver(v7, v10);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v14[0];
  }
  IopDereferenceVpbAndFree(v12);
  if ( v6 == -1073741806 )
    goto LABEL_11;
LABEL_16:
  KeSetEvent(p_DeviceLock, 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
