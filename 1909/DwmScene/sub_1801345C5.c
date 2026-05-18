/*
 * XREFs of sub_1801345C5 @ 0x1801345C5
 * Callers:
 *     <none>
 * Callees:
 *     sub_18012327C @ 0x18012327C (sub_18012327C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801345C5(__int64 a1, __int64 a2)
{
  sub_18012327C(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88));
  throw;
}
