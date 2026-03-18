/*
 * XREFs of PerfInfoLogIpi @ 0x1403121E0
 * Callers:
 *     KiIpiProcessRequests @ 0x140103ED0 (KiIpiProcessRequests.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x14011BC4C (EtwTraceTimedEvent.c)
 */

void __fastcall PerfInfoLogIpi(__int64 a1)
{
  _DWORD v1[6]; // [rsp+30h] [rbp-18h] BYREF

  v1[0] = 0;
  EtwTraceTimedEvent(0xF5Bu, 0x40400000u, (__int64)v1, 4, 0x400A02u, a1);
}
