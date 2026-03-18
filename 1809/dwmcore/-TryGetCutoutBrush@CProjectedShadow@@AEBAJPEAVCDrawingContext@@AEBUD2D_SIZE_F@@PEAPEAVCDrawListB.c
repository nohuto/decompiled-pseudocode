/*
 * XREFs of ?TryGetCutoutBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x1801CC204
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C97D0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000CF80 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18000D040 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18000E0C8 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18003E3F0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180047744 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18005C7CC (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180064010 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800DA754 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18015AE90 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?TryGetCutoutRect@CProjectedShadowCaster@@QEBA_NPEBVCVisualTree@@HPEAUD2D_RECT_F@@PEA_N@Z @ 0x1801AE228 (-TryGetCutoutRect@CProjectedShadowCaster@@QEBA_NPEBVCVisualTree@@HPEAUD2D_RECT_F@@PEA_N@Z.c)
 *     ?Deflate@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1801B9528 (-Deflate@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 */

__int64 __fastcall CProjectedShadow::TryGetCutoutBrush(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListBrush **a4)
{
  __int128 v5; // xmm0
  int v6; // eax
  int v7; // ebx
  __int128 v8; // xmm1
  const struct CVisualTree *v9; // rsi
  __m128 v11; // xmm7
  __int128 v13; // xmm0
  struct COcclusionInfo *OcclusionInfo; // rax
  int v15; // eax
  struct D2D_RECT_F *v16; // r9
  float m11; // xmm3_4
  FLOAT m12; // xmm2_4
  float m21; // xmm1_4
  float height; // xmm6_4
  float v21; // xmm8_4
  float v22; // xmm6_4
  float v23; // xmm9_4
  float v24; // xmm5_4
  float m22; // xmm0_4
  float v26; // xmm4_4
  CGeometryOnlyDrawListBrush *v27; // rcx
  CGeometryOnlyDrawListBrush *v28; // rax
  CGeometryOnlyDrawListBrush *v29; // rax
  CNineGridDrawListBrush *v30; // rcx
  struct CDrawListBrush *v31; // rax
  bool v33; // [rsp+30h] [rbp-D0h] BYREF
  CGeometryOnlyDrawListBrush *v34; // [rsp+38h] [rbp-C8h] BYREF
  struct D2D_MATRIX_3X2_F v35; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v36; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v37; // [rsp+70h] [rbp-90h]
  __int128 v38; // [rsp+80h] [rbp-80h]
  __m128 v39; // [rsp+90h] [rbp-70h]
  int v40; // [rsp+A0h] [rbp-60h]
  _BYTE v41[56]; // [rsp+B0h] [rbp-50h] BYREF
  int v42; // [rsp+E8h] [rbp-18h]
  int v43; // [rsp+F0h] [rbp-10h]
  struct D2D_RECT_F v44; // [rsp+100h] [rbp+0h] BYREF
  struct D2D_RECT_F v45; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v46; // [rsp+120h] [rbp+20h]

  *a4 = 0LL;
  v5 = *(_OWORD *)((char *)this + 108);
  v6 = *((_DWORD *)this + 43);
  v7 = 0;
  v8 = *(_OWORD *)((char *)this + 124);
  v9 = (const struct CVisualTree *)*((_QWORD *)a2 + 757);
  v11 = *(__m128 *)((char *)this + 156);
  v43 = 0;
  v36 = v5;
  v13 = *(_OWORD *)((char *)this + 140);
  v40 = v6;
  v37 = v8;
  v38 = v13;
  v39 = v11;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 480), (struct CMILMatrix *)v41);
  CMILMatrix::Translate((CMILMatrix *)&v36, 0.0, 0.0, COERCE_FLOAT(_mm_shuffle_ps(v11, v11, 170).m128_u32[0] ^ _xmm));
  CMILMatrix::Translate((CMILMatrix *)v41, 0.0, 0.0, COERCE_FLOAT(v42 ^ _xmm));
  if ( CMILMatrix::Is2DAffine<1>((__int64)v41, 1) )
  {
    if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)&v36) )
    {
      OcclusionInfo = CVisual::GetOcclusionInfo(*(CVisual **)(*((_QWORD *)this + 10) + 56LL), v9);
      v15 = (*(__int64 (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
      if ( CProjectedShadowCaster::TryGetCutoutRect(*((CProjectedShadowCaster **)this + 9), v9, v15, &v44, &v33) )
      {
        *(_QWORD *)&v45.left = v36;
        *(_QWORD *)&v45.right = v37;
        v46 = v39.m128_u64[0];
        D2DMatrixHelper::TransformRect_AxisAlignedPreserving((D2DMatrixHelper *)&v44, &v45, &v35, v16);
        m11 = v35.m11;
        m12 = v35.m12;
        m21 = v35.m21;
        height = a3->height;
        v21 = a3->width + 0.0;
        v44 = *(struct D2D_RECT_F *)&v35.m11;
        v22 = height + 0.0;
        if ( v35.m11 < 0.0 )
        {
          m11 = 0.0;
          v44.left = 0.0;
        }
        v23 = v35.m12;
        if ( v35.m12 < 0.0 )
        {
          m12 = 0.0;
          v23 = 0.0;
          v44.top = 0.0;
        }
        v24 = v35.m21;
        if ( v35.m21 > v21 )
        {
          m21 = v21;
          v24 = v21;
          v44.right = v21;
        }
        m22 = v35.m22;
        if ( v35.m22 > v22 )
        {
          v44.bottom = v22;
          m22 = v22;
        }
        if ( v24 <= m11 || m22 <= v23 )
        {
          m21 = 0.0;
          m12 = 0.0;
          v44.bottom = 0.0;
          m11 = 0.0;
          v44.right = 0.0;
          v44.top = 0.0;
          v44.left = 0.0;
        }
        if ( v33 )
        {
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::Deflate(&v44, 0.5, 0.5);
          m21 = v44.right;
          m12 = v44.top;
          m11 = v44.left;
        }
        if ( !IsEmpty(&v44) )
        {
          v34 = 0LL;
          *(_QWORD *)&v45.right = 0LL;
          *(_QWORD *)&v35.m11 = __PAIR64__(LODWORD(m12), LODWORD(m11));
          *(_QWORD *)&v45.left = &v34;
          LOBYTE(v46) = 1;
          v35.m21 = v21 - m21;
          v35.m22 = v22 - v26;
          v7 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v45.right);
          if ( (_BYTE)v46 )
          {
            v27 = **(CGeometryOnlyDrawListBrush ***)&v45.left;
            **(_QWORD **)&v45.left = *(_QWORD *)&v45.right;
            if ( v27 )
              CGeometryOnlyDrawListBrush::`vector deleting destructor'(v27, 1);
          }
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v27, 0LL, 0, v7, 0x265u);
          }
          else
          {
            v28 = v34;
            v44.left = 0.0;
            v44.top = 0.0;
            *(_QWORD *)&v45.right = 0LL;
            *((_BYTE *)v34 + 52) = 1;
            *((_DWORD *)v28 + 12) = 50529027;
            v44.right = v21;
            v44.bottom = v22;
            LOBYTE(v46) = 1;
            *((struct D2D_RECT_F *)v28 + 2) = v44;
            v29 = v34;
            *(_QWORD *)&v35.m[2][0] = 0LL;
            v34 = 0LL;
            *(_QWORD *)&v44.left = v29;
            *(_QWORD *)&v45.left = v35.m[2];
            v7 = CNineGridDrawListBrush::Create(
                   (struct CNineGridDrawListBrush *)&v44,
                   (int)&v35,
                   (int)&v35,
                   1,
                   (CNineGridDrawListBrush **)&v45.right);
            if ( (_BYTE)v46 )
            {
              v30 = **(CNineGridDrawListBrush ***)&v45.left;
              **(_QWORD **)&v45.left = *(_QWORD *)&v45.right;
              if ( v30 )
                CNineGridDrawListBrush::`scalar deleting destructor'(v30, 1);
            }
            if ( *(_QWORD *)&v44.left )
              std::default_delete<CShape>::operator()(
                (__int64)v30,
                *(__int64 (__fastcall ****)(_QWORD, __int64))&v44.left);
            if ( v7 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((__int64)v30, 0LL, 0, v7, 0x26Eu);
              if ( *(_QWORD *)&v35.m[2][0] )
                CNineGridDrawListBrush::`scalar deleting destructor'(*(CNineGridDrawListBrush **)&v35.m[2][0], 1);
            }
            else
            {
              v31 = *(struct CDrawListBrush **)&v35.m[2][0];
              *(_QWORD *)&v35.m[2][0] = 0LL;
              *a4 = v31;
            }
          }
          if ( v34 )
            CGeometryOnlyDrawListBrush::`vector deleting destructor'(v34, 1);
        }
      }
    }
  }
  return (unsigned int)v7;
}
