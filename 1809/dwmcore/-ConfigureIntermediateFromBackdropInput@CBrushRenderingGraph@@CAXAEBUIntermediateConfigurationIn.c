/*
 * XREFs of ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800AEBA8
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800AA850 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1801D4D6C (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     RoundIntermediateSize @ 0x1800AAE28 (RoundIntermediateSize.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B1E90 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a1,
        struct CBrushRenderingGraph::IntermediateConfigurationOutputs *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  float v6; // xmm8_4
  float v7; // xmm7_4
  float v8; // xmm6_4
  float v9; // xmm0_4
  int v10; // eax
  float v11; // xmm1_4
  int v12; // xmm3_4
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // xmm1_4
  __int128 v17; // xmm0
  _BYTE v18[36]; // [rsp+28h] [rbp-99h] BYREF
  _BYTE v19[36]; // [rsp+4Ch] [rbp-75h] BYREF
  __int128 v20; // [rsp+70h] [rbp-51h] BYREF
  float v21; // [rsp+80h] [rbp-41h]
  float v22; // [rsp+84h] [rbp-3Dh]
  _DWORD v23[3]; // [rsp+98h] [rbp-29h] BYREF
  float v24; // [rsp+A4h] [rbp-1Dh]
  float v25; // [rsp+A8h] [rbp-19h]
  float v26; // [rsp+ACh] [rbp-15h]
  __int128 v27; // [rsp+B0h] [rbp-11h] BYREF
  int v28; // [rsp+C0h] [rbp-1h]
  int v29; // [rsp+C4h] [rbp+3h]

  v2 = *((_QWORD *)a1 + 3);
  v4 = *(_QWORD *)a2;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v2 + 8) + 40LL))(*(_QWORD *)(v2 + 8), &v20);
  v6 = *(float *)(v2 + 92) - *(float *)(v2 + 84);
  v7 = *(float *)(v2 + 96) - *(float *)(v2 + 88);
  v8 = RoundIntermediateSize(v6 * *((float *)a1 + 4));
  v9 = RoundIntermediateSize(v7 * *((float *)a1 + 5));
  v10 = v20;
  v23[1] = 0;
  v23[2] = 0;
  DWORD2(v20) = 0;
  *((float *)a2 + 3) = v9;
  *((float *)a2 + 2) = v8;
  *((float *)a2 + 5) = v9 / v7;
  *((float *)a2 + 4) = v8 / v6;
  v11 = (float)(1.0 / *((float *)a2 + 2)) * *((float *)a1 + 4);
  v12 = *(_DWORD *)(v2 + 84) ^ _xmm;
  v24 = (float)(1.0 / *((float *)a2 + 3)) * *((float *)a1 + 5);
  *(float *)v23 = v11;
  v28 = v12;
  v25 = 0.0 - (float)(v11 * 0.0);
  v29 = *(_DWORD *)(v2 + 88) ^ _xmm;
  v26 = 0.0 - (float)(v24 * 0.0);
  v27 = _xmm;
  *((float *)&v20 + 3) = (float)SDWORD1(v20);
  *(_QWORD *)&v20 = COERCE_UNSIGNED_INT((float)v10);
  v21 = 0.0 - (float)((float)v10 * 0.0);
  v22 = 0.0 - (float)(*((float *)&v20 + 3) * 0.0);
  v13 = Matrix3x3::operator*(v2 + 48, v18, &v20);
  v14 = Matrix3x3::operator*(v13, &v20, &v27);
  v15 = Matrix3x3::operator*(v14, v19, v23);
  *(_OWORD *)(v4 + 48) = *(_OWORD *)v15;
  *(_OWORD *)(v4 + 64) = *(_OWORD *)(v15 + 16);
  LODWORD(v15) = *(_DWORD *)(v15 + 32);
  *(_QWORD *)&v20 = 0LL;
  *(_DWORD *)(v4 + 80) = v15;
  v16 = *((_DWORD *)a2 + 3);
  DWORD2(v20) = *((_DWORD *)a2 + 2);
  HIDWORD(v20) = v16;
  v17 = v20;
  *(_BYTE *)(v4 + 101) = 1;
  *(_OWORD *)(v4 + 84) = v17;
  *(_BYTE *)(v4 + 102) = *(_BYTE *)(v2 + 102);
}
