/*
 * XREFs of ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x1800C21E4
 * Callers:
 *     ?SplitVertex@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR_2F@@PEAUD2D_POINT_2F@@PEAU1@PEAU2@@Z @ 0x18001DECC (-SplitVertex@@YAXAEBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x18008DBD0 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B215C (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B2214 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B2328 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 * Callees:
 *     sqrtf_0 @ 0x1800F01DB (sqrtf_0.c)
 */

float *__fastcall Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(
        float *a1,
        __int64 a2,
        unsigned int a3,
        float *a4,
        float *a5,
        float *a6)
{
  float v7; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm4_4
  float v12; // xmm6_4
  __int64 v13; // rsi
  float v14; // xmm10_4
  float v15; // xmm9_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm9_4
  float v21; // xmm7_4
  float v22; // xmm6_4
  float v23; // xmm10_4
  float *result; // rax
  __int64 v25; // rbx
  float v26; // xmm8_4
  signed __int64 v27; // rcx
  __int64 v28; // rdx
  float v29; // xmm1_4

  v7 = a4[4];
  v9 = a1[1] - *(float *)(a2 + 4);
  v10 = a4[5];
  v11 = *a1 - *(float *)a2;
  v12 = a4[1];
  v13 = a3;
  v14 = v10 * COERCE_FLOAT(HIDWORD(*(_QWORD *)a2));
  v15 = (float)(v7 * COERCE_FLOAT(HIDWORD(*(_QWORD *)a2))) + (float)(*a4 * COERCE_FLOAT(*(_QWORD *)a2));
  v16 = v7 * v9;
  v17 = v10 * v9;
  v18 = v12 * COERCE_FLOAT(*(_QWORD *)a2);
  v19 = *(float *)&FLOAT_1_0;
  v20 = v15 + a4[12];
  v21 = (float)(*a4 * v11) + v16;
  v22 = (float)(v12 * v11) + v17;
  v23 = (float)(v14 + v18) + a4[13];
  if ( v21 != 0.0 || v22 != 0.0 )
    v19 = *(float *)(a2 + 8) / sqrtf_0((float)(v22 * v22) + (float)(v21 * v21));
  result = a6;
  *a6 = v20;
  a6[1] = v23;
  *a5 = (float)(v21 * v19) + v20;
  a5[1] = (float)(v22 * v19) + v23;
  if ( v19 > 1.0 && *(float *)(a2 + 12) == 0.0 )
    v19 = *(float *)&FLOAT_1_0;
  if ( (_DWORD)v13 )
  {
    v25 = a2 - (_QWORD)a1;
    v26 = 1.0 - v19;
    v27 = (char *)a5 - (char *)a1;
    result = a1 + 5;
    v28 = v13;
    do
    {
      v29 = (float)(v26 * *(float *)((char *)result + v25)) + (float)(v19 * *result);
      *(float *)((char *)result + v27 - 4) = (float)(v26 * *(float *)((char *)result + v25 - 4))
                                           + (float)(v19 * *(result - 1));
      *(float *)((char *)result + v27) = v29;
      result += 2;
      --v28;
    }
    while ( v28 );
  }
  return result;
}
