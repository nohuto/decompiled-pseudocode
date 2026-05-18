/*
 * XREFs of sub_180134AE3 @ 0x180134AE3
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F544 @ 0x18000F544 (sub_18000F544.c)
 *     sub_180031DAC @ 0x180031DAC (sub_180031DAC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180134AE3(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_18000F544(a2[10]);
  sub_180031DAC(v3, a2[12], a2[11]);
  throw;
}
