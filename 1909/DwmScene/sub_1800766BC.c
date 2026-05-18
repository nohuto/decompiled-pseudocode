/*
 * XREFs of sub_1800766BC @ 0x1800766BC
 * Callers:
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_180079170 @ 0x180079170 (sub_180079170.c)
 * Callees:
 *     sub_180076620 @ 0x180076620 (sub_180076620.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800766BC(__int64 a1, __int64 *a2)
{
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_180076620(a1, a2);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 80LL))(a1, a2);
  return a2;
}
