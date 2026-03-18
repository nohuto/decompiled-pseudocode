/*
 * XREFs of ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180078B84
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180077528 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x1801D2DC4 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 * Callees:
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x18005B400 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     ?AlignVertexCount@@YAXPEAUGeometryCounts@CDrawListPrimitive@@@Z @ 0x180078C84 (-AlignVertexCount@@YAXPEAUGeometryCounts@CDrawListPrimitive@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x18009B3D4 (PrimitiveStorage--Alloc_16_.c)
 */

__int64 __fastcall CDrawListPrimitive::Create(
        char a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 *a8)
{
  unsigned int v9; // edi
  unsigned int v12; // r15d
  unsigned int v14; // ecx
  __int64 v15; // rbx
  _DWORD v17[3]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+5Ch] [rbp-3Ch]
  int v19; // [rsp+60h] [rbp-38h]

  v17[0] = *(_DWORD *)(a2 + 12);
  v9 = 0;
  v17[1] = v17[0];
  v17[2] = a4;
  v12 = *(_DWORD *)a5;
  v18 = *(_DWORD *)a5;
  v19 = 0;
  AlignVertexCount((struct CDrawListPrimitive::GeometryCounts *)v17);
  if ( v17[0] > 0x10000u || v18 > 0x1FFFE )
  {
    v17[0] = 0;
    v18 = 0;
  }
  v15 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)v17);
  if ( v15 )
  {
    CDrawListPrimitive::Initialize(v15, a1, a2, a3, a4, *(void **)(a5 + 8), v12, a6, a7);
    *a8 = v15;
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x56u, 0LL);
  }
  return v9;
}
