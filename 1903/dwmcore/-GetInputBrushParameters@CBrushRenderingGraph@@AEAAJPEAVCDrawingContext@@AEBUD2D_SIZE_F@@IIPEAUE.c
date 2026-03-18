/*
 * XREFs of ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180073D6C
 * Callers:
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x1800771B8 (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$vec.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z @ 0x18001125C (-CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18004E9C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18004EA28 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180052C34 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??4?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180073328 (--4-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180073C40 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     FindBaseSimpleInputBrush @ 0x180074014 (FindBaseSimpleInputBrush.c)
 *     ?GetSurfaceTransform@CBrushRenderingGraph@@AEBAPEBUD2D_MATRIX_3X2_F@@I@Z @ 0x18007404C (-GetSurfaceTransform@CBrushRenderingGraph@@AEBAPEBUD2D_MATRIX_3X2_F@@I@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180075FA8 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x180075FE8 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCSpriteVisualContent@@I@Z @ 0x1800767F4 (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCSpriteVisualContent@@I@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180078AB8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800BA950 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18015EC70 (McTemplateU0d.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801B084C (-SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801B0EB4 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x1801B22F0 (--_ECColorDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x1801B2344 (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 *     ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x180205FE0 (--_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x180259D78 (-Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV-$unique_ptr@VC.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetInputBrushParameters(
        CDrawListBrush **this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        int a4,
        unsigned int a5,
        struct EffectInput *a6)
{
  CSurfaceDrawListBrush *v7; // rbx
  struct _D3DCOLORVALUE *v9; // r12
  unsigned int v10; // edx
  struct CSpriteVisualContent *NamedInput; // rdi
  FLOAT height; // xmm1_4
  int v14; // eax
  unsigned int v15; // ecx
  int IntermediateSurfaceBrush; // esi
  CDrawListBrush *v17; // rcx
  __int64 v18; // rax
  const struct D2D1::Matrix3x2F *SurfaceTransform; // rax
  __int64 BaseSimpleInputBrush; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  char v24; // al
  CDrawListBrush *v25; // rdi
  struct CDrawingContext *v26; // r15
  __int64 v27; // rcx
  __int64 v29; // xmm1_8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  CGeometryOnlyDrawListBrush *v33; // rcx
  FLOAT v34; // xmm0_4
  FLOAT v35; // xmm1_4
  CDrawListBrush *v36; // rax
  CSurfaceDrawListBrush *v37; // rcx
  CSurfaceDrawListBrush *v38; // rdx
  int v39; // edi
  CColorDrawListBrush *v40; // rcx
  CDrawListBrush *v41; // rcx
  __int64 (__fastcall **v42)(_QWORD, __int64); // rax
  __int64 v43; // rcx
  CColorDrawListBrush *v44; // rcx
  FLOAT v45; // xmm0_4
  FLOAT v46; // xmm1_4
  CEmptyRegionDrawListBrush *v47; // rcx
  __int128 v48; // xmm0
  int v49; // eax
  CColorDrawListBrush *v50; // rcx
  unsigned int v51; // [rsp+20h] [rbp-E0h]
  CDrawListBrush *v52; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_RECT_F v53; // [rsp+38h] [rbp-C8h] BYREF
  char v54; // [rsp+48h] [rbp-B8h]
  CSurfaceDrawListBrush *v55; // [rsp+50h] [rbp-B0h] BYREF
  CColorDrawListBrush *v56; // [rsp+58h] [rbp-A8h] BYREF
  CSurfaceDrawListBrush *v57; // [rsp+60h] [rbp-A0h] BYREF
  struct CColorDrawListBrush *v58[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v59; // [rsp+78h] [rbp-88h]
  _QWORD v60[2]; // [rsp+80h] [rbp-80h] BYREF
  int v61; // [rsp+90h] [rbp-70h]
  __int16 v62; // [rsp+DCh] [rbp-24h]
  char v63; // [rsp+DEh] [rbp-22h]
  struct CDrawingContext *v64; // [rsp+E0h] [rbp-20h] BYREF
  FLOAT width; // [rsp+E8h] [rbp-18h]
  FLOAT v66; // [rsp+ECh] [rbp-14h]
  int v67; // [rsp+F0h] [rbp-10h]
  __int128 v68; // [rsp+F4h] [rbp-Ch]
  __int64 v69; // [rsp+108h] [rbp+8h]
  __int64 v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  __int64 v72; // [rsp+120h] [rbp+20h]
  int v73; // [rsp+128h] [rbp+28h]
  char v74; // [rsp+12Ch] [rbp+2Ch]
  D2D1_MATRIX_3X2_F matrix; // [rsp+130h] [rbp+30h] BYREF

  v56 = a2;
  v7 = 0LL;
  LODWORD(v52) = a4;
  v55 = 0LL;
  v9 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
  LODWORD(v57) = *((_DWORD *)a6 + 12);
  v10 = (unsigned int)v57;
  *(_OWORD *)((char *)a6 + 24) = 0LL;
  NamedInput = CBrushRenderingGraph::GetNamedInput((CBrushRenderingGraph *)this, v10);
  height = a3->height;
  width = a3->width;
  v67 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0;
  v74 = 0;
  v68 = _xmm;
  v64 = a2;
  v66 = height;
  v14 = (*(__int64 (__fastcall **)(struct CSpriteVisualContent *, struct CDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)NamedInput + 360LL))(
          NamedInput,
          a2,
          a3);
  IntermediateSurfaceBrush = v14;
  if ( v14 < 0 )
  {
    v51 = 145;
    goto LABEL_89;
  }
  IntermediateSurfaceBrush = (*(__int64 (__fastcall **)(struct CSpriteVisualContent *, struct CDrawingContext **))(*(_QWORD *)NamedInput + 368LL))(
                               NamedInput,
                               &v64);
  if ( IntermediateSurfaceBrush < 0 )
    goto LABEL_78;
  v18 = v69;
  v69 = 0LL;
  *(_QWORD *)&v53.left = v18;
  std::unique_ptr<CDrawListPrimitive>::operator=((__int64 *)&v55, (__int64 *)&v53);
  if ( *(_QWORD *)&v53.left )
    std::default_delete<CShape>::operator()((__int64)v17, *(__int64 (__fastcall ****)(_QWORD, __int64))&v53.left);
  v7 = v55;
  if ( !v55 )
  {
LABEL_77:
    v48 = v68;
    v49 = v67;
    *((_BYTE *)a6 + 45) = 1;
    *(_OWORD *)&v9->r = v48;
    *((_DWORD *)a6 + 10) = v49;
LABEL_78:
    v26 = v56;
    goto LABEL_19;
  }
  SurfaceTransform = (const struct D2D1::Matrix3x2F *)CBrushRenderingGraph::GetSurfaceTransform(
                                                        (CBrushRenderingGraph *)this,
                                                        (unsigned int)v57);
  if ( SurfaceTransform )
  {
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)v58, (CSurfaceDrawListBrush *)((char *)v7 + 8), SurfaceTransform);
    v29 = v59;
    *(_OWORD *)v30 = *(_OWORD *)v58;
    *(_QWORD *)(v30 + 16) = v29;
  }
  BaseSimpleInputBrush = FindBaseSimpleInputBrush(v7);
  v21 = BaseSimpleInputBrush;
  if ( !BaseSimpleInputBrush )
  {
    if ( !CCommonRegistryData::m_fFlattenVirtualSurfaceBrush )
    {
      v17 = this[18];
      v31 = 44LL * a5;
      v32 = *((_QWORD *)v17 + (unsigned int)v52);
      if ( !*(_BYTE *)(v32 + v31 + 100) && !*(_BYTE *)(v32 + v31 + 101) )
        goto LABEL_10;
    }
    CBrushDrawListGenerator::AttachInput(&v64, 0LL, &v55);
    v52 = 0LL;
    *(_QWORD *)&v53.left = &v52;
    *(_QWORD *)&v53.right = 0LL;
    v54 = 1;
    IntermediateSurfaceBrush = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v53.right);
    if ( v54 )
    {
      v33 = **(CGeometryOnlyDrawListBrush ***)&v53.left;
      **(_QWORD **)&v53.left = *(_QWORD *)&v53.right;
      if ( v33 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v33, 1);
    }
    if ( IntermediateSurfaceBrush < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v33, 0LL, 0, IntermediateSurfaceBrush, 0xD0u, 0LL);
    }
    else
    {
      v34 = a3->width;
      v35 = a3->height;
      v36 = v52;
      v53.left = 0.0;
      v53.top = 0.0;
      v53.right = v34;
      *((_BYTE *)v52 + 52) = 1;
      *((_DWORD *)v36 + 12) = 50529027;
      v53.bottom = v35;
      v60[1] = 0LL;
      v61 = 0;
      *((struct D2D_RECT_F *)v36 + 2) = v53;
      v60[0] = v52;
      *(_QWORD *)&v53.left = &v57;
      v62 = 1;
      v63 = 0;
      v57 = 0LL;
      *(_QWORD *)&v53.right = 0LL;
      v54 = 1;
      IntermediateSurfaceBrush = CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
                                   (CBrushDrawListGenerator *)&v64,
                                   (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v60,
                                   (struct CSurfaceDrawListBrush **)&v53.right);
      if ( v54 )
      {
        v37 = **(CSurfaceDrawListBrush ***)&v53.left;
        **(_QWORD **)&v53.left = *(_QWORD *)&v53.right;
        if ( v37 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v37, 1u);
      }
      if ( IntermediateSurfaceBrush >= 0 )
      {
        v38 = v55;
        v7 = v57;
        v57 = 0LL;
        v55 = v7;
        if ( v38 )
          std::default_delete<CShape>::operator()((__int64)v37, (__int64 (__fastcall ***)(_QWORD, __int64))v38);
        v39 = v67;
        CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)&v64);
        v67 = v39 | 0x100;
        if ( v57 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v57, 1u);
        LODWORD(v17) = (_DWORD)v52;
        if ( v52 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v52, 1);
LABEL_10:
        if ( v7 )
        {
          matrix = *(D2D1_MATRIX_3X2_F *)((char *)v7 + 8);
          if ( !D2D1IsMatrixInvertible(&matrix) )
          {
            v26 = v56;
            IntermediateSurfaceBrush = -2003304441;
            goto LABEL_63;
          }
          v22 = FindBaseSimpleInputBrush(v7);
          v23 = v22;
          if ( v22 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 8LL))(v22, 2LL) )
          {
            CDrawListBitmap::operator=((__int64 *)a6, (__int64 *)(v23 + 56));
            v24 = 0;
          }
          else
          {
            v24 = 1;
          }
          *((_BYTE *)a6 + 45) = v24;
          if ( !(*(unsigned __int8 (__fastcall **)(CSurfaceDrawListBrush *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 5LL) )
          {
            v25 = v7;
            if ( !(*(unsigned __int8 (__fastcall **)(CSurfaceDrawListBrush *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 4LL) )
            {
              v26 = v56;
LABEL_18:
              v7 = 0LL;
              *((_DWORD *)a6 + 10) = v67;
              *((_QWORD *)a6 + 7) = v25;
LABEL_19:
              if ( IntermediateSurfaceBrush != -2147024846
                && IntermediateSurfaceBrush != -2147022876
                && IntermediateSurfaceBrush != -2003304441 )
              {
LABEL_22:
                if ( IntermediateSurfaceBrush < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    (unsigned int)v17,
                    0LL,
                    0,
                    IntermediateSurfaceBrush,
                    0x13Du,
                    0LL);
                  goto LABEL_24;
                }
                if ( !*((_BYTE *)a6 + 45) )
                  goto LABEL_24;
                v14 = CDrawListBitmap::SetTransparent(a6, v26);
                IntermediateSurfaceBrush = v14;
                if ( v14 >= 0 )
                {
                  if ( *((_QWORD *)a6 + 7) )
                    goto LABEL_24;
                  v56 = 0LL;
                  v58[0] = (struct CColorDrawListBrush *)&v56;
                  v58[1] = 0LL;
                  LOBYTE(v59) = 1;
                  IntermediateSurfaceBrush = CColorDrawListBrush::Create(v9, &v58[1]);
                  if ( (_BYTE)v59 )
                  {
                    v50 = *(CColorDrawListBrush **)v58[0];
                    *(_QWORD *)v58[0] = v58[1];
                    if ( v50 )
                      CColorDrawListBrush::`vector deleting destructor'(v50, 1u);
                  }
                  if ( IntermediateSurfaceBrush >= 0 )
                  {
                    *((_QWORD *)a6 + 7) = v56;
                    goto LABEL_24;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(
                    (unsigned int)v50,
                    0LL,
                    0,
                    IntermediateSurfaceBrush,
                    0x14Au,
                    0LL);
                  v44 = v56;
                  goto LABEL_60;
                }
                v51 = 322;
LABEL_89:
                MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, v51, 0LL);
                goto LABEL_24;
              }
LABEL_63:
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
                McTemplateU0d(
                  &Microsoft_Windows_Dwm_Core_Provider_Context,
                  &EVTDESC_EFFECTBRUSH_DRAW_IGNORE_INVALID_INPUT,
                  (unsigned int)IntermediateSurfaceBrush);
              *((_BYTE *)a6 + 45) = 1;
              IntermediateSurfaceBrush = 0;
              *((_DWORD *)a6 + 10) = 0;
              goto LABEL_22;
            }
          }
          v45 = a3->width;
          v46 = a3->height;
          v53.left = 0.0;
          v53.top = 0.0;
          v26 = v56;
          v53.right = v45;
          v53.bottom = v46;
          v52 = 0LL;
          v58[0] = (struct CColorDrawListBrush *)&v52;
          v58[1] = 0LL;
          LOBYTE(v59) = 1;
          IntermediateSurfaceBrush = CEmptyRegionDrawListBrush::Create(v56, &v53);
          if ( (_BYTE)v59 )
          {
            v47 = *(CEmptyRegionDrawListBrush **)v58[0];
            *(_QWORD *)v58[0] = v58[1];
            if ( v47 )
              CEmptyRegionDrawListBrush::`scalar deleting destructor'(v47, 1u);
          }
          if ( IntermediateSurfaceBrush >= 0 )
          {
            v17 = 0LL;
            v25 = v52;
            v52 = 0LL;
            if ( v55 )
            {
              std::default_delete<CShape>::operator()(0LL, (__int64 (__fastcall ***)(_QWORD, __int64))v55);
              v17 = v52;
            }
            if ( v17 )
              CEmptyRegionDrawListBrush::`scalar deleting destructor'(v17, 1u);
            goto LABEL_18;
          }
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v47, 0LL, 0, IntermediateSurfaceBrush, 0x122u, 0LL);
          if ( v52 )
            CEmptyRegionDrawListBrush::`scalar deleting destructor'(v52, 1u);
LABEL_49:
          v7 = v55;
          goto LABEL_24;
        }
        goto LABEL_77;
      }
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v37, 0LL, 0, IntermediateSurfaceBrush, 0xD7u, 0LL);
      if ( v57 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v57, 1u);
    }
    if ( v52 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v52, 1);
    goto LABEL_49;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)BaseSimpleInputBrush + 8LL))(
          BaseSimpleInputBrush,
          0LL) )
    goto LABEL_10;
  v52 = 0LL;
  *(_QWORD *)&v53.left = &v52;
  *(_QWORD *)&v53.right = 0LL;
  *(_OWORD *)&v9->r = v68;
  v54 = 1;
  IntermediateSurfaceBrush = CColorDrawListBrush::Create(v9, (struct CColorDrawListBrush **)&v53.right);
  if ( v54 )
  {
    v40 = **(CColorDrawListBrush ***)&v53.left;
    **(_QWORD **)&v53.left = *(_QWORD *)&v53.right;
    if ( v40 )
      CColorDrawListBrush::`vector deleting destructor'(v40, 1u);
  }
  if ( IntermediateSurfaceBrush >= 0 )
  {
    CDrawListBrush::CopyPrimitiveClamp(v52, (const struct CDrawListBrush *)v21);
    v41 = v52;
    *(_OWORD *)((char *)v52 + 8) = *(_OWORD *)(v21 + 8);
    *((_QWORD *)v41 + 3) = *(_QWORD *)(v21 + 24);
    v42 = *(__int64 (__fastcall ***)(_QWORD, __int64))v7;
    *(_QWORD *)&v53.left = v52;
    v52 = 0LL;
    ((__int64 (__fastcall **)(CSurfaceDrawListBrush *, __int64))v42)[5](v7, (__int64)&v53);
    if ( *(_QWORD *)&v53.left )
      std::default_delete<CShape>::operator()(v43, *(__int64 (__fastcall ****)(_QWORD, __int64))&v53.left);
    LODWORD(v17) = (_DWORD)v52;
    if ( v52 )
      CColorDrawListBrush::`vector deleting destructor'(v52, 1u);
    goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v40, 0LL, 0, IntermediateSurfaceBrush, 0xC2u, 0LL);
  v44 = v52;
LABEL_60:
  if ( v44 )
    CColorDrawListBrush::`vector deleting destructor'(v44, 1u);
LABEL_24:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v64);
  if ( v7 )
    std::default_delete<CShape>::operator()(v27, (__int64 (__fastcall ***)(_QWORD, __int64))v7);
  return (unsigned int)IntermediateSurfaceBrush;
}
