/*
 * XREFs of sub_180068980 @ 0x180068980
 * Callers:
 *     sub_18002A850 @ 0x18002A850 (sub_18002A850.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180068980(__int64 a1, float a2, float a3)
{
  char result; // al

  if ( a2 < 0.1 || a2 > 1.0 || a3 < 0.1 || a3 > 1.0 )
    return 0;
  *(float *)(a1 + 192) = a2;
  result = 1;
  *(float *)(a1 + 196) = a3;
  return result;
}
