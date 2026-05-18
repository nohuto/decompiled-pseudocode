/*
 * XREFs of sub_180134AC5 @ 0x180134AC5
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801234C4 @ 0x1801234C4 (sub_1801234C4.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180134AC5(__int64 a1, __int64 a2)
{
  sub_1801234C4(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
