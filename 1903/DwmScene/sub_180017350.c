/*
 * XREFs of sub_180017350 @ 0x180017350
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180017350(_QWORD *a1)
{
  *a1 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**(_QWORD **)(qword_180268E48 + 40) + 1048LL))(
    *(_QWORD *)(qword_180268E48 + 40),
    *(_QWORD *)(qword_180268E48 + 48),
    a1);
  return a1;
}
