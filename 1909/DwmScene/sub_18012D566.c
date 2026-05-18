/*
 * XREFs of sub_18012D566 @ 0x18012D566
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007E128 @ 0x18007E128 (sub_18007E128.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D566(__int64 a1, __int64 a2)
{
  sub_18007E128(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
