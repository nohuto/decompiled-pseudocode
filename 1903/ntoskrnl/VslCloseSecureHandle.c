/*
 * XREFs of VslCloseSecureHandle @ 0x140290FB0
 * Callers:
 *     VslCreateEnclave @ 0x140851B34 (VslCreateEnclave.c)
 *     PsDereferenceVsmEnclave @ 0x1408CC7D8 (PsDereferenceVsmEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall VslCloseSecureHandle(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = a1;
  return VslpEnterIumSecureMode(2, 30LL, 0LL, (__int64)v3);
}
