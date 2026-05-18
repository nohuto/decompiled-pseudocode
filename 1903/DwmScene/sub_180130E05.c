/*
 * XREFs of sub_180130E05 @ 0x180130E05
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DA290 @ 0x1800DA290 (sub_1800DA290.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130E05(__int64 a1, __int64 a2)
{
  sub_1800DA290(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
