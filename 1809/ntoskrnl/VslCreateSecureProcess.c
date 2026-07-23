/*
 * XREFs of VslCreateSecureProcess @ 0x140819280
 * Callers:
 *     KeInitializeProcess @ 0x14064CD20 (KeInitializeProcess.c)
 *     VslCreateEnclave @ 0x14081914C (VslCreateEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslCreateSecureProcess(__int64 a1, __int64 a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]

  v6 = a1;
  v7 = a2;
  result = VslpEnterIumSecureMode(2u, 6LL, 0, (__int64)v5);
  if ( result >= 0 )
    *a3 = v7;
  return result;
}
