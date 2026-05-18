/*
 * XREFs of sub_18012E9C6 @ 0x18012E9C6
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800645C8 @ 0x1800645C8 (sub_1800645C8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012E9C6(__int64 a1, __int64 a2)
{
  sub_1800645C8(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88));
  throw;
}
