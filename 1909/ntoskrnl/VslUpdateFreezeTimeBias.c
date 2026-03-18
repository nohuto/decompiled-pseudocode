/*
 * XREFs of VslUpdateFreezeTimeBias @ 0x1408528A0
 * Callers:
 *     PsThawProcess @ 0x1406A10B8 (PsThawProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall VslUpdateFreezeTimeBias(__int64 a1, __int64 a2)
{
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = *(_QWORD *)(a1 + 728);
  v5[2] = a2;
  return VslpEnterIumSecureMode(2, 61LL, 0LL, (__int64)v5);
}
