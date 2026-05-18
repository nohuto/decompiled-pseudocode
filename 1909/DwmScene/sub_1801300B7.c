/*
 * XREFs of sub_1801300B7 @ 0x1801300B7
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B4F34 @ 0x1800B4F34 (sub_1800B4F34.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801300B7(__int64 a1, __int64 a2)
{
  sub_1800B4F34(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
