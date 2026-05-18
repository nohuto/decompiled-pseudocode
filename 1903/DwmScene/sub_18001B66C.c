/*
 * XREFs of sub_18001B66C @ 0x18001B66C
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 *     sub_1800B1C10 @ 0x1800B1C10 (sub_1800B1C10.c)
 * Callees:
 *     <none>
 */

float __fastcall sub_18001B66C(float a1, float a2, float a3, float a4)
{
  float v4; // xmm5_4
  float v5; // xmm1_4
  float v6; // xmm2_4

  v4 = fabs((float)(a1 - 0.0));
  if ( v4 <= 0.0000099999997 )
    wassert(
      L"!XMScalarNearEqual(ViewWidth, 0.0f, 0.00001f)",
      L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathMatrix.inl",
      0xA74u);
  v5 = fabs((float)(a2 - 0.0));
  if ( v5 <= 0.0000099999997 )
    wassert(
      L"!XMScalarNearEqual(ViewHeight, 0.0f, 0.00001f)",
      L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathMatrix.inl",
      0xA75u);
  v6 = fabs((float)(a4 - a3));
  if ( v6 <= 0.0000099999997 )
    wassert(
      L"!XMScalarNearEqual(FarZ, NearZ, 0.00001f)",
      L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathMatrix.inl",
      0xA76u);
  return 2.0 / a1;
}
