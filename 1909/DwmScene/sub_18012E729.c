/*
 * XREFs of sub_18012E729 @ 0x18012E729
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D42C @ 0x18008D42C (sub_18008D42C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012E729(__int64 a1, __int64 a2)
{
  sub_18008D42C(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 136));
  throw;
}
