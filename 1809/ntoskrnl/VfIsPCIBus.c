/*
 * XREFs of VfIsPCIBus @ 0x14092BA28
 * Callers:
 *     VfGetDmaAdapter @ 0x14092B140 (VfGetDmaAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140195910 (_wcsicmp.c)
 *     IoGetDeviceProperty @ 0x1405876E0 (IoGetDeviceProperty.c)
 */

__int64 __fastcall VfIsPCIBus(struct _DEVICE_OBJECT *a1)
{
  unsigned int v1; // ebx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-78h] BYREF
  wchar_t PropertyBuffer[40]; // [rsp+40h] [rbp-68h] BYREF

  v1 = 0;
  ResultLength[0] = 0;
  if ( !a1 )
    return 0LL;
  if ( !IoGetDeviceProperty(a1, DevicePropertyDeviceDescription, 0x50u, PropertyBuffer, ResultLength) )
    return wcsicmp(PropertyBuffer, L"PCI bus") == 0;
  return v1;
}
