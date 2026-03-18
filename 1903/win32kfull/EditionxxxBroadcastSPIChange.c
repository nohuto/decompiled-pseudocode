/*
 * XREFs of EditionxxxBroadcastSPIChange @ 0x1C01DA420
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C001C9D0 (xxxBroadcastMessageEx.c)
 *     RtlInitLargeUnicodeString @ 0x1C0090188 (RtlInitLargeUnicodeString.c)
 */

__int64 __fastcall EditionxxxBroadcastSPIChange(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // r11d
  _QWORD v5[2]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v6[2]; // [rsp+50h] [rbp-28h] BYREF
  char *v7; // [rsp+58h] [rbp-20h]
  __int64 v8; // [rsp+60h] [rbp-18h]
  char v9; // [rsp+90h] [rbp+18h] BYREF

  v5[0] = 0LL;
  v8 = 0LL;
  v5[1] = 0LL;
  RtlInitLargeUnicodeString((__int64)v5, a2);
  v7 = &v9;
  v6[0] = v3;
  v6[1] = 100;
  return xxxBroadcastMessageEx(0LL, v3 + 26, v2, (struct _LARGE_STRING *)v5, 6u, (union tagBROADCASTMSG *)v6, 1, v3);
}
