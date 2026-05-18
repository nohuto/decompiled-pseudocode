/*
 * XREFs of sub_18012CC42 @ 0x18012CC42
 * Callers:
 *     <none>
 * Callees:
 *     sub_180069604 @ 0x180069604 (sub_180069604.c)
 *     sub_180069C7C @ 0x180069C7C (sub_180069C7C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CC42(__int64 a1, __int64 *a2)
{
  sub_180069604(a2[9], a2[7], a2[11]);
  sub_180069C7C(a2[9], a2[12], a2[8]);
  throw;
}
