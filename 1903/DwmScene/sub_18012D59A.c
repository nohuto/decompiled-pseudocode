/*
 * XREFs of sub_18012D59A @ 0x18012D59A
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007E060 @ 0x18007E060 (sub_18007E060.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D59A(__int64 a1, __int64 a2)
{
  sub_18007E060(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
