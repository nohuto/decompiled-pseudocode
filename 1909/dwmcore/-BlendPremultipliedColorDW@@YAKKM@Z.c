/*
 * XREFs of ?BlendPremultipliedColorDW@@YAKKM@Z @ 0x1801B3764
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18000A020 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801B1B1C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1801B1B1C.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B1C7C (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801B1E44 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_World.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B215C (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801B23CC (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BBAFC (VertexTransfer--Transfer_VertexTransfer--CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex.c)
 *     ?TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801BBDC0 (-TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV-$StridedSpan@U-$Verte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BlendPremultipliedColorDW(unsigned int a1, float a2)
{
  return (int)(float)((float)(unsigned __int8)a1 * a2) | ((((((int)(float)((float)HIBYTE(a1) * a2) << 8) | (int)(float)((float)BYTE2(a1) * a2)) << 8) | (unsigned int)(int)(float)((float)BYTE1(a1) * a2)) << 8);
}
