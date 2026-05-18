/*
 * XREFs of sub_18012D432 @ 0x18012D432
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007DFF4 @ 0x18007DFF4 (sub_18007DFF4.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D432(__int64 a1, __int64 a2)
{
  sub_18007DFF4(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
