/*
 * XREFs of sub_18013104C @ 0x18013104C
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800E2A18 @ 0x1800E2A18 (sub_1800E2A18.c)
 *     sub_1800E2B4C @ 0x1800E2B4C (sub_1800E2B4C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013104C(__int64 a1, __int64 *a2)
{
  sub_1800E2A18(a2[16], a2[17], a2[4]);
  sub_1800E2B4C(a2[16], a2[5], a2[19]);
  throw;
}
