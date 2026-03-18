/*
 * XREFs of ?CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180185334
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800B7870 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x180184978 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x180185518 (-Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z.c)
 */

__int64 __fastcall Mesh::CreatePolygonMesh(
        Mesh *this,
        const struct Mesh::ContentInfo *a2,
        struct D2D_POINT_2F *a3,
        const enum D2D1_EDGE_FLAGS *a4,
        unsigned int a5)
{
  FLOAT y; // xmm0_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  __int64 v14; // rcx
  const struct D2D_POINT_2F *v15; // rax
  float x; // xmm0_4
  float v17; // xmm1_4
  int v18; // eax
  __int64 v19; // rcx
  int v20; // ebx
  float v21; // xmm1_4
  __int64 v22; // rcx
  char v23; // al
  struct D2D_RECT_F v25; // [rsp+38h] [rbp-21h] BYREF
  __m128 v26; // [rsp+48h] [rbp-11h]

  do
  {
    y = a3->y;
    v26.m128_i32[0] = LODWORD(a3->x);
    *(unsigned __int64 *)((char *)v26.m128_u64 + 4) = __PAIR64__(v26.m128_u32[0], LODWORD(y));
    v26.m128_f32[3] = y;
    v10 = v26.m128_f32[0];
    LODWORD(v25.left) = v26.m128_i32[0];
    LODWORD(v11) = _mm_shuffle_ps(v26, v26, 85).m128_u32[0];
    LODWORD(v12) = _mm_shuffle_ps(v26, v26, 170).m128_u32[0];
    LODWORD(v13) = _mm_shuffle_ps(v26, v26, 255).m128_u32[0];
    v25.top = v11;
    v25.right = v12;
    v25.bottom = v13;
    if ( (int)a5 > 0 )
    {
      v14 = a5;
      v15 = a3;
      do
      {
        x = v15->x;
        if ( v15->x <= v10 )
        {
          v25.left = v15->x;
          v10 = x;
        }
        v17 = v15->y;
        if ( v17 <= v11 )
        {
          v25.top = v15->y;
          v11 = v17;
        }
        if ( v12 <= x )
        {
          v25.right = x;
          v12 = x;
        }
        if ( v13 <= v17 )
        {
          v25.bottom = v17;
          v13 = v17;
        }
        ++v15;
        --v14;
      }
      while ( v14 );
    }
    v18 = Mesh::Init(this, a2, &v25);
    v20 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x15Bu);
      goto LABEL_22;
    }
    v21 = *(float *)(*((_QWORD *)this + 2) + 4LL);
    if ( v21 > (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v12 - v10)) & _xmm)
      || v21 > (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v13 - v11)) & _xmm) )
    {
      v20 = 1;
      goto LABEL_23;
    }
    v20 = Mesh::BuildPolygon(this, a3, a4, a5, (const struct _D3DCOLORVALUE *)a2);
    v23 = *((_BYTE *)this + 76);
  }
  while ( (v23 & 4) != 0 );
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v20, 0x16Bu);
  }
  else if ( v20 != 1 )
  {
    *((_BYTE *)this + 76) = v23 & 0xDD;
    return 0;
  }
LABEL_22:
  if ( !v20 )
    return (unsigned int)v20;
LABEL_23:
  *((_BYTE *)this + 76) &= ~1u;
  return (unsigned int)v20;
}
