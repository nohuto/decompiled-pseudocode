/*
 * XREFs of sub_180127BA5 @ 0x180127BA5
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F7A0 @ 0x18000F7A0 (sub_18000F7A0.c)
 *     sub_180011218 @ 0x180011218 (sub_180011218.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180127BA5(__int64 a1, __int64 *a2)
{
  sub_180011218(a2[6], a2[4], a2[7]);
  sub_18000F7A0(a2[6], a2[8], a2[5]);
  throw;
}
