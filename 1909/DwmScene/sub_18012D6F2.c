/*
 * XREFs of sub_18012D6F2 @ 0x18012D6F2
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F544 @ 0x18000F544 (sub_18000F544.c)
 *     sub_18000F594 @ 0x18000F594 (sub_18000F594.c)
 *     sub_18000F7A0 @ 0x18000F7A0 (sub_18000F7A0.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D6F2(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  sub_18000F544(a2[5], a2[6], a2[11]);
  v3 = sub_18000F594(a2[5]);
  sub_18000F7A0(v3, a2[10], a2[7]);
  throw;
}
