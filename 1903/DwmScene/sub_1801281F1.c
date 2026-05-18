/*
 * XREFs of sub_1801281F1 @ 0x1801281F1
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F750 @ 0x18000F750 (sub_18000F750.c)
 *     sub_1800111C8 @ 0x1800111C8 (sub_1800111C8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801281F1(__int64 a1, __int64 *a2)
{
  sub_1800111C8(a2[6], a2[4], a2[7]);
  sub_18000F750(a2[6], a2[8], a2[5]);
  throw;
}
