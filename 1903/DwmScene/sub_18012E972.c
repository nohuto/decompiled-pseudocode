/*
 * XREFs of sub_18012E972 @ 0x18012E972
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D88C @ 0x18000D88C (sub_18000D88C.c)
 *     sub_18000F544 @ 0x18000F544 (sub_18000F544.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012E972(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_18000F544(a2[4]);
  sub_18000D88C(v3, a2[6], a2[5]);
  throw;
}
