/*
 * XREFs of IoRequestDeviceEjectEx @ 0x140287F00
 * Callers:
 *     IoRequestDeviceEject @ 0x140287EE0 (IoRequestDeviceEject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoRequestDeviceEjectEx(
        PDEVICE_OBJECT PhysicalDeviceObject,
        PIO_DEVICE_EJECT_CALLBACK Callback,
        PVOID Context,
        PDRIVER_OBJECT DriverObject)
{
  _DWORD *DeviceNode; // rcx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rdi
  const void **v11; // rbx
  struct _DRIVER_OBJECT *v12; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v14; // rcx
  unsigned __int16 *v15; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v17; // rcx
  __int64 v18; // rcx
  _WORD *v19; // rcx
  __int64 v20; // rcx

  if ( !PhysicalDeviceObject )
    goto LABEL_20;
  DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((int)PhysicalDeviceObject, PhysicalDeviceObject->Size);
    v12 = PhysicalDeviceObject->DriverObject;
    if ( v12 )
    {
      IoAddTriageDumpDataBlock((int)v12, v12->Size);
      p_DriverName = &PhysicalDeviceObject->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((int)p_DriverName, 2);
        IoAddTriageDumpDataBlock(
          (int)PhysicalDeviceObject->DriverObject->DriverName.Buffer,
          PhysicalDeviceObject->DriverObject->DriverName.Length);
      }
    }
    v14 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v14 )
    {
      v15 = (unsigned __int16 *)(v14 + 40);
      IoAddTriageDumpDataBlock((int)v14, 784);
      if ( *v15 )
      {
        IoAddTriageDumpDataBlock((int)v15, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v15 + 1), *v15);
      }
      DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
      v17 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v17 )
      {
        IoAddTriageDumpDataBlock((int)v17, 2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
          *((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
      }
      v18 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v18 )
      {
        v19 = (_WORD *)(v18 + 56);
        if ( *v19 )
        {
          IoAddTriageDumpDataBlock((int)v19, 2);
          v20 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v20 + 64), *(unsigned __int16 *)(v20 + 56));
        }
      }
    }
LABEL_20:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
  }
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x5D8uLL, 0x46706E50u);
  if ( !PoolWithTag )
    return -1073741670;
  v11 = (const void **)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
  PoolWithTag->List.Flink = (struct _LIST_ENTRY *)Callback;
  PoolWithTag->List.Blink = (struct _LIST_ENTRY *)Context;
  memmove(&PoolWithTag[2], v11[6], *((unsigned __int16 *)v11 + 20));
  *((_WORD *)&PoolWithTag[2].List.Flink + ((unsigned __int64)*((unsigned __int16 *)v11 + 20) >> 1)) = 0;
  if ( DriverObject )
    ObfReferenceObjectWithTag(DriverObject, 0x45706E50u);
  PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))DriverObject;
  LODWORD(PoolWithTag[14].WorkerRoutine) = 0;
  WORD2(PoolWithTag[14].WorkerRoutine) = 0;
  PoolWithTag[1].WorkerRoutine = (void (__fastcall *)(void *))PnpRequestDeviceEjectExWorker;
  PoolWithTag[1].Parameter = PoolWithTag;
  PoolWithTag[1].List.Flink = 0LL;
  ExQueueWorkItem(PoolWithTag + 1, DelayedWorkQueue);
  return 0;
}
