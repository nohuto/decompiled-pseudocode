/*
 * XREFs of sub_18012D04B @ 0x18012D04B
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006DFE8 @ 0x18006DFE8 (sub_18006DFE8.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D04B(__int64 a1, __int64 a2)
{
  sub_18006DFE8(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
