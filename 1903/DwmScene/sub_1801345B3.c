/*
 * XREFs of sub_1801345B3 @ 0x1801345B3
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801230D4 @ 0x1801230D4 (sub_1801230D4.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801345B3(__int64 a1, __int64 a2)
{
  sub_1801230D4(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}
