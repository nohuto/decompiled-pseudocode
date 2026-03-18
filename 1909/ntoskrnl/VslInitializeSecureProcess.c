/*
 * XREFs of VslInitializeSecureProcess @ 0x14028F94C
 * Callers:
 *     KeSecureProcess @ 0x1402A4F9C (KeSecureProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall VslInitializeSecureProcess(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD v13[14]; // [rsp+20h] [rbp-B8h] BYREF

  memset(v13, 0, 0x68uLL);
  v13[8] = a8;
  v13[3] = a1;
  v13[1] = a2;
  v13[4] = a3;
  v13[2] = a4;
  v13[5] = a5;
  v13[6] = a6;
  v13[7] = a7;
  return VslpEnterIumSecureMode(2, 7LL, 0LL, (__int64)v13);
}
