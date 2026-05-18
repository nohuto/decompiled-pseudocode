/*
 * XREFs of sub_180133469 @ 0x180133469
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D458 @ 0x18008D458 (sub_18008D458.c)
 *     sub_18010D964 @ 0x18010D964 (sub_18010D964.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180133469(__int64 a1, __int64 *a2)
{
  sub_18008D458(a2[4], a2 + 6, a2[21]);
  sub_18010D964(a2[4], (__int64)(a2 + 7));
  throw;
}
