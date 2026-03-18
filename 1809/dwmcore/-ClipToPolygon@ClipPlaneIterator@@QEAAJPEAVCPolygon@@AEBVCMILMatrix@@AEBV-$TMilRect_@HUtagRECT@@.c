/*
 * XREFs of ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18017A2BC
 * Callers:
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x1801673D8 (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x180096374 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x18017A0B4 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     ?ResetToStart@ClipPlaneIterator@@AEAAXXZ @ 0x18017A854 (-ResetToStart@ClipPlaneIterator@@AEAAXXZ.c)
 *     ?SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18017A8B4 (-SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_M.c)
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
  __int64 v26; // rax
  __int64 v27; // r8
  __int128 v28; // xmm0
  _DWORD *v29; // r11
  int v30; // eax
  float v31; // xmm0_4
  int v32; // eax
  __int64 v33; // rcx
  const struct D2D_POINT_2F *v35; // [rsp+38h] [rbp-29h] BYREF
  struct D2D_MATRIX_3X2_F v36; // [rsp+40h] [rbp-21h] BYREF
  struct _D3DMATRIX v37; // [rsp+58h] [rbp-9h] BYREF
  const enum D2D1_POLYGON_EDGE_FLAG *v38; // [rsp+D0h] [rbp+6Fh] BYREF

  v38 = 0LL;
  ClipPlaneIterator::ResetToStart(this);
  v8 = *(_DWORD *)(a2 + 40);
  v9 = v8;
  v35 = (const struct D2D_POINT_2F *)operator new(saturated_mul(v8, 8uLL));
  v11 = v35;
  if ( v35 )
  {
    v38 = (const enum D2D1_POLYGON_EDGE_FLAG *)operator new(saturated_mul(v8, 4uLL));
    v14 = v38;
    if ( v38 )
    {
      if ( v8 )
      {
        v15 = 0LL;
        v16 = (struct D2D_POINT_2F *)v35;
        do
        {
          v17 = *(_QWORD *)(a2 + 16);
          v18 = *(_OWORD *)(v15 + v17);
          v36.dx = *(FLOAT *)(v15 + v17 + 16);
          LODWORD(v16->x) = v18;
          v19 = *(_QWORD *)(a2 + 16);
          v20 = *(__m128 *)(v15 + v19);
          v36.dx = *(FLOAT *)(v15 + v19 + 16);
          LODWORD(v16->y) = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
          D3DMatrix = CMILMatrix::GetD3DMatrix(a3, &v37);
          v23 = *v22;
          v25 = (float)((float)(v24 * D3DMatrix->_24) + (float)(*v22 * D3DMatrix->_14)) + D3DMatrix->_44;
          *v22 = (float)((float)((float)(v24 * D3DMatrix->_21) + (float)(*v22 * D3DMatrix->_11)) + D3DMatrix->_41) / v25;
          v22[1] = (float)((float)((float)(v24 * D3DMatrix->_22) + (float)(v23 * D3DMatrix->_12)) + D3DMatrix->_42)
                 / v25;
          v16 = (struct D2D_POINT_2F *)(v22 + 2);
          v26 = *(_QWORD *)(a2 + 16);
          v28 = *(_OWORD *)(v27 + v26);
          LODWORD(v26) = *(_DWORD *)(v27 + v26 + 16);
          v15 = v27 + 20;
          *v29 = v26;
          *(_OWORD *)&v36.m11 = v28;
          --v9;
        }
        while ( v9 );
      }
      v30 = a4[2] - *a4;
      v36.m21 = 0.0;
      v31 = (float)(a4[3] - a4[1]);
      *(_QWORD *)&v36.m11 = COERCE_UNSIGNED_INT(2.0 / (float)v30);
      v36.m22 = -2.0 / v31;
      *(_QWORD *)&v36.m[2][0] = __PAIR64__(LODWORD(FLOAT_1_0), LODWORD(FLOAT_N1_0));
      v32 = ClipPlaneIterator::SetClipPoints(this, v11, v8, v14, &v36);
      v12 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x28Bu);
      else
        *((_QWORD *)this + 15) = a2;
    }
    else
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x27Au);
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x277u);
  }
  SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>((void **)&v35);
  SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>((void **)&v38);
  return v12;
}
