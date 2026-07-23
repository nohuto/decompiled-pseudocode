/*
 * XREFs of IoReportResourceForDetection @ 0x1408272E0
 * Callers:
 *     <none>
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     IoReportResourceUsageInternal @ 0x1408276B8 (IoReportResourceUsageInternal.c)
 */

NTSTATUS __stdcall IoReportResourceForDetection(
        PDRIVER_OBJECT DriverObject,
        PCM_RESOURCE_LIST DriverList,
        ULONG DriverListSize,
        PDEVICE_OBJECT DeviceObject,
        PCM_RESOURCE_LIST DeviceList,
        ULONG DeviceListSize,
        PBOOLEAN ConflictDetected)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *v10; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v12; // rcx
  unsigned __int16 *v13; // rsi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v15; // rcx
  __int64 v16; // rcx
  _WORD *v17; // rcx
  __int64 v18; // rcx

  if ( DeviceObject )
  {
    DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode )
    {
      if ( (DeviceNode[99] & 0x20000) == 0 )
      {
        if ( DriverObject )
        {
          IoAddTriageDumpDataBlock((int)DriverObject, DriverObject->Size);
          if ( DriverObject->DriverName.Length )
          {
            IoAddTriageDumpDataBlock((_DWORD)DriverObject + 56, 2);
            IoAddTriageDumpDataBlock((int)DriverObject->DriverName.Buffer, DriverObject->DriverName.Length);
          }
        }
        IoAddTriageDumpDataBlock((int)DeviceObject, DeviceObject->Size);
        v10 = DeviceObject->DriverObject;
        if ( v10 )
        {
          IoAddTriageDumpDataBlock((int)v10, v10->Size);
          p_DriverName = &DeviceObject->DriverObject->DriverName;
          if ( p_DriverName->Length )
          {
            IoAddTriageDumpDataBlock((int)p_DriverName, 2);
            IoAddTriageDumpDataBlock(
              (int)DeviceObject->DriverObject->DriverName.Buffer,
              DeviceObject->DriverObject->DriverName.Length);
          }
        }
        v12 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
        if ( v12 )
        {
          v13 = (unsigned __int16 *)(v12 + 40);
          IoAddTriageDumpDataBlock((int)v12, 784);
          if ( *v13 )
          {
            IoAddTriageDumpDataBlock((int)v13, 2);
            IoAddTriageDumpDataBlock(*((_QWORD *)v13 + 1), *v13);
          }
          DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
          v15 = (char *)DeviceObjectExtension->DeviceNode + 56;
          if ( *v15 )
          {
            IoAddTriageDumpDataBlock((int)v15, 2);
            IoAddTriageDumpDataBlock(
              *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 8),
              *((unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode + 28));
            DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
          }
          v16 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
          if ( v16 )
          {
            v17 = (_WORD *)(v16 + 56);
            if ( *v17 )
            {
              IoAddTriageDumpDataBlock((int)v17, 2);
              v18 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v18 + 64), *(unsigned __int16 *)(v18 + 56));
            }
          }
        }
        KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)DeviceObject, (ULONG_PTR)DriverObject, 0LL);
      }
    }
  }
  return IoReportResourceUsageInternal(3, (_DWORD)DriverList, (_DWORD)DriverObject, (_DWORD)DriverList);
}
