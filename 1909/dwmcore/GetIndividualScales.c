/*
 * XREFs of GetIndividualScales @ 0x18025D0D4
 * Callers:
 *     ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x18025DDC0 (-UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1800F01DB (sqrtf_0.c)
 */

__int64 __fastcall GetIndividualScales(__int64 a1, float *a2, float *a3)
{
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm0_4

  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  v6 = *(float *)a1;
  v7 = *(float *)(a1 + 8);
  v8 = sqrtf_0((float)(v6 * v6) + (float)(v7 * v7));
  *a2 = v8;
  if ( v8 == 0.0 )
    return 2147942487LL;
  v9 = *(float *)(a1 + 12);
  v10 = *(float *)(a1 + 4);
  v11 = v6 / v8;
  v12 = v7 / v8;
  *(float *)a1 = v11;
  *(float *)(a1 + 8) = v12;
  v13 = sqrtf_0(
          (float)((float)(v9 - (float)(v12 * (float)((float)(v11 * v10) + (float)(v12 * v9))))
                * (float)(v9 - (float)(v12 * (float)((float)(v11 * v10) + (float)(v12 * v9)))))
        + (float)((float)(v10 - (float)(v11 * (float)((float)(v11 * v10) + (float)(v12 * v9))))
                * (float)(v10 - (float)(v11 * (float)((float)(v11 * v10) + (float)(v12 * v9))))));
  *a3 = v13;
  if ( v13 == 0.0 )
    return 2147942487LL;
  else
    return 0LL;
}
