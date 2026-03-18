/*
 * XREFs of VslVerifyPage @ 0x140290850
 * Callers:
 *     CcBcbProfiler @ 0x1401AA360 (CcBcbProfiler.c)
 *     sub_1405B0010 @ 0x1405B0010 (sub_1405B0010.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall VslVerifyPage(__int64 a1, int a2)
{
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = a1;
  LODWORD(v5[2]) = (a2 & 1) != 0;
  if ( a2 >= 0 )
    return VslpEnterIumSecureMode(2, 256LL, 0LL, (__int64)v5);
  LODWORD(v5[2]) = ((a2 & 1) != 0) | 2;
  if ( a1 )
    return VslpEnterIumSecureMode(2, 256LL, 0LL, (__int64)v5);
  else
    return 0;
}
