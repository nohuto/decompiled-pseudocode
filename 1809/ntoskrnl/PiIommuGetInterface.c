/*
 * XREFs of PiIommuGetInterface @ 0x1406F9D10
 * Callers:
 *     PiDmaGuardProcessNewDeviceNode @ 0x1406F9C80 (PiDmaGuardProcessNewDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PnpQueryInterface @ 0x1406FA418 (PnpQueryInterface.c)
 */

__int64 __fastcall PiIommuGetInterface(struct _DEVICE_OBJECT *BugCheckParameter2, _QWORD *a2)
{
  _DWORD *DeviceNode; // rcx
  int Interface; // ebx
  void (__fastcall *v7)(_QWORD); // rax
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v10; // rcx
  unsigned __int16 *v11; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v13; // rcx
  __int64 v14; // rcx
  _WORD *v15; // rcx
  __int64 v16; // rcx

  if ( !BugCheckParameter2 )
    goto LABEL_25;
  DeviceNode = BugCheckParameter2->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((int)BugCheckParameter2, BugCheckParameter2->Size);
    DriverObject = BugCheckParameter2->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((int)DriverObject, DriverObject->Size);
      p_DriverName = &BugCheckParameter2->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((int)p_DriverName, 2);
        IoAddTriageDumpDataBlock(
          (int)BugCheckParameter2->DriverObject->DriverName.Buffer,
          BugCheckParameter2->DriverObject->DriverName.Length);
      }
    }
    v10 = (char *)BugCheckParameter2->DeviceObjectExtension->DeviceNode;
    if ( v10 )
    {
      v11 = (unsigned __int16 *)(v10 + 40);
      IoAddTriageDumpDataBlock((int)v10, 784);
      if ( *v11 )
      {
        IoAddTriageDumpDataBlock((int)v11, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v11 + 1), *v11);
      }
      DeviceObjectExtension = BugCheckParameter2->DeviceObjectExtension;
      v13 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v13 )
      {
        IoAddTriageDumpDataBlock((int)v13, 2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)BugCheckParameter2->DeviceObjectExtension->DeviceNode + 8),
          *((unsigned __int16 *)BugCheckParameter2->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = BugCheckParameter2->DeviceObjectExtension;
      }
      v14 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v14 )
      {
        v15 = (_WORD *)(v14 + 56);
        if ( *v15 )
        {
          IoAddTriageDumpDataBlock((int)v15, 2);
          v16 = *((_QWORD *)BugCheckParameter2->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v16 + 64), *(unsigned __int16 *)(v16 + 56));
        }
      }
    }
LABEL_25:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  Interface = PnpQueryInterface(BugCheckParameter2, (__int64)BugCheckParameter2, a2);
  if ( Interface >= 0 )
  {
    if ( a2[2] && (v7 = (void (__fastcall *)(_QWORD))a2[3]) != 0LL )
    {
      if ( a2[8] && a2[7] )
        return 0;
    }
    else
    {
      v7 = (void (__fastcall *)(_QWORD))a2[3];
    }
    Interface = -1073741637;
    if ( v7 )
      v7(a2[1]);
  }
  return (unsigned int)Interface;
}
