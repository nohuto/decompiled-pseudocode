/*
 * XREFs of PiPagePathSetState @ 0x14078175C
 * Callers:
 *     MiCreatePagingFile @ 0x140770618 (MiCreatePagingFile.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x14077FF60 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpVolumeContextCleanup @ 0x14082F2D0 (CmpVolumeContextCleanup.c)
 *     PpPagePathAssign @ 0x140861364 (PpPagePathAssign.c)
 *     MiDeletePagefile @ 0x14088CDE0 (MiDeletePagefile.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     IoQueueThreadIrp @ 0x14015CA40 (IoQueueThreadIrp.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IoGetRelatedTargetDevice @ 0x140663780 (IoGetRelatedTargetDevice.c)
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406A2C34 (PpDevNodeLockTree.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x140781844 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x1407818A4 (PpIrpAllocateDeviceUsageNotification.c)
 */

__int64 __fastcall PiPagePathSetState(struct _FILE_OBJECT *Object, char a2)
{
  IRP *DeviceUsageNotification; // rax
  IRP *v5; // rbx
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  PDEVICE_OBJECT DeviceObject[8]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Objecta; // [rsp+80h] [rbp+8h] BYREF

  memset(DeviceObject, 0, sizeof(DeviceObject));
  ObfReferenceObject(Object);
  DeviceObject[0] = IoGetRelatedDeviceObject(Object);
  LODWORD(DeviceObject[1]) = 1;
  BYTE4(DeviceObject[1]) = a2;
  DeviceObject[2] = (PDEVICE_OBJECT)Object;
  DeviceUsageNotification = (IRP *)PpIrpAllocateDeviceUsageNotification(DeviceObject);
  v5 = DeviceUsageNotification;
  if ( DeviceUsageNotification )
  {
    IoQueueThreadIrp(DeviceUsageNotification);
    PpDevNodeLockTree(1);
    v6 = IofCallDriver(DeviceObject[0], v5);
    if ( v6 == 259 )
    {
      KeWaitForSingleObject(&DeviceObject[5], Executive, 0, 0, 0LL);
      v6 = (NTSTATUS)DeviceObject[3];
    }
    if ( v6 >= 0 && (int)IoGetRelatedTargetDevice(Object, &Objecta) >= 0 )
    {
      LOBYTE(v7) = a2;
      PoDirectedDripsNotifyPagingDeviceUsage(Objecta, v7);
      ObfDereferenceObject(Objecta);
    }
    PpDevNodeUnlockTree(1);
    return (unsigned int)v6;
  }
  else
  {
    ObfDereferenceObject(Object);
    return 3221225495LL;
  }
}
