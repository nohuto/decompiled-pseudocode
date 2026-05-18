/*
 * XREFs of sub_180130AB3 @ 0x180130AB3
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D47A8 @ 0x1800D47A8 (sub_1800D47A8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130AB3(__int64 a1, __int64 a2)
{
  sub_1800D47A8(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
