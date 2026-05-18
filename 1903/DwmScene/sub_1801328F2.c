/*
 * XREFs of sub_1801328F2 @ 0x1801328F2
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F544 @ 0x18000F544 (sub_18000F544.c)
 *     sub_1800F65DC @ 0x1800F65DC (sub_1800F65DC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801328F2(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_18000F544(a2[4]);
  sub_1800F65DC(v3, a2[6], a2[5]);
  throw;
}
