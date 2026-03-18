/*
 * XREFs of ?AlignVertexCount@@YAXPEAUGeometryCounts@CDrawListPrimitive@@@Z @ 0x18003E964
 * Callers:
 *     ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x18003E864 (-Create@CDrawListPrimitive@@SAJ_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AE.c)
 *     ?CreateInstanced@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x1801BA920 (-CreateInstanced@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@.c)
 * Callees:
 *     <none>
 */

void __fastcall AlignVertexCount(struct CDrawListPrimitive::GeometryCounts *a1)
{
  int v1; // eax
  bool v2; // zf

  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    v1 = *(_DWORD *)a1 - (*(_DWORD *)a1 & 1) + 2;
    v2 = *((_DWORD *)a1 + 1) == 0;
    *(_DWORD *)a1 = v1;
    if ( !v2 )
      *((_DWORD *)a1 + 1) = v1;
  }
}
