/*
 * XREFs of sub_1800C6AA0 @ 0x1800C6AA0
 * Callers:
 *     sub_1800C3634 @ 0x1800C3634 (sub_1800C3634.c)
 *     sub_1800C80F8 @ 0x1800C80F8 (sub_1800C80F8.c)
 * Callees:
 *     _o_powf @ 0x180125A66 (_o_powf.c)
 */

double __fastcall sub_1800C6AA0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  o_powf();
  return sub_1800F5D0C(*a4);
}
