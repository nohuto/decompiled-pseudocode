/*
 * XREFs of IoAssignResources @ 0x140824470
 * Callers:
 *     <none>
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     IopLegacyResourceAllocation @ 0x14072E084 (IopLegacyResourceAllocation.c)
 */

NTSTATUS __stdcall IoAssignResources(
        PUNICODE_STRING RegistryPath,
        PUNICODE_STRING DriverClassName,
        PDRIVER_OBJECT DriverObject,
        PDEVICE_OBJECT DeviceObject,
        PIO_RESOURCE_REQUIREMENTS_LIST RequestedResources,
        PCM_RESOURCE_LIST *AllocatedResources)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *v9; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v11; // rcx
  unsigned __int16 *v12; // rbp
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v14; // rcx
  __int64 v15; // rcx
  _WORD *v16; // rcx
  __int64 v17; // rcx
  PIO_RESOURCE_REQUIREMENTS_LIST v18; // r9

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
        v9 = DeviceObject->DriverObject;
        if ( v9 )
        {
          IoAddTriageDumpDataBlock((int)v9, v9->Size);
          p_DriverName = &DeviceObject->DriverObject->DriverName;
          if ( p_DriverName->Length )
          {
            IoAddTriageDumpDataBlock((int)p_DriverName, 2);
            IoAddTriageDumpDataBlock(
              (int)DeviceObject->DriverObject->DriverName.Buffer,
              DeviceObject->DriverObject->DriverName.Length);
          }
        }
        v11 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
        if ( v11 )
        {
          v12 = (unsigned __int16 *)(v11 + 40);
          IoAddTriageDumpDataBlock((int)v11, 784);
          if ( *v12 )
          {
            IoAddTriageDumpDataBlock((int)v12, 2);
            IoAddTriageDumpDataBlock(*((_QWORD *)v12 + 1), *v12);
          }
          DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
          v14 = (char *)DeviceObjectExtension->DeviceNode + 56;
          if ( *v14 )
          {
            IoAddTriageDumpDataBlock((int)v14, 2);
            IoAddTriageDumpDataBlock(
              *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 8),
              *((unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode + 28));
            DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
          }
          v15 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
          if ( v15 )
          {
            v16 = (_WORD *)(v15 + 56);
            if ( *v16 )
            {
              IoAddTriageDumpDataBlock((int)v16, 2);
              v17 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 64), *(unsigned __int16 *)(v17 + 56));
            }
          }
        }
        KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)DeviceObject, (ULONG_PTR)DriverObject, 0LL);
      }
    }
  }
  v18 = RequestedResources;
  if ( RequestedResources && (!RequestedResources->AlternativeLists || !RequestedResources->List[0].Count) )
    v18 = 0LL;
  if ( AllocatedResources )
    *AllocatedResources = 0LL;
  return IopLegacyResourceAllocation(
           2,
           (__int64)DriverObject,
           (__int64)DeviceObject,
           (__int64)v18,
           (const void **)AllocatedResources);
}
