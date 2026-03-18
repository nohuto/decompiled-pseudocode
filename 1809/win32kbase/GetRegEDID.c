/*
 * XREFs of GetRegEDID @ 0x1C00578A0
 * Callers:
 *     ?GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C00577E0 (-GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GetRegEDID(struct _DEVICE_OBJECT *a1, unsigned int *a2, _QWORD *a3)
{
  NTSTATUS v5; // edi
  void *DeviceRegKey; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp+20h] BYREF

  if ( IoOpenDeviceRegistryKey(a1, 1u, 0x20019u, &DeviceRegKey) < 0 )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, L"EDID");
  v5 = ZwQueryValueKey(DeviceRegKey, &DestinationString, KeyValueFullInformation, a2, 0x190u, &ResultLength);
  if ( v5 >= 0 )
  {
    if ( a2[3] < 0x80 )
      v5 = -1073741823;
    else
      *a3 = (char *)a2 + a2[2];
  }
  ZwClose(DeviceRegKey);
  return v5 >= 0;
}
