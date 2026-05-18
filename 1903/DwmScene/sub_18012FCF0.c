/*
 * XREFs of sub_18012FCF0 @ 0x18012FCF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F544 @ 0x18000F544 (sub_18000F544.c)
 *     sub_18002BB94 @ 0x18002BB94 (sub_18002BB94.c)
 *     sub_1800B29DC @ 0x1800B29DC (sub_1800B29DC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012FCF0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  sub_1800B29DC(a2[5], a2[7], a2[4]);
  v3 = sub_18000F544(a2[5]);
  sub_18002BB94(v3, a2[8], a2[6]);
  throw;
}
