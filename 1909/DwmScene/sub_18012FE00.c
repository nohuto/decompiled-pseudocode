/*
 * XREFs of sub_18012FE00 @ 0x18012FE00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F594 @ 0x18000F594 (sub_18000F594.c)
 *     sub_18002BCA4 @ 0x18002BCA4 (sub_18002BCA4.c)
 *     sub_1800B2AEC @ 0x1800B2AEC (sub_1800B2AEC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012FE00(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  sub_1800B2AEC(a2[5], a2[7], a2[4]);
  v3 = sub_18000F594(a2[5]);
  sub_18002BCA4(v3, a2[8], a2[6]);
  throw;
}
