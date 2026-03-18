/*
 * XREFs of ?TryDoubleTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAA_NXZ @ 0x18024C37C
 * Callers:
 *     ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x18024BF24 (-Flatten@-$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CBezierFlattener<float,CMilPoint2F>::TryDoubleTheStep(__int64 a1)
{
  char v1; // r8
  float v2; // xmm1_4
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm0_4

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 80) & 1) == 0 )
  {
    v2 = *(float *)(a1 + 40);
    v3 = (float)(*(float *)(a1 + 64) + *(float *)(a1 + 64)) - *(float *)(a1 + 72);
    v4 = (float)(*(float *)(a1 + 68) + *(float *)(a1 + 68)) - *(float *)(a1 + 76);
    if ( v2 >= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 72)) & _xmm)
      && v2 >= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 76)) & _xmm)
      && v2 >= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v3) & _xmm)
      && v2 >= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4) & _xmm) )
    {
      v1 = 1;
      v5 = (float)(*(float *)(a1 + 60) + *(float *)(a1 + 60)) + *(float *)(a1 + 68);
      *(float *)(a1 + 56) = (float)(*(float *)(a1 + 56) + *(float *)(a1 + 56)) + *(float *)(a1 + 64);
      *(float *)(a1 + 60) = v5;
      *(float *)(a1 + 72) = *(float *)(a1 + 72) * 4.0;
      *(float *)(a1 + 76) = *(float *)(a1 + 76) * 4.0;
      *(float *)(a1 + 64) = v3 * 4.0;
      *(float *)(a1 + 68) = v4 * 4.0;
      v6 = *(float *)(a1 + 88) + *(float *)(a1 + 88);
      *(int *)(a1 + 80) /= 2;
      *(float *)(a1 + 88) = v6;
    }
  }
  return v1;
}
