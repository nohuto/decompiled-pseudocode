/*
 * XREFs of sub_18012FC1E @ 0x18012FC1E
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002BB94 @ 0x18002BB94 (sub_18002BB94.c)
 *     sub_1800B29DC @ 0x1800B29DC (sub_1800B29DC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012FC1E(__int64 a1, __int64 *a2)
{
  sub_1800B29DC(a2[16], a2[19], a2[17]);
  sub_18002BB94(a2[16], a2[5], a2[4]);
  throw;
}
