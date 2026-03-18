/*
 * XREFs of ?TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801BBD08
 * Callers:
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z @ 0x1800624C8 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z.c)
 *     ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x1800638D0 (-EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry.c)
 *     ?AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawListPrimitive@@AEBV?$span@$$CBG$0?0@gsl@@AEBUVertexFormatDesc@@@Z @ 0x1801B3500 (-AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawList.c)
 * Callees:
 *     ??0?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@QEAA@AEBVCDrawListPrimitive@@M_NAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801B346C (--0-$CCommonTransferParameters@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@QEAA@AEBVCDrawListPrimitiv.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BBA48 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____.c)
 *     VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BBAFC (VertexTransfer--Transfer_VertexTransfer--CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex.c)
 *     VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BBB98 (VertexTransfer--Transfer_VertexTransfer--CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex.c)
 *     VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BBC80 (VertexTransfer--Transfer_VertexTransfer--CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex.c)
 */

__int64 __fastcall TransferAliasedVertices(__int64 a1, float a2, __int64 a3)
{
  char v4; // al
  float v5; // xmm1_4
  __int64 result; // rax
  _BYTE v7[88]; // [rsp+30h] [rbp-58h] BYREF

  CCommonTransferParameters<Vertex_UVxN<VertexXYW_ColorDW>>::CCommonTransferParameters<Vertex_UVxN<VertexXYW_ColorDW>>(
    (__int64)v7,
    a1,
    a2,
    *(_BYTE *)(a1 + 97),
    a3);
  v4 = 1;
  if ( (v7[40] & 1) != 0 || (v7[56] & 0xF) != 0 )
    v4 = 0;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a2 - 1.0)) & _xmm);
  if ( v5 >= 0.0000011920929 )
  {
    if ( !v7[48] )
    {
      if ( !v4 )
      {
        VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___((__int64)v7);
        goto LABEL_14;
      }
      goto LABEL_12;
    }
    if ( v4 )
    {
LABEL_12:
      VertexTransfer::SimdTransfer_VertexTransfer::CSimdCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___((__int64)v7);
      goto LABEL_14;
    }
    VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___((__int64)v7);
  }
  else
  {
    if ( v4 )
      goto LABEL_12;
    VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___((__int64)v7);
  }
LABEL_14:
  result = *(unsigned int *)(a1 + 8);
  dword_180339984 += result;
  return result;
}
