/*
 * XREFs of sub_18012E2A4 @ 0x18012E2A4
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007EBD8 @ 0x18007EBD8 (sub_18007EBD8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012E2A4(__int64 a1, __int64 a2)
{
  sub_18007EBD8(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
