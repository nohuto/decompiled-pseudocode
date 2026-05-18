/*
 * XREFs of sub_18012E640 @ 0x18012E640
 * Callers:
 *     <none>
 * Callees:
 *     sub_180088EFC @ 0x180088EFC (sub_180088EFC.c)
 *     sub_18008D458 @ 0x18008D458 (sub_18008D458.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012E640(__int64 a1, __int64 *a2)
{
  sub_18008D458(a2[4], a2 + 5, a2[17]);
  sub_180088EFC(a2[4], (__int64)(a2 + 7));
  throw;
}
