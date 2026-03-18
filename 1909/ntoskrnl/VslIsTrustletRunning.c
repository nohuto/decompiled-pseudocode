/*
 * XREFs of VslIsTrustletRunning @ 0x14028FA10
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall VslIsTrustletRunning(__int64 a1, _BYTE *a2)
{
  NTSTATUS result; // eax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = a1;
  result = VslpEnterIumSecureMode(2, 21LL, 0LL, (__int64)v5);
  *a2 = v5[2];
  return result;
}
