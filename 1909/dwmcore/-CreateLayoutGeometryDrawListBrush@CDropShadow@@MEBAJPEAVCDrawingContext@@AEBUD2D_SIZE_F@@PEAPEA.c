/*
 * XREFs of ?CreateLayoutGeometryDrawListBrush@CDropShadow@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x18001BE50
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000EBC8 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18000EC80 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000ED24 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180034D0C (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800C0A10 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CDropShadow::CreateLayoutGeometryDrawListBrush(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListBrush **a4)
{
  float v5; // xmm1_4
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm8_4
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm4_4
  float v19; // xmm5_4
  int v20; // ebx
  CGeometryOnlyDrawListBrush *v22; // rcx
  CGeometryOnlyDrawListBrush *v23; // rax
  __int128 v24; // xmm0
  CGeometryOnlyDrawListBrush *v25; // rax
  CNineGridDrawListBrush *v26; // rcx
  struct CDrawListBrush *v27; // rax
  CGeometryOnlyDrawListBrush *v28; // rcx
  struct D2D_RECT_F v29; // [rsp+38h] [rbp-29h] BYREF
  char v30; // [rsp+48h] [rbp-19h]
  __m128 v31; // [rsp+50h] [rbp-11h] BYREF
  __int128 v32; // [rsp+60h] [rbp-1h] BYREF
  char v33; // [rsp+70h] [rbp+Fh]
  CGeometryOnlyDrawListBrush *v34; // [rsp+C8h] [rbp+67h] BYREF
  CNineGridDrawListBrush *v35; // [rsp+E0h] [rbp+7Fh] BYREF

  *a4 = 0LL;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 28)) & _xmm);
  if ( v5 >= 0.0000011920929 )
    return 0;
  width = a3->width;
  height = a3->height;
  v31.m128_u64[0] = 0LL;
  LODWORD(v8) = *((_DWORD *)this + 26) ^ _xmm;
  LODWORD(v9) = *((_DWORD *)this + 27) ^ _xmm;
  v10 = v8 + *((float *)this + 29);
  v11 = v8 + *((float *)this + 31);
  v31.m128_u64[1] = __PAIR64__(LODWORD(height), LODWORD(width));
  v12 = v9 + *((float *)this + 30);
  v13 = v9 + *((float *)this + 32);
  v14 = *((float *)this + 24);
  v29.left = v10;
  v15 = _mm_shuffle_ps(v31, v31, 85).m128_f32[0] - v14;
  v29.top = v12;
  v16 = _mm_shuffle_ps(v31, v31, 255).m128_f32[0] + v14;
  v29.right = v11;
  v17 = _mm_shuffle_ps(v31, v31, 170).m128_f32[0] + v14;
  v29.bottom = v13;
  *((float *)&v32 + 1) = v15;
  *(float *)&v32 = 0.0 - v14;
  *((_QWORD *)&v32 + 1) = __PAIR64__(LODWORD(v16), LODWORD(v17));
  if ( v10 < (float)(0.0 - v14) )
  {
    v29.left = 0.0 - v14;
    v10 = 0.0 - v14;
  }
  if ( v12 < v15 )
  {
    v12 = v15;
    v29.top = v15;
  }
  if ( v17 < v11 )
    v29.right = v17;
  if ( v16 < v13 )
  {
    v29.bottom = v16;
    v13 = v16;
  }
  if ( IsEmpty(&v29) )
    return 0;
  v34 = 0LL;
  *(_QWORD *)&v29.right = 0LL;
  v30 = 1;
  v31.m128_f32[0] = v10 - v19;
  v31.m128_f32[1] = v12 - v15;
  v31.m128_f32[2] = v17 - v18;
  v31.m128_f32[3] = v16 - v13;
  *(_QWORD *)&v29.left = &v34;
  v20 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v29.right);
  if ( v30 )
  {
    v22 = **(CGeometryOnlyDrawListBrush ***)&v29.left;
    **(_QWORD **)&v29.left = *(_QWORD *)&v29.right;
    if ( v22 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v22, 1u);
  }
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v22, 0LL, 0, v20, 0x224u, 0LL);
  }
  else
  {
    v23 = v34;
    v24 = v32;
    *((_QWORD *)&v32 + 1) = 0LL;
    v33 = 1;
    *((_BYTE *)v34 + 52) = 1;
    *((_OWORD *)v23 + 2) = v24;
    *((_DWORD *)v23 + 12) = 50529027;
    v25 = v34;
    v35 = 0LL;
    v34 = 0LL;
    *(_QWORD *)&v29.left = v25;
    *(_QWORD *)&v32 = &v35;
    v20 = CNineGridDrawListBrush::Create(
            (struct CNineGridDrawListBrush *)&v29,
            (int)&v31,
            (int)&v31,
            1,
            (CNineGridDrawListBrush **)&v32 + 1);
    if ( v33 )
    {
      v26 = *(CNineGridDrawListBrush **)v32;
      *(_QWORD *)v32 = *((_QWORD *)&v32 + 1);
      if ( v26 )
        CNineGridDrawListBrush::`scalar deleting destructor'(v26, 1);
    }
    if ( *(_QWORD *)&v29.left )
      std::default_delete<CShape>::operator()((__int64)v26, *(__int64 (__fastcall ****)(_QWORD, __int64))&v29.left);
    if ( v20 >= 0 )
    {
      v27 = v35;
      v35 = 0LL;
      v28 = v34;
      *a4 = v27;
      if ( v28 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v28, 1u);
      return 0;
    }
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v26, 0LL, 0, v20, 0x22Du, 0LL);
    if ( v35 )
      CNineGridDrawListBrush::`scalar deleting destructor'(v35, 1);
  }
  if ( v34 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v34, 1u);
  return (unsigned int)v20;
}
