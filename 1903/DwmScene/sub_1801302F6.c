/*
 * XREFs of sub_1801302F6 @ 0x1801302F6
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CAEF8 @ 0x1800CAEF8 (sub_1800CAEF8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801302F6(__int64 a1, __int64 a2)
{
  sub_1800CAEF8(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 168));
  throw;
}
