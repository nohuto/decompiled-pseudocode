/*
 * XREFs of sub_180130BE7 @ 0x180130BE7
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D48E0 @ 0x1800D48E0 (sub_1800D48E0.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130BE7(__int64 a1, __int64 a2)
{
  sub_1800D48E0(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
