/*
 * XREFs of ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180253C38
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18020E5EC (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18004E9C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18004EA28 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x18004EBCC (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180052C34 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180067570 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180075FA8 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180076050 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180078AB8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x180079F5C (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18007A8E8 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800915B4 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180091838 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x180091978 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18009B720 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x18016F770 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x18016F87C (-FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x180171774 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyle1@@@Z @ 0x1801718A4 (-StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyl.c)
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180253240 (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CShapeDrawingContext::Render(CShapeDrawingContext *this)
{
  struct D2D_MATRIX_3X2_F *v1; // r12
  signed int v3; // eax
  __int64 v4; // rcx
  _DWORD *v5; // rsi
  _DWORD *v6; // r13
  struct ID2D1StrokeStyle1 **v7; // rdi
  CGeometry *v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx
  signed int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r14
  struct ID2D1Brush *v14; // rdx
  __int64 (__fastcall *v15)(__int64, _QWORD, struct ID2D1StrokeStyle1 **, struct ID2D1Brush **); // r15
  signed int v16; // eax
  __int64 v17; // rcx
  signed int v18; // eax
  __int64 v19; // rcx
  struct CShape **v20; // rcx
  CGeometry *v21; // rcx
  signed int v22; // eax
  __int64 v23; // rcx
  signed int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r9
  int v27; // eax
  float v28; // xmm1_4
  float v29; // xmm3_4
  signed int v30; // eax
  __int64 v31; // rcx
  struct CShape **v32; // rcx
  float v33; // xmm6_4
  float v34; // xmm7_4
  __int64 v35; // rcx
  signed int v36; // eax
  __int64 v37; // rcx
  signed int v38; // eax
  __int64 v39; // rcx
  struct CGeometryOnlyDrawListBrush *v40; // rcx
  signed int v41; // r14d
  CGeometryOnlyDrawListBrush *v42; // rax
  __int64 v43; // rcx
  int v44; // xmm2_4
  struct ID2D1Brush *v45; // rax
  __int64 v46; // xmm1_8
  struct CGeometryOnlyDrawListBrush *v47; // rcx
  signed int v48; // r14d
  CGeometryOnlyDrawListBrush *v49; // rax
  signed int DrawList; // eax
  __int64 v51; // rcx
  signed int v52; // eax
  __int64 v53; // rcx
  CGeometry *v54; // rcx
  signed int v55; // eax
  __int64 v56; // rcx
  signed int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // r14
  struct ID2D1Brush *v60; // rdx
  __int64 (__fastcall *v61)(__int64, _QWORD, struct ID2D1StrokeStyle1 **, struct ID2D1Brush **); // r15
  signed int v62; // eax
  __int64 v63; // rcx
  signed int v64; // eax
  __int64 v65; // rcx
  struct ID2D1Brush *v66; // rcx
  CGeometry *v67; // rcx
  signed int ShapeData; // eax
  __int64 v69; // rcx
  signed int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // r9
  int v73; // eax
  float v74; // xmm1_4
  signed int v75; // eax
  __int64 v76; // rcx
  struct CShape **v77; // rcx
  struct CShape **v78; // rcx
  struct ID2D1Brush *v79; // rcx
  signed int v80; // eax
  __int64 v81; // rcx
  unsigned int v82; // ebx
  CDirtyRegion *v83; // rcx
  struct ID2D1StrokeStyle1 *v85; // [rsp+28h] [rbp-E0h]
  struct ID2D1Brush *v86; // [rsp+38h] [rbp-D0h] BYREF
  CDirtyRegion *v87; // [rsp+40h] [rbp-C8h] BYREF
  CGeometryOnlyDrawListBrush *v88; // [rsp+48h] [rbp-C0h] BYREF
  struct CShape *v89; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v90; // [rsp+58h] [rbp-B0h]
  struct CShape *v91; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v92; // [rsp+68h] [rbp-A0h]
  struct CShape *v93; // [rsp+70h] [rbp-98h] BYREF
  __int64 v94; // [rsp+78h] [rbp-90h]
  struct CShape *v95; // [rsp+80h] [rbp-88h] BYREF
  char v96; // [rsp+88h] [rbp-80h]
  CGeometryOnlyDrawListBrush *v97; // [rsp+90h] [rbp-78h] BYREF
  __int128 v98; // [rsp+98h] [rbp-70h]
  __int128 v99; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v100; // [rsp+B8h] [rbp-50h]
  _QWORD v101[2]; // [rsp+C8h] [rbp-40h] BYREF
  int v102; // [rsp+D8h] [rbp-30h]
  __int16 v103; // [rsp+124h] [rbp+1Ch]
  char v104; // [rsp+126h] [rbp+1Eh]
  struct CGeometryOnlyDrawListBrush *v105[2]; // [rsp+128h] [rbp+20h] BYREF
  int v106; // [rsp+138h] [rbp+30h]
  int v107; // [rsp+13Ch] [rbp+34h]
  __int64 v108; // [rsp+148h] [rbp+40h] BYREF
  float v109; // [rsp+150h] [rbp+48h]
  float v110; // [rsp+154h] [rbp+4Ch]
  int v111; // [rsp+158h] [rbp+50h]
  __int128 v112; // [rsp+15Ch] [rbp+54h]
  __int64 v113; // [rsp+170h] [rbp+68h]
  __int64 v114; // [rsp+178h] [rbp+70h]
  __int64 v115; // [rsp+180h] [rbp+78h]
  __int64 v116; // [rsp+188h] [rbp+80h]
  int v117; // [rsp+190h] [rbp+88h]
  char v118; // [rsp+194h] [rbp+8Ch]
  struct _D3DCOLORVALUE v119; // [rsp+198h] [rbp+90h] BYREF
  struct _D3DCOLORVALUE v120; // [rsp+1A8h] [rbp+A0h] BYREF
  struct D2D_MATRIX_3X2_F v121; // [rsp+1B8h] [rbp+B0h] BYREF
  struct CDrawListEntry **v122[288]; // [rsp+1D8h] [rbp+D0h] BYREF

  v1 = &v121;
  *(_OWORD *)&v121.m11 = _xmm;
  *((_BYTE *)this + 528) = 0;
  *((_BYTE *)this + 530) = 0;
  *(_QWORD *)&v121.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v122);
  v87 = 0LL;
  v3 = CDrawListCache::Create(&v87);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x39u, 0LL);
    goto LABEL_96;
  }
  v5 = (_DWORD *)*((_QWORD *)this + 63);
  v6 = (_DWORD *)*((_QWORD *)this + 64);
  if ( v5 == v6 )
    goto LABEL_96;
  v7 = (struct ID2D1StrokeStyle1 **)(v5 + 10);
  while ( 1 )
  {
    switch ( *v5 )
    {
      case 1:
        v1 = (struct D2D_MATRIX_3X2_F *)(v7 - 4);
        *((_BYTE *)this + 528) = 1;
        goto LABEL_63;
      case 2:
        v67 = *(v7 - 4);
        v95 = 0LL;
        v96 = 0;
        ShapeData = CGeometry::GetShapeData(v67, 0LL, (struct CShapePtr *)&v95);
        if ( ShapeData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, ShapeData, 0x4Bu, 0LL);
        }
        else
        {
          v70 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1);
          if ( v70 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v70, 0x50u, 0LL);
          }
          else
          {
            v72 = *((_QWORD *)this + 41);
            *(struct _D3DCOLORVALUE *)&v120.r = *(struct _D3DCOLORVALUE *)(v7 - 3);
            v73 = *(_DWORD *)(v72 + 3264);
            if ( v73 )
              v74 = *(float *)(*(_QWORD *)(v72 + 3280) + 4LL * (unsigned int)(v73 - 1));
            else
              v74 = *(float *)&FLOAT_1_0;
            v120.a = v120.a * v74;
            v75 = CDrawingContext::FillShapeWithColor((CDrawingContext *)v72, v95, &v120);
            if ( v75 >= 0 )
            {
              v32 = &v95;
              goto LABEL_61;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v76, 0LL, 0, v75, 0x56u, 0LL);
          }
        }
        v78 = &v95;
LABEL_94:
        CShapePtr::Release((CShapePtr *)v78);
        goto LABEL_96;
      case 3:
        v54 = *(v7 - 4);
        v86 = 0LL;
        v91 = 0LL;
        LOBYTE(v92) = 0;
        v55 = CGeometry::GetShapeData(v54, 0LL, (struct CShapePtr *)&v91);
        if ( v55 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x62u, 0LL);
        }
        else
        {
          v57 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1);
          if ( v57 >= 0 )
          {
            v59 = (__int64)*(v7 - 1);
            v60 = v86;
            v61 = *(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1StrokeStyle1 **, struct ID2D1Brush **))(*(_QWORD *)v59 + 392LL);
            if ( v86 )
            {
              v86 = 0LL;
              (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v60 + 16LL))(v60);
            }
            v62 = v61(v59, *((_QWORD *)this + 41), v7 - 3, &v86);
            if ( v62 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v62, 0x6Cu, 0LL);
              goto LABEL_87;
            }
            (*(void (**)(void))(*(_QWORD *)v86 + 32LL))();
            v64 = CDrawingContext::FillShapeWithBrush(*((CDrawingContext **)this + 41), v91, v86);
            if ( v64 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v64, 0x6Fu, 0LL);
              goto LABEL_87;
            }
            v20 = &v91;
            goto LABEL_52;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x67u, 0LL);
        }
LABEL_87:
        v77 = &v91;
LABEL_88:
        CShapePtr::Release((CShapePtr *)v77);
        v79 = v86;
        if ( v86 )
        {
          v86 = 0LL;
          (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v79 + 16LL))(v79);
        }
        goto LABEL_96;
    }
    if ( *v5 == 4 )
      break;
    if ( *v5 == 5 )
    {
      v21 = *(v7 - 4);
      v93 = 0LL;
      LOBYTE(v94) = 0;
      v22 = CGeometry::GetShapeData(v21, 0LL, (struct CShapePtr *)&v93);
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xBBu, 0LL);
      }
      else
      {
        v24 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1);
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xC0u, 0LL);
        }
        else
        {
          v26 = *((_QWORD *)this + 41);
          *(struct _D3DCOLORVALUE *)&v119.r = *(struct _D3DCOLORVALUE *)(v7 - 3);
          v27 = *(_DWORD *)(v26 + 3264);
          if ( v27 )
            v28 = *(float *)(*(_QWORD *)(v26 + 3280) + 4LL * (unsigned int)(v27 - 1));
          else
            v28 = *(float *)&FLOAT_1_0;
          v29 = *((float *)v7 - 2);
          v85 = *v7;
          v119.a = v119.a * v28;
          v30 = CDrawingContext::StrokeShapeWithColor((CDrawingContext *)v26, v93, &v119, v29, v85);
          if ( v30 >= 0 )
          {
            v32 = &v93;
LABEL_61:
            CShapePtr::Release((CShapePtr *)v32);
            goto LABEL_63;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xCAu, 0LL);
        }
      }
      v78 = &v93;
      goto LABEL_94;
    }
    if ( *v5 == 6 )
    {
      v8 = *(v7 - 4);
      v86 = 0LL;
      v89 = 0LL;
      LOBYTE(v90) = 0;
      v9 = CGeometry::GetShapeData(v8, 0LL, (struct CShapePtr *)&v89);
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xD6u, 0LL);
      }
      else
      {
        v11 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1);
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xDBu, 0LL);
        }
        else
        {
          v13 = (__int64)*(v7 - 1);
          v14 = v86;
          v15 = *(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1StrokeStyle1 **, struct ID2D1Brush **))(*(_QWORD *)v13 + 392LL);
          if ( v86 )
          {
            v86 = 0LL;
            (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v14 + 16LL))(v14);
          }
          v16 = v15(v13, *((_QWORD *)this + 41), v7 - 3, &v86);
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xE0u, 0LL);
          }
          else
          {
            (*(void (**)(void))(*(_QWORD *)v86 + 32LL))();
            v18 = CDrawingContext::StrokeShapeWithBrush(*((CDrawingContext **)this + 41), v89, v86, *(float *)v7, v7[1]);
            if ( v18 >= 0 )
            {
              v20 = &v89;
LABEL_52:
              CShapePtr::Release((CShapePtr *)v20);
              v66 = v86;
              if ( v86 )
              {
                v86 = 0LL;
                (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v66 + 16LL))(v66);
              }
              goto LABEL_63;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xE7u, 0LL);
          }
        }
      }
      v77 = &v89;
      goto LABEL_88;
    }
LABEL_63:
    v5 += 14;
    v7 += 7;
    if ( v5 == v6 )
      goto LABEL_96;
  }
  v33 = *((float *)v7 - 6) - *((float *)v7 - 8);
  v34 = *((float *)v7 - 5) - *((float *)v7 - 7);
  v35 = (__int64)*(v7 - 2);
  v108 = *((_QWORD *)this + 41);
  v109 = v33;
  v110 = v34;
  v86 = 0LL;
  v111 = 0;
  v112 = _xmm;
  v113 = 0LL;
  v114 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  v117 = 0;
  v118 = 0;
  v36 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v35 + 368LL))(v35, &v108);
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x81u, 0LL);
    goto LABEL_81;
  }
  v38 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, 0LL);
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x83u, 0LL);
    goto LABEL_81;
  }
  if ( v117 )
    goto LABEL_35;
  v88 = 0LL;
  v105[0] = (struct CGeometryOnlyDrawListBrush *)&v88;
  v105[1] = 0LL;
  LOBYTE(v106) = 1;
  v41 = CGeometryOnlyDrawListBrush::Create(&v105[1]);
  if ( (_BYTE)v106 )
  {
    v40 = v105[1];
    v42 = *(CGeometryOnlyDrawListBrush **)v105[0];
    *(_QWORD *)v105[0] = v105[1];
    if ( v42 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v42, 1);
  }
  if ( v41 >= 0 )
  {
    v97 = v88;
    v88 = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)&v108, 0, &v97);
    if ( v97 )
      std::default_delete<CShape>::operator()(v43, (__int64 (__fastcall ***)(_QWORD, __int64))v97);
    if ( v88 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v88, 1);
LABEL_35:
    v44 = *((_DWORD *)v7 - 7);
    v106 = *((_DWORD *)v7 - 8);
    v107 = v44;
    *(_OWORD *)v105 = _xmm;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v99,
      (const struct D2D1::Matrix3x2F *)v105,
      (const struct D2D1::Matrix3x2F *)v1);
    v46 = v100;
    *(_OWORD *)((char *)v45 + 8) = v99;
    *((_QWORD *)v45 + 3) = v46;
    if ( *((_BYTE *)v45 + 52) )
    {
      v105[1] = 0LL;
      v105[0] = (struct CGeometryOnlyDrawListBrush *)&v86;
      LOBYTE(v106) = 1;
      v48 = CGeometryOnlyDrawListBrush::Create(&v105[1]);
      if ( (_BYTE)v106 )
      {
        v47 = v105[1];
        v49 = *(CGeometryOnlyDrawListBrush **)v105[0];
        *(_QWORD *)v105[0] = v105[1];
        if ( v49 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v49, 1);
      }
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v47, 0LL, 0, v48, 0x9Eu, 0LL);
        goto LABEL_81;
      }
      v45 = v86;
    }
    *(_QWORD *)&v98 = 0LL;
    *((_BYTE *)v45 + 52) = 1;
    *((_DWORD *)v45 + 12) = 50529027;
    *((_QWORD *)&v98 + 1) = __PAIR64__(LODWORD(v34), LODWORD(v33));
    v101[1] = 0LL;
    v102 = 0;
    *((_OWORD *)v45 + 2) = v98;
    v101[0] = v86;
    v103 = 1;
    v104 = 0;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)&v108,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v101,
                 (struct CDrawListEntryBuilder *)v122);
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, DrawList, 0xACu, 0LL);
      goto LABEL_81;
    }
    CDrawListCache::Update(v87, *((struct CDrawingContext **)this + 41), v122);
    v52 = CDrawingContext::EmitDrawListCache(*((CDrawingContext **)this + 41), v87);
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0xAFu, 0LL);
      goto LABEL_81;
    }
    CDrawListEntryBuilder::Reset((CDrawListEntryBuilder *)v122);
    CDrawListCache::Invalidate(v87);
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v108);
    if ( v86 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v86, 1);
    goto LABEL_63;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v40, 0LL, 0, v41, 0x89u, 0LL);
  if ( v88 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v88, 1);
LABEL_81:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v108);
  if ( v86 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v86, 1);
LABEL_96:
  v80 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, 0LL);
  v82 = v80;
  if ( v80 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0, v80, 0xEFu, 0LL);
  v83 = v87;
  if ( v87 )
  {
    v87 = 0LL;
    CDirtyRegion::Release(v83);
  }
  CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v122);
  return v82;
}
