/*
 * XREFs of PiGetDmaAdapterFromBusInterface @ 0x14077B5E4
 * Callers:
 *     IoGetDmaAdapter @ 0x14077B4F0 (IoGetDmaAdapter.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14019B8D8 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PnpQueryInterface @ 0x1407146F0 (PnpQueryInterface.c)
 */

__int64 __fastcall PiGetDmaAdapterFromBusInterface(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
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
  _QWORD v18[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(v18, 0, sizeof(v18));
  v6 = 0LL;
  if ( !DeviceObject )
    goto LABEL_20;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((ULONG)DeviceObject, (PVOID)DeviceObject->Size);
    DriverObject = DeviceObject->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
      p_DriverName = &DeviceObject->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
        IoAddTriageDumpDataBlock(
          (ULONG)DeviceObject->DriverObject->DriverName.Buffer,
          (PVOID)DeviceObject->DriverObject->DriverName.Length);
      }
    }
    v11 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v11 )
    {
      v12 = (unsigned __int16 *)(v11 + 40);
      IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)0x310);
      if ( *v12 )
      {
        IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v12 + 1), (PVOID)*v12);
      }
      DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
      v14 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v14 )
      {
        IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
      }
      v15 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v15 )
      {
        v16 = (_WORD *)(v15 + 56);
        if ( *v16 )
        {
          IoAddTriageDumpDataBlock((ULONG)v16, (PVOID)2);
          v17 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 64), (PVOID)*(unsigned __int16 *)(v17 + 56));
        }
      }
    }
LABEL_20:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)DeviceObject, 0LL, 0LL);
  }
  if ( (int)PnpQueryInterface(DeviceObject, (ULONG_PTR)&GUID_BUS_INTERFACE_STANDARD, 1u, 0x40u, 0LL, (USHORT *)v18) >= 0 )
  {
    if ( v18[5] )
      v6 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))v18[5])(v18[1], a2, a3);
    ((void (__fastcall *)(_QWORD))v18[3])(v18[1]);
  }
  return v6;
}
