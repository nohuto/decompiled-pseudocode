/*
 * XREFs of sub_18010313C @ 0x18010313C
 * Callers:
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_18003F020 @ 0x18003F020 (sub_18003F020.c)
 *     sub_18003F9C0 @ 0x18003F9C0 (sub_18003F9C0.c)
 *     sub_180047214 @ 0x180047214 (sub_180047214.c)
 *     sub_180047490 @ 0x180047490 (sub_180047490.c)
 *     sub_180048BD4 @ 0x180048BD4 (sub_180048BD4.c)
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     sub_18004B17C @ 0x18004B17C (sub_18004B17C.c)
 *     sub_18004C9D8 @ 0x18004C9D8 (sub_18004C9D8.c)
 *     sub_18004E4EC @ 0x18004E4EC (sub_18004E4EC.c)
 *     sub_18007013C @ 0x18007013C (sub_18007013C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_18010313C(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v9[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[4] = a1;
  HIWORD(v9[0]) = 4147;
  v9[5] = a2;
  v9[6] = a3;
  LODWORD(v9[7]) = a4;
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
