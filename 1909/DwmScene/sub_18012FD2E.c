/*
 * XREFs of sub_18012FD2E @ 0x18012FD2E
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002BCA4 @ 0x18002BCA4 (sub_18002BCA4.c)
 *     sub_1800B2AEC @ 0x1800B2AEC (sub_1800B2AEC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012FD2E(__int64 a1, __int64 *a2)
{
  sub_1800B2AEC(a2[16], a2[19], a2[17]);
  sub_18002BCA4(a2[16], a2[5], a2[4]);
  throw;
}
