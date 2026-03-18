/*
 * XREFs of ?InferVisualToTextureTransform@CLinearGradientBrush@@AEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180005418
 * Callers:
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800050D0 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUMilPoint2F@@@Z @ 0x18000552C (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CLinearGradientBrush::InferVisualToTextureTransform(__int64 a1, __int64 a2, __int64 a3)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  unsigned __int64 v5; // xmm1_8
  D2D1_MATRIX_3X2_F *v6; // r9
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-19h] BYREF
  __int128 v11; // [rsp+40h] [rbp-9h]
  __int128 v12; // [rsp+50h] [rbp+7h]
  __int128 v13; // [rsp+60h] [rbp+17h]
  __int16 v14; // [rsp+70h] [rbp+27h]
  __int128 v15; // [rsp+80h] [rbp+37h] BYREF

  v3 = FLOAT_1_0;
  v4 = 1.0 / *(float *)(a3 + 8);
  if ( *(_BYTE *)(a1 + 96) == 1 )
    v3 = 1.0 - v4;
  else
    v4 = 0.0;
  *(_QWORD *)&v15 = LODWORD(v4);
  *((_QWORD *)&v15 + 1) = LODWORD(v3) | 0x3F80000000000000LL;
  v10 = _xmm;
  v11 = _xmm;
  v12 = _xmm;
  v13 = _xmm;
  v14 = 32085;
  CMILMatrix::InferAffineMatrix(&v10, &v15, a2);
  *(_QWORD *)&v15 = v10;
  *((_QWORD *)&v15 + 1) = v11;
  v5 = _mm_unpacklo_ps((__m128)(unsigned int)v13, (__m128)DWORD1(v13)).m128_u64[0];
  *(_OWORD *)&v6->m11 = v15;
  *(_QWORD *)&v6->m[2][0] = v5;
  v8 = 0;
  if ( !D2D1InvertMatrix(v6) )
  {
    v8 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_18029B7A8, 1u, -2003304441, 0x135u);
  }
  return v8;
}
