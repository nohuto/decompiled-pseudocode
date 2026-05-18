/*
 * XREFs of sub_18012D456 @ 0x18012D456
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007E018 @ 0x18007E018 (sub_18007E018.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D456(__int64 a1, __int64 a2)
{
  sub_18007E018(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
