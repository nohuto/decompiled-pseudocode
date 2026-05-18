/*
 * XREFs of sub_180134BF3 @ 0x180134BF3
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F594 @ 0x18000F594 (sub_18000F594.c)
 *     sub_180031EBC @ 0x180031EBC (sub_180031EBC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180134BF3(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_18000F594(a2[10]);
  sub_180031EBC(v3, a2[12], a2[11]);
  throw;
}
