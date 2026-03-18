/*
 * XREFs of ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@PEAUD2D_POINT_2F@@@Z @ 0x1801B4030
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801B3C8C (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801B3DB4 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801B3DB4.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801B3F24 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801B3F24.c)
 * Callees:
 *     sqrtf_0 @ 0x1800EC51B (sqrtf_0.c)
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
  float v14; // xmm0_4
  float v15; // xmm9_4
  float v16; // xmm1_4
  float v17; // xmm7_4
  float v18; // xmm3_4
  float v19; // xmm10_4
  float v20; // xmm6_4
  float *result; // rax
  signed __int64 v22; // rcx
  float v23; // xmm8_4
  __int64 v24; // rbx
  __int64 v25; // rdx
  float v26; // xmm1_4

  v7 = a4[4];
  v9 = a1[1] - *(float *)(a2 + 4);
  v10 = a4[5];
  v11 = *a1 - *(float *)a2;
  v12 = a4[1];
  v13 = a3;
  v14 = v10 * COERCE_FLOAT(HIDWORD(*(_QWORD *)a2));
  v15 = (float)((float)(*a4 * COERCE_FLOAT(*(_QWORD *)a2)) + (float)(v7 * COERCE_FLOAT(HIDWORD(*(_QWORD *)a2))))
      + a4[12];
  v16 = v10 * v9;
  v17 = (float)(*a4 * v11) + (float)(v7 * v9);
  v18 = *(float *)&FLOAT_1_0;
  v19 = (float)((float)(v12 * COERCE_FLOAT(*(_QWORD *)a2)) + v14) + a4[13];
  v20 = (float)(v12 * v11) + v16;
  if ( v17 != 0.0 || v20 != 0.0 )
    v18 = *(float *)(a2 + 8) / sqrtf_0((float)(v20 * v20) + (float)(v17 * v17));
  result = a6;
  *a6 = v15;
  a6[1] = v19;
  *a5 = (float)(v17 * v18) + v15;
  a5[1] = (float)(v20 * v18) + v19;
  if ( (_DWORD)v13 )
  {
    v22 = (char *)a5 - (char *)a1;
    v23 = 1.0 - v18;
    v24 = a2 - (_QWORD)a1;
    result = a1 + 5;
    v25 = v13;
    do
    {
      v26 = (float)(v23 * *(float *)((char *)result + v24)) + (float)(v18 * *result);
      *(float *)((char *)result + v22 + 28) = (float)(v23 * *(float *)((char *)result + v24 - 4))
                                            + (float)(v18 * *(result - 1));
      *(float *)((char *)result + v22 + 32) = v26;
      result += 2;
      --v25;
    }
    while ( v25 );
  }
  return result;
}
