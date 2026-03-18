/*
 * XREFs of ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x18003E864
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x18003D208 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x1801D1650 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 * Callees:
 *     ?AlignVertexCount@@YAXPEAUGeometryCounts@CDrawListPrimitive@@@Z @ 0x18003E964 (-AlignVertexCount@@YAXPEAUGeometryCounts@CDrawListPrimitive@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x18008DBD0 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x18009A080 (PrimitiveStorage--Alloc_16_.c)
 */

__int64 __fastcall CDrawListPrimitive::Create(
        char a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 *a8)
{
  unsigned int v9; // edi
  int v12; // r15d
  int v13; // ebp
  int v14; // edx
  unsigned int v15; // ecx
  __int64 v16; // rbx
  int v18; // [rsp+40h] [rbp-58h]
  _DWORD v19[3]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+5Ch] [rbp-3Ch]
  int v21; // [rsp+60h] [rbp-38h]

  v19[0] = *(_DWORD *)(a2 + 12);
  v9 = 0;
  v19[1] = v19[0];
  v19[2] = a4;
  v12 = *(_DWORD *)a5;
  v13 = a2;
  v20 = *(_DWORD *)a5;
  v21 = 0;
  AlignVertexCount((struct CDrawListPrimitive::GeometryCounts *)v19);
  if ( v19[0] > 0x10000u || v20 > 0x1FFFE )
  {
    v19[0] = 0;
    v20 = 0;
  }
  v16 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)v19);
  if ( v16 )
  {
    LOBYTE(v18) = a7;
    LOBYTE(v14) = a1;
    CDrawListPrimitive::Initialize(v16, v14, v13, a3, a4, *(void **)(a5 + 8), v12, a6, v18);
    *a8 = v16;
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x56u, 0LL);
  }
  return v9;
}
