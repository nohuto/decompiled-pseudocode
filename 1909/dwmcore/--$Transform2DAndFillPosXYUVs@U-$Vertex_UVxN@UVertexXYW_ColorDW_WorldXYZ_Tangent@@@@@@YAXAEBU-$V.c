/*
 * XREFs of ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@PEAUD2D_POINT_2F@@@Z @ 0x1801B2770
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801B23CC (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801B24F4 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801B24F4.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801B2664 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801B2664.c)
 * Callees:
 *     sqrtf_0 @ 0x1800F01DB (sqrtf_0.c)
 */

float *__fastcall Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
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
  signed __int64 v25; // rcx
  float v26; // xmm8_4
  __int64 v27; // rbx
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
    v25 = (char *)a5 - (char *)a1;
    v26 = 1.0 - v19;
    v27 = a2 - (_QWORD)a1;
    result = a1 + 5;
    v28 = v13;
    do
    {
      v29 = (float)(v26 * *(float *)((char *)result + v27)) + (float)(v19 * *result);
      *(float *)((char *)result + v25 + 28) = (float)(v26 * *(float *)((char *)result + v27 - 4))
                                            + (float)(v19 * *(result - 1));
      *(float *)((char *)result + v25 + 32) = v29;
      result += 2;
      --v28;
    }
    while ( v28 );
  }
  return result;
}
