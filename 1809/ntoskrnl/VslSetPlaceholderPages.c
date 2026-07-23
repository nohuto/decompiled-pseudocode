/*
 * XREFs of VslSetPlaceholderPages @ 0x14027C15C
 * Callers:
 *     MiUpdateSlabPagePlaceholderState @ 0x1402C2F2C (MiUpdateSlabPagePlaceholderState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslSetPlaceholderPages(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]
  __int64 v8; // [rsp+38h] [rbp-70h]
  __int64 v9; // [rsp+40h] [rbp-68h]

  v8 = a3;
  v6 = a1;
  v7 = a2;
  v9 = a4;
  return VslpEnterIumSecureMode(2u, 238LL, 0, (__int64)v5);
}
