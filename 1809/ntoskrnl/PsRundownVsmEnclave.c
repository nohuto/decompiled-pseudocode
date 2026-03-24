/*
 * XREFs of PsRundownVsmEnclave @ 0x14088E3E8
 * Callers:
 *     MiCanDeleteEnclave @ 0x1402BCE14 (MiCanDeleteEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129CB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PsRundownVsmEnclave(__int64 a1)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]

  v3 = *(_QWORD *)(a1 + 24);
  return VslpEnterIumSecureMode(2u, 45LL, 0, (__int64)v2);
}
