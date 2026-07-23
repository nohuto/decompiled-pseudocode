/*
 * XREFs of PiGetDmaAdapterFromBusInterface @ 0x140756BC0
 * Callers:
 *     IoGetDmaAdapter @ 0x140756AF0 (IoGetDmaAdapter.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PnpQueryInterface @ 0x1406FA418 (PnpQueryInterface.c)
 */

__int64 __fastcall PiGetDmaAdapterFromBusInterface(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v11; // rcx
  unsigned __int16 *v12; // rsi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v14; // rcx
  __int64 v15; // rcx
  _WORD *v16; // rcx
  __int64 v17; // rcx
  USHORT v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h]
  void (__fastcall *v20)(__int64); // [rsp+48h] [rbp-30h]
  __int64 (__fastcall *v21)(__int64, __int64, __int64); // [rsp+58h] [rbp-20h]

  v3 = 0LL;
  if ( !DeviceObject )
    goto LABEL_20;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((int)DeviceObject, DeviceObject->Size);
    DriverObject = DeviceObject->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((int)DriverObject, DriverObject->Size);
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
LABEL_20:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)DeviceObject, 0LL, 0LL);
  }
  if ( (int)PnpQueryInterface(DeviceObject, (ULONG_PTR)&GUID_BUS_INTERFACE_STANDARD, 1u, 0x40u, 0LL, &v18) >= 0 )
  {
    if ( v21 )
      v3 = v21(v19, a2, a3);
    v20(v19);
  }
  return v3;
}
