/*
 * XREFs of sub_1800D1D50 @ 0x1800D1D50
 * Callers:
 *     sub_1800D1980 @ 0x1800D1980 (sub_1800D1980.c)
 * Callees:
 *     sub_1800D1830 @ 0x1800D1830 (sub_1800D1830.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D1D50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  sub_1800D1830(a1 + 96, a3);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, a2, a4);
  return sub_1800D20C4(a3 + 16);
}
