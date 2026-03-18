/*
 * XREFs of ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18003AD7C
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18003B01C (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1802062AC (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     RoundIntermediateSize @ 0x18003AFA0 (RoundIntermediateSize.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180051190 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
  int v12; // eax
  __int64 v13; // rax
  float v14; // xmm1_4
  __int64 v15; // rax
  float v16; // xmm2_4
  __int64 v17; // rax
  int v18; // xmm1_4
  __int128 v19; // xmm0
  _BYTE v20[36]; // [rsp+28h] [rbp-79h] BYREF
  _BYTE v21[36]; // [rsp+4Ch] [rbp-55h] BYREF
  _BYTE v22[40]; // [rsp+70h] [rbp-31h] BYREF
  __int128 v23; // [rsp+98h] [rbp-9h] BYREF
  float v24; // [rsp+A8h] [rbp+7h]
  float v25; // [rsp+ACh] [rbp+Bh]

  v2 = *((_QWORD *)a1 + 3);
  v4 = *(_QWORD *)a2;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v2 + 8) + 40LL))(*(_QWORD *)(v2 + 8), &v23);
  v6 = *(float *)(v2 + 92) - *(float *)(v2 + 84);
  v7 = *(float *)(v2 + 96) - *(float *)(v2 + 88);
  v8 = COERCE_FLOAT(COERCE_UNSIGNED_INT64(((double (*)(void))RoundIntermediateSize)()));
  v9 = RoundIntermediateSize();
  v10 = v23;
  DWORD2(v23) = 0;
  *((float *)a2 + 3) = v9;
  *((float *)a2 + 2) = v8;
  *((float *)a2 + 5) = v9 / v7;
  v11 = (float)v10;
  v12 = DWORD1(v23);
  DWORD1(v23) = 0;
  *((float *)a2 + 4) = v8 / v6;
  *(float *)&v23 = v11;
  *((float *)&v23 + 3) = (float)v12;
  v24 = 0.0 - (float)(v11 * 0.0);
  v25 = 0.0 - (float)((float)v12 * 0.0);
  v13 = Matrix3x3::operator*(v2 + 48, v20, &v23);
  LODWORD(v14) = *(_DWORD *)(v2 + 88) ^ _xmm;
  LODWORD(v24) = *(_DWORD *)(v2 + 84) ^ _xmm;
  v25 = v14;
  v23 = _xmm;
  v15 = Matrix3x3::operator*(v13, v21, &v23);
  *(_QWORD *)((char *)&v23 + 4) = 0LL;
  v16 = (float)(1.0 / *((float *)a2 + 3)) * *((float *)a1 + 5);
  *(float *)&v23 = (float)(1.0 / *((float *)a2 + 2)) * *((float *)a1 + 4);
  *((float *)&v23 + 3) = v16;
  v24 = 0.0 - (float)(*(float *)&v23 * 0.0);
  v25 = 0.0 - (float)(v16 * 0.0);
  v17 = Matrix3x3::operator*(v15, v22, &v23);
  *(_QWORD *)&v23 = 0LL;
  *(_OWORD *)(v4 + 48) = *(_OWORD *)v17;
  *(_OWORD *)(v4 + 64) = *(_OWORD *)(v17 + 16);
  *(_DWORD *)(v4 + 80) = *(_DWORD *)(v17 + 32);
  v18 = *((_DWORD *)a2 + 3);
  DWORD2(v23) = *((_DWORD *)a2 + 2);
  HIDWORD(v23) = v18;
  v19 = v23;
  *(_BYTE *)(v4 + 101) = 1;
  *(_OWORD *)(v4 + 84) = v19;
  *(_BYTE *)(v4 + 102) = *(_BYTE *)(v2 + 102);
}
