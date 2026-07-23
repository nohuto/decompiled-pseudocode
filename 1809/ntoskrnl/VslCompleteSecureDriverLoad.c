/*
 * XREFs of VslCompleteSecureDriverLoad @ 0x1408190E8
 * Callers:
 *     MiProcessLoadConfigForDriver @ 0x140683008 (MiProcessLoadConfigForDriver.c)
 *     MiMarkKernelImageCfgBits @ 0x140710634 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslCompleteSecureDriverLoad(__int64 a1, __int64 a2, unsigned int a3)
{
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]
  __int64 v6; // [rsp+30h] [rbp-78h]
  __int64 v7; // [rsp+38h] [rbp-70h]
  __int64 v8; // [rsp+40h] [rbp-68h]

  v8 = 0LL;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  return VslpEnterIumSecureMode(2u, 215LL, 0, (__int64)v4);
}
