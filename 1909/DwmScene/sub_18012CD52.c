/*
 * XREFs of sub_18012CD52 @ 0x18012CD52
 * Callers:
 *     <none>
 * Callees:
 *     sub_180069714 @ 0x180069714 (sub_180069714.c)
 *     sub_180069D8C @ 0x180069D8C (sub_180069D8C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CD52(__int64 a1, __int64 *a2)
{
  sub_180069714(a2[9], a2[7], a2[11]);
  sub_180069D8C(a2[9], a2[12], a2[8]);
  throw;
}
