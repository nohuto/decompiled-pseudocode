/*
 * XREFs of sub_1800765AC @ 0x1800765AC
 * Callers:
 *     sub_180018A80 @ 0x180018A80 (sub_180018A80.c)
 *     sub_180079060 @ 0x180079060 (sub_180079060.c)
 * Callees:
 *     sub_180076510 @ 0x180076510 (sub_180076510.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800765AC(__int64 a1, __int64 *a2)
{
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_180076510(a1, a2);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 80LL))(a1, a2);
  return a2;
}
