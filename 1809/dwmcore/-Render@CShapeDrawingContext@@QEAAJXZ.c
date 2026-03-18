/*
 * XREFs of ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180223A28
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801DA22C (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180026D0C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180026DE0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x18002777C (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800288C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x180028DB4 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800293DC (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800368E0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18005C51C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18005C55C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18005C7CC (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180064010 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800B23D0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800B3CBC (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800B40E0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x180165304 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801653F0 (-FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x18016723C (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyle1@@@Z @ 0x180167350 (-StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyl.c)
 *     ?GetD2DGradientBrush@CLinearGradientBrush@@QEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x1801A4C58 (-GetD2DGradientBrush@CLinearGradientBrush@@QEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D.c)
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x18022303C (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CShapeDrawingContext::Render(CShapeDrawingContext *this)
{
  struct D2D_MATRIX_3X2_F *v1; // r12
  int v3; // eax
  __int64 v4; // rcx
  _DWORD *v5; // r15
  _DWORD *v6; // r13
  struct ID2D1StrokeStyle1 **v7; // r14
  CGeometry *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  struct ID2D1Brush *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  struct CShape **v18; // rcx
  CGeometry *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  float v26; // xmm1_4
  float v27; // xmm3_4
  int v28; // eax
  __int64 v29; // rcx
  struct CShape **v30; // rcx
  float v31; // xmm6_4
  float v32; // xmm7_4
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  CGeometryOnlyDrawListBrush *v38; // rcx
  int v39; // ebx
  __int64 v40; // rcx
  int v41; // xmm2_4
  CGeometryOnlyDrawListBrush *v42; // rax
  __int64 v43; // xmm1_8
  CGeometryOnlyDrawListBrush *v44; // rcx
  int v45; // ebx
  int DrawList; // eax
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rcx
  CGeometry *v50; // rcx
  int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  int D2DGradientBrush; // eax
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rcx
  CGeometry *v59; // rcx
  int ShapeData; // eax
  __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rcx
  int v65; // eax
  float v66; // xmm1_4
  int v67; // eax
  __int64 v68; // rcx
  struct CShape **v69; // rcx
  struct CShape **v70; // rcx
  struct CShape **v71; // rcx
  __int64 v72; // rax
  struct ID2D1Brush *v73; // rcx
  int v74; // eax
  __int64 v75; // rcx
  unsigned int v76; // ebx
  struct ID2D1StrokeStyle1 *v78; // [rsp+28h] [rbp-E0h]
  struct ID2D1Brush *v79; // [rsp+38h] [rbp-D0h] BYREF
  CGeometryOnlyDrawListBrush *v80; // [rsp+40h] [rbp-C8h] BYREF
  CMILRefCountBase *v81; // [rsp+48h] [rbp-C0h] BYREF
  struct CShape *v82; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v83; // [rsp+58h] [rbp-B0h]
  struct CShape *v84; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v85; // [rsp+68h] [rbp-A0h]
  struct CShape *v86; // [rsp+70h] [rbp-98h] BYREF
  __int64 v87; // [rsp+78h] [rbp-90h]
  struct CShape *v88; // [rsp+80h] [rbp-88h] BYREF
  char v89; // [rsp+88h] [rbp-80h]
  struct ID2D1Brush *v90; // [rsp+90h] [rbp-78h] BYREF
  __int128 v91; // [rsp+98h] [rbp-70h]
  __int128 v92; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v93; // [rsp+B8h] [rbp-50h]
  _QWORD v94[2]; // [rsp+C8h] [rbp-40h] BYREF
  int v95; // [rsp+D8h] [rbp-30h]
  __int16 v96; // [rsp+124h] [rbp+1Ch]
  char v97; // [rsp+126h] [rbp+1Eh]
  struct CGeometryOnlyDrawListBrush *v98[2]; // [rsp+128h] [rbp+20h] BYREF
  int v99; // [rsp+138h] [rbp+30h]
  int v100; // [rsp+13Ch] [rbp+34h]
  __int64 v101; // [rsp+148h] [rbp+40h] BYREF
  float v102; // [rsp+150h] [rbp+48h]
  float v103; // [rsp+154h] [rbp+4Ch]
  int v104; // [rsp+158h] [rbp+50h]
  __int128 v105; // [rsp+15Ch] [rbp+54h]
  __int64 v106; // [rsp+170h] [rbp+68h]
  __int64 v107; // [rsp+178h] [rbp+70h]
  __int64 v108; // [rsp+180h] [rbp+78h]
  __int64 v109; // [rsp+188h] [rbp+80h]
  int v110; // [rsp+190h] [rbp+88h]
  char v111; // [rsp+194h] [rbp+8Ch]
  struct _D3DCOLORVALUE v112; // [rsp+198h] [rbp+90h] BYREF
  struct _D3DCOLORVALUE v113; // [rsp+1A8h] [rbp+A0h] BYREF
  struct D2D_MATRIX_3X2_F v114; // [rsp+1B8h] [rbp+B0h] BYREF
  struct CDrawListEntry **v115[288]; // [rsp+1D8h] [rbp+D0h] BYREF

  v1 = &v114;
  *(_OWORD *)&v114.m11 = _xmm;
  *((_BYTE *)this + 536) = 0;
  *((_BYTE *)this + 538) = 0;
  *(_QWORD *)&v114.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v115);
  v81 = 0LL;
  v3 = CDrawListCache::Create(&v81);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x39u);
    goto LABEL_94;
  }
  v5 = (_DWORD *)*((_QWORD *)this + 64);
  v6 = (_DWORD *)*((_QWORD *)this + 65);
  if ( v5 == v6 )
    goto LABEL_94;
  v7 = (struct ID2D1StrokeStyle1 **)(v5 + 10);
  while ( 1 )
  {
    switch ( *v5 )
    {
      case 1:
        v1 = (struct D2D_MATRIX_3X2_F *)(v7 - 4);
        *((_BYTE *)this + 536) = 1;
        goto LABEL_58;
      case 2:
        v59 = *(v7 - 4);
        v88 = 0LL;
        v89 = 0;
        ShapeData = CGeometry::GetShapeData(v59, 0LL, (struct CShapePtr *)&v88);
        if ( ShapeData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, ShapeData, 0x4Bu);
        }
        else
        {
          v62 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1);
          if ( v62 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v62, 0x50u);
          }
          else
          {
            v64 = *((_QWORD *)this + 42);
            *(struct _D3DCOLORVALUE *)&v113.r = *(struct _D3DCOLORVALUE *)(v7 - 3);
            v65 = *(_DWORD *)(v64 + 3264);
            if ( v65 )
              v66 = *(float *)(*(_QWORD *)(v64 + 3280) + 4LL * (unsigned int)(v65 - 1));
            else
              v66 = FLOAT_1_0;
            v113.a = v113.a * v66;
            v67 = CDrawingContext::FillShapeWithColor((CDrawingContext *)v64, v88, &v113);
            if ( v67 >= 0 )
            {
              v30 = &v88;
              goto LABEL_56;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v67, 0x56u);
          }
        }
        v71 = &v88;
        goto LABEL_92;
      case 3:
        v50 = *(v7 - 4);
        v79 = 0LL;
        v84 = 0LL;
        LOBYTE(v85) = 0;
        v51 = CGeometry::GetShapeData(v50, 0LL, (struct CShapePtr *)&v84);
        if ( v51 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x62u);
        }
        else
        {
          v53 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1);
          if ( v53 >= 0 )
          {
            D2DGradientBrush = CLinearGradientBrush::GetD2DGradientBrush(
                                 *(v7 - 1),
                                 *((struct CDrawingContext **)this + 42),
                                 (const struct D2D_RECT_F *)(v7 - 3),
                                 &v79);
            if ( D2DGradientBrush >= 0 )
            {
              v15 = v79;
              (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v79 + 32LL))(v79);
              v57 = CDrawingContext::FillShapeWithBrush(*((CDrawingContext **)this + 42), v84, v15);
              if ( v57 >= 0 )
              {
                v18 = &v84;
                goto LABEL_48;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x6Fu);
              v69 = &v84;
              goto LABEL_79;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, D2DGradientBrush, 0x6Cu);
            v70 = &v84;
LABEL_82:
            CShapePtr::Release((CShapePtr *)v70);
            v73 = v79;
            if ( !v79 )
              goto LABEL_94;
            v72 = *(_QWORD *)v79;
            goto LABEL_84;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x67u);
        }
        v71 = &v84;
LABEL_92:
        CShapePtr::Release((CShapePtr *)v71);
        goto LABEL_94;
    }
    if ( *v5 == 4 )
      break;
    if ( *v5 == 5 )
    {
      v19 = *(v7 - 4);
      v86 = 0LL;
      LOBYTE(v87) = 0;
      v20 = CGeometry::GetShapeData(v19, 0LL, (struct CShapePtr *)&v86);
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xBBu);
      }
      else
      {
        v22 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1);
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xC0u);
        }
        else
        {
          v24 = *((_QWORD *)this + 42);
          *(struct _D3DCOLORVALUE *)&v112.r = *(struct _D3DCOLORVALUE *)(v7 - 3);
          v25 = *(_DWORD *)(v24 + 3264);
          if ( v25 )
            v26 = *(float *)(*(_QWORD *)(v24 + 3280) + 4LL * (unsigned int)(v25 - 1));
          else
            v26 = FLOAT_1_0;
          v27 = *((float *)v7 - 2);
          v78 = *v7;
          v112.a = v112.a * v26;
          v28 = CDrawingContext::StrokeShapeWithColor((CDrawingContext *)v24, v86, &v112, v27, v78);
          if ( v28 >= 0 )
          {
            v30 = &v86;
LABEL_56:
            CShapePtr::Release((CShapePtr *)v30);
            goto LABEL_58;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xCAu);
        }
      }
      v71 = &v86;
      goto LABEL_92;
    }
    if ( *v5 == 6 )
    {
      v8 = *(v7 - 4);
      v79 = 0LL;
      v82 = 0LL;
      LOBYTE(v83) = 0;
      v9 = CGeometry::GetShapeData(v8, 0LL, (struct CShapePtr *)&v82);
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xD6u);
      }
      else
      {
        v11 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1);
        if ( v11 >= 0 )
        {
          v13 = CLinearGradientBrush::GetD2DGradientBrush(
                  *(v7 - 1),
                  *((struct CDrawingContext **)this + 42),
                  (const struct D2D_RECT_F *)(v7 - 3),
                  &v79);
          if ( v13 >= 0 )
          {
            v15 = v79;
            (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v79 + 32LL))(v79);
            v16 = CDrawingContext::StrokeShapeWithBrush(*((CDrawingContext **)this + 42), v82, v15, *(float *)v7, v7[1]);
            if ( v16 >= 0 )
            {
              v18 = &v82;
LABEL_48:
              CShapePtr::Release((CShapePtr *)v18);
              (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v15 + 16LL))(v15);
              goto LABEL_58;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xE7u);
            v69 = &v82;
LABEL_79:
            CShapePtr::Release((CShapePtr *)v69);
            if ( !v15 )
              goto LABEL_94;
            v72 = *(_QWORD *)v15;
            v73 = v15;
LABEL_84:
            (*(void (__fastcall **)(struct ID2D1Brush *))(v72 + 16))(v73);
            goto LABEL_94;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xE0u);
          v70 = &v82;
          goto LABEL_82;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xDBu);
      }
      v71 = &v82;
      goto LABEL_92;
    }
LABEL_58:
    v5 += 14;
    v7 += 7;
    if ( v5 == v6 )
      goto LABEL_94;
  }
  v31 = *((float *)v7 - 6) - *((float *)v7 - 8);
  v32 = *((float *)v7 - 5) - *((float *)v7 - 7);
  v33 = (__int64)*(v7 - 2);
  v101 = *((_QWORD *)this + 42);
  v102 = v31;
  v103 = v32;
  v80 = 0LL;
  v104 = 0;
  v105 = _xmm;
  v106 = 0LL;
  v107 = 0LL;
  v108 = 0LL;
  v109 = 0LL;
  v110 = 0;
  v111 = 0;
  v34 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 304LL))(v33, &v101);
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x81u);
    goto LABEL_76;
  }
  v36 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, 0LL);
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x83u);
    goto LABEL_76;
  }
  if ( v110 )
    goto LABEL_33;
  v79 = 0LL;
  v98[0] = (struct CGeometryOnlyDrawListBrush *)&v79;
  v98[1] = 0LL;
  LOBYTE(v99) = 1;
  v39 = CGeometryOnlyDrawListBrush::Create(&v98[1]);
  if ( (_BYTE)v99 )
  {
    v38 = *(CGeometryOnlyDrawListBrush **)v98[0];
    *(_QWORD *)v98[0] = v98[1];
    if ( v38 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v38, 1);
  }
  if ( v39 >= 0 )
  {
    v90 = v79;
    v79 = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)&v101, 0, &v90);
    if ( v90 )
      std::default_delete<CShape>::operator()(v40, (__int64 (__fastcall ***)(_QWORD, __int64))v90);
    if ( v79 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v79, 1);
LABEL_33:
    v41 = *((_DWORD *)v7 - 7);
    v99 = *((_DWORD *)v7 - 8);
    v100 = v41;
    *(_OWORD *)v98 = _xmm;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v92,
      (const struct D2D1::Matrix3x2F *)v98,
      (const struct D2D1::Matrix3x2F *)v1);
    v43 = v93;
    *(_OWORD *)((char *)v42 + 8) = v92;
    *((_QWORD *)v42 + 3) = v43;
    if ( *((_BYTE *)v42 + 52) )
    {
      v98[1] = 0LL;
      v98[0] = (struct CGeometryOnlyDrawListBrush *)&v80;
      LOBYTE(v99) = 1;
      v45 = CGeometryOnlyDrawListBrush::Create(&v98[1]);
      if ( (_BYTE)v99 )
      {
        v44 = *(CGeometryOnlyDrawListBrush **)v98[0];
        *(_QWORD *)v98[0] = v98[1];
        if ( v44 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v44, 1);
      }
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v44, 0LL, 0, v45, 0x9Eu);
        goto LABEL_76;
      }
      v42 = v80;
    }
    *(_QWORD *)&v91 = 0LL;
    *((_BYTE *)v42 + 52) = 1;
    *((_DWORD *)v42 + 12) = 50529027;
    *((_QWORD *)&v91 + 1) = __PAIR64__(LODWORD(v32), LODWORD(v31));
    v94[1] = 0LL;
    v95 = 0;
    *((_OWORD *)v42 + 2) = v91;
    v94[0] = v80;
    v96 = 1;
    v97 = 0;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)&v101,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v94,
                 (struct CDrawListEntryBuilder *)v115);
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, DrawList, 0xACu);
      goto LABEL_76;
    }
    CDrawListCache::Update(v81, *((struct CDrawingContext **)this + 42), v115);
    v48 = CDrawingContext::EmitDrawListCache(*((CDrawingContext **)this + 42), v81);
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0xAFu);
      goto LABEL_76;
    }
    CDrawListEntryBuilder::Reset((CDrawListEntryBuilder *)v115);
    CDrawListCache::Invalidate(v81);
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v101);
    if ( v80 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v80, 1);
    goto LABEL_58;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v38, 0LL, 0, v39, 0x89u);
  if ( v79 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v79, 1);
LABEL_76:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v101);
  if ( v80 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v80, 1);
LABEL_94:
  v74 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, 0LL);
  v76 = v74;
  if ( v74 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, v74, 0xEFu);
  if ( v81 )
    CMILRefCountBase::Release(v81);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v115);
  return v76;
}
