/*
 * XREFs of VslCreateSecureProcess @ 0x140851390
 * Callers:
 *     KeInitializeProcess @ 0x1406855A8 (KeInitializeProcess.c)
 *     VslCreateEnclave @ 0x140851234 (VslCreateEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall VslCreateSecureProcess(__int64 a1, __int64 a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v7, 0, 0x68uLL);
  v7[1] = a1;
  v7[2] = a2;
  result = VslpEnterIumSecureMode(2, 6LL, 0LL, (__int64)v7);
  if ( result >= 0 )
    *a3 = v7[2];
  return result;
}
