/*
 * XREFs of sub_180127020 @ 0x180127020
 * Callers:
 *     ?cancel_current_task@Concurrency@@YAXXZ_0 @ 0x180127060 (-cancel_current_task@Concurrency@@YAXXZ_0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180127020(_QWORD *a1)
{
  a1[2] = 0LL;
  a1[1] = "bad array new length";
  *a1 = &std::bad_array_new_length::`vftable';
  return a1;
}
