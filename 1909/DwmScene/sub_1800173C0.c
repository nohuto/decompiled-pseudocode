/*
 * XREFs of sub_1800173C0 @ 0x1800173C0
 * Callers:
 *     sub_1800190D0 @ 0x1800190D0 (sub_1800190D0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800173C0(_QWORD *a1)
{
  *a1 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**(_QWORD **)(qword_180269E48 + 40) + 1048LL))(
    *(_QWORD *)(qword_180269E48 + 40),
    *(_QWORD *)(qword_180269E48 + 48),
    a1);
  return a1;
}
