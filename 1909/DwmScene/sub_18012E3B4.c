/*
 * XREFs of sub_18012E3B4 @ 0x18012E3B4
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007ECE8 @ 0x18007ECE8 (sub_18007ECE8.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012E3B4(__int64 a1, __int64 a2)
{
  sub_18007ECE8(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
