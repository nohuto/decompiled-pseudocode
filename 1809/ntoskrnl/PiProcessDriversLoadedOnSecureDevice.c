/*
 * XREFs of PiProcessDriversLoadedOnSecureDevice @ 0x140842B54
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406E7EEC (PipCallDriverAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PnpRequestDeviceRemoval @ 0x1406F04AC (PnpRequestDeviceRemoval.c)
 *     PnpQueryInterface @ 0x1406FA418 (PnpQueryInterface.c)
 *     PnpTraceSecureDeviceEnumeration @ 0x14083B2F4 (PnpTraceSecureDeviceEnumeration.c)
 *     PipUnprotectDevice @ 0x140842C0C (PipUnprotectDevice.c)
 */

__int64 __fastcall PiProcessDriversLoadedOnSecureDevice(__int64 a1)
{
  int v2; // ebx
  USHORT v4; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+38h] [rbp-40h]
  void (__fastcall *v6)(__int64); // [rsp+48h] [rbp-30h]

  if ( (int)PnpQueryInterface(
              *(PDEVICE_OBJECT *)(a1 + 32),
              (ULONG_PTR)&GUID_SECURE_DRIVER_INTERFACE,
              1u,
              0x38u,
              0LL,
              &v4) < 0 )
  {
    v2 = PipUnprotectDevice(a1);
    if ( v2 < 0 )
    {
      PnpRequestDeviceRemoval(a1, 0, 48, -1073741790);
      v2 = -1073741106;
    }
  }
  else
  {
    v6(v5);
    v2 = 0;
  }
  PnpTraceSecureDeviceEnumeration();
  return (unsigned int)v2;
}
