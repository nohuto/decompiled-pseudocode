/*
 * XREFs of sub_18008E5F0 @ 0x18008E5F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180078120 @ 0x180078120 (sub_180078120.c)
 *     sub_180081F80 @ 0x180081F80 (sub_180081F80.c)
 *     sub_180081FFC @ 0x180081FFC (sub_180081FFC.c)
 *     sub_1800820A4 @ 0x1800820A4 (sub_1800820A4.c)
 *     sub_180083320 @ 0x180083320 (sub_180083320.c)
 *     sub_18008351C @ 0x18008351C (sub_18008351C.c)
 *     sub_180083DF0 @ 0x180083DF0 (sub_180083DF0.c)
 *     sub_1800841D4 @ 0x1800841D4 (sub_1800841D4.c)
 *     sub_180084D64 @ 0x180084D64 (sub_180084D64.c)
 *     sub_180086D28 @ 0x180086D28 (sub_180086D28.c)
 *     sub_18008E1D4 @ 0x18008E1D4 (sub_18008E1D4.c)
 *     sub_1800F0DA4 @ 0x1800F0DA4 (sub_1800F0DA4.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     cosf @ 0x1801271E0 (cosf.c)
 *     expf @ 0x1801271E6 (expf.c)
 *     sinf @ 0x1801271EC (sinf.c)
 *     tanf @ 0x1801271F2 (tanf.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18008E5F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 2162688LL;
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 440LL) & 0x210000) == 0x210000 )
  {
    sub_1800F0DA4();
    sub_180078120();
  }
  return result;
}
