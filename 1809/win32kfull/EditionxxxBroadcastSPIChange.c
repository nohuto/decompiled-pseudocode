/*
 * XREFs of EditionxxxBroadcastSPIChange @ 0x1C01C7050
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C00B068C (RtlInitLargeUnicodeString.c)
 *     xxxBroadcastMessageEx @ 0x1C00D103C (xxxBroadcastMessageEx.c)
 */

__int64 __fastcall EditionxxxBroadcastSPIChange(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  _BYTE v4[16]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v5[2]; // [rsp+50h] [rbp-28h] BYREF
  char *v6; // [rsp+58h] [rbp-20h]
  char v7; // [rsp+90h] [rbp+18h] BYREF

  RtlInitLargeUnicodeString((__int64)v4, a2);
  v5[0] = 0;
  v6 = &v7;
  v5[1] = 100;
  return xxxBroadcastMessageEx(0LL, 26LL, v2, (__int64)v4, 6u, (union tagBROADCASTMSG *)v5, 1, 0);
}
