/*
 * XREFs of IoReportResourceUsage @ 0x1408274D0
 * Callers:
 *     <none>
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     IoReportResourceUsageInternal @ 0x1408276B8 (IoReportResourceUsageInternal.c)
 */

NTSTATUS __stdcall IoReportResourceUsage(
        PUNICODE_STRING DriverClassName,
        PDRIVER_OBJECT DriverObject,
        PCM_RESOURCE_LIST DriverList,
        ULONG DriverListSize,
        PDEVICE_OBJECT DeviceObject,
        PCM_RESOURCE_LIST DeviceList,
        ULONG DeviceListSize,
        BOOLEAN OverrideConflict,
        PBOOLEAN ConflictDetected)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *v11; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v13; // rcx
  unsigned __int16 *v14; // rsi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v16; // rcx
  __int64 v17; // rcx
  _WORD *v18; // rcx
  __int64 v19; // rcx

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
        v11 = DeviceObject->DriverObject;
        if ( v11 )
        {
          IoAddTriageDumpDataBlock((int)v11, v11->Size);
          p_DriverName = &DeviceObject->DriverObject->DriverName;
          if ( p_DriverName->Length )
          {
            IoAddTriageDumpDataBlock((int)p_DriverName, 2);
            IoAddTriageDumpDataBlock(
              (int)DeviceObject->DriverObject->DriverName.Buffer,
              DeviceObject->DriverObject->DriverName.Length);
          }
        }
        v13 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
        if ( v13 )
        {
          v14 = (unsigned __int16 *)(v13 + 40);
          IoAddTriageDumpDataBlock((int)v13, 784);
          if ( *v14 )
          {
            IoAddTriageDumpDataBlock((int)v14, 2);
            IoAddTriageDumpDataBlock(*((_QWORD *)v14 + 1), *v14);
          }
          DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
          v16 = (char *)DeviceObjectExtension->DeviceNode + 56;
          if ( *v16 )
          {
            IoAddTriageDumpDataBlock((int)v16, 2);
            IoAddTriageDumpDataBlock(
              *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 8),
              *((unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode + 28));
            DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
          }
          v17 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
          if ( v17 )
          {
            v18 = (_WORD *)(v17 + 56);
            if ( *v18 )
            {
              IoAddTriageDumpDataBlock((int)v18, 2);
              v19 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v19 + 64), *(unsigned __int16 *)(v19 + 56));
            }
          }
        }
        KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)DeviceObject, (ULONG_PTR)DriverObject, 0LL);
      }
    }
  }
  return IoReportResourceUsageInternal(0, (_DWORD)DriverObject, (_DWORD)DriverObject, (_DWORD)DriverList);
}
