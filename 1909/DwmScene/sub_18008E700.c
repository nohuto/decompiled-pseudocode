/*
 * XREFs of sub_18008E700 @ 0x18008E700
 * Callers:
 *     <none>
 * Callees:
 *     sub_180078230 @ 0x180078230 (sub_180078230.c)
 *     sub_180082090 @ 0x180082090 (sub_180082090.c)
 *     sub_18008210C @ 0x18008210C (sub_18008210C.c)
 *     sub_1800821B4 @ 0x1800821B4 (sub_1800821B4.c)
 *     sub_180083430 @ 0x180083430 (sub_180083430.c)
 *     sub_18008362C @ 0x18008362C (sub_18008362C.c)
 *     sub_180083F00 @ 0x180083F00 (sub_180083F00.c)
 *     sub_1800842E4 @ 0x1800842E4 (sub_1800842E4.c)
 *     sub_180084E74 @ 0x180084E74 (sub_180084E74.c)
 *     sub_180086E38 @ 0x180086E38 (sub_180086E38.c)
 *     sub_18008E2E4 @ 0x18008E2E4 (sub_18008E2E4.c)
 *     sub_1800F0EB4 @ 0x1800F0EB4 (sub_1800F0EB4.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     cosf @ 0x1801272F0 (cosf.c)
 *     expf @ 0x1801272F6 (expf.c)
 *     sinf @ 0x1801272FC (sinf.c)
 *     tanf @ 0x180127302 (tanf.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18008E700(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 2162688LL;
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 440LL) & 0x210000) == 0x210000 )
  {
    sub_1800F0EB4();
    sub_180078230();
  }
  return result;
}
