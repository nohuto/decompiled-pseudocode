/*
 * XREFs of VslCreateSecureThread @ 0x140851E4C
 * Callers:
 *     KeSecureThread @ 0x1402A4B88 (KeSecureThread.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall VslCreateSecureThread(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  NTSTATUS result; // eax
  _QWORD v12[14]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v12, 0, 0x68uLL);
  v12[1] = *(_QWORD *)(a1 + 728);
  v12[3] = *(_QWORD *)(a3 + 48);
  v12[6] = a5;
  v12[7] = a6;
  v12[2] = a2;
  v12[4] = a3;
  v12[5] = a4;
  result = VslpEnterIumSecureMode(2, 8LL, 0LL, (__int64)v12);
  if ( result >= 0 )
    *a7 = v12[2];
  return result;
}
