/*
 * XREFs of sub_1801304DB @ 0x1801304DB
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CB048 @ 0x1800CB048 (sub_1800CB048.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801304DB(__int64 a1, __int64 a2)
{
  sub_1800CB048(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
