/*
 * XREFs of ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1801D4B18
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800AA850 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1801D4D6C (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     RoundIntermediateSize @ 0x1800AAE28 (RoundIntermediateSize.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B1E90 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Get2DScaleDimensions@Matrix3x3@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x1800DC7A8 (-Get2DScaleDimensions@Matrix3x3@@QEBA-AUD2D_VECTOR_2F@@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z @ 0x1801825D8 (-ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z.c)
 */

void __fastcall CBrushRenderingGraph::ConfigureIntermediateFromInput(
        CBrushRenderingGraph *this,
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a2,
        struct D2D_VECTOR_2F *a3)
{
  __int64 v3; // rdi
  struct D2D_VECTOR_2F v5; // r14
  int v7; // eax
  struct D2D_VECTOR_2F v8; // xmm0_8
  FLOAT v9; // xmm2_4
  FLOAT v10; // xmm7_4
  float v11; // xmm7_4
  float v12; // xmm6_4
  float v13; // xmm0_4
  FLOAT v14; // xmm6_4
  FLOAT y; // xmm1_4
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18[10]; // [rsp+28h] [rbp-39h] BYREF
  __int128 v19; // [rsp+50h] [rbp-11h] BYREF
  float v20; // [rsp+60h] [rbp-1h]
  float v21; // [rsp+64h] [rbp+3h]

  v3 = *((_QWORD *)a2 + 3);
  v5 = *a3;
  if ( *(_BYTE *)(v3 + 44) )
  {
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v3 + 8) + 40LL))(*(_QWORD *)(v3 + 8), &v19);
    v7 = DWORD1(v19);
    *(_QWORD *)((char *)&v19 + 4) = 0LL;
    *(float *)&v19 = (float)(int)v19;
    *((float *)&v19 + 3) = (float)v7;
    v20 = 0.0 - (float)(*(float *)&v19 * 0.0);
    v21 = 0.0 - (float)((float)v7 * 0.0);
    Matrix3x3::operator*((float *)(v3 + 48), v18, (float *)&v19);
  }
  else if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 + 56) + 8LL))(
               *(_QWORD *)(v3 + 56),
               2LL)
         || (int)CSurfaceDrawListBrush::ComputeLocalToSourceTransform(
                   *(CSurfaceDrawListBrush **)(v3 + 56),
                   (struct Matrix3x3 *)v18) < 0 )
  {
    v8 = (struct D2D_VECTOR_2F)*((_QWORD *)a2 + 1);
    goto LABEL_7;
  }
  v8 = **(struct D2D_VECTOR_2F **)&Matrix3x3::Get2DScaleDimensions((Matrix3x3 *)v18, (struct D2D_VECTOR_2F)&v19);
LABEL_7:
  a3[4] = v8;
  v9 = fmaxf(a3[3].x, fminf(*((float *)a2 + 2), a3[4].x) * *((float *)a2 + 4));
  v10 = fmaxf(a3[3].y, fminf(*((float *)a2 + 3), a3[4].y) * *((float *)a2 + 5));
  a3[3].x = v9;
  a3[3].y = v10;
  v11 = v10 * *((float *)a2 + 1);
  v12 = RoundIntermediateSize(v9 * *(float *)a2);
  v13 = RoundIntermediateSize(v11);
  *(_QWORD *)&v19 = 0LL;
  a3[1].y = v13;
  a3[1].x = v12;
  v14 = v12 / *(float *)a2;
  a3[2].y = v13 / *((float *)a2 + 1);
  a3[2].x = v14;
  y = a3[1].y;
  DWORD2(v19) = LODWORD(a3[1].x);
  *((FLOAT *)&v19 + 3) = y;
  *(_OWORD *)(*(_QWORD *)&v5 + 84LL) = v19;
  v16 = a3[3].x / a3[1].x;
  v17 = a3[3].y / a3[1].y;
  *(_DWORD *)(*(_QWORD *)&v5 + 52LL) = 0;
  *(_DWORD *)(*(_QWORD *)&v5 + 56LL) = 0;
  *(_DWORD *)(*(_QWORD *)&v5 + 60LL) = 0;
  *(_DWORD *)(*(_QWORD *)&v5 + 68LL) = 0;
  *(_DWORD *)(*(_QWORD *)&v5 + 80LL) = 1065353216;
  *(float *)(*(_QWORD *)&v5 + 48LL) = v16;
  *(float *)(*(_QWORD *)&v5 + 64LL) = v17;
  *(float *)(*(_QWORD *)&v5 + 72LL) = 0.0 - (float)(v16 * 0.0);
  *(float *)(*(_QWORD *)&v5 + 76LL) = 0.0 - (float)(v17 * 0.0);
}
