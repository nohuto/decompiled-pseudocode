/*
 * XREFs of ?Get2DScaleDimensions@Matrix3x3@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x1800502C4
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18005042C (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x180204978 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 * Callees:
 *     ?IsCloseRealOne@@YA_NMM@Z @ 0x180064938 (-IsCloseRealOne@@YA_NMM@Z.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x1800A301C (-IsCloseRealZero@@YA_NMM@Z.c)
 *     sqrtf_0 @ 0x1800F01DB (sqrtf_0.c)
 */

struct D2D_VECTOR_2F __fastcall Matrix3x3::Get2DScaleDimensions(Matrix3x3 *this, struct D2D_VECTOR_2F a2)
{
  float v3; // xmm7_4
  float v4; // xmm8_4
  float v5; // xmm3_4
  float v6; // xmm6_4
  float v7; // xmm10_4
  float v8; // xmm11_4
  __int64 v9; // rcx
  __int64 v10; // rcx
  float v11; // xmm4_4
  float v12; // xmm5_4
  __int64 v13; // rcx
  float v14; // xmm7_4
  float v15; // xmm6_4
  float v16; // xmm8_4
  float v17; // xmm0_4
  struct D2D_VECTOR_2F result; // rax

  v3 = *((float *)this + 6) + *((float *)this + 3);
  v4 = *((float *)this + 7);
  v5 = v4 + *((float *)this + 1);
  v6 = v4 + *((float *)this + 4);
  v7 = *((float *)this + 8) + *((float *)this + 5);
  v8 = *((float *)this + 8) + *((float *)this + 2);
  if ( !IsCloseRealZero(v8, 0.000081380211) && !IsCloseRealOne(v8, 0.000081380211) )
    v5 = v5 / v8;
  if ( !IsCloseRealZero(v7, 0.000081380211) && !IsCloseRealOne(v7, 0.000081380211) )
  {
    v3 = v3 / v7;
    v6 = v6 / v7;
  }
  if ( !IsCloseRealZero(*(float *)(v9 + 32), 0.000081380211) && !IsCloseRealOne(*(float *)(v10 + 32), 0.000081380211) )
  {
    v12 = v12 / *(float *)(v13 + 32);
    v4 = v4 / *(float *)(v13 + 32);
  }
  v14 = v3 - v12;
  v15 = v6 - v4;
  v16 = sqrtf_0((float)((float)(v5 - v4) * (float)(v5 - v4)) + (float)((float)(v11 - v12) * (float)(v11 - v12)));
  v17 = sqrtf_0((float)(v15 * v15) + (float)(v14 * v14));
  result = a2;
  **(float **)&a2 = v16;
  *(float *)(*(_QWORD *)&a2 + 4LL) = v17;
  return result;
}
