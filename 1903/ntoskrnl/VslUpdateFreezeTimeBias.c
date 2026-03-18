/*
 * XREFs of VslUpdateFreezeTimeBias @ 0x1408531A0
 * Callers:
 *     PsThawProcess @ 0x1406A3778 (PsThawProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall VslUpdateFreezeTimeBias(__int64 a1, __int64 a2)
{
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = *(_QWORD *)(a1 + 728);
  v5[2] = a2;
  return VslpEnterIumSecureMode(2, 61LL, 0LL, (__int64)v5);
}
