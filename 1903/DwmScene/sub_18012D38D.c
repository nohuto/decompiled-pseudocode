/*
 * XREFs of sub_18012D38D @ 0x18012D38D
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F4F4 @ 0x18000F4F4 (sub_18000F4F4.c)
 *     sub_18000F750 @ 0x18000F750 (sub_18000F750.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D38D(__int64 a1, __int64 *a2)
{
  sub_18000F4F4(a2[6], a2[4], a2[7]);
  sub_18000F750(a2[6], a2[8], a2[5]);
  throw;
}
