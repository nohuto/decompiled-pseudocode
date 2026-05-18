/*
 * XREFs of sub_18012E619 @ 0x18012E619
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D31C @ 0x18008D31C (sub_18008D31C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012E619(__int64 a1, __int64 a2)
{
  sub_18008D31C(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 136));
  throw;
}
