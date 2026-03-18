/*
 * XREFs of ?RoundOffsets@CMILMatrix@@QEAAXXZ @ 0x1800607A0
 * Callers:
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180044D00 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CMILMatrix::RoundOffsets(CMILMatrix *this, __int64 a2, double a3)
{
  float v3; // xmm0_4
  int v4; // eax
  float v5; // xmm1_4
  int v6; // eax
  float v7; // xmm1_4
  int v8; // eax
  float v9; // [rsp+8h] [rbp+8h]
  float v10; // [rsp+8h] [rbp+8h]
  float v11; // [rsp+8h] [rbp+8h]

  v3 = *((float *)this + 12);
  if ( (LODWORD(v3) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v3 - v3;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    v4 = (int)v3 - LODWORD(a3);
  }
  else
  {
    v9 = v3 + 6291456.25;
    v4 = (int)(LODWORD(v9) << 10) >> 11;
  }
  v5 = *((float *)this + 13);
  *((float *)this + 12) = (float)v4;
  if ( (LODWORD(v5) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v5 - v5;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    v6 = (int)v5 - LODWORD(a3);
  }
  else
  {
    v10 = v5 + 6291456.25;
    v6 = (int)(LODWORD(v10) << 10) >> 11;
  }
  v7 = *((float *)this + 14);
  *((float *)this + 13) = (float)v6;
  if ( (LODWORD(v7) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v7 - v7;
    v8 = (int)v7 - _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v11 = v7 + 6291456.25;
    v8 = (int)(LODWORD(v11) << 10) >> 11;
  }
  *((float *)this + 14) = (float)v8;
}
