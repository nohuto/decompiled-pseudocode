/*
 * XREFs of sub_180129071 @ 0x180129071
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F594 @ 0x18000F594 (sub_18000F594.c)
 *     sub_18000F7A0 @ 0x18000F7A0 (sub_18000F7A0.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180129071(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_18000F594(a2[4]);
  sub_18000F7A0(v3, a2[6], a2[5]);
  throw;
}
