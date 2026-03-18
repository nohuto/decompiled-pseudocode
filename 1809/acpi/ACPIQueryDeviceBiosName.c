/*
 * XREFs of ACPIQueryDeviceBiosName @ 0x1C0096A84
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C0011158 (ACPIAddInitializationDependencies.c)
 *     ACPIIsDebuggingDevice @ 0x1C0095DA4 (ACPIIsDebuggingDevice.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C00966F0 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C009F018 (ACPIInternalNotifyAvailableDeviceObject.c)
 *     AcpiIsDeviceSecure @ 0x1C009F5CC (AcpiIsDeviceSecure.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C00AC130 (ACPIIoctlQueryDeviceBiosName.c)
 * Callees:
 *     ACPIAmliBuildObjectPathname @ 0x1C00112C8 (ACPIAmliBuildObjectPathname.c)
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C00114A0 (OSConvertDeviceHandleToNSHANDLE.c)
 *     ACPIInitUnicodeString @ 0x1C0096B14 (ACPIInitUnicodeString.c)
 */

__int64 __fastcall ACPIQueryDeviceBiosName(ULONG_PTR a1, struct _UNICODE_STRING *a2)
{
  __int64 v3; // rax
  int v4; // ebx
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  *(_QWORD *)&a2->Length = 0LL;
  a2->Buffer = 0LL;
  P = 0LL;
  v3 = OSConvertDeviceHandleToNSHANDLE(a1);
  if ( v3 )
  {
    v4 = ACPIAmliBuildObjectPathname(v3, (char **)&P, 1);
    if ( v4 >= 0 )
    {
      v4 = ACPIInitUnicodeString(a2);
      if ( v4 >= 0 )
        v4 = 0;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return (unsigned int)v4;
}
