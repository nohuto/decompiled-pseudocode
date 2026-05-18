/*
 * XREFs of sub_1800D1C40 @ 0x1800D1C40
 * Callers:
 *     sub_1800D1870 @ 0x1800D1870 (sub_1800D1870.c)
 * Callees:
 *     sub_1800D1720 @ 0x1800D1720 (sub_1800D1720.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D1C40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  sub_1800D1720(a1 + 96, a3);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, a2, a4);
  return sub_1800D1FB4(a3 + 16);
}
