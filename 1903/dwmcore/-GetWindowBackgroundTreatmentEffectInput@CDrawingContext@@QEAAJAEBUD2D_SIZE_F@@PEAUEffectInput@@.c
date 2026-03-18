/*
 * XREFs of ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800057C4
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x180076874 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801FEC10 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x1800049F8 (-Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@A.c)
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x180005E54 (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ @ 0x180005F20 (-GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ.c)
 *     ?GetImageSourceForEffectInputNoRef@CWindowBackgroundTreatment@@QEBAPEAVIImageSource@@PEBVIRenderTarget@@@Z @ 0x180005F7C (-GetImageSourceForEffectInputNoRef@CWindowBackgroundTreatment@@QEBAPEAVIImageSource@@PEBVIRender.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x1800060A0 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z.c)
 *     ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180006174 (-Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@.c)
 *     ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x180006358 (-SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180051190 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180052140 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800535C0 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180063A50 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18006E4B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18006E548 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180071850 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800749E0 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x1800770E8 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180077400 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800CE4B8 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAVIImageSource@@@Z @ 0x18017146C (-SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAV.c)
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
  char v9; // si
  FLOAT height; // xmm1_4
  CMILMatrix *TopByReference; // rax
  float v12; // xmm3_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  char v16; // r15
  CVisual *CurrentVisual; // r12
  CVisual *v18; // rdi
  struct CTreeData *TreeData; // rax
  const struct CVisualTree *v20; // r11
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rsi
  struct IImageSource *ImageSourceForEffectInputNoRef; // rax
  __int128 v23; // xmm0
  __int64 v24; // xmm1_8
  int v25; // xmm1_4
  __int64 v26; // rax
  __int64 v27; // rax
  char v28; // al
  struct CWindowBackgroundTreatment *v29; // rax
  struct CCachedWindowBackgroundTreatment *v30; // r10
  int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // edi
  int v34; // eax
  unsigned int v35; // ecx
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  const struct CMILMatrix *v41; // rax
  int v42; // eax
  unsigned int v43; // ecx
  struct CCachedWindowBackgroundTreatment *CachedWindowBackgroundTreatment; // rax
  __int64 v45; // xmm1_8
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  int v50; // eax
  int v51; // eax
  unsigned int v52; // ecx
  bool v53[8]; // [rsp+48h] [rbp-C0h] BYREF
  struct IImageSource *v54; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v55[24]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v56[2]; // [rsp+70h] [rbp-98h] BYREF
  int v57[4]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v58; // [rsp+98h] [rbp-70h]
  __int128 v59; // [rsp+A8h] [rbp-60h]
  __int128 v60; // [rsp+B8h] [rbp-50h]
  int v61; // [rsp+C8h] [rbp-40h]
  _DWORD v62[3]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v63; // [rsp+E4h] [rbp-24h]
  int v64; // [rsp+ECh] [rbp-1Ch]
  __int64 v65; // [rsp+F0h] [rbp-18h]
  int v66; // [rsp+F8h] [rbp-10h]
  const struct D2D_SIZE_F *v67; // [rsp+100h] [rbp-8h]
  _OWORD v68[4]; // [rsp+108h] [rbp+0h] BYREF
  int v69; // [rsp+148h] [rbp+40h]
  __int128 v70; // [rsp+158h] [rbp+50h] BYREF
  float v71; // [rsp+168h] [rbp+60h]
  float v72; // [rsp+16Ch] [rbp+64h]
  struct CCachedWindowBackgroundTreatment *v73; // [rsp+170h] [rbp+68h] BYREF
  float v74; // [rsp+178h] [rbp+70h]
  float v75; // [rsp+17Ch] [rbp+74h]
  __int128 v76; // [rsp+180h] [rbp+78h]

  v4 = 0LL;
  v6 = *(float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v7 = a2;
  v8 = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
       + 1);
  v69 = 0;
  *(_OWORD *)v57 = _xmm;
  v67 = a2;
  *(_QWORD *)v55 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *(_OWORD *)&v55[8] = *(__int128 *)((char *)&TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                                   + 8);
  v53[2] = 0;
  *(_OWORD *)v56 = 0LL;
  LOWORD(v61) = 32085;
  v58 = _xmm;
  v59 = _xmm;
  v60 = _xmm;
  v54 = 0LL;
  EffectInput::Reset(a3);
  *(_QWORD *)&v76 = 0LL;
  v9 = 1;
  *((_BYTE *)a3 + 44) = 1;
  *((_WORD *)a3 + 51) = 257;
  height = v7->height;
  DWORD2(v76) = LODWORD(v7->width);
  *((FLOAT *)&v76 + 3) = height;
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
  CMILMatrix::Transform2DBoundsHelper<0>(TopByReference);
  CScopedClipStack::GetClipBoundsWorld((char *)this + 1008, &v70);
  v12 = *(float *)&v70;
  if ( *(float *)&v73 > *(float *)&v70 )
    v12 = *(float *)&v73;
  v13 = *((float *)&v70 + 1);
  if ( *((float *)&v73 + 1) > *((float *)&v70 + 1) )
    v13 = *((float *)&v73 + 1);
  v14 = *((float *)&v70 + 2);
  if ( *((float *)&v70 + 2) > v74 )
    v14 = v74;
  v15 = *((float *)&v70 + 3);
  if ( *((float *)&v70 + 3) > v75 )
    v15 = v75;
  if ( v14 <= v12 || v15 <= v13 )
    goto LABEL_58;
  v16 = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8));
  v18 = CurrentVisual;
  if ( !CurrentVisual )
    goto LABEL_63;
  do
  {
    if ( (**((_DWORD **)v18 + 28) & 0x100000) != 0 )
      break;
    CVisual::CalcEffectiveTransform(v18, 5LL, 0LL, &v53[2], v68, *((_QWORD *)this + 757), 0LL);
    CMILMatrix::Multiply((const struct CMILMatrix *)v57, (const struct CMILMatrix *)v68, (struct CMILMatrix *)v57);
    TreeData = CVisual::FindTreeData(v18, *((const struct CVisualTree **)this + 757));
    if ( TreeData && CVisual::GetParentTreeData(v18, v20, TreeData, &v53[3]) && v53[3] )
      v16 = 1;
    v18 = (CVisual *)*((_QWORD *)v18 + 10);
  }
  while ( v18 );
  if ( !v18 || !*(_BYTE *)(*((_QWORD *)this + 757) + 32LL) )
  {
LABEL_63:
    CachedWindowBackgroundTreatment = CVisual::GetCachedWindowBackgroundTreatment(CurrentVisual);
    if ( CachedWindowBackgroundTreatment )
    {
      if ( !*((_BYTE *)CachedWindowBackgroundTreatment + 140) )
      {
        v4 = (struct IImageSource *)*((_QWORD *)CachedWindowBackgroundTreatment + 3);
        v54 = v4;
        if ( v4 )
        {
          v45 = *(_QWORD *)((char *)CachedWindowBackgroundTreatment + 116);
          *(_OWORD *)v55 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 100);
          v46 = *((_OWORD *)CachedWindowBackgroundTreatment + 2);
          v8 = *(float *)&v55[4];
          v6 = *(float *)v55;
          *(_QWORD *)&v55[16] = v45;
          v47 = *((_OWORD *)CachedWindowBackgroundTreatment + 3);
          *(_OWORD *)v57 = v46;
          v48 = *((_OWORD *)CachedWindowBackgroundTreatment + 4);
          v58 = v47;
          v49 = *((_OWORD *)CachedWindowBackgroundTreatment + 5);
          v50 = *((_DWORD *)CachedWindowBackgroundTreatment + 24);
          v59 = v48;
          v60 = v49;
          v61 = v50;
        }
        else
        {
          *(_OWORD *)v56 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 124);
        }
        goto LABEL_25;
      }
    }
  }
  if ( !v18 )
  {
    *(_OWORD *)v56 = _xmm;
    goto LABEL_51;
  }
  WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(v18);
  if ( !CWindowBackgroundTreatment::HasValidSource(
          WindowBackgroundTreatmentInternal,
          *((const struct IRenderTarget **)this + 44)) )
  {
    v9 = 0;
    v28 = 0;
    goto LABEL_28;
  }
  ImageSourceForEffectInputNoRef = CWindowBackgroundTreatment::GetImageSourceForEffectInputNoRef(
                                     WindowBackgroundTreatmentInternal,
                                     *((const struct IRenderTarget **)this + 44));
  v73 = ImageSourceForEffectInputNoRef;
  if ( !ImageSourceForEffectInputNoRef )
  {
    *(_OWORD *)v56 = *(_OWORD *)(*((_QWORD *)WindowBackgroundTreatmentInternal + 8) + 80LL);
LABEL_51:
    v9 = 0;
    goto LABEL_25;
  }
  if ( !v16 )
  {
LABEL_24:
    v23 = *((_OWORD *)WindowBackgroundTreatmentInternal + 9);
    v4 = ImageSourceForEffectInputNoRef;
    v54 = ImageSourceForEffectInputNoRef;
    v24 = *((_QWORD *)WindowBackgroundTreatmentInternal + 20);
    v9 = 0;
    *(_OWORD *)v55 = v23;
    v8 = *((float *)&v23 + 1);
    v6 = *(float *)&v23;
    *(_QWORD *)&v55[16] = v24;
LABEL_25:
    if ( v4 )
    {
      (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v4 + 8LL))(v4);
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v57);
      LODWORD(v71) = LODWORD(v6) ^ _xmm;
      *(float *)&v76 = *(float *)&v70 - v6;
      *((float *)&v76 + 1) = *((float *)&v70 + 1) - v8;
      *((float *)&v76 + 2) = *((float *)&v70 + 2) - v6;
      *((float *)&v76 + 3) = *((float *)&v70 + 3) - v8;
      v62[0] = v57[0];
      v25 = v57[3];
      *(_OWORD *)((char *)a3 + 84) = v76;
      v62[2] = v25;
      v62[1] = v57[1];
      v63 = v58;
      v65 = v60;
      v64 = HIDWORD(v58);
      v66 = HIDWORD(v60);
      LODWORD(v72) = LODWORD(v8) ^ _xmm;
      v70 = _xmm;
      v26 = Matrix3x3::operator*(v62, v68, &v70);
      *(_QWORD *)((char *)&v70 + 4) = 0LL;
      *(float *)&v70 = 1.0 / (float)(*(float *)&v55[8] - v6);
      *((float *)&v70 + 3) = 1.0 / (float)(*(float *)&v55[12] - v8);
      v71 = 0.0 - (float)(*(float *)&v70 * 0.0);
      v72 = 0.0 - (float)(*((float *)&v70 + 3) * 0.0);
      v27 = Matrix3x3::operator*(v26, v62, &v70);
      *((_OWORD *)a3 + 3) = *(_OWORD *)v27;
      *((_OWORD *)a3 + 4) = *(_OWORD *)(v27 + 16);
      *((_DWORD *)a3 + 20) = *(_DWORD *)(v27 + 32);
    }
    v28 = 0;
    goto LABEL_28;
  }
  v37 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 216);
  v38 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 232);
  v69 = *((_DWORD *)WindowBackgroundTreatmentInternal + 70);
  v68[0] = v37;
  v39 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 248);
  v68[1] = v38;
  v40 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 264);
  v68[2] = v39;
  v68[3] = v40;
  if ( CMILMatrix::Invert((CMILMatrix *)v68) )
  {
    v41 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
    CMILMatrix::Multiply(v41, (const struct CMILMatrix *)v68, (struct CMILMatrix *)v57);
    ImageSourceForEffectInputNoRef = v73;
    goto LABEL_24;
  }
  v28 = 1;
  v9 = 0;
LABEL_28:
  if ( v18 && !v28 && *(_BYTE *)(*((_QWORD *)this + 757) + 32LL) && !v9 )
  {
    v73 = CVisual::GetCachedWindowBackgroundTreatment(CurrentVisual);
    v29 = CVisual::GetWindowBackgroundTreatmentInternal(v18);
    if ( v30 )
    {
      v31 = CCachedWindowBackgroundTreatment::Update(v30, (__int64)v55, (__int64)v56);
      v33 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0xB2Cu, 0LL);
        goto LABEL_36;
      }
    }
    else
    {
      v42 = CCachedWindowBackgroundTreatment::Create((__int64)v29, (__int64)v4, (int)v57, (float *)v55, v56, &v73);
      v33 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0xB36u, 0LL);
        goto LABEL_36;
      }
      CVisual::SetCachedWindowBackgroundTreatment(CurrentVisual, v73);
    }
  }
  if ( v4 )
    goto LABEL_35;
  v7 = v67;
LABEL_58:
  v51 = CDrawingContext::SetEffectInputToTransparentBlack(this, v7, a3, &v54);
  v33 = v51;
  if ( v51 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0xB45u, 0LL);
    v4 = v54;
    goto LABEL_36;
  }
  v4 = v54;
  *(_OWORD *)((char *)a3 + 24) = *(_OWORD *)v56;
LABEL_35:
  v34 = CDrawListBitmap::FromImageSource(a3, v4, this, 0);
  v33 = v34;
  if ( v34 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0xB4Au, 0LL);
LABEL_36:
  if ( v4 )
    (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v4 + 16LL))(v4);
  return v33;
}
