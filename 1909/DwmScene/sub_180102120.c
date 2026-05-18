/*
 * XREFs of sub_180102120 @ 0x180102120
 * Callers:
 *     <none>
 * Callees:
 *     sub_180078230 @ 0x180078230 (sub_180078230.c)
 *     sub_180082090 @ 0x180082090 (sub_180082090.c)
 *     sub_180083D50 @ 0x180083D50 (sub_180083D50.c)
 *     sub_180083F00 @ 0x180083F00 (sub_180083F00.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     sub_1800F0EB4 @ 0x1800F0EB4 (sub_1800F0EB4.c)
 *     sub_180102080 @ 0x180102080 (sub_180102080.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180102120(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 134283264LL;
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 440LL) & 0x8010000) == 0x8010000 )
  {
    sub_1800F0EB4(a1);
    sub_180078230();
  }
  return result;
}
