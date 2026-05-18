/*
 * XREFs of sub_1801329D2 @ 0x1801329D2
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D8D4 @ 0x18000D8D4 (sub_18000D8D4.c)
 *     sub_18000F594 @ 0x18000F594 (sub_18000F594.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801329D2(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_18000F594(a2[4]);
  sub_18000D8D4(v3, a2[6], a2[5]);
  throw;
}
