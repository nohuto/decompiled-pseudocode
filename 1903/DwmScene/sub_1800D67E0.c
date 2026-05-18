/*
 * XREFs of sub_1800D67E0 @ 0x1800D67E0
 * Callers:
 *     sub_180067730 @ 0x180067730 (sub_180067730.c)
 * Callees:
 *     sub_18006CD84 @ 0x18006CD84 (sub_18006CD84.c)
 *     sub_180078120 @ 0x180078120 (sub_180078120.c)
 *     sub_1800A618C @ 0x1800A618C (sub_1800A618C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     log10f @ 0x180127204 (log10f.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall sub_1800D67E0(__int64 a1, __int64 a2, char a3)
{
  _UNKNOWN **result; // rax
  _UNKNOWN *retaddr; // [rsp+280h] [rbp+178h] BYREF

  result = &retaddr;
  if ( (a3 & 1) != 0 || (a3 & 0x7E) != 0 )
  {
    sub_18006CD84(a2);
    sub_180078120();
  }
  return result;
}
