/*
 * XREFs of sub_180103318 @ 0x180103318
 * Callers:
 *     sub_180045188 @ 0x180045188 (sub_180045188.c)
 *     sub_180047490 @ 0x180047490 (sub_180047490.c)
 *     sub_180047F94 @ 0x180047F94 (sub_180047F94.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180103318(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v9[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[4] = a1;
  HIWORD(v9[0]) = 4148;
  v9[5] = a2;
  v9[6] = a3;
  LODWORD(v9[7]) = a4;
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
