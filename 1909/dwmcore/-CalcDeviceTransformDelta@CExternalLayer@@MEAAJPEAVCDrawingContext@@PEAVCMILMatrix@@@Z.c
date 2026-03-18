/*
 * XREFs of ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18017BF60
 * Callers:
 *     <none>
 * Callees:
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180028C08 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@_ea_180028C08.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18016B428 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 */

__int64 __fastcall CExternalLayer::CalcDeviceTransformDelta(
        CExternalLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3,
        double a4)
{
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  int v11; // xmm0_4
  __int128 v12; // xmm1
  int v13; // eax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _OWORD v17[4]; // [rsp+30h] [rbp-39h] BYREF
  int v18; // [rsp+70h] [rbp+7h]
  unsigned int v19; // [rsp+80h] [rbp+17h] BYREF
  unsigned int v20; // [rsp+84h] [rbp+1Bh]
  int v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+8Ch] [rbp+23h]
  float v23[4]; // [rsp+90h] [rbp+27h] BYREF

  v18 = 0;
  v6 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(a2, (struct MilPointAndSizeL *)&v19, (__int64)a3, a4);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x5Cu, 0LL);
  }
  else
  {
    v9 = _mm_cvtsi32_si128(v19);
    v10 = _mm_cvtsi32_si128(v20);
    v19 = 0;
    v20 = 0;
    v23[0] = _mm_cvtepi32_ps(v9).m128_f32[0];
    *(float *)v10.m128i_i32 = _mm_cvtepi32_ps(v10).m128_f32[0];
    v23[2] = (float)v21 + v23[0];
    *(float *)&v11 = (float)*((int *)this + 7);
    v23[3] = (float)v22 + *(float *)v10.m128i_i32;
    *(float *)v9.m128i_i32 = (float)*((int *)this + 6);
    v23[1] = *(float *)v10.m128i_i32;
    v21 = v9.m128i_i32[0];
    v22 = v11;
    CMILMatrix::InferAffineMatrix((__int64)v17, v23, (float *)&v19);
    v12 = v17[1];
    v13 = v18;
    *(_OWORD *)a3 = v17[0];
    v14 = v17[2];
    *((_OWORD *)a3 + 1) = v12;
    v15 = v17[3];
    *((_OWORD *)a3 + 2) = v14;
    *((_OWORD *)a3 + 3) = v15;
    *((_DWORD *)a3 + 16) = v13;
  }
  return v8;
}
