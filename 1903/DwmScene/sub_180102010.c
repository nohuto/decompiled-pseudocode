/*
 * XREFs of sub_180102010 @ 0x180102010
 * Callers:
 *     <none>
 * Callees:
 *     sub_180078120 @ 0x180078120 (sub_180078120.c)
 *     sub_180081F80 @ 0x180081F80 (sub_180081F80.c)
 *     sub_180083C40 @ 0x180083C40 (sub_180083C40.c)
 *     sub_180083DF0 @ 0x180083DF0 (sub_180083DF0.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     sub_1800F0DA4 @ 0x1800F0DA4 (sub_1800F0DA4.c)
 *     sub_180101F70 @ 0x180101F70 (sub_180101F70.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180102010(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 134283264LL;
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 440LL) & 0x8010000) == 0x8010000 )
  {
    sub_1800F0DA4(a1);
    sub_180078120();
  }
  return result;
}
