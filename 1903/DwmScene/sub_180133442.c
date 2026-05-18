/*
 * XREFs of sub_180133442 @ 0x180133442
 * Callers:
 *     <none>
 * Callees:
 *     sub_180111BD8 @ 0x180111BD8 (sub_180111BD8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180133442(__int64 a1, __int64 a2)
{
  sub_180111BD8(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 168));
  throw;
}
