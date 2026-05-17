/*
 * XREFs of sub_1801031E8 @ 0x1801031E8
 * Callers:
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     sub_180045188 @ 0x180045188 (sub_180045188.c)
 *     sub_180047F94 @ 0x180047F94 (sub_180047F94.c)
 * Callees:
 *     sub_180076E84 @ 0x180076E84 (sub_180076E84.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     sub_180100F8C @ 0x180100F8C (sub_180100F8C.c)
 */

__int64 __fastcall sub_1801031E8(__int64 a1)
{
  __int64 v3; // [rsp+68h] [rbp+7h] BYREF
  int v4; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v5; // [rsp+74h] [rbp+13h]

  v3 = 0LL;
  v4 = 0;
  v5 = sub_180076E84(a1);
  sub_180100F8C(a1, &v3, &v4);
  return ZwTraceEvent();
}
