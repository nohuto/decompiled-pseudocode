/*
 * XREFs of sub_180132A02 @ 0x180132A02
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F594 @ 0x18000F594 (sub_18000F594.c)
 *     sub_1800F66EC @ 0x1800F66EC (sub_1800F66EC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180132A02(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_18000F594(a2[4]);
  sub_1800F66EC(v3, a2[6], a2[5]);
  throw;
}
