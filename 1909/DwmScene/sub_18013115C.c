/*
 * XREFs of sub_18013115C @ 0x18013115C
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800E2B28 @ 0x1800E2B28 (sub_1800E2B28.c)
 *     sub_1800E2C5C @ 0x1800E2C5C (sub_1800E2C5C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013115C(__int64 a1, __int64 *a2)
{
  sub_1800E2B28(a2[16], a2[17], a2[4]);
  sub_1800E2C5C(a2[16], a2[5], a2[19]);
  throw;
}
