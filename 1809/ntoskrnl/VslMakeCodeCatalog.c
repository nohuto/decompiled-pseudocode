/*
 * XREFs of VslMakeCodeCatalog @ 0x14027CDC0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslMakeCodeCatalog(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  NTSTATUS result; // eax
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]

  v2 = *a1;
  v7 = a2;
  v6 = v2;
  result = VslpEnterIumSecureMode(2u, 24LL, 0, (__int64)v5);
  if ( result >= 0 )
    *a1 = v7;
  return result;
}
