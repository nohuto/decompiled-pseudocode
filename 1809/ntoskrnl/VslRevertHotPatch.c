/*
 * XREFs of VslRevertHotPatch @ 0x14027C0FC
 * Callers:
 *     MiUnapplyDriverHotPatch @ 0x140859374 (MiUnapplyDriverHotPatch.c)
 *     MiUnloadHotPatch @ 0x140859458 (MiUnloadHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslRevertHotPatch(__int64 a1, unsigned int a2, unsigned int a3)
{
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]
  __int64 v6; // [rsp+30h] [rbp-78h]
  __int64 v7; // [rsp+38h] [rbp-70h]

  v6 = a2;
  v5 = a1;
  v7 = a3;
  return VslpEnterIumSecureMode(2u, 66LL, 0, (__int64)v4);
}
