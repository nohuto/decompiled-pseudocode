/*
 * XREFs of VslCompleteSecureDriverLoad @ 0x140851AA0
 * Callers:
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 *     MiMarkKernelImageCfgBits @ 0x140746B78 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall VslCompleteSecureDriverLoad(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rsi
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  v4 = a3;
  memset(v7, 0, 0x68uLL);
  v7[4] = 0LL;
  v7[1] = a1;
  v7[2] = a2;
  v7[3] = v4;
  return VslpEnterIumSecureMode(2, 215LL, 0LL, (__int64)v7);
}
