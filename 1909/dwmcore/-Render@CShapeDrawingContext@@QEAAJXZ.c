/*
 * XREFs of ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802524C8
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18020CEFC (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000ED24 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180034D0C (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800350E8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x180035338 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003C358 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18003C400 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18003E798 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x180066860 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18006F024 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18006F2A8 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18006F3E8 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18008CDE0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x180095ECC (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180097560 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800C0A10 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x18016E090 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x18016E19C (-FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x18017001C (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyle1@@@Z @ 0x18017014C (-StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyl.c)
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180251AD0 (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CShapeDrawingContext::Render(CShapeDrawingContext *this)
{
  struct D2D_MATRIX_3X2_F *v1; // r12
  signed int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rsi
  _DWORD *v8; // r13
  struct ID2D1StrokeStyle1 **v9; // rdi
  CGeometry *v10; // rcx
  signed int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  signed int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r14
  CGeometryOnlyDrawListBrush *v18; // rdx
  __int64 (__fastcall *v19)(__int64, _QWORD, struct ID2D1StrokeStyle1 **, CGeometryOnlyDrawListBrush **); // r15
  signed int v20; // eax
  __int64 v21; // rcx
  signed int v22; // eax
  __int64 v23; // rcx
  struct CShape **v24; // rcx
  CGeometry *v25; // rcx
  signed int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  signed int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r9
  int v33; // eax
  float v34; // xmm1_4
  float v35; // xmm3_4
  signed int v36; // eax
  __int64 v37; // rcx
  struct CShape **v38; // rcx
  float v39; // xmm6_4
  float v40; // xmm7_4
  __int64 v41; // rcx
  signed int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  signed int v46; // eax
  __int64 v47; // rcx
  struct CGeometryOnlyDrawListBrush *v48; // rcx
  signed int v49; // r14d
  CGeometryOnlyDrawListBrush *v50; // rax
  __int64 v51; // rcx
  int v52; // xmm2_4
  CGeometryOnlyDrawListBrush *v53; // rax
  __int64 v54; // xmm1_8
  struct CGeometryOnlyDrawListBrush *v55; // rcx
  signed int v56; // r14d
  CGeometryOnlyDrawListBrush *v57; // rax
  signed int DrawList; // eax
  __int64 v59; // rcx
  signed int v60; // eax
  __int64 v61; // rcx
  CGeometry *v62; // rcx
  signed int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  signed int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // r14
  CGeometryOnlyDrawListBrush *v70; // rdx
  __int64 (__fastcall *v71)(__int64, _QWORD, struct ID2D1StrokeStyle1 **, CGeometryOnlyDrawListBrush **); // r15
  signed int v72; // eax
  __int64 v73; // rcx
  signed int v74; // eax
  __int64 v75; // rcx
  CGeometryOnlyDrawListBrush *v76; // rcx
  CGeometry *v77; // rcx
  signed int ShapeData; // eax
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  signed int v82; // eax
  __int64 v83; // rcx
  __int64 v84; // r9
  int v85; // eax
  float v86; // xmm1_4
  signed int v87; // eax
  __int64 v88; // rcx
  struct CShape **v89; // rcx
  struct CShape **v90; // rcx
  CGeometryOnlyDrawListBrush *v91; // rcx
  signed int v92; // eax
  __int64 v93; // rcx
  unsigned int v94; // ebx
  CDirtyRegion *v95; // rcx
  struct ID2D1StrokeStyle1 *v97; // [rsp+28h] [rbp-E0h]
  CGeometryOnlyDrawListBrush *v98; // [rsp+38h] [rbp-D0h] BYREF
  CDirtyRegion *v99; // [rsp+40h] [rbp-C8h] BYREF
  CGeometryOnlyDrawListBrush *v100; // [rsp+48h] [rbp-C0h] BYREF
  struct CShape *v101; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v102; // [rsp+58h] [rbp-B0h]
  struct CShape *v103; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v104; // [rsp+68h] [rbp-A0h]
  struct CShape *v105; // [rsp+70h] [rbp-98h] BYREF
  __int64 v106; // [rsp+78h] [rbp-90h]
  struct CShape *v107; // [rsp+80h] [rbp-88h] BYREF
  char v108; // [rsp+88h] [rbp-80h]
  CGeometryOnlyDrawListBrush *v109; // [rsp+90h] [rbp-78h] BYREF
  __int128 v110; // [rsp+98h] [rbp-70h]
  __int128 v111; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v112; // [rsp+B8h] [rbp-50h]
  _QWORD v113[2]; // [rsp+C8h] [rbp-40h] BYREF
  int v114; // [rsp+D8h] [rbp-30h]
  __int16 v115; // [rsp+124h] [rbp+1Ch]
  char v116; // [rsp+126h] [rbp+1Eh]
  struct CGeometryOnlyDrawListBrush *v117[2]; // [rsp+128h] [rbp+20h] BYREF
  int v118; // [rsp+138h] [rbp+30h]
  int v119; // [rsp+13Ch] [rbp+34h]
  __int64 v120; // [rsp+148h] [rbp+40h] BYREF
  float v121; // [rsp+150h] [rbp+48h]
  float v122; // [rsp+154h] [rbp+4Ch]
  int v123; // [rsp+158h] [rbp+50h]
  __int128 v124; // [rsp+15Ch] [rbp+54h]
  __int64 v125; // [rsp+170h] [rbp+68h]
  __int64 v126; // [rsp+178h] [rbp+70h]
  __int64 v127; // [rsp+180h] [rbp+78h]
  __int64 v128; // [rsp+188h] [rbp+80h]
  int v129; // [rsp+190h] [rbp+88h]
  char v130; // [rsp+194h] [rbp+8Ch]
  struct _D3DCOLORVALUE v131; // [rsp+198h] [rbp+90h] BYREF
  struct _D3DCOLORVALUE v132; // [rsp+1A8h] [rbp+A0h] BYREF
  struct D2D_MATRIX_3X2_F v133; // [rsp+1B8h] [rbp+B0h] BYREF
  struct CDrawListEntry **v134[288]; // [rsp+1D8h] [rbp+D0h] BYREF

  v1 = &v133;
  *(_OWORD *)&v133.m11 = _xmm;
  *((_BYTE *)this + 528) = 0;
  *((_BYTE *)this + 530) = 0;
  *(_QWORD *)&v133.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v134);
  v99 = 0LL;
  v3 = CDrawListCache::Create(&v99);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x39u, 0LL);
    goto LABEL_96;
  }
  v7 = (_DWORD *)*((_QWORD *)this + 63);
  v8 = (_DWORD *)*((_QWORD *)this + 64);
  if ( v7 == v8 )
    goto LABEL_96;
  v9 = (struct ID2D1StrokeStyle1 **)(v7 + 10);
  while ( 1 )
  {
    switch ( *v7 )
    {
      case 1:
        v1 = (struct D2D_MATRIX_3X2_F *)(v9 - 4);
        *((_BYTE *)this + 528) = 1;
        goto LABEL_63;
      case 2:
        v77 = *(v9 - 4);
        v107 = 0LL;
        v108 = 0;
        ShapeData = CGeometry::GetShapeData(v77, 0LL, (struct CShapePtr *)&v107);
        if ( ShapeData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v79, 0LL, 0, ShapeData, 0x4Bu, 0LL);
        }
        else
        {
          v82 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1, v80, v81);
          if ( v82 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, v82, 0x50u, 0LL);
          }
          else
          {
            v84 = *((_QWORD *)this + 41);
            *(struct _D3DCOLORVALUE *)&v132.r = *(struct _D3DCOLORVALUE *)(v9 - 3);
            v85 = *(_DWORD *)(v84 + 3264);
            if ( v85 )
              v86 = *(float *)(*(_QWORD *)(v84 + 3280) + 4LL * (unsigned int)(v85 - 1));
            else
              v86 = *(float *)&FLOAT_1_0;
            v132.a = v132.a * v86;
            v87 = CDrawingContext::FillShapeWithColor((CDrawingContext *)v84, v107, &v132);
            if ( v87 >= 0 )
            {
              v38 = &v107;
              goto LABEL_61;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v88, 0LL, 0, v87, 0x56u, 0LL);
          }
        }
        v90 = &v107;
LABEL_94:
        CShapePtr::Release((CShapePtr *)v90);
        goto LABEL_96;
      case 3:
        v62 = *(v9 - 4);
        v98 = 0LL;
        v103 = 0LL;
        LOBYTE(v104) = 0;
        v63 = CGeometry::GetShapeData(v62, 0LL, (struct CShapePtr *)&v103);
        if ( v63 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v63, 0x62u, 0LL);
        }
        else
        {
          v67 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1, v65, v66);
          if ( v67 >= 0 )
          {
            v69 = (__int64)*(v9 - 1);
            v70 = v98;
            v71 = *(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1StrokeStyle1 **, CGeometryOnlyDrawListBrush **))(*(_QWORD *)v69 + 392LL);
            if ( v98 )
            {
              v98 = 0LL;
              (*(void (__fastcall **)(CGeometryOnlyDrawListBrush *))(*(_QWORD *)v70 + 16LL))(v70);
            }
            v72 = v71(v69, *((_QWORD *)this + 41), v9 - 3, &v98);
            if ( v72 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, v72, 0x6Cu, 0LL);
              goto LABEL_87;
            }
            (*(void (**)(void))(*(_QWORD *)v98 + 32LL))();
            v74 = CDrawingContext::FillShapeWithBrush(*((CDrawingContext **)this + 41), v103, v98);
            if ( v74 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, v74, 0x6Fu, 0LL);
              goto LABEL_87;
            }
            v24 = &v103;
            goto LABEL_52;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v67, 0x67u, 0LL);
        }
LABEL_87:
        v89 = &v103;
LABEL_88:
        CShapePtr::Release((CShapePtr *)v89);
        v91 = v98;
        if ( v98 )
        {
          v98 = 0LL;
          (*(void (__fastcall **)(CGeometryOnlyDrawListBrush *))(*(_QWORD *)v91 + 16LL))(v91);
        }
        goto LABEL_96;
    }
    if ( *v7 == 4 )
      break;
    if ( *v7 == 5 )
    {
      v25 = *(v9 - 4);
      v105 = 0LL;
      LOBYTE(v106) = 0;
      v26 = CGeometry::GetShapeData(v25, 0LL, (struct CShapePtr *)&v105);
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xBBu, 0LL);
      }
      else
      {
        v30 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1, v28, v29);
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xC0u, 0LL);
        }
        else
        {
          v32 = *((_QWORD *)this + 41);
          *(struct _D3DCOLORVALUE *)&v131.r = *(struct _D3DCOLORVALUE *)(v9 - 3);
          v33 = *(_DWORD *)(v32 + 3264);
          if ( v33 )
            v34 = *(float *)(*(_QWORD *)(v32 + 3280) + 4LL * (unsigned int)(v33 - 1));
          else
            v34 = *(float *)&FLOAT_1_0;
          v35 = *((float *)v9 - 2);
          v97 = *v9;
          v131.a = v131.a * v34;
          v36 = CDrawingContext::StrokeShapeWithColor((CDrawingContext *)v32, v105, &v131, v35, v97);
          if ( v36 >= 0 )
          {
            v38 = &v105;
LABEL_61:
            CShapePtr::Release((CShapePtr *)v38);
            goto LABEL_63;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0xCAu, 0LL);
        }
      }
      v90 = &v105;
      goto LABEL_94;
    }
    if ( *v7 == 6 )
    {
      v10 = *(v9 - 4);
      v98 = 0LL;
      v101 = 0LL;
      LOBYTE(v102) = 0;
      v11 = CGeometry::GetShapeData(v10, 0LL, (struct CShapePtr *)&v101);
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xD6u, 0LL);
      }
      else
      {
        v15 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, v1, v13, v14);
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xDBu, 0LL);
        }
        else
        {
          v17 = (__int64)*(v9 - 1);
          v18 = v98;
          v19 = *(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1StrokeStyle1 **, CGeometryOnlyDrawListBrush **))(*(_QWORD *)v17 + 392LL);
          if ( v98 )
          {
            v98 = 0LL;
            (*(void (__fastcall **)(CGeometryOnlyDrawListBrush *))(*(_QWORD *)v18 + 16LL))(v18);
          }
          v20 = v19(v17, *((_QWORD *)this + 41), v9 - 3, &v98);
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xE0u, 0LL);
          }
          else
          {
            (*(void (**)(void))(*(_QWORD *)v98 + 32LL))();
            v22 = CDrawingContext::StrokeShapeWithBrush(
                    *((CDrawingContext **)this + 41),
                    v101,
                    v98,
                    *(float *)v9,
                    v9[1]);
            if ( v22 >= 0 )
            {
              v24 = &v101;
LABEL_52:
              CShapePtr::Release((CShapePtr *)v24);
              v76 = v98;
              if ( v98 )
              {
                v98 = 0LL;
                (*(void (__fastcall **)(CGeometryOnlyDrawListBrush *))(*(_QWORD *)v76 + 16LL))(v76);
              }
              goto LABEL_63;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xE7u, 0LL);
          }
        }
      }
      v89 = &v101;
      goto LABEL_88;
    }
LABEL_63:
    v7 += 14;
    v9 += 7;
    if ( v7 == v8 )
      goto LABEL_96;
  }
  v39 = *((float *)v9 - 6) - *((float *)v9 - 8);
  v40 = *((float *)v9 - 5) - *((float *)v9 - 7);
  v41 = (__int64)*(v9 - 2);
  v120 = *((_QWORD *)this + 41);
  v121 = v39;
  v122 = v40;
  v98 = 0LL;
  v123 = 0;
  v124 = _xmm;
  v125 = 0LL;
  v126 = 0LL;
  v127 = 0LL;
  v128 = 0LL;
  v129 = 0;
  v130 = 0;
  v42 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 368LL))(v41, &v120);
  if ( v42 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x81u, 0LL);
    goto LABEL_81;
  }
  v46 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, 0LL, v44, v45);
  if ( v46 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x83u, 0LL);
    goto LABEL_81;
  }
  if ( v129 )
    goto LABEL_35;
  v100 = 0LL;
  v117[0] = (struct CGeometryOnlyDrawListBrush *)&v100;
  v117[1] = 0LL;
  LOBYTE(v118) = 1;
  v49 = CGeometryOnlyDrawListBrush::Create(&v117[1]);
  if ( (_BYTE)v118 )
  {
    v48 = v117[1];
    v50 = *(CGeometryOnlyDrawListBrush **)v117[0];
    *(_QWORD *)v117[0] = v117[1];
    if ( v50 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v50, 1);
  }
  if ( v49 >= 0 )
  {
    v109 = v100;
    v100 = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)&v120, 0, &v109);
    if ( v109 )
      std::default_delete<CShape>::operator()(v51, (__int64 (__fastcall ***)(_QWORD, __int64))v109);
    if ( v100 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v100, 1);
LABEL_35:
    v52 = *((_DWORD *)v9 - 7);
    v118 = *((_DWORD *)v9 - 8);
    v119 = v52;
    *(_OWORD *)v117 = _xmm;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v111,
      (const struct D2D1::Matrix3x2F *)v117,
      (const struct D2D1::Matrix3x2F *)v1);
    v54 = v112;
    *(_OWORD *)((char *)v53 + 8) = v111;
    *((_QWORD *)v53 + 3) = v54;
    if ( *((_BYTE *)v53 + 52) )
    {
      v117[1] = 0LL;
      v117[0] = (struct CGeometryOnlyDrawListBrush *)&v98;
      LOBYTE(v118) = 1;
      v56 = CGeometryOnlyDrawListBrush::Create(&v117[1]);
      if ( (_BYTE)v118 )
      {
        v55 = v117[1];
        v57 = *(CGeometryOnlyDrawListBrush **)v117[0];
        *(_QWORD *)v117[0] = v117[1];
        if ( v57 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v57, 1);
      }
      if ( v56 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v55, 0LL, 0, v56, 0x9Eu, 0LL);
        goto LABEL_81;
      }
      v53 = v98;
    }
    *(_QWORD *)&v110 = 0LL;
    *((_BYTE *)v53 + 52) = 1;
    *((_DWORD *)v53 + 12) = 50529027;
    *((_QWORD *)&v110 + 1) = __PAIR64__(LODWORD(v40), LODWORD(v39));
    v113[1] = 0LL;
    v114 = 0;
    *((_OWORD *)v53 + 2) = v110;
    v113[0] = v98;
    v115 = 1;
    v116 = 0;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)&v120,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v113,
                 (struct CDrawListEntryBuilder *)v134);
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, DrawList, 0xACu, 0LL);
      goto LABEL_81;
    }
    CDrawListCache::Update(v99, *((struct CDrawingContext **)this + 41), v134);
    v60 = CDrawingContext::EmitDrawListCache(*((CDrawingContext **)this + 41), v99);
    if ( v60 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, v60, 0xAFu, 0LL);
      goto LABEL_81;
    }
    CDrawListEntryBuilder::Reset((CDrawListEntryBuilder *)v134);
    CDrawListCache::Invalidate(v99);
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v120);
    if ( v98 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v98, 1);
    goto LABEL_63;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v48, 0LL, 0, v49, 0x89u, 0LL);
  if ( v100 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v100, 1);
LABEL_81:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v120);
  if ( v98 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v98, 1);
LABEL_96:
  v92 = CShapeDrawingContext::ApplyTransformToDrawingContext((CDrawingContext **)this, 0LL, v5, v6);
  v94 = v92;
  if ( v92 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v93, 0LL, 0, v92, 0xEFu, 0LL);
  v95 = v99;
  if ( v99 )
  {
    v99 = 0LL;
    CDirtyRegion::Release(v95);
  }
  CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v134);
  return v94;
}
