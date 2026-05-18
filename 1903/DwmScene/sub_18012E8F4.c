/*
 * XREFs of sub_18012E8F4 @ 0x18012E8F4
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D840 @ 0x18008D840 (sub_18008D840.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012E8F4(__int64 a1, __int64 a2)
{
  sub_18008D840(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
