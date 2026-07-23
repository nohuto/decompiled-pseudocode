/*
 * XREFs of VslCloseSecureHandle @ 0x14027C930
 * Callers:
 *     VslCreateEnclave @ 0x14081914C (VslCreateEnclave.c)
 *     PsDereferenceVsmEnclave @ 0x14088F3E4 (PsDereferenceVsmEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslCloseSecureHandle(__int64 a1)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]

  v3 = a1;
  return VslpEnterIumSecureMode(2u, 30LL, 0, (__int64)v2);
}
