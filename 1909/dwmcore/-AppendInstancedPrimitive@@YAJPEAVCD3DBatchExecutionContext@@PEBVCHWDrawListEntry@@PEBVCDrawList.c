/*
 * XREFs of ?AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawListPrimitive@@AEBV?$span@$$CBG$0?0@gsl@@AEBUVertexFormatDesc@@@Z @ 0x1801B3500
 * Callers:
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z @ 0x1800624C8 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z.c)
 *     ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x1800638D0 (-EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry.c)
 * Callees:
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x1800639D0 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     ??$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0_JP6A_NAEBU1@2@Z@Z @ 0x1801B3304 (--$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos.c)
 *     ?SetLocalToWorld@CD3DBatchExecutionContext@@QEAAXAEBVCMILMatrix@@@Z @ 0x1801B73B4 (-SetLocalToWorld@CD3DBatchExecutionContext@@QEAAXAEBVCMILMatrix@@@Z.c)
 *     ?TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801BBD08 (-TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXY.c)
 */

__int64 __fastcall AppendInstancedPrimitive(
        CD3DBatchExecutionContext *a1,
        __m128 *a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5)
{
  __m128 *v5; // rbp
  signed int appended; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r15d
  int v13; // eax
  int v14; // edi
  int v15; // edi
  __int64 v16; // rbx
  float v17; // xmm2_4
  float v18; // xmm3_4
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // r8
  __int64 v22; // rax
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  int v26; // edx
  __int64 v27; // rax
  float v28; // xmm0_4
  __int64 v29; // rbx
  char *v30; // rdi
  __int64 v31; // r12
  float v32; // xmm6_4
  float v33; // xmm7_4
  float v34; // xmm8_4
  float *v35; // rax
  __m128 *v36; // rcx
  __m128 v37; // xmm3
  __m128 v38; // xmm5
  float v39; // xmm1_4
  float v40; // xmm0_4
  __int64 v42; // [rsp+30h] [rbp-88h] BYREF
  int v43; // [rsp+38h] [rbp-80h]
  int v44; // [rsp+3Ch] [rbp-7Ch]
  __int64 v45; // [rsp+40h] [rbp-78h] BYREF
  void *v46; // [rsp+48h] [rbp-70h] BYREF

  v5 = a2 + 4;
  CD3DBatchExecutionContext::SetLocalToWorld(a1, (const struct CMILMatrix *)&a2[4]);
  appended = CD3DBatchExecutionContext::AppendGeometry(
               (__int64)a1,
               *(_DWORD *)(a3 + 8),
               *(_DWORD *)(a3 + 24),
               a4,
               &v45,
               &v46);
  v12 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, appended, 0x34u, 0LL);
  }
  else
  {
    v13 = *(_DWORD *)(a3 + 8);
    v14 = 8 * *(_DWORD *)(a5 + 4);
    if ( *(_BYTE *)a5 )
      v15 = v14 + 48;
    else
      v15 = v14 + 16;
    v16 = v45;
    v42 = v45;
    v43 = v15;
    v44 = v13;
    TransferAliasedVertices(a3, v10, &v42);
    v17 = 0.0;
    v18 = 0.0;
    if ( *(_DWORD *)(a3 + 8) )
    {
      v19 = *(unsigned int *)(a3 + 8);
      v20 = 0;
      v21 = v19;
      do
      {
        v22 = v20;
        v20 += v15;
        v23 = fmaxf(*(float *)(v22 + v16), v17);
        v24 = fmaxf(*(float *)(v22 + v16 + 4), v18);
        v17 = v23;
        v18 = v24;
        --v21;
      }
      while ( v21 );
      v25 = v23 * 0.5;
      v26 = 0;
      do
      {
        v27 = v26;
        v26 += v15;
        v28 = *(float *)(v27 + v16 + 4) - (float)(v24 * 0.5);
        *(float *)(v27 + v16) = *(float *)(v27 + v16) - v25;
        *(float *)(v27 + v16 + 4) = v28;
        --v19;
      }
      while ( v19 );
    }
    v29 = *(unsigned int *)(a3 + 24);
    v30 = (char *)v46;
    v31 = v29;
    memcpy_0(v46, *(const void **)(a3 + 64), 48 * v29);
    v32 = v5[3].m128_f32[0];
    v33 = v5[3].m128_f32[1];
    v34 = v5[3].m128_f32[2];
    if ( (_DWORD)v29 )
    {
      v35 = (float *)(v30 + 12);
      v36 = (__m128 *)v30;
      do
      {
        v37 = *v36;
        v36 += 3;
        v38 = _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v37, v37, 255), v5[3]),
                  _mm_mul_ps(_mm_shuffle_ps(v37, v37, 170), v5[2])),
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v37, v37, 85), v5[1]),
                  _mm_mul_ps(_mm_shuffle_ps(v37, v37, 0), *v5)));
        v39 = _mm_shuffle_ps(v38, v38, 85).m128_f32[0];
        v40 = v38.m128_f32[0] - v32;
        v38.m128_f32[0] = _mm_shuffle_ps(v38, v38, 170).m128_f32[0];
        *v35 = (float)((float)((float)(v39 - v33) * (float)(v39 - v33)) + (float)(v40 * v40))
             + (float)((float)(v38.m128_f32[0] - v34) * (float)(v38.m128_f32[0] - v34));
        v35 += 12;
        --v31;
      }
      while ( v31 );
    }
    std::_Sort_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
      v30,
      &v30[48 * v29],
      48 * v29 / 48,
      (unsigned __int8 (__fastcall *)(__int128 *, char *))WSortInstances);
  }
  return v12;
}
