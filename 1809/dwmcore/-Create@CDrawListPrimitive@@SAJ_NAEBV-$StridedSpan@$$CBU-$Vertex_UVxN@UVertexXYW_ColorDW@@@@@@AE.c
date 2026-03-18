/*
 * XREFs of ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180187518
 * Callers:
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x180190B84 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 *     ?CreateParticlesPrimitive@CParticleEmitter@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z @ 0x1801C5390 (-CreateParticlesPrimitive@CParticleEmitter@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x18003AE80 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x1800AD61C (PrimitiveStorage--Alloc_16_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawListPrimitive::Create(
        char a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        PrimitiveStorage::CInlineStorageBase **a8)
{
  unsigned int v8; // eax
  unsigned int v13; // edx
  unsigned int v14; // edi
  __int64 v15; // rcx
  PrimitiveStorage::CInlineStorageBase *v16; // rbx
  _DWORD v18[2]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v19; // [rsp+58h] [rbp-50h]

  v8 = *(_DWORD *)(a2 + 12);
  v18[0] = v8;
  v18[1] = a4;
  v13 = *(_DWORD *)a5;
  v19 = *(_DWORD *)a5;
  if ( (v8 & 1) != 0 )
  {
    v8 = (v8 & 0xFFFFFFFE) + 2;
    v18[0] = v8;
  }
  v14 = 0;
  if ( v8 > 0x10000 || v13 > 0x1FFFE )
  {
    v18[0] = 0;
    v19 = 0;
  }
  v16 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)v18);
  if ( v16 )
  {
    CDrawListPrimitive::Initialize((__int64)v16, a1, a2, a3, a4, *(void **)(a5 + 8), *(_DWORD *)a5, a6, a7);
    *a8 = v16;
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x4Eu);
  }
  return v14;
}
