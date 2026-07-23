/*
 * XREFs of MiGetNewAddressForBootImage @ 0x1409B95F4
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1409B8C6C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiReservePrivilegedPtes @ 0x1406842F4 (MiReservePrivilegedPtes.c)
 *     MiReserveDriverPtes @ 0x140684A6C (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x14070F2DC (MiReleaseDriverPtes.c)
 *     MiReleaseNewAddressForBootImage @ 0x1409F874C (MiReleaseNewAddressForBootImage.c)
 */

__int64 __fastcall MiGetNewAddressForBootImage(__int64 a1, unsigned int a2)
{
  unsigned __int64 v4; // rdi
  _BYTE v6[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v7; // [rsp+28h] [rbp-80h]
  __int64 v8; // [rsp+30h] [rbp-78h]
  __int64 v9; // [rsp+38h] [rbp-70h]

  v4 = MiReserveDriverPtes(0, a2);
  if ( v4 )
  {
    if ( (int)MiReservePrivilegedPtes() < 0 )
    {
      MiReleaseDriverPtes(0, v4, a2);
    }
    else
    {
      if ( (MiFlags & 0x8000) == 0 )
        return (__int64)(v4 << 25) >> 16;
      v9 = 0LL;
      v7 = a1;
      v8 = (__int64)(v4 << 25) >> 16;
      if ( VslpEnterIumSecureMode(2u, 217LL, 0, (__int64)v6) >= 0 )
        return (__int64)(v4 << 25) >> 16;
      MiReleaseNewAddressForBootImage(v4, a2);
    }
  }
  return 0LL;
}
