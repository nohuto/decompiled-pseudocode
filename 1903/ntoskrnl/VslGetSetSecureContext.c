/*
 * XREFs of VslGetSetSecureContext @ 0x140852680
 * Callers:
 *     PspGetSetContextInternal @ 0x1405E7FD0 (PspGetSetContextInternal.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall VslGetSetSecureContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  _QWORD v10[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v10, 0, 0x68uLL);
  v10[1] = a2;
  v10[2] = a3;
  v10[3] = a4;
  LOWORD(v8) = (a1 != 0) + 14;
  return VslpEnterIumSecureMode(2, v8, 0LL, (__int64)v10);
}
