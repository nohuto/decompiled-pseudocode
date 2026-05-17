/*
 * XREFs of sub_1801033C4 @ 0x1801033C4
 * Callers:
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_18003F020 @ 0x18003F020 (sub_18003F020.c)
 *     sub_18003F9C0 @ 0x18003F9C0 (sub_18003F9C0.c)
 *     sub_180047214 @ 0x180047214 (sub_180047214.c)
 *     sub_18004B17C @ 0x18004B17C (sub_18004B17C.c)
 *     sub_18007013C @ 0x18007013C (sub_18007013C.c)
 * Callees:
 *     sub_180076E84 @ 0x180076E84 (sub_180076E84.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     sub_180100F8C @ 0x180100F8C (sub_180100F8C.c)
 */

__int64 __fastcall sub_1801033C4(__int64 a1)
{
  __int64 v3; // [rsp+68h] [rbp+17h] BYREF
  int v4; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v5; // [rsp+74h] [rbp+23h]

  v3 = 0LL;
  v4 = 0;
  v5 = sub_180076E84(a1);
  sub_180100F8C(a1, &v3, &v4);
  return ZwTraceEvent();
}
