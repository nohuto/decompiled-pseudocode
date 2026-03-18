/*
 * XREFs of ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801F121C
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F0BA8 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAPEBVCVisualTree@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAPEBVCVisualTree@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800055B4 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAPEBVCVisualTree@@@2@V-$tuple@$$V@2@.c)
 *     ??$_Lbound@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x18000665C (--$_Lbound@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProje.c)
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x1800120C8 (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18008CDE0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCSpriteVisualContent@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x1802576E4 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIImageSource@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x180257A10 (-GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CProjectedShadowCaster::UpdateMaskIntermediate(
        CProjectedShadowCaster *this,
        struct CDrawingContext *a2,
        double a3)
{
  unsigned int v5; // edi
  __int64 *v6; // rax
  __int64 **v7; // r9
  unsigned __int64 v8; // r10
  __int64 *v9; // rbx
  __int64 *v10; // r14
  __int64 v11; // r15
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  CGeometry *v15; // rcx
  signed int ShapeData; // eax
  __int64 v17; // rcx
  signed int MaskIntermediate; // eax
  __int64 v19; // rcx
  const struct D2D_SIZE_F *v20; // r9
  signed int v21; // eax
  __int64 v22; // rcx
  __int64 *v23; // rbx
  __int64 v24; // rax
  __int64 *v25; // rcx
  struct CRenderTargetImageSource **v27; // [rsp+28h] [rbp-38h]
  struct CShape *v28; // [rsp+40h] [rbp-20h] BYREF
  char v29; // [rsp+48h] [rbp-18h]
  const char *v30; // [rsp+50h] [rbp-10h] BYREF
  int v31; // [rsp+58h] [rbp-8h]
  __int64 *v32; // [rsp+A0h] [rbp+40h] BYREF
  struct D2D_SIZE_F v33; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+50h] BYREF
  char v35; // [rsp+B8h] [rbp+58h] BYREF

  v34 = *((_QWORD *)a2 + 757);
  v5 = 0;
  v6 = std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Lbound<CVisualTree const *>(
         (__int64 *)this + 9,
         &v34);
  v9 = v6;
  if ( v6 == *v7 || v8 < v6[4] )
  {
    v32 = &v34;
    v9 = *(__int64 **)std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<CVisualTree const * &&>,std::tuple<>>(
                        (int)v7,
                        (__int64)&v35,
                        (int)v6,
                        (__int64)v7,
                        &v32);
  }
  v10 = v9 + 10;
  if ( !v9[10] )
  {
    v11 = *((_QWORD *)this + 15);
    if ( !v11 )
      v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 152LL);
    v12 = *((_QWORD *)this + 7);
    v33 = *(struct D2D_SIZE_F *)(v12 + 132);
    *(FLOAT *)&v32 = v33.width;
    if ( (LODWORD(v33.width) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)v33.width - v33.width;
      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
      LODWORD(v32) = LODWORD(a3);
      v13 = (int)v33.width - LODWORD(a3);
    }
    else
    {
      *(float *)&v32 = v33.width + 6291456.25;
      v13 = (int)((_DWORD)v32 << 10) >> 11;
    }
    *(FLOAT *)&v32 = v33.height;
    v33.width = (float)v13;
    if ( (LODWORD(v33.height) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)v33.height - v33.height;
      LODWORD(v32) = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
      v14 = (int)v33.height - (_DWORD)v32;
    }
    else
    {
      *(float *)&v32 = v33.height + 6291456.25;
      v14 = (int)((_DWORD)v32 << 10) >> 11;
    }
    v28 = 0LL;
    v29 = 0;
    v33.height = (float)v14;
    v15 = *(CGeometry **)(v12 + 248);
    if ( v15
      && (ShapeData = CGeometry::GetShapeData(v15, &v33, (struct CShapePtr *)&v28), v5 = ShapeData, ShapeData < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, ShapeData, 0x198u, 0LL);
    }
    else
    {
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v9 + 10);
      v30 = "DWM ProjectedShadow Mask";
      v31 = 24;
      MaskIntermediate = ShadowHelpers::GenerateMaskIntermediate(
                           (struct CResourceTag *)&v30,
                           a2,
                           v28,
                           *((_BYTE *)v9 + 76),
                           (__int64)v9 + 60,
                           (__int64)(v9 + 10));
      v5 = MaskIntermediate;
      if ( MaskIntermediate < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, MaskIntermediate, 0x1A4u, 0LL);
        goto LABEL_25;
      }
      if ( v11 != *(_QWORD *)(*((_QWORD *)this + 2) + 152LL) )
      {
        v20 = (const struct D2D_SIZE_F *)*v10;
        v32 = 0LL;
        v30 = "DWM ProjectedShadow Color";
        v31 = 25;
        v21 = ShadowHelpers::GenerateWhiteColorIntermediate(
                (ShadowHelpers *)&v30,
                a2,
                &v33,
                v20,
                (struct IImageSource *)&v32,
                v27);
        v5 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x1AFu, 0LL);
          v25 = v32;
          if ( !v32 )
            goto LABEL_25;
          v24 = *v32;
        }
        else
        {
          v23 = v32;
          Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=(v10, (__int64)v32);
          if ( !v23 )
            goto LABEL_25;
          v24 = *v23;
          v25 = v23;
        }
        (*(void (__fastcall **)(__int64 *))(v24 + 16))(v25);
      }
    }
LABEL_25:
    CShapePtr::Release((CShapePtr *)&v28);
  }
  return v5;
}
