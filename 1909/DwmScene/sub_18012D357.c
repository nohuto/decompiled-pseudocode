/*
 * XREFs of sub_18012D357 @ 0x18012D357
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007E58C @ 0x18007E58C (sub_18007E58C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D357(__int64 a1, __int64 a2)
{
  sub_18007E58C(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
  throw;
}
