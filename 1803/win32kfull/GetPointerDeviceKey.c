/*
 * XREFs of GetPointerDeviceKey @ 0x1C01A3148
 * Callers:
 *     RetrieveCalibrationData @ 0x1C019DD00 (RetrieveCalibrationData.c)
 *     _SetCalibrationData @ 0x1C01A37C0 (_SetCalibrationData.c)
 * Callees:
 *     GetPointerDevicePDO @ 0x1C0101F44 (GetPointerDevicePDO.c)
 *     GetDeviceObjectPointer @ 0x1C0102130 (GetDeviceObjectPointer.c)
 */

_BOOL8 __fastcall GetPointerDeviceKey(struct _UNICODE_STRING *a1, void **a2, __int64 a3)
{
  int DeviceObjectPointer; // ebx
  PVOID v6; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-10h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp+20h] BYREF

  DeviceObject = 0LL;
  DeviceObjectPointer = GetDeviceObjectPointer(a1, 2u, a3, &Handle, &v6, (PDEVICE_OBJECT *)&Object);
  if ( DeviceObjectPointer >= 0 )
  {
    ObfReferenceObject(Object);
    DeviceObjectPointer = GetPointerDevicePDO((PDEVICE_OBJECT)Object, &DeviceObject);
    if ( DeviceObjectPointer >= 0 )
      DeviceObjectPointer = IoOpenDeviceRegistryKey(DeviceObject, 1u, 0x20006u, a2);
    ObfDereferenceObject(Object);
    ObfDereferenceObject(v6);
    ObfDereferenceObject(DeviceObject);
    ZwClose(Handle);
  }
  return DeviceObjectPointer >= 0;
}
