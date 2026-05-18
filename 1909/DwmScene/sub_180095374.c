/*
 * XREFs of sub_180095374 @ 0x180095374
 * Callers:
 *     sub_1800D217C @ 0x1800D217C (sub_1800D217C.c)
 *     sub_1801167D4 @ 0x1801167D4 (sub_1801167D4.c)
 *     sub_180116CF8 @ 0x180116CF8 (sub_180116CF8.c)
 *     sub_18011746C @ 0x18011746C (sub_18011746C.c)
 *     sub_1801186AC @ 0x1801186AC (sub_1801186AC.c)
 *     sub_18011BA90 @ 0x18011BA90 (sub_18011BA90.c)
 *     ?cancel_current_task@Concurrency@@YAXXZ @ 0x180127150 (-cancel_current_task@Concurrency@@YAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180095374(_QWORD *a1)
{
  a1[2] = 0LL;
  a1[1] = "bad allocation";
  *a1 = &std::bad_alloc::`vftable';
  return a1;
}
