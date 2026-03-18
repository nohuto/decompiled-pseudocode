/*
 * XREFs of VslReserveProtectedPages @ 0x140852474
 * Callers:
 *     KeReservePrivilegedPages @ 0x1402A44C4 (KeReservePrivilegedPages.c)
 *     MiReloadBootLoadedDrivers @ 0x1409EF52C (MiReloadBootLoadedDrivers.c)
 *     MiBootImageRelocated @ 0x140A3CFE0 (MiBootImageRelocated.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall VslReserveProtectedPages(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  _QWORD v9[14]; // [rsp+20h] [rbp-88h] BYREF

  v5 = a3;
  v6 = a4;
  memset(v9, 0, 0x68uLL);
  v9[1] = a1;
  v9[2] = a2;
  v9[3] = v5;
  v9[4] = v6;
  return VslpEnterIumSecureMode(2, 211LL, 0LL, (__int64)v9);
}
