/*
 * XREFs of sub_1800BE0A0 @ 0x1800BE0A0
 * Callers:
 *     sub_1800C1C60 @ 0x1800C1C60 (sub_1800C1C60.c)
 * Callees:
 *     _o_powf @ 0x180125A66 (_o_powf.c)
 */

float __fastcall sub_1800BE0A0(float a1)
{
  float v1; // xmm6_4
  float v2; // xmm0_4

  v1 = a1 / 100.0;
  v2 = fabs((float)(a1 / 100.0));
  o_powf();
  if ( v1 < 0.0 )
    v2 = v2 * -1.0;
  return v2 * 100.0;
}
