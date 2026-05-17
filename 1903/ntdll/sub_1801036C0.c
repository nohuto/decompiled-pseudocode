/*
 * XREFs of sub_1801036C0 @ 0x1801036C0
 * Callers:
 *     sub_18003B6C0 @ 0x18003B6C0 (sub_18003B6C0.c)
 *     sub_18004D730 @ 0x18004D730 (sub_18004D730.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_1801036C0(__int64 a1, __int64 a2)
{
  _QWORD v5[6]; // [rsp+20h] [rbp-48h] BYREF

  memset(v5, 0, sizeof(v5));
  v5[4] = a1;
  HIWORD(v5[0]) = 4152;
  v5[5] = a2;
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
