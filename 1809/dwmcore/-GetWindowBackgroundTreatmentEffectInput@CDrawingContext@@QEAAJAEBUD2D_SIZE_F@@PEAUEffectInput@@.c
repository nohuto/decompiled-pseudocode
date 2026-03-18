/*
 * XREFs of ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180003AD8
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x1800CB2C0 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801CD790 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x180002D28 (-Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@A.c)
 *     ?GetImageSourceForEffectInputNoRef@CWindowBackgroundTreatment@@QEBAPEAVIImageSource@@PEBVIRenderTarget@@@Z @ 0x180003398 (-GetImageSourceForEffectInputNoRef@CWindowBackgroundTreatment@@QEBAPEAVIImageSource@@PEBVIRender.c)
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x1800041B8 (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ @ 0x180004284 (-GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x1800042E0 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z.c)
 *     ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800043B4 (-Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@.c)
 *     ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x180004548 (-SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAVIImageSource@@@Z @ 0x1800045B4 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAV.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800291C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F090 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18003066C (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180030964 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180044D00 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180073D1C (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x18008E5DC (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x1800AE108 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B1E90 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800E4DF4 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
        CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct EffectInput *a3)
{
  struct IImageSource *v4; // rbx
  float v6; // xmm6_4
  const struct D2D_SIZE_F *v7; // rdi
  float v8; // xmm7_4
  FLOAT height; // xmm1_4
  CMILMatrix *TopByReference; // rax
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  char v15; // r15
  CVisual *CurrentVisual; // r12
  CVisual *v17; // rdi
  const struct CVisualTree *v18; // rsi
  struct CTreeData *TreeData; // rax
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rsi
  struct IImageSource *ImageSourceForEffectInputNoRef; // rax
  __int128 v22; // xmm0
  __int64 v23; // xmm1_8
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  __int64 v27; // rax
  __int64 v28; // rax
  char v29; // al
  struct CWindowBackgroundTreatment *v30; // rax
  struct CCachedWindowBackgroundTreatment *v31; // r10
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // edi
  int v35; // eax
  unsigned int v36; // ecx
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  const struct CMILMatrix *v42; // rax
  int v43; // eax
  unsigned int v44; // ecx
  struct CCachedWindowBackgroundTreatment *CachedWindowBackgroundTreatment; // rax
  __int64 v46; // xmm1_8
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  int v51; // eax
  int v52; // eax
  unsigned int v53; // ecx
  bool v54[8]; // [rsp+48h] [rbp-C0h] BYREF
  struct IImageSource *v55; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v56[24]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v57[2]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v58; // [rsp+88h] [rbp-80h] BYREF
  __int128 v59; // [rsp+98h] [rbp-70h]
  __int128 v60; // [rsp+A8h] [rbp-60h]
  __int128 v61; // [rsp+B8h] [rbp-50h]
  int v62; // [rsp+C8h] [rbp-40h]
  __int64 v63; // [rsp+D8h] [rbp-30h] BYREF
  int v64; // [rsp+E0h] [rbp-28h]
  __int64 v65; // [rsp+E4h] [rbp-24h]
  int v66; // [rsp+ECh] [rbp-1Ch]
  __int64 v67; // [rsp+F0h] [rbp-18h]
  int v68; // [rsp+F8h] [rbp-10h]
  const struct D2D_SIZE_F *v69; // [rsp+100h] [rbp-8h]
  _OWORD v70[4]; // [rsp+108h] [rbp+0h] BYREF
  int v71; // [rsp+148h] [rbp+40h]
  struct CCachedWindowBackgroundTreatment *v72; // [rsp+158h] [rbp+50h] BYREF
  float v73; // [rsp+160h] [rbp+58h]
  float v74; // [rsp+164h] [rbp+5Ch]
  float v75; // [rsp+168h] [rbp+60h] BYREF
  float v76; // [rsp+16Ch] [rbp+64h]
  float v77; // [rsp+170h] [rbp+68h]
  float v78; // [rsp+174h] [rbp+6Ch]
  float v79; // [rsp+178h] [rbp+70h]
  float v80; // [rsp+17Ch] [rbp+74h]
  __int128 v81; // [rsp+180h] [rbp+78h] BYREF
  int v82; // [rsp+190h] [rbp+88h]
  int v83; // [rsp+194h] [rbp+8Ch]

  v4 = 0LL;
  v6 = *(float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v7 = a2;
  v8 = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
       + 1);
  v71 = 0;
  v58 = _xmm;
  v69 = a2;
  *(_QWORD *)v56 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *(_OWORD *)&v56[8] = *(__int128 *)((char *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                                   + 8);
  v54[2] = 0;
  *(_OWORD *)v57 = 0LL;
  LOWORD(v62) = 32085;
  v59 = _xmm;
  v60 = _xmm;
  v61 = _xmm;
  v55 = 0LL;
  EffectInput::Reset(a3);
  *(_QWORD *)&v81 = 0LL;
  *((_BYTE *)a3 + 44) = 1;
  *((_WORD *)a3 + 51) = 257;
  height = v7->height;
  DWORD2(v81) = LODWORD(v7->width);
  *((FLOAT *)&v81 + 3) = height;
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
  CMILMatrix::Transform2DBoundsHelper<0>(TopByReference);
  CScopedClipStack::GetClipBoundsWorld((CDrawingContext *)((char *)this + 1008));
  v11 = v75;
  if ( *(float *)&v72 > v75 )
    v11 = *(float *)&v72;
  v12 = v76;
  if ( *((float *)&v72 + 1) > v76 )
    v12 = *((float *)&v72 + 1);
  v13 = v77;
  if ( v77 > v73 )
    v13 = v73;
  v14 = v78;
  if ( v78 > v74 )
    v14 = v74;
  if ( v13 <= v11 || v14 <= v12 )
    goto LABEL_52;
  v15 = 0;
  v54[1] = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8));
  v17 = CurrentVisual;
  if ( !CurrentVisual )
    goto LABEL_63;
  do
  {
    if ( (**((_DWORD **)v17 + 28) & 0x100000) != 0 )
      break;
    CVisual::CalcEffectiveTransform(v17, 5LL, 0LL, &v54[2], v70, *((_QWORD *)this + 757), 0LL);
    CMILMatrix::Multiply((const struct CMILMatrix *)&v58, (const struct CMILMatrix *)v70, (struct CMILMatrix *)&v58);
    v18 = (const struct CVisualTree *)*((_QWORD *)this + 757);
    TreeData = CVisual::FindTreeData(v17, v18);
    if ( TreeData && CVisual::GetParentTreeData(v17, v18, TreeData, &v54[3]) && v54[3] )
      v15 = 1;
    v17 = (CVisual *)*((_QWORD *)v17 + 10);
  }
  while ( v17 );
  if ( !v17 || !*(_BYTE *)(*((_QWORD *)this + 757) + 32LL) )
  {
LABEL_63:
    CachedWindowBackgroundTreatment = CVisual::GetCachedWindowBackgroundTreatment(CurrentVisual);
    if ( CachedWindowBackgroundTreatment )
    {
      if ( !*((_BYTE *)CachedWindowBackgroundTreatment + 140) )
      {
        v4 = (struct IImageSource *)*((_QWORD *)CachedWindowBackgroundTreatment + 3);
        v55 = v4;
        if ( v4 )
        {
          v46 = *(_QWORD *)((char *)CachedWindowBackgroundTreatment + 116);
          *(_OWORD *)v56 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 100);
          v47 = *((_OWORD *)CachedWindowBackgroundTreatment + 2);
          v8 = *(float *)&v56[4];
          v6 = *(float *)v56;
          *(_QWORD *)&v56[16] = v46;
          v48 = *((_OWORD *)CachedWindowBackgroundTreatment + 3);
          v58 = v47;
          v49 = *((_OWORD *)CachedWindowBackgroundTreatment + 4);
          v59 = v48;
          v50 = *((_OWORD *)CachedWindowBackgroundTreatment + 5);
          v51 = *((_DWORD *)CachedWindowBackgroundTreatment + 24);
          v60 = v49;
          v61 = v50;
          v62 = v51;
        }
        else
        {
          *(_OWORD *)v57 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 124);
        }
        v54[1] = 1;
        goto LABEL_25;
      }
    }
  }
  if ( !v17 )
  {
    *(_OWORD *)v57 = _xmm;
    goto LABEL_25;
  }
  WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(v17);
  if ( CWindowBackgroundTreatment::HasValidSource(
         WindowBackgroundTreatmentInternal,
         *((const struct IRenderTarget **)this + 44)) )
  {
    ImageSourceForEffectInputNoRef = CWindowBackgroundTreatment::GetImageSourceForEffectInputNoRef(
                                       WindowBackgroundTreatmentInternal,
                                       *((const struct IRenderTarget **)this + 44));
    v72 = ImageSourceForEffectInputNoRef;
    if ( !ImageSourceForEffectInputNoRef )
    {
      *(_OWORD *)v57 = *(_OWORD *)(*((_QWORD *)WindowBackgroundTreatmentInternal + 8) + 72LL);
      goto LABEL_25;
    }
    if ( !v15 )
    {
LABEL_24:
      v22 = *((_OWORD *)WindowBackgroundTreatmentInternal + 9);
      v4 = ImageSourceForEffectInputNoRef;
      v55 = ImageSourceForEffectInputNoRef;
      v23 = *((_QWORD *)WindowBackgroundTreatmentInternal + 20);
      *(_OWORD *)v56 = v22;
      v8 = *((float *)&v22 + 1);
      v6 = *(float *)&v22;
      *(_QWORD *)&v56[16] = v23;
LABEL_25:
      if ( v4 )
      {
        (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v4 + 8LL))(v4);
        CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v58);
        v24 = v76 - v8;
        v76 = 0.0;
        *((float *)&v81 + 1) = v24;
        *(float *)&v81 = v75 - v6;
        v25 = v77;
        v77 = 0.0;
        *((float *)&v81 + 3) = v78 - v8;
        *((float *)&v81 + 2) = v25 - v6;
        v26 = *(float *)&v56[8] - v6;
        *(_OWORD *)((char *)a3 + 84) = v81;
        v82 = LODWORD(v6) ^ _xmm;
        v65 = v59;
        v75 = 1.0 / v26;
        v78 = 1.0 / (float)(*(float *)&v56[12] - v8);
        v66 = HIDWORD(v59);
        v83 = LODWORD(v8) ^ _xmm;
        v79 = 0.0 - (float)((float)(1.0 / v26) * 0.0);
        v81 = _xmm;
        v63 = v58;
        v64 = HIDWORD(v58);
        v67 = v61;
        v68 = HIDWORD(v61);
        v80 = 0.0 - (float)(v78 * 0.0);
        v27 = Matrix3x3::operator*(&v63, v70, &v81);
        v28 = Matrix3x3::operator*(v27, &v63, &v75);
        *((_OWORD *)a3 + 3) = *(_OWORD *)v28;
        *((_OWORD *)a3 + 4) = *(_OWORD *)(v28 + 16);
        *((_DWORD *)a3 + 20) = *(_DWORD *)(v28 + 32);
      }
      v29 = 0;
      goto LABEL_28;
    }
    v38 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 216);
    v39 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 232);
    v71 = *((_DWORD *)WindowBackgroundTreatmentInternal + 70);
    v70[0] = v38;
    v40 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 248);
    v70[1] = v39;
    v41 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 264);
    v70[2] = v40;
    v70[3] = v41;
    if ( CMILMatrix::Invert((CMILMatrix *)v70) )
    {
      v42 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
      CMILMatrix::Multiply(v42, (const struct CMILMatrix *)v70, (struct CMILMatrix *)&v58);
      ImageSourceForEffectInputNoRef = v72;
      goto LABEL_24;
    }
    v29 = 1;
  }
  else
  {
    v29 = 0;
  }
LABEL_28:
  if ( v17 && !v29 && *(_BYTE *)(*((_QWORD *)this + 757) + 32LL) && !v54[1] )
  {
    v72 = CVisual::GetCachedWindowBackgroundTreatment(CurrentVisual);
    v30 = CVisual::GetWindowBackgroundTreatmentInternal(v17);
    if ( v31 )
    {
      v32 = CCachedWindowBackgroundTreatment::Update(v31, (__int64)v56, (__int64)v57);
      v34 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0xAEEu);
        goto LABEL_37;
      }
    }
    else
    {
      v43 = CCachedWindowBackgroundTreatment::Create(
              (__int64)v30,
              (__int64)v4,
              (int)&v58,
              (float *)v56,
              (__int64)v57,
              &v72);
      v34 = v43;
      if ( v43 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0xAF8u);
        goto LABEL_37;
      }
      CVisual::SetCachedWindowBackgroundTreatment(CurrentVisual, v72);
    }
  }
  if ( v4 )
    goto LABEL_35;
  v7 = v69;
LABEL_52:
  v52 = CDrawingContext::SetEffectInputToTransparentBlack(this, v7, a3, &v55);
  v34 = v52;
  if ( v52 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0xB07u);
    v4 = v55;
    goto LABEL_37;
  }
  v4 = v55;
  *(_OWORD *)((char *)a3 + 24) = *(_OWORD *)v57;
LABEL_35:
  v35 = CDrawListBitmap::FromImageSource(a3, v4, this, 0);
  v34 = v35;
  if ( v35 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0xB0Cu);
LABEL_37:
  if ( v4 )
    (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v4 + 16LL))(v4);
  return v34;
}
