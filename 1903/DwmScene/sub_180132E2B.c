/*
 * XREFs of sub_180132E2B @ 0x180132E2B
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F544 @ 0x18000F544 (sub_18000F544.c)
 *     sub_18003D820 @ 0x18003D820 (sub_18003D820.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180132E2B(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_18000F544(a2[5]);
  sub_18003D820(v3, a2[6], a2[4]);
  throw;
}
