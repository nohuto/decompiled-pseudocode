/*
 * XREFs of sub_1800B24F8 @ 0x1800B24F8
 * Callers:
 *     sub_1800B1C10 @ 0x1800B1C10 (sub_1800B1C10.c)
 * Callees:
 *     sub_1800B26C4 @ 0x1800B26C4 (sub_1800B26C4.c)
 */

float __fastcall sub_1800B24F8(float a1, float a2, float a3, float a4)
{
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v9; // [rsp+A8h] [rbp+67h] BYREF
  float v10; // [rsp+B0h] [rbp+6Fh] BYREF

  if ( a3 <= 0.0 || a4 <= 0.0 )
    wassert(L"NearZ > 0.f && FarZ > 0.f", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathMatrix.inl", 0x8F8u);
  v5 = fabs((float)(a1 - 0.0));
  if ( v5 <= 0.000019999999 )
    wassert(
      L"!XMScalarNearEqual(FovAngleY, 0.0f, 0.00001f * 2.0f)",
      L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathMatrix.inl",
      0x8F9u);
  v6 = fabs((float)(a2 - 0.0));
  if ( v6 <= 0.0000099999997 )
    wassert(
      L"!XMScalarNearEqual(AspectRatio, 0.0f, 0.00001f)",
      L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathMatrix.inl",
      0x8FAu);
  v7 = fabs((float)(a4 - a3));
  if ( v7 <= 0.0000099999997 )
    wassert(
      L"!XMScalarNearEqual(FarZ, NearZ, 0.00001f)",
      L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathMatrix.inl",
      0x8FBu);
  sub_1800B26C4(&v10, &v9);
  return (float)(v9 / v10) / a2;
}
