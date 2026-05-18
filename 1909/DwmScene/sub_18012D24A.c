/*
 * XREFs of sub_18012D24A @ 0x18012D24A
 * Callers:
 *     <none>
 * Callees:
 *     sub_180069D8C @ 0x180069D8C (sub_180069D8C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D24A(__int64 a1, __int64 a2)
{
  sub_180069D8C(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
