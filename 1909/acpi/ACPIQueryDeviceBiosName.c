/*
 * XREFs of ACPIQueryDeviceBiosName @ 0x1C0095168
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C000BBB8 (ACPIAddInitializationDependencies.c)
 *     ACPIIsDebuggingDevice @ 0x1C0094430 (ACPIIsDebuggingDevice.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0094D90 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C00A08F8 (ACPIInternalNotifyAvailableDeviceObject.c)
 *     AcpiIsDeviceSecure @ 0x1C00A14E8 (AcpiIsDeviceSecure.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C00AF848 (ACPIIoctlQueryDeviceBiosName.c)
 * Callees:
 *     ACPIAmliBuildObjectPathname @ 0x1C000BD28 (ACPIAmliBuildObjectPathname.c)
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C000BF00 (OSConvertDeviceHandleToNSHANDLE.c)
 *     ACPIInitUnicodeString @ 0x1C00951F8 (ACPIInitUnicodeString.c)
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
