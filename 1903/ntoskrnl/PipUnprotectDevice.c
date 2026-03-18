/*
 * XREFs of PipUnprotectDevice @ 0x14087D3DC
 * Callers:
 *     PiProcessDriversLoadedOnSecureDevice @ 0x14087D310 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PnpQueryInterface @ 0x1407146F0 (PnpQueryInterface.c)
 */

__int64 __fastcall PipUnprotectDevice(__int64 a1)
{
  int Interface; // ebx
  __int64 v3; // rdi
  _QWORD v5[6]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v6[14]; // [rsp+60h] [rbp-88h] BYREF

  memset(v5, 0, 0x28uLL);
  Interface = PnpQueryInterface(
                *(PDEVICE_OBJECT *)(a1 + 32),
                (ULONG_PTR)&GUID_SDEV_IDENTIFIER_INTERFACE,
                1u,
                0x28u,
                0LL,
                (USHORT *)v5);
  if ( Interface < 0 )
  {
    v3 = v5[5];
  }
  else
  {
    v3 = ((__int64 (__fastcall *)(_QWORD))v5[4])(v5[1]);
    ((void (__fastcall *)(_QWORD))v5[3])(v5[1]);
  }
  if ( Interface >= 0 )
  {
    memset(v6, 0, 0x68uLL);
    v6[1] = v3;
    return (unsigned int)VslpEnterIumSecureMode(2, 65LL, 0LL, (__int64)v6);
  }
  return (unsigned int)Interface;
}
