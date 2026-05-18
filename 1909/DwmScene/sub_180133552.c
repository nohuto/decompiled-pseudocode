/*
 * XREFs of sub_180133552 @ 0x180133552
 * Callers:
 *     <none>
 * Callees:
 *     sub_180111CE8 @ 0x180111CE8 (sub_180111CE8.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180133552(__int64 a1, __int64 a2)
{
  sub_180111CE8(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 168));
  throw;
}
