/*
 * XREFs of sub_180133579 @ 0x180133579
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D568 @ 0x18008D568 (sub_18008D568.c)
 *     sub_18010DA74 @ 0x18010DA74 (sub_18010DA74.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180133579(__int64 a1, __int64 *a2)
{
  sub_18008D568(a2[4], a2 + 6, a2[21]);
  sub_18010DA74(a2[4], (__int64)(a2 + 7));
  throw;
}
