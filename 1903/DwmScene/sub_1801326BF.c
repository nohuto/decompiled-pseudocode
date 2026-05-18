/*
 * XREFs of sub_1801326BF @ 0x1801326BF
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002639C @ 0x18002639C (sub_18002639C.c)
 *     sub_1800F3AD0 @ 0x1800F3AD0 (sub_1800F3AD0.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801326BF(__int64 a1, __int64 *a2)
{
  sub_1800F3AD0(a2[16], a2[19], a2[5]);
  sub_18002639C(a2[16], a2[6], a2[4]);
  throw;
}
