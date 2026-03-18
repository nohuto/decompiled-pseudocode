/*
 * XREFs of IopCreateRootEnumeratedDeviceObject @ 0x140780104
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1407215E0 (IopInitializeDeviceInstanceKey.c)
 *     IopLegacyResourceAllocation @ 0x140750B1C (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x1408772E0 (PiInitializeDevice.c)
 * Callees:
 *     IoDeleteDevice @ 0x1400B3E60 (IoDeleteDevice.c)
 *     IoCreateDevice @ 0x140681110 (IoCreateDevice.c)
 */

__int64 __fastcall IopCreateRootEnumeratedDeviceObject(_QWORD *a1)
{
  NTSTATUS v2; // ebx
  PDEVICE_OBJECT v3; // rdx
  struct _DEVICE_OBJECT *v4; // rcx
  PDEVICE_OBJECT v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0LL;
  v2 = IoCreateDevice(PnpDriverObject, 4u, 0LL, 4u, 0x80u, 0, &v6);
  if ( v2 < 0 )
  {
    v4 = v6;
  }
  else
  {
    v3 = v6;
    *a1 = v6;
    *(_DWORD *)v3->DeviceExtension = 0;
    v4 = 0LL;
  }
  if ( v4 )
    IoDeleteDevice(v4);
  return (unsigned int)v2;
}
