/*
 * XREFs of sub_180103814 @ 0x180103814
 * Callers:
 *     sub_180018338 @ 0x180018338 (sub_180018338.c)
 *     sub_18004AC64 @ 0x18004AC64 (sub_18004AC64.c)
 *     sub_18004D024 @ 0x18004D024 (sub_18004D024.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180103814(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v9[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[4] = a1;
  HIWORD(v9[0]) = 4145;
  v9[5] = a2;
  v9[6] = a3;
  v9[7] = a4;
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
