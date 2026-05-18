/*
 * XREFs of sub_1801345F5 @ 0x1801345F5
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025FA8 @ 0x180025FA8 (sub_180025FA8.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801345F5(__int64 a1, __int64 a2)
{
  sub_180025FA8(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88));
  throw;
}
