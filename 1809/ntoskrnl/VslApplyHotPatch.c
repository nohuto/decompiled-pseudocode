/*
 * XREFs of VslApplyHotPatch @ 0x14027AEE8
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1408552E0 (MiApplyDriverHotPatch.c)
 *     MiLoadHotPatch @ 0x140856C38 (MiLoadHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslApplyHotPatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _BYTE v6[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v7; // [rsp+28h] [rbp-80h]
  __int64 v8; // [rsp+30h] [rbp-78h]
  __int64 v9; // [rsp+38h] [rbp-70h]
  __int64 v10; // [rsp+40h] [rbp-68h]
  __int64 v11; // [rsp+48h] [rbp-60h]

  v7 = a1;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  v11 = a5;
  return VslpEnterIumSecureMode(2u, 65LL, 0, (__int64)v6);
}
