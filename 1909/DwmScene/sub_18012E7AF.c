/*
 * XREFs of sub_18012E7AF @ 0x18012E7AF
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D448 @ 0x18008D448 (sub_18008D448.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012E7AF(__int64 a1, __int64 a2)
{
  sub_18008D448(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}
