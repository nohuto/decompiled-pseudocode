/*
 * XREFs of PipUnprotectDevice @ 0x140842C0C
 * Callers:
 *     PiProcessDriversLoadedOnSecureDevice @ 0x140842B54 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PnpQueryInterface @ 0x1406FA418 (PnpQueryInterface.c)
 */

__int64 __fastcall PipUnprotectDevice(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rdi
  __int64 v4; // [rsp+30h] [rbp-B8h]
  USHORT v5; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v6; // [rsp+40h] [rbp-A8h]
  void (__fastcall *v7)(__int64); // [rsp+50h] [rbp-98h]
  __int64 (__fastcall *v8)(__int64); // [rsp+58h] [rbp-90h]
  _QWORD v9[14]; // [rsp+60h] [rbp-88h] BYREF

  v1 = PnpQueryInterface(*(PDEVICE_OBJECT *)(a1 + 32), (ULONG_PTR)&GUID_SDEV_IDENTIFIER_INTERFACE, 1u, 0x28u, 0LL, &v5);
  if ( v1 < 0 )
  {
    v2 = v4;
  }
  else
  {
    v2 = v8(v6);
    v7(v6);
  }
  if ( v1 >= 0 )
  {
    memset(v9, 0, 0x68uLL);
    v9[1] = v2;
    return (unsigned int)VslpEnterIumSecureMode(2u, 61LL, 0, (__int64)v9);
  }
  return (unsigned int)v1;
}
