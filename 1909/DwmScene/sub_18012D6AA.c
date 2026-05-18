/*
 * XREFs of sub_18012D6AA @ 0x18012D6AA
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007E170 @ 0x18007E170 (sub_18007E170.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D6AA(__int64 a1, __int64 a2)
{
  sub_18007E170(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
