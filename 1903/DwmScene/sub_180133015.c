/*
 * XREFs of sub_180133015 @ 0x180133015
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010A37C @ 0x18010A37C (sub_18010A37C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180133015(__int64 a1, __int64 a2)
{
  sub_18010A37C(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}
