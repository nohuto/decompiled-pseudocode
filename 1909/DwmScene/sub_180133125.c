/*
 * XREFs of sub_180133125 @ 0x180133125
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010A48C @ 0x18010A48C (sub_18010A48C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180133125(__int64 a1, __int64 a2)
{
  sub_18010A48C(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}
