/*
 * XREFs of sub_18013437F @ 0x18013437F
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F594 @ 0x18000F594 (sub_18000F594.c)
 *     sub_18000F7A0 @ 0x18000F7A0 (sub_18000F7A0.c)
 *     sub_180011218 @ 0x180011218 (sub_180011218.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013437F(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  sub_180011218(a2[5], a2[6], a2[11]);
  v3 = sub_18000F594(a2[5]);
  sub_18000F7A0(v3, a2[10], a2[7]);
  throw;
}
