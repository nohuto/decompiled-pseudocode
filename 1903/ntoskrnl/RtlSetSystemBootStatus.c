/*
 * XREFs of RtlSetSystemBootStatus @ 0x140769FE0
 * Callers:
 *     PopBsdHandleRequest @ 0x1401BEAE4 (PopBsdHandleRequest.c)
 *     PopWriteBsdPoInfo @ 0x1401BEB38 (PopWriteBsdPoInfo.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x140769F44 (PopRecordLongPowerButtonPressDetected.c)
 *     PopProcessBootstat @ 0x140A14E04 (PopProcessBootstat.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x14076A018 (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlSetSystemBootStatus(int a1, __int64 a2, int a3, __int64 a4)
{
  _DWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]

  v5[1] = 0;
  v8 = 0;
  v7 = a3;
  v5[0] = a1;
  v6 = a2;
  return RtlpSystemBootStatusRequest(32LL, v5, 1LL, a4);
}
