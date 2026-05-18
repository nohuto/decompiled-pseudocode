/*
 * XREFs of sub_180130AD7 @ 0x180130AD7
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D47D0 @ 0x1800D47D0 (sub_1800D47D0.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130AD7(__int64 a1, __int64 a2)
{
  sub_1800D47D0(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
