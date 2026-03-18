/*
 * XREFs of ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801DA3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180026D0C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180026DE0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180028E60 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18002EACC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F090 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18005AB70 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18005C51C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18005C55C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x1800AE108 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800AEDD0 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800B17F8 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800B3CBC (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800B40E0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800D9AEC (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@_ea_1800D9AEC.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@VID2DBitmap@@@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801D9DE8 (--$As@VID2DBitmap@@@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@V.c)
 *     ?ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2PEAV4@@Z @ 0x1801D9F98 (-ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV-$TMilRect_@M.c)
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801DA22C (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CShapeTree::GenerateDrawList(
        CShapeTree *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v8; // ebx
  float v9; // xmm9_4
  float v10; // xmm6_4
  float width; // xmm0_4
  float height; // xmm2_4
  float v13; // xmm10_4
  float v14; // xmm4_4
  float v15; // xmm1_4
  float v16; // xmm8_4
  float v17; // xmm3_4
  float v18; // xmm7_4
  bool v19; // r15
  __int64 v20; // rcx
  float v21; // xmm11_4
  float v22; // xmm12_4
  float v23; // xmm13_4
  float v24; // xmm8_4
  float v25; // xmm7_4
  void (__fastcall *v26)(__int64, int *); // rax
  float v27; // xmm10_4
  float v28; // xmm9_4
  int v29; // eax
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm4_4
  float v33; // xmm1_4
  float v34; // xmm10_4
  float v35; // xmm9_4
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  CDrawingContext *v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  CSurfaceDrawListBrush *v49; // rcx
  CSurfaceDrawListBrush *v50; // rax
  __int64 v51; // rcx
  int DrawList; // eax
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  struct IImageSource *v57[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v58; // [rsp+48h] [rbp-C0h] BYREF
  char v59; // [rsp+4Ah] [rbp-BEh]
  CSurfaceDrawListBrush *v60; // [rsp+58h] [rbp-B0h] BYREF
  CSurfaceDrawListBrush *v61[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v62[3]; // [rsp+70h] [rbp-98h] BYREF
  int v63; // [rsp+88h] [rbp-80h]
  int v64; // [rsp+B8h] [rbp-50h]
  __int16 v65; // [rsp+D4h] [rbp-34h]
  char v66; // [rsp+D6h] [rbp-32h]
  struct IRenderTarget *v67; // [rsp+D8h] [rbp-30h] BYREF
  float v68; // [rsp+E0h] [rbp-28h]
  float v69; // [rsp+E4h] [rbp-24h]
  struct D2D_SIZE_F v70; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v71; // [rsp+F0h] [rbp-18h] BYREF
  char v72; // [rsp+F8h] [rbp-10h]
  __int128 v73; // [rsp+100h] [rbp-8h] BYREF
  __int128 v74; // [rsp+110h] [rbp+8h] BYREF
  __int64 v75; // [rsp+120h] [rbp+18h]
  float v76; // [rsp+128h] [rbp+20h] BYREF
  float v77; // [rsp+12Ch] [rbp+24h]
  float v78; // [rsp+130h] [rbp+28h]
  float v79; // [rsp+134h] [rbp+2Ch]
  int v80; // [rsp+138h] [rbp+30h] BYREF
  int v81; // [rsp+13Ch] [rbp+34h]
  int v82; // [rsp+140h] [rbp+38h]
  int v83; // [rsp+144h] [rbp+3Ch]
  struct CDrawingContext *v84; // [rsp+148h] [rbp+40h] BYREF
  int v85; // [rsp+150h] [rbp+48h]
  int v86; // [rsp+154h] [rbp+4Ch]
  int v87; // [rsp+158h] [rbp+50h]
  __int128 v88; // [rsp+15Ch] [rbp+54h]
  __int64 v89; // [rsp+170h] [rbp+68h]
  __int64 v90; // [rsp+178h] [rbp+70h]
  __int64 v91; // [rsp+180h] [rbp+78h]
  __int64 v92; // [rsp+188h] [rbp+80h]
  int v93; // [rsp+190h] [rbp+88h]
  char v94; // [rsp+194h] [rbp+8Ch]
  struct CDrawListEntry **v95[288]; // [rsp+198h] [rbp+90h] BYREF

  v8 = 0;
  v73 = *((_OWORD *)this + 4);
  if ( *((_BYTE *)this + 81) )
  {
    v9 = *(float *)&v73;
    v10 = 0.0;
    width = a3->width;
    height = a3->height;
    if ( *(float *)&v73 < 0.0 )
    {
      v9 = 0.0;
      LODWORD(v73) = 0;
    }
    v13 = *((float *)&v73 + 1);
    v14 = *((float *)&v73 + 1);
    if ( *((float *)&v73 + 1) < 0.0 )
    {
      v13 = 0.0;
      v14 = 0.0;
      DWORD1(v73) = 0;
    }
    v15 = *((float *)&v73 + 2);
    v16 = *((float *)&v73 + 2);
    v17 = *((float *)&v73 + 2);
    if ( *((float *)&v73 + 2) > width )
    {
      *((float *)&v73 + 2) = width;
      v15 = width;
      v16 = width;
      v17 = width;
    }
    v18 = *((float *)&v73 + 3);
    if ( *((float *)&v73 + 3) > height )
    {
      *((float *)&v73 + 3) = height;
      v18 = height;
      v16 = v17;
    }
    if ( v15 > v9 && v18 > v14 )
    {
      v64 = 0;
      v19 = 0;
      CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 480), (struct CMILMatrix *)&v62[1]);
      CMILMatrix::Get2DScaleDimensions((CMILMatrix *)&v62[1], (float *)v57, (float *)v57 + 1);
      v20 = *((_QWORD *)a2 + 44);
      v77 = 0.0;
      v21 = 0.0;
      v22 = 0.0;
      v76 = 0.0;
      v23 = 0.0;
      v24 = (float)(v16 - v9) * *(float *)v57;
      v25 = (float)(v18 - v13) * *((float *)v57 + 1);
      v26 = *(void (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 56LL);
      v78 = v24;
      v27 = v24;
      v67 = 0LL;
      v79 = v25;
      v28 = v25;
      v68 = v24;
      v69 = v25;
      v26(v20, &v80);
      v29 = v82 - v80;
      if ( v82 - v80 <= v83 - v81 )
        v29 = v83 - v81;
      if ( fmaxf(v24 - 0.0, v25 - 0.0) <= (float)v29 )
      {
LABEL_28:
        v34 = v27 - v22;
        if ( v34 < 1.0 )
          return v8;
        v35 = v28 - v23;
        if ( v35 < 1.0 )
          return v8;
        v70.width = v34;
        v70.height = v35;
        v67 = 0LL;
        v57[0] = 0LL;
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v67);
        DWORD2(v74) = 28;
        *(_QWORD *)&v74 = "DWM ShapeVisual intermediate";
        v36 = CDrawingContext::PushOffScreenRenderingLayer(
                (struct IRenderTarget **)a2,
                (const struct CResourceTag *)&v74,
                &v70,
                v19,
                &v67);
        v8 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0xCAu);
LABEL_59:
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v57);
          Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v67);
          return v8;
        }
        v70 = 0LL;
        Microsoft::WRL::ComPtr<IRenderTargetBitmap>::As<ID2DBitmap>(&v67, (__int64 *)&v70);
        (*(void (__fastcall **)(struct D2D_SIZE_F, _QWORD))(**(_QWORD **)&v70 + 104LL))(v70, 0LL);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v70);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v57);
        v38 = CRenderTargetImageSource::Create(v67, 1, v57);
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0xD8u);
        }
        else
        {
          CMILMatrix::InferAffineMatrix((__int64)&v62[1], (float *)&v73, &v76);
          v40 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v62[1], 0, 1);
          if ( v40 >= 0 )
          {
            v42 = CShapeTree::DrawShapes(this, a2, a3);
            if ( v42 >= 0 )
            {
              CDrawingContext::PopTransformInternal(a2, 1);
              v45 = CDrawingContext::PopLayer(v44);
              v8 = v45;
              if ( v45 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0xE4u);
              }
              else
              {
                v85 = 0;
                v86 = 0;
                v88 = _xmm;
                v84 = a2;
                v87 = 0;
                *(_OWORD *)&v62[1] = 0LL;
                v89 = 0LL;
                v90 = 0LL;
                v91 = 0LL;
                v92 = 0LL;
                v93 = 0;
                v94 = 0;
                v63 = 0;
                v65 = 1;
                v66 = 0;
                CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v95);
                *(_QWORD *)&v74 = __PAIR64__(LODWORD(v10), LODWORD(v21));
                *(_OWORD *)v61 = 0LL;
                *((_QWORD *)&v74 + 1) = __PAIR64__(LODWORD(v25), LODWORD(v24));
                LOBYTE(v62[0]) = 0;
                v47 = CDrawListBitmap::FromImageSource(v61, v57[0], a2, 0);
                v8 = v47;
                if ( v47 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0xEDu);
                }
                else
                {
                  v58 = 257;
                  v60 = 0LL;
                  v70 = (struct D2D_SIZE_F)&v60;
                  v59 = 1;
                  v71 = 0LL;
                  v72 = 1;
                  v8 = CSurfaceDrawListBrush::CreateWithContentRect((__int64 *)v61, &v58, (float *)&v74, &v71);
                  if ( v72 )
                  {
                    v49 = **(CSurfaceDrawListBrush ***)&v70;
                    **(_QWORD **)&v70 = v71;
                    if ( v49 )
                      CSurfaceDrawListBrush::`vector deleting destructor'(v49, 1);
                  }
                  if ( (v8 & 0x80000000) != 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast((__int64)v49, 0LL, 0, v8, 0xF4u);
                  }
                  else
                  {
                    MILMatrix3x2::InferAffineMatrix((__int64)&v74, &v76, (float *)&v73);
                    v50 = v60;
                    *(_OWORD *)((char *)v60 + 8) = v74;
                    *((_QWORD *)v50 + 3) = v75;
                    v70 = (struct D2D_SIZE_F)v60;
                    v60 = 0LL;
                    CBrushDrawListGenerator::AttachInput((__int64)&v84, 0, &v70);
                    if ( v70 )
                      std::default_delete<CShape>::operator()(v51, *(__int64 (__fastcall ****)(_QWORD, __int64))&v70);
                    v87 = (v19 + 1) << 7;
                    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                                 (CBrushDrawListGenerator *)&v84,
                                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v62[1],
                                 (struct CDrawListEntryBuilder *)v95);
                    v8 = DrawList;
                    if ( DrawList < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, DrawList, 0x106u);
                    else
                      CDrawListCache::Update(a4, a2, v95);
                  }
                  if ( v60 )
                    CSurfaceDrawListBrush::`vector deleting destructor'(v60, 1);
                }
                Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v61[1]);
                Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v61);
                CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v95);
                CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v84);
              }
              goto LABEL_59;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0xDEu);
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v57);
            Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v67);
            CDrawingContext::PopTransformInternal(a2, 1);
            goto LABEL_56;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0xDBu);
        }
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v57);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v67);
LABEL_56:
        v54 = CDrawingContext::PopLayer(a2);
        v8 = v54;
        if ( v54 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x113u);
        return v8;
      }
      v19 = 1;
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v62[1], (__int64)&v73, (float *)&v70);
      CScopedClipStack::GetClipBoundsWorld((struct CDrawingContext *)((char *)a2 + 1008), (__int64)&v74);
      v30 = v70.width;
      if ( *(float *)&v74 > v70.width )
      {
        LODWORD(v70.width) = v74;
        v30 = *(float *)&v74;
      }
      v31 = v70.height;
      if ( *((float *)&v74 + 1) > v70.height )
      {
        v70.height = *((FLOAT *)&v74 + 1);
        v31 = *((float *)&v74 + 1);
      }
      v32 = *(float *)&v71;
      if ( *(float *)&v71 > *((float *)&v74 + 2) )
      {
        LODWORD(v71) = DWORD2(v74);
        v32 = *((float *)&v74 + 2);
      }
      v33 = *((float *)&v71 + 1);
      if ( *((float *)&v71 + 1) > *((float *)&v74 + 3) )
      {
        HIDWORD(v71) = HIDWORD(v74);
        v33 = *((float *)&v74 + 3);
      }
      if ( v32 <= v30 || v33 <= v31 )
      {
        v71 = 0LL;
        v70.height = 0.0;
        v70.width = 0.0;
      }
      if ( CShapeTree::ComputePartialIntermediate(
             (struct CMILMatrix *)&v62[1],
             (float *)v57,
             (float *)&v73,
             (int *)&v70,
             (float *)&v67) )
      {
        v23 = *((float *)&v67 + 1);
        v22 = *(float *)&v67;
        v25 = v25 + COERCE_FLOAT(HIDWORD(v67) ^ _xmm);
        v28 = v69;
        v24 = v24 + COERCE_FLOAT((unsigned int)v67 ^ _xmm);
        v27 = v68;
        v21 = COERCE_FLOAT((unsigned int)v67 ^ _xmm) + 0.0;
        v79 = v25;
        v78 = v24;
        v77 = COERCE_FLOAT(HIDWORD(v67) ^ _xmm) + 0.0;
        v10 = v77;
        v76 = v21;
        goto LABEL_28;
      }
    }
  }
  return v8;
}
