/*
 * XREFs of ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x1800AE83C
 * Callers:
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x18005D438 (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$vec.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x1800CB2C0 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z @ 0x18000E19C (-CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z.c)
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x18001DA44 (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 *     ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x18001DB00 (--_ECColorDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800288C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18005AB70 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18005C55C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18005C7CC (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180064010 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetSurfaceTransform@CBrushRenderingGraph@@AEBAPEBUD2D_MATRIX_3X2_F@@I@Z @ 0x1800ADF08 (-GetSurfaceTransform@CBrushRenderingGraph@@AEBAPEBUD2D_MATRIX_3X2_F@@I@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800AE7D4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     FindBaseSimpleInputBrush @ 0x1800AEB70 (FindBaseSimpleInputBrush.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180147BF8 (McTemplateU0d.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z @ 0x180182560 (-SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180182BCC (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x1801D4A90 (--_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x18022B73C (-Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV-$unique_ptr@VC.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetInputBrushParameters(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        int a4,
        unsigned int a5,
        struct EffectInput *a6)
{
  CSurfaceDrawListBrush *v8; // rbx
  __int64 v9; // r12
  FLOAT height; // xmm1_4
  __int64 v11; // rdi
  int v12; // eax
  CDrawListBrush *v13; // rcx
  int IntermediateSurfaceBrush; // esi
  const struct D2D1::Matrix3x2F *SurfaceTransform; // rax
  __int64 BaseSimpleInputBrush; // rax
  __int64 v17; // rdi
  struct _D3DCOLORVALUE *v18; // r12
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdi
  char v25; // al
  CSurfaceDrawListBrush *v26; // rdi
  struct CDrawingContext *v27; // r15
  __int64 v28; // rdi
  __int64 (__fastcall ***v29)(_QWORD, __int64); // rdx
  unsigned int *v30; // rdi
  __int64 v31; // r14
  __int64 v33; // xmm1_8
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rax
  CGeometryOnlyDrawListBrush *v37; // rcx
  FLOAT v38; // xmm0_4
  FLOAT v39; // xmm1_4
  CDrawListBrush *v40; // rax
  struct D2D_RECT_F v41; // xmm0
  CSurfaceDrawListBrush *v42; // rcx
  CSurfaceDrawListBrush *v43; // rdx
  int v44; // edi
  CColorDrawListBrush *v45; // rcx
  CDrawListBrush *v46; // rcx
  CDrawListBrush *v47; // rax
  __int64 v48; // rcx
  FLOAT v49; // xmm0_4
  FLOAT v50; // xmm1_4
  CEmptyRegionDrawListBrush *v51; // rcx
  __int128 v52; // xmm0
  int v53; // eax
  unsigned int v54; // [rsp+20h] [rbp-E0h]
  CDrawListBrush *v55; // [rsp+30h] [rbp-D0h] BYREF
  CSurfaceDrawListBrush *v56; // [rsp+38h] [rbp-C8h] BYREF
  struct D2D_RECT_F v57; // [rsp+40h] [rbp-C0h] BYREF
  char v58; // [rsp+50h] [rbp-B0h]
  CSurfaceDrawListBrush *v59; // [rsp+58h] [rbp-A8h] BYREF
  CColorDrawListBrush *v60; // [rsp+60h] [rbp-A0h] BYREF
  struct CColorDrawListBrush *v61[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v62; // [rsp+78h] [rbp-88h]
  _QWORD v63[2]; // [rsp+80h] [rbp-80h] BYREF
  int v64; // [rsp+90h] [rbp-70h]
  __int16 v65; // [rsp+DCh] [rbp-24h]
  char v66; // [rsp+DEh] [rbp-22h]
  struct CDrawingContext *v67; // [rsp+E0h] [rbp-20h] BYREF
  FLOAT width; // [rsp+E8h] [rbp-18h]
  FLOAT v69; // [rsp+ECh] [rbp-14h]
  int v70; // [rsp+F0h] [rbp-10h]
  __int128 v71; // [rsp+F4h] [rbp-Ch]
  _QWORD v72[4]; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v73; // [rsp+128h] [rbp+28h] BYREF
  char i; // [rsp+12Ch] [rbp+2Ch]
  D2D1_MATRIX_3X2_F matrix; // [rsp+130h] [rbp+30h] BYREF

  LODWORD(v55) = a4;
  v60 = a2;
  v8 = 0LL;
  v9 = *((unsigned int *)a6 + 12);
  *(_OWORD *)((char *)a6 + 24) = 0LL;
  height = a3->height;
  v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 24 * v9);
  width = a3->width;
  v70 = 0;
  memset(v72, 0, sizeof(v72));
  v73 = 0;
  i = 0;
  v71 = _xmm;
  v67 = a2;
  v69 = height;
  v12 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v11 + 296LL))(
          v11,
          a2,
          a3);
  IntermediateSurfaceBrush = v12;
  if ( v12 < 0 )
  {
    v54 = 138;
    goto LABEL_108;
  }
  IntermediateSurfaceBrush = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext **))(*(_QWORD *)v11 + 304LL))(
                               v11,
                               &v67);
  if ( IntermediateSurfaceBrush < 0 )
  {
    v18 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
    goto LABEL_97;
  }
  v8 = (CSurfaceDrawListBrush *)v72[0];
  v72[0] = 0LL;
  v59 = v8;
  if ( !v8 )
  {
    v18 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
LABEL_95:
    v52 = v71;
    v53 = v70;
    *((_BYTE *)a6 + 45) = 1;
    *(_OWORD *)&v18->r = v52;
    *((_DWORD *)a6 + 10) = v53;
LABEL_97:
    v27 = v60;
    goto LABEL_27;
  }
  SurfaceTransform = (const struct D2D1::Matrix3x2F *)CBrushRenderingGraph::GetSurfaceTransform(this, v9);
  if ( SurfaceTransform )
  {
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)v61, (CSurfaceDrawListBrush *)((char *)v8 + 8), SurfaceTransform);
    v33 = v62;
    *(_OWORD *)v34 = *(_OWORD *)v61;
    *(_QWORD *)(v34 + 16) = v33;
  }
  BaseSimpleInputBrush = FindBaseSimpleInputBrush(v8);
  v17 = BaseSimpleInputBrush;
  if ( !BaseSimpleInputBrush )
  {
    if ( CCommonRegistryData::m_fFlattenVirtualSurfaceBrush
      || (v13 = (CDrawListBrush *)*((_QWORD *)this + 18),
          v35 = 60LL * a5,
          v36 = *((_QWORD *)v13 + (unsigned int)v55),
          *(_BYTE *)(v36 + v35 + 108))
      || *(_BYTE *)(v36 + v35 + 109) )
    {
      CBrushDrawListGenerator::AttachInput((__int64)&v67, 0, &v59);
      v55 = 0LL;
      *(_QWORD *)&v57.right = 0LL;
      *(_QWORD *)&v57.left = &v55;
      v58 = 1;
      IntermediateSurfaceBrush = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v57.right);
      if ( v58 )
      {
        v37 = **(CGeometryOnlyDrawListBrush ***)&v57.left;
        **(_QWORD **)&v57.left = *(_QWORD *)&v57.right;
        if ( v37 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v37, 1);
      }
      if ( IntermediateSurfaceBrush < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v37, 0LL, 0, IntermediateSurfaceBrush, 0xC9u);
      }
      else
      {
        v38 = a3->width;
        v39 = a3->height;
        v40 = v55;
        v57.left = 0.0;
        v57.top = 0.0;
        v63[1] = 0LL;
        v64 = 0;
        *((_BYTE *)v55 + 52) = 1;
        *((_DWORD *)v40 + 12) = 50529027;
        v57.right = v38;
        v57.bottom = v39;
        v41 = v57;
        *(_QWORD *)&v57.right = 0LL;
        v65 = 1;
        *((struct D2D_RECT_F *)v40 + 2) = v41;
        v56 = 0LL;
        v63[0] = v55;
        *(_QWORD *)&v57.left = &v56;
        v66 = 0;
        v58 = 1;
        IntermediateSurfaceBrush = CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
                                     (CBrushDrawListGenerator *)&v67,
                                     (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v63,
                                     (struct CSurfaceDrawListBrush **)&v57.right);
        if ( v58 )
        {
          v42 = **(CSurfaceDrawListBrush ***)&v57.left;
          **(_QWORD **)&v57.left = *(_QWORD *)&v57.right;
          if ( v42 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v42, 1);
        }
        if ( IntermediateSurfaceBrush >= 0 )
        {
          v8 = v56;
          v43 = v59;
          v56 = 0LL;
          v59 = v8;
          if ( v43 )
            std::default_delete<CShape>::operator()((__int64)v42, (__int64 (__fastcall ***)(_QWORD, __int64))v43);
          v44 = v70;
          CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)&v67);
          v70 = v44 | 0x100;
          if ( v56 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v56, 1);
          v13 = v55;
          if ( v55 )
            CGeometryOnlyDrawListBrush::`vector deleting destructor'(v55, 1);
          goto LABEL_60;
        }
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v42, 0LL, 0, IntermediateSurfaceBrush, 0xD0u);
        if ( v56 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v56, 1);
      }
      v13 = v55;
      if ( v55 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v55, 1);
      goto LABEL_66;
    }
LABEL_60:
    v18 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
    goto LABEL_8;
  }
  v18 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)BaseSimpleInputBrush + 8LL))(
          BaseSimpleInputBrush,
          0LL) )
    goto LABEL_8;
  v55 = 0LL;
  *(_QWORD *)&v57.left = &v55;
  *(_QWORD *)&v57.right = 0LL;
  *(_OWORD *)&v18->r = v71;
  v58 = 1;
  IntermediateSurfaceBrush = CColorDrawListBrush::Create(
                               (struct _D3DCOLORVALUE *)((char *)a6 + 24),
                               (struct CColorDrawListBrush **)&v57.right);
  if ( v58 )
  {
    v45 = **(CColorDrawListBrush ***)&v57.left;
    **(_QWORD **)&v57.left = *(_QWORD *)&v57.right;
    if ( v45 )
      CColorDrawListBrush::`vector deleting destructor'(v45, 1);
  }
  if ( IntermediateSurfaceBrush >= 0 )
  {
    CDrawListBrush::CopyPrimitiveClamp(v55, (const struct CDrawListBrush *)v17);
    v46 = v55;
    *(_OWORD *)((char *)v55 + 8) = *(_OWORD *)(v17 + 8);
    *((_QWORD *)v46 + 3) = *(_QWORD *)(v17 + 24);
    v47 = v55;
    v55 = 0LL;
    v56 = v47;
    (*(void (__fastcall **)(CSurfaceDrawListBrush *, CSurfaceDrawListBrush **))(*(_QWORD *)v8 + 40LL))(v8, &v56);
    if ( v56 )
      std::default_delete<CShape>::operator()(v48, (__int64 (__fastcall ***)(_QWORD, __int64))v56);
    v13 = v55;
    if ( v55 )
      CColorDrawListBrush::`vector deleting destructor'(v55, 1);
LABEL_8:
    if ( v8 )
    {
      matrix = *(D2D1_MATRIX_3X2_F *)((char *)v8 + 8);
      if ( !D2D1IsMatrixInvertible(&matrix) )
      {
        v27 = v60;
        IntermediateSurfaceBrush = -2003304441;
        goto LABEL_80;
      }
      v19 = FindBaseSimpleInputBrush(v8);
      v20 = v19;
      if ( v19 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 8LL))(v19, 2LL) )
      {
        v21 = *(_QWORD *)a6;
        v22 = *(_QWORD *)(v20 + 56);
        if ( *(_QWORD *)a6 != v22 )
        {
          if ( v22 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 8LL))(*(_QWORD *)(v20 + 56));
            v21 = *(_QWORD *)a6;
          }
          *(_QWORD *)a6 = v22;
          if ( v21 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        v23 = *((_QWORD *)a6 + 1);
        v24 = *(_QWORD *)(v20 + 64);
        if ( v23 != v24 )
        {
          if ( v24 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v24 + 8LL))(*(_QWORD *)(v20 + 64));
            v23 = *((_QWORD *)a6 + 1);
          }
          *((_QWORD *)a6 + 1) = v24;
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        }
        *((_BYTE *)a6 + 16) = *(_BYTE *)(v20 + 72);
        v25 = 0;
      }
      else
      {
        v25 = 1;
      }
      *((_BYTE *)a6 + 45) = v25;
      if ( !(*(unsigned __int8 (__fastcall **)(CSurfaceDrawListBrush *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 5LL) )
      {
        v26 = v8;
        if ( !(*(unsigned __int8 (__fastcall **)(CSurfaceDrawListBrush *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 4LL) )
        {
          v27 = v60;
LABEL_26:
          v8 = 0LL;
          *((_DWORD *)a6 + 10) = v70;
          *((_QWORD *)a6 + 7) = v26;
LABEL_27:
          if ( IntermediateSurfaceBrush != -2147024846
            && IntermediateSurfaceBrush != -2147022876
            && IntermediateSurfaceBrush != -2003304441 )
          {
LABEL_30:
            if ( IntermediateSurfaceBrush < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v13, 0LL, 0, IntermediateSurfaceBrush, 0x136u);
              goto LABEL_32;
            }
            if ( !*((_BYTE *)a6 + 45) )
              goto LABEL_32;
            v12 = CDrawListBitmap::SetTransparent(a6, v27);
            IntermediateSurfaceBrush = v12;
            if ( v12 >= 0 )
            {
              if ( *((_QWORD *)a6 + 7) )
                goto LABEL_32;
              v60 = 0LL;
              v61[1] = 0LL;
              v61[0] = (struct CColorDrawListBrush *)&v60;
              LOBYTE(v62) = 1;
              IntermediateSurfaceBrush = CColorDrawListBrush::Create(v18, &v61[1]);
              if ( (_BYTE)v62 )
              {
                v13 = *(CDrawListBrush **)v61[0];
                *(_QWORD *)v61[0] = v61[1];
                if ( v13 )
                  CColorDrawListBrush::`vector deleting destructor'(v13, 1);
              }
              if ( IntermediateSurfaceBrush >= 0 )
              {
                *((_QWORD *)a6 + 7) = v60;
                goto LABEL_32;
              }
              MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v13, 0LL, 0, IntermediateSurfaceBrush, 0x143u);
              v13 = v60;
              goto LABEL_77;
            }
            v54 = 315;
LABEL_108:
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v13, 0LL, 0, v12, v54);
            goto LABEL_32;
          }
LABEL_80:
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
            McTemplateU0d(
              Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_EFFECTBRUSH_DRAW_IGNORE_INVALID_INPUT,
              (unsigned int)IntermediateSurfaceBrush);
          *((_DWORD *)a6 + 10) = 0;
          IntermediateSurfaceBrush = 0;
          *((_BYTE *)a6 + 45) = 1;
          goto LABEL_30;
        }
      }
      v49 = a3->width;
      v57.left = 0.0;
      v57.top = 0.0;
      v50 = a3->height;
      v27 = v60;
      v56 = 0LL;
      v61[1] = 0LL;
      v57.right = v49;
      v57.bottom = v50;
      v61[0] = (struct CColorDrawListBrush *)&v56;
      LOBYTE(v62) = 1;
      IntermediateSurfaceBrush = CEmptyRegionDrawListBrush::Create(v60, &v57);
      if ( (_BYTE)v62 )
      {
        v51 = *(CEmptyRegionDrawListBrush **)v61[0];
        *(_QWORD *)v61[0] = v61[1];
        if ( v51 )
          CEmptyRegionDrawListBrush::`scalar deleting destructor'(v51, 1u);
      }
      if ( IntermediateSurfaceBrush >= 0 )
      {
        v13 = 0LL;
        v26 = v56;
        v56 = 0LL;
        if ( v59 )
        {
          std::default_delete<CShape>::operator()(0LL, (__int64 (__fastcall ***)(_QWORD, __int64))v59);
          v13 = v56;
        }
        if ( v13 )
          CEmptyRegionDrawListBrush::`scalar deleting destructor'(v13, 1u);
        goto LABEL_26;
      }
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v51, 0LL, 0, IntermediateSurfaceBrush, 0x11Bu);
      v13 = v56;
      if ( v56 )
        CEmptyRegionDrawListBrush::`scalar deleting destructor'(v56, 1u);
LABEL_66:
      v8 = v59;
      goto LABEL_32;
    }
    goto LABEL_95;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v45, 0LL, 0, IntermediateSurfaceBrush, 0xBBu);
  v13 = v55;
LABEL_77:
  if ( v13 )
    CColorDrawListBrush::`vector deleting destructor'(v13, 1);
LABEL_32:
  v70 = 0;
  v28 = 0LL;
  v71 = _xmm;
  for ( i = 0; (unsigned int)v28 < v73; v28 = (unsigned int)(v28 + 1) )
  {
    v29 = (__int64 (__fastcall ***)(_QWORD, __int64))v72[v28];
    v72[v28] = 0LL;
    if ( v29 )
      std::default_delete<CShape>::operator()((__int64)v13, v29);
  }
  v73 = 0;
  v30 = &v73;
  v31 = 4LL;
  do
  {
    v30 -= 2;
    --v31;
    if ( *(_QWORD *)v30 )
      std::default_delete<CShape>::operator()((__int64)v13, *(__int64 (__fastcall ****)(_QWORD, __int64))v30);
  }
  while ( v31 );
  if ( v8 )
    std::default_delete<CShape>::operator()((__int64)v13, (__int64 (__fastcall ***)(_QWORD, __int64))v8);
  return (unsigned int)IntermediateSurfaceBrush;
}
