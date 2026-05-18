/*
 * XREFs of sub_18013426F @ 0x18013426F
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F544 @ 0x18000F544 (sub_18000F544.c)
 *     sub_18000F750 @ 0x18000F750 (sub_18000F750.c)
 *     sub_1800111C8 @ 0x1800111C8 (sub_1800111C8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013426F(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  sub_1800111C8(a2[5], a2[6], a2[11]);
  v3 = sub_18000F544(a2[5]);
  sub_18000F750(v3, a2[10], a2[7]);
  throw;
}
