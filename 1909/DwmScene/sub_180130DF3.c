/*
 * XREFs of sub_180130DF3 @ 0x180130DF3
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DA164 @ 0x1800DA164 (sub_1800DA164.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130DF3(__int64 a1, __int64 a2)
{
  sub_1800DA164(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72));
  throw;
}
