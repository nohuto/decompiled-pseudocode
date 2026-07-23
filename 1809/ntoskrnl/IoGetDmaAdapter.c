/*
 * XREFs of IoGetDmaAdapter @ 0x140756AF0
 * Callers:
 *     VfGetDmaAdapter @ 0x14092C140 (VfGetDmaAdapter.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     IoGetDeviceProperty @ 0x1405886E0 (IoGetDeviceProperty.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x140756BC0 (PiGetDmaAdapterFromBusInterface.c)
 */

struct _DMA_ADAPTER *__stdcall IoGetDmaAdapter(
        PDEVICE_OBJECT PhysicalDeviceObject,
        struct _DEVICE_DESCRIPTION *DeviceDescription,
        PULONG NumberOfMapRegisters)
{
  struct _DMA_ADAPTER *DmaAdapterFromBusInterface; // rdi
  _DWORD *DeviceNode; // rcx
  size_t v8; // r8
  NTSTATUS DeviceProperty; // eax
  int v10; // edx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v13; // rcx
  unsigned __int16 *v14; // rsi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v16; // rcx
  __int64 v17; // rcx
  _WORD *v18; // rcx
  __int64 v19; // rcx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v21[20]; // [rsp+40h] [rbp-78h] BYREF
  int PropertyBuffer[11]; // [rsp+54h] [rbp-64h] BYREF

  DmaAdapterFromBusInterface = 0LL;
  if ( PhysicalDeviceObject )
  {
    DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock((int)PhysicalDeviceObject, PhysicalDeviceObject->Size);
      DriverObject = PhysicalDeviceObject->DriverObject;
      if ( DriverObject )
      {
        IoAddTriageDumpDataBlock((int)DriverObject, DriverObject->Size);
        p_DriverName = &PhysicalDeviceObject->DriverObject->DriverName;
        if ( p_DriverName->Length )
        {
          IoAddTriageDumpDataBlock((int)p_DriverName, 2);
          IoAddTriageDumpDataBlock(
            (int)PhysicalDeviceObject->DriverObject->DriverName.Buffer,
            PhysicalDeviceObject->DriverObject->DriverName.Length);
        }
      }
      v13 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
      if ( v13 )
      {
        v14 = (unsigned __int16 *)(v13 + 40);
        IoAddTriageDumpDataBlock((int)v13, 784);
        if ( *v14 )
        {
          IoAddTriageDumpDataBlock((int)v14, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v14 + 1), *v14);
        }
        DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
        v16 = (char *)DeviceObjectExtension->DeviceNode + 56;
        if ( *v16 )
        {
          IoAddTriageDumpDataBlock((int)v16, 2);
          IoAddTriageDumpDataBlock(
            *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
            *((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
          DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
        }
        v17 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
        if ( v17 )
        {
          v18 = (_WORD *)(v17 + 56);
          if ( *v18 )
          {
            IoAddTriageDumpDataBlock((int)v18, 2);
            v19 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v19 + 64), *(unsigned __int16 *)(v19 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
    }
    ((void (__fastcall *)(struct _KTHREAD *, PDEVICE_OBJECT))off_1403FF648[0])(
      KeGetCurrentThread(),
      PhysicalDeviceObject);
    if ( ((DeviceDescription->InterfaceType + 1) & 0xFFFFFFEF) == 0 )
    {
      if ( DeviceDescription->Version >= 3 )
      {
        v8 = 0LL;
        if ( DeviceDescription->Version == 3 )
          v8 = 64LL;
      }
      else
      {
        v8 = 40LL;
      }
      memmove(v21, DeviceDescription, v8);
      DeviceProperty = IoGetDeviceProperty(
                         PhysicalDeviceObject,
                         DevicePropertyLegacyBusType,
                         4u,
                         PropertyBuffer,
                         ResultLength);
      v10 = PropertyBuffer[0];
      if ( DeviceProperty < 0 )
        v10 = 1;
      PropertyBuffer[0] = v10;
    }
    DmaAdapterFromBusInterface = (struct _DMA_ADAPTER *)PiGetDmaAdapterFromBusInterface(PhysicalDeviceObject);
    ((void (__fastcall *)(struct _KTHREAD *, _QWORD))off_1403FF648[0])(KeGetCurrentThread(), 0LL);
  }
  return DmaAdapterFromBusInterface;
}
