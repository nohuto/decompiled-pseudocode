/*
 * XREFs of sub_180132839 @ 0x180132839
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F594 @ 0x18000F594 (sub_18000F594.c)
 *     sub_18003D930 @ 0x18003D930 (sub_18003D930.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180132839(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_18000F594(a2[5]);
  sub_18003D930(v3, a2[6], a2[4]);
  throw;
}
