/*
 * XREFs of PiPagePathSetState @ 0x140783ABC
 * Callers:
 *     MiCreatePagingFile @ 0x140773BF8 (MiCreatePagingFile.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x140782980 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpVolumeContextCleanup @ 0x14082F140 (CmpVolumeContextCleanup.c)
 *     PpPagePathAssign @ 0x140860A64 (PpPagePathAssign.c)
 *     MiDeletePagefile @ 0x14088C600 (MiDeletePagefile.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IoQueueThreadIrp @ 0x14015D0E0 (IoQueueThreadIrp.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PpDevNodeUnlockTree @ 0x14066FFEC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140670114 (PpDevNodeLockTree.c)
 *     IoGetRelatedTargetDevice @ 0x1406911F8 (IoGetRelatedTargetDevice.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x140783BA4 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x140783C04 (PpIrpAllocateDeviceUsageNotification.c)
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
