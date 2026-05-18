/*
 * XREFs of sub_180130CE3 @ 0x180130CE3
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DA054 @ 0x1800DA054 (sub_1800DA054.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130CE3(__int64 a1, __int64 a2)
{
  sub_1800DA054(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72));
  throw;
}
