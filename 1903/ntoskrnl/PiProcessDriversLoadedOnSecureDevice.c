/*
 * XREFs of PiProcessDriversLoadedOnSecureDevice @ 0x14087D310
 * Callers:
 *     PipCallDriverAddDevice @ 0x140702D58 (PipCallDriverAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PnpQueryInterface @ 0x1407146F0 (PnpQueryInterface.c)
 *     PnpRequestDeviceRemoval @ 0x1407315D0 (PnpRequestDeviceRemoval.c)
 *     PnpTraceSecureDeviceEnumeration @ 0x140874BF4 (PnpTraceSecureDeviceEnumeration.c)
 *     PipUnprotectDevice @ 0x14087D3DC (PipUnprotectDevice.c)
 */

__int64 __fastcall PiProcessDriversLoadedOnSecureDevice(__int64 a1)
{
  int v2; // ebx
  _QWORD v4[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(v4, 0, 0x38uLL);
  if ( (int)PnpQueryInterface(
              *(PDEVICE_OBJECT *)(a1 + 32),
              (ULONG_PTR)&GUID_SECURE_DRIVER_INTERFACE,
              1u,
              0x38u,
              0LL,
              (USHORT *)v4) < 0 )
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
    ((void (__fastcall *)(_QWORD))v4[3])(v4[1]);
    v2 = 0;
  }
  PnpTraceSecureDeviceEnumeration();
  return (unsigned int)v2;
}
