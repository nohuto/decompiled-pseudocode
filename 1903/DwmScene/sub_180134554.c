/*
 * XREFs of sub_180134554 @ 0x180134554
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D458 @ 0x18008D458 (sub_18008D458.c)
 *     sub_180121C8C @ 0x180121C8C (sub_180121C8C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180134554(__int64 a1, __int64 *a2)
{
  sub_18008D458(a2[4], a2 + 6, a2[21]);
  sub_180121C8C(a2[4], (__int64)(a2 + 7));
  throw;
}
