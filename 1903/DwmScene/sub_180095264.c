/*
 * XREFs of sub_180095264 @ 0x180095264
 * Callers:
 *     sub_1800D206C @ 0x1800D206C (sub_1800D206C.c)
 *     sub_1801166C4 @ 0x1801166C4 (sub_1801166C4.c)
 *     sub_180116BE8 @ 0x180116BE8 (sub_180116BE8.c)
 *     sub_18011735C @ 0x18011735C (sub_18011735C.c)
 *     sub_18011859C @ 0x18011859C (sub_18011859C.c)
 *     sub_18011B980 @ 0x18011B980 (sub_18011B980.c)
 *     ?cancel_current_task@Concurrency@@YAXXZ @ 0x180127040 (-cancel_current_task@Concurrency@@YAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180095264(_QWORD *a1)
{
  a1[2] = 0LL;
  a1[1] = "bad allocation";
  *a1 = &std::bad_alloc::`vftable';
  return a1;
}
