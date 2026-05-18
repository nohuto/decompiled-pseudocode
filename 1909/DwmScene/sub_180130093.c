/*
 * XREFs of sub_180130093 @ 0x180130093
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B4F34 @ 0x1800B4F34 (sub_1800B4F34.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130093(__int64 a1, __int64 a2)
{
  sub_1800B4F34(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
