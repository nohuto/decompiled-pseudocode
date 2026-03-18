/*
 * XREFs of VslRevertHotPatch @ 0x14029041C
 * Callers:
 *     MiUnapplyDriverHotPatch @ 0x140891598 (MiUnapplyDriverHotPatch.c)
 *     MiUnloadHotPatch @ 0x1408916B0 (MiUnloadHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall VslRevertHotPatch(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a2;
  v5 = a3;
  memset(v7, 0, 0x68uLL);
  v7[1] = a1;
  v7[2] = v3;
  v7[3] = v5;
  return VslpEnterIumSecureMode(2, 70LL, 0LL, (__int64)v7);
}
