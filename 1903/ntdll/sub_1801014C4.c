/*
 * XREFs of sub_1801014C4 @ 0x1801014C4
 * Callers:
 *     RtlDestroyHeap @ 0x18004A960 (RtlDestroyHeap.c)
 *     sub_18004FB14 @ 0x18004FB14 (sub_18004FB14.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_1801014C4(__int64 a1)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-38h] BYREF

  memset(v3, 0, sizeof(v3));
  v3[4] = a1;
  HIWORD(v3[0]) = 616;
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
