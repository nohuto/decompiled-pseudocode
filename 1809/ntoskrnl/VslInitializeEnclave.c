/*
 * XREFs of VslInitializeEnclave @ 0x140819B7C
 * Callers:
 *     PsInitializeVsmEnclave @ 0x14088F43C (PsInitializeVsmEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslInitializeEnclave(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  NTSTATUS result; // eax
  _BYTE v6[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v7; // [rsp+28h] [rbp-80h]
  __int64 v8; // [rsp+30h] [rbp-78h]
  __int64 v9; // [rsp+38h] [rbp-70h]

  v7 = a1;
  v9 = a3;
  v8 = a2;
  result = VslpEnterIumSecureMode(2u, 43LL, 0, (__int64)v6);
  if ( result >= 0 )
    *a4 = v8;
  return result;
}
