/*
 * XREFs of ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18017915C
 * Callers:
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x1801701D4 (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800AC6E4 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x180169790 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     ?ResetToStart@ClipPlaneIterator@@AEAAXXZ @ 0x18017970C (-ResetToStart@ClipPlaneIterator@@AEAAXXZ.c)
 *     ?SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18017976C (-SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_M.c)
 */

__int64 __fastcall ClipPlaneIterator::ClipToPolygon(
        ClipPlaneIterator *this,
        __int64 a2,
        struct _D3DMATRIX *a3,
        _DWORD *a4)
{
  unsigned int v8; // r14d
  __int64 v9; // r12
  __int64 v10; // rcx
  const struct D2D_POINT_2F *v11; // rbx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  const enum D2D1_POLYGON_EDGE_FLAG *v14; // r9
  __int64 v15; // r8
  struct D2D_POINT_2F *v16; // r10
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int64 v19; // rax
  __m128 v20; // xmm4
  struct _D3DMATRIX *D3DMatrix; // rax
  float *v22; // r10
  float v23; // xmm2_4
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm4_4
  __int64 v27; // rax
  __int64 v28; // r8
  __int128 v29; // xmm0
  _DWORD *v30; // r11
  int v31; // eax
  __m128i v32; // xmm0
  signed int v33; // eax
  __int64 v34; // rcx
  const struct D2D_POINT_2F *v36; // [rsp+38h] [rbp-29h] BYREF
  struct D2D_MATRIX_3X2_F v37; // [rsp+40h] [rbp-21h] BYREF
  struct _D3DMATRIX v38; // [rsp+58h] [rbp-9h] BYREF
  const enum D2D1_POLYGON_EDGE_FLAG *v39; // [rsp+D0h] [rbp+6Fh] BYREF

  v39 = 0LL;
  ClipPlaneIterator::ResetToStart(this);
  v8 = *(_DWORD *)(a2 + 40);
  v9 = v8;
  v36 = (const struct D2D_POINT_2F *)operator new(saturated_mul(v8, 8uLL));
  v11 = v36;
  if ( v36 )
  {
    v39 = (const enum D2D1_POLYGON_EDGE_FLAG *)operator new(saturated_mul(v8, 4uLL));
    v14 = v39;
    if ( v39 )
    {
      if ( v8 )
      {
        v15 = 0LL;
        v16 = (struct D2D_POINT_2F *)v36;
        do
        {
          v17 = *(_QWORD *)(a2 + 16);
          v18 = *(_OWORD *)(v15 + v17);
          v37.dx = *(FLOAT *)(v15 + v17 + 16);
          LODWORD(v16->x) = v18;
          v19 = *(_QWORD *)(a2 + 16);
          v20 = *(__m128 *)(v15 + v19);
          v37.dx = *(FLOAT *)(v15 + v19 + 16);
          LODWORD(v16->y) = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
          D3DMatrix = CMILMatrix::GetD3DMatrix(a3, &v38);
          v23 = *v22;
          v25 = (float)((float)(v24 * D3DMatrix->_24) + (float)(*v22 * D3DMatrix->_14)) + D3DMatrix->_44;
          *v22 = (float)((float)((float)(v24 * D3DMatrix->_21) + (float)(*v22 * D3DMatrix->_11)) + D3DMatrix->_41) / v25;
          v26 = (float)((float)(v24 * D3DMatrix->_22) + (float)(v23 * D3DMatrix->_12)) + D3DMatrix->_42;
          v27 = *(_QWORD *)(a2 + 16);
          v22[1] = v26 / v25;
          v16 = (struct D2D_POINT_2F *)(v22 + 2);
          v29 = *(_OWORD *)(v28 + v27);
          LODWORD(v27) = *(_DWORD *)(v28 + v27 + 16);
          v15 = v28 + 20;
          *v30 = v27;
          *(_OWORD *)&v37.m11 = v29;
          --v9;
        }
        while ( v9 );
      }
      v31 = a4[2] - *a4;
      v37.m21 = 0.0;
      v32 = _mm_cvtsi32_si128(a4[3] - a4[1]);
      *(_QWORD *)&v37.m11 = COERCE_UNSIGNED_INT(2.0 / (float)v31);
      v37.m22 = -2.0 / _mm_cvtepi32_ps(v32).m128_f32[0];
      *(_QWORD *)&v37.m[2][0] = __PAIR64__((unsigned int)FLOAT_1_0, LODWORD(FLOAT_N1_0));
      v33 = ClipPlaneIterator::SetClipPoints(this, v11, v8, v14, &v37);
      v12 = v33;
      if ( v33 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x28Bu, 0LL);
      else
        *((_QWORD *)this + 15) = a2;
    }
    else
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x8007000E, 0x27Au, 0LL);
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x8007000E, 0x277u, 0LL);
  }
  SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>((void **)&v36);
  SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>((void **)&v39);
  return v12;
}
