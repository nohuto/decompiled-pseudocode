/*
 * XREFs of sub_1800D8C1C @ 0x1800D8C1C
 * Callers:
 *     sub_1800D9558 @ 0x1800D9558 (sub_1800D9558.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800D8C1C(__int64 a1, __int64 a2)
{
  double v2; // xmm0_8
  double v3; // xmm2_8
  double v4; // xmm1_8
  bool result; // al

  v2 = *(double *)(a1 + 32);
  result = 0;
  if ( v2 >= *(double *)(a2 + 32) )
  {
    v3 = *(double *)(a2 + 40);
    v4 = *(double *)(a1 + 40);
    if ( v3 >= v4 && (v4 != v2 || v4 != v3 && v2 != *(double *)(a2 + 32)) )
      return 1;
  }
  return result;
}
