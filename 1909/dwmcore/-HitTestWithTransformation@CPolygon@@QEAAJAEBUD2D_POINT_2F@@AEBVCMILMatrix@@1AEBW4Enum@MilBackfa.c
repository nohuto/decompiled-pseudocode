/*
 * XREFs of ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1801BD990
 * Callers:
 *     ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x18022BF6C (-BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18007F5CC (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18008CDE0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801BD8E0 (-GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z @ 0x1801BDCE0 (-IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x1801BDF78 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 */

__int64 __fastcall CPolygon::HitTestWithTransformation(
        CPolygon *this,
        const struct D2D_POINT_2F *a2,
        const struct CMILMatrix *a3,
        const struct CMILMatrix *a4,
        const enum MilBackfaceVisibility::Enum *a5,
        bool *a6)
{
  unsigned int v6; // ebx
  __int128 v9; // xmm1
  int v10; // eax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __m128 v13; // xmm1
  __m128 v14; // xmm3
  __m128 v15; // xmm0
  __m128 v16; // xmm8
  __m128 v17; // xmm3
  __m128 v18; // xmm6
  __m128 v19; // xmm1
  __m128 v20; // xmm6
  bool IsPointInPolygon; // al
  __int64 v22; // rdx
  CGeometry *v23; // rcx
  signed int ShapeData; // eax
  const struct CMILMatrix *v25; // rdx
  __int64 v26; // rcx
  signed int D2DGeometry; // eax
  __int64 v28; // rcx
  signed int v29; // eax
  __int64 v30; // rcx
  union __m128 v32; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C0h]
  struct ID2D1Geometry *v34; // [rsp+50h] [rbp-B8h] BYREF
  struct ID2D1Geometry *v35[2]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v36[2]; // [rsp+68h] [rbp-A0h]
  __int128 v37; // [rsp+88h] [rbp-80h]
  int v38; // [rsp+98h] [rbp-70h]

  v6 = 0;
  v34 = 0LL;
  *a6 = 0;
  if ( *((_BYTE *)this + 241) || !*((_BYTE *)this + 240) && *(_DWORD *)a5 )
    return v6;
  v9 = *((_OWORD *)a4 + 1);
  v10 = *((_DWORD *)a4 + 16);
  *(_OWORD *)v35 = *(_OWORD *)a4;
  v11 = *((_OWORD *)a4 + 2);
  v36[0] = v9;
  v12 = *((_OWORD *)a4 + 3);
  v36[1] = v11;
  v37 = v12;
  v38 = v10;
  CMILMatrix::Multiply((CPolygon *)((char *)this + 144), (const struct CMILMatrix *)v35, (struct CMILMatrix *)v35);
  v15.m128_u64[1] = _mm_unpacklo_ps(
                      _mm_unpacklo_ps((__m128)*(unsigned int *)v35, (__m128)*(unsigned int *)(v35 + 8)),
                      _mm_unpacklo_ps((__m128)*(unsigned int *)(v35 + 4), (__m128)*(unsigned int *)(v35 + 12))).m128_u64[1];
  v13 = _mm_unpacklo_ps(
          _mm_unpacklo_ps((__m128)LODWORD(v36[0]), (__m128)DWORD2(v36[0])),
          _mm_unpacklo_ps((__m128)DWORD1(v36[0]), (__m128)HIDWORD(v36[0])));
  v14 = _mm_unpacklo_ps(
          _mm_unpacklo_ps((__m128)(unsigned int)v37, (__m128)DWORD2(v37)),
          _mm_unpacklo_ps((__m128)DWORD1(v37), (__m128)HIDWORD(v37)));
  *(double *)v15.m128_u64 = DirectX::XMMatrixInverse(0LL);
  v16 = v14;
  if ( !_mm_movemask_ps(
          _mm_or_ps(
            _mm_or_ps(
              _mm_cmpeq_ps(_mm_and_ps(v14, DirectX::g_XMAbsMask), DirectX::g_XMInfinity),
              _mm_cmpeq_ps(_mm_and_ps((__m128)_xmm, DirectX::g_XMAbsMask), DirectX::g_XMInfinity)),
            _mm_or_ps(
              _mm_cmpeq_ps(_mm_and_ps(v13, DirectX::g_XMAbsMask), DirectX::g_XMInfinity),
              _mm_cmpeq_ps(_mm_and_ps(v15, DirectX::g_XMAbsMask), DirectX::g_XMInfinity)))) )
  {
    v17 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)LODWORD(a2->x), (__m128)0LL),
            _mm_unpacklo_ps((__m128)LODWORD(a2->y), (__m128)(unsigned int)FLOAT_1_0));
    v18 = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(v17, v17, 255), v16),
              _mm_mul_ps(_mm_shuffle_ps(v17, v17, 170), (__m128)_xmm)),
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v17, v17, 85), v13), _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v15)));
    v19 = _mm_shuffle_ps(v18, v18, 255);
    v20 = _mm_div_ps(v18, _mm_shuffle_ps(v19, v19, 0));
    v32 = v20;
    IsPointInPolygon = CPolygon::IsPointInPolygon(this, &v32);
    *a6 = IsPointInPolygon;
    if ( !IsPointInPolygon )
      goto LABEL_10;
    v22 = *((_QWORD *)this + 27);
    v23 = *(CGeometry **)(v22 + 248);
    if ( !v23 )
      goto LABEL_10;
    v32.m128_u64[0] = 0LL;
    v32.m128_i8[8] = 0;
    ShapeData = CGeometry::GetShapeData(v23, (const struct D2D_SIZE_F *)(v22 + 132), (struct CShapePtr *)&v32);
    v6 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, ShapeData, 0x1D8u, 0LL);
    }
    else
    {
      D2DGeometry = CShapePtr::GetD2DGeometry((CShapePtr *)&v32, v25, &v34);
      v6 = D2DGeometry;
      if ( D2DGeometry >= 0 )
      {
        CShapePtr::Release((CShapePtr *)&v32);
LABEL_10:
        if ( !v34 )
          return v6;
        v29 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, unsigned __int64, _QWORD))(*(_QWORD *)v34 + 56LL))(
                v34,
                _mm_unpacklo_ps(v20, _mm_shuffle_ps(v20, v20, 85)).m128_u64[0],
                0LL);
        v6 = v29;
        if ( v29 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x1E5u, 0LL);
        else
          *a6 = (_DWORD)v33 != 0;
        goto LABEL_17;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, D2DGeometry, 0x1D9u, 0LL);
    }
    CShapePtr::Release((CShapePtr *)&v32);
  }
LABEL_17:
  if ( v34 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v34 + 16LL))(v34);
  return v6;
}
