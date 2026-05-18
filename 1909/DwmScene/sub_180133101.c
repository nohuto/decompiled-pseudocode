/*
 * XREFs of sub_180133101 @ 0x180133101
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010A464 @ 0x18010A464 (sub_18010A464.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180133101(__int64 a1, __int64 a2)
{
  sub_18010A464(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}
