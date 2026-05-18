/*
 * XREFs of sub_1801295C9 @ 0x1801295C9
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038CDC @ 0x180038CDC (sub_180038CDC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801295C9(__int64 a1, __int64 a2)
{
  sub_180038CDC(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
