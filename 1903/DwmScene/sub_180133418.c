/*
 * XREFs of sub_180133418 @ 0x180133418
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038CDC @ 0x180038CDC (sub_180038CDC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180133418(__int64 a1, __int64 a2)
{
  sub_180038CDC(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88), 1LL);
  throw;
}
