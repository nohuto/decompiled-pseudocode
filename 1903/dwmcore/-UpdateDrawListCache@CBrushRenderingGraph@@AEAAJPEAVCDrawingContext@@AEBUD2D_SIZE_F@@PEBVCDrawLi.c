/*
 * XREFs of ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800787A8
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x180076874 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1802062AC (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18004E9C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18004EA28 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800512F0 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180051E20 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180075FA8 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180076050 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180078AB8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??0CBrushRenderingEffectFactory@@QEAA@PEAVCDrawingContext@@PEAVCRenderingTechnique@@PEBUEffectStage@@@Z @ 0x180079B50 (--0CBrushRenderingEffectFactory@@QEAA@PEAVCDrawingContext@@PEAVCRenderingTechnique@@PEBUEffectSt.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800915B4 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180091838 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18009B720 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800BA950 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x1801B22F0 (--_ECColorDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x1801B2344 (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CBrushRenderingGraph::UpdateDrawListCache(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        const struct CDrawListBrush *a4,
        struct EffectStage *a5,
        struct CDrawListCache *a6)
{
  const struct D2D_SIZE_F *v8; // rdi
  int v10; // r15d
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rax
  char *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  int DrawList; // eax
  unsigned int v18; // ecx
  int v19; // ebx
  unsigned int v20; // edx
  __int64 i; // rcx
  char v23; // al
  CSurfaceDrawListBrush *v24; // rcx
  CSurfaceDrawListBrush *v25; // rax
  __int64 v26; // rcx
  CColorDrawListBrush *v27; // rcx
  CSurfaceDrawListBrush *v28; // rax
  __int64 v29; // rcx
  CGeometryOnlyDrawListBrush *v30; // rcx
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  CSurfaceDrawListBrush *v33; // rax
  __int128 v34; // xmm0
  CSurfaceDrawListBrush *v35; // [rsp+30h] [rbp-D0h] BYREF
  CSurfaceDrawListBrush *v36; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v37; // [rsp+40h] [rbp-C0h]
  __int16 v38; // [rsp+50h] [rbp-B0h] BYREF
  char v39; // [rsp+52h] [rbp-AEh]
  CSurfaceDrawListBrush **v40; // [rsp+60h] [rbp-A0h]
  struct CColorDrawListBrush *v41; // [rsp+68h] [rbp-98h] BYREF
  char v42; // [rsp+70h] [rbp-90h]
  __int128 v43; // [rsp+78h] [rbp-88h]
  struct CRenderingTechnique *v44; // [rsp+88h] [rbp-78h]
  CDrawListCache *v45; // [rsp+90h] [rbp-70h]
  _QWORD v46[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v47; // [rsp+B0h] [rbp-50h]
  __int16 v48; // [rsp+FCh] [rbp-4h]
  char v49; // [rsp+FEh] [rbp-2h]
  struct CDrawingContext *v50; // [rsp+100h] [rbp+0h] BYREF
  int v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+10Ch] [rbp+Ch]
  int v53; // [rsp+110h] [rbp+10h]
  __int128 v54; // [rsp+114h] [rbp+14h]
  _QWORD v55[4]; // [rsp+128h] [rbp+28h] BYREF
  unsigned int v56; // [rsp+148h] [rbp+48h]
  char v57; // [rsp+14Ch] [rbp+4Ch]
  CSurfaceDrawListBrush **v58; // [rsp+150h] [rbp+50h] BYREF
  CSurfaceDrawListBrush *v59; // [rsp+158h] [rbp+58h] BYREF
  char v60; // [rsp+160h] [rbp+60h]
  struct CDrawListEntry **v61[288]; // [rsp+180h] [rbp+80h] BYREF

  v45 = a6;
  v8 = a3;
  *(_QWORD *)&v43 = a3;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v61);
  v51 = 0;
  v10 = 0;
  v52 = 0;
  v11 = 0;
  v53 = 0;
  memset(v55, 0, sizeof(v55));
  v56 = 0;
  v12 = *(unsigned int *)a5;
  v13 = *((_QWORD *)this + 18);
  v50 = a2;
  v54 = _xmm;
  v57 = 0;
  v44 = *(struct CRenderingTechnique **)(v13 + 8 * v12);
  if ( !*((_DWORD *)a5 + 1) )
  {
LABEL_12:
    v35 = 0LL;
    v57 = 1;
    v53 = v10;
    v54 = _xmm;
    if ( !a4 )
    {
      v41 = 0LL;
      v40 = &v35;
      v42 = 1;
      v19 = CGeometryOnlyDrawListBrush::Create(&v41);
      if ( v42 )
      {
        v30 = *v40;
        *v40 = v41;
        if ( v30 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v30, 1);
      }
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v30, 0LL, 0, v19, 0x457u, 0LL);
LABEL_50:
        if ( v35 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v35, 1);
        goto LABEL_17;
      }
      width = v8->width;
      height = v8->height;
      v33 = v35;
      *(_QWORD *)&v43 = 0LL;
      *((_QWORD *)&v43 + 1) = __PAIR64__(LODWORD(height), LODWORD(width));
      v34 = v43;
      *((_BYTE *)v35 + 52) = 1;
      *((_DWORD *)v33 + 12) = 50529027;
      *((_OWORD *)v33 + 2) = v34;
      a4 = v35;
    }
    CBrushRenderingEffectFactory::CBrushRenderingEffectFactory((CBrushRenderingEffectFactory *)&v58, a2, v44, a5);
    v47 = 0;
    v46[1] = &v58;
    v48 = 1;
    v49 = 0;
    v46[0] = a4;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)&v50,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v46,
                 (struct CDrawListEntryBuilder *)v61);
    v19 = DrawList;
    if ( DrawList >= 0 )
    {
      CDrawListCache::Update(v45, a2, v61);
      if ( v35 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v35, 1);
      v19 = 0;
      goto LABEL_17;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, DrawList, 0x462u, 0LL);
    goto LABEL_50;
  }
  while ( 1 )
  {
    v14 = (char *)a5 + 104 * v11;
    if ( !v14[52] )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v14 + 8) + 8LL))(
             *((_QWORD *)v14 + 8),
             2LL) )
      {
        v15 = *((_QWORD *)v14 + 8);
        if ( *(_BYTE *)(v15 + 52) )
        {
          if ( *(_BYTE *)(v15 + 144) && *((_BYTE *)v44 + 44 * v11 + 102) )
            *(_BYTE *)(v15 + 52) = 0;
        }
      }
      v36 = (CSurfaceDrawListBrush *)*((_QWORD *)v14 + 8);
      CBrushDrawListGenerator::AttachInput(&v50, v11, &v36);
      if ( v36 )
        std::default_delete<CShape>::operator()(v16, (__int64 (__fastcall ***)(_QWORD, __int64))v36);
      goto LABEL_10;
    }
    if ( v14[53] )
      break;
    v23 = InterpolationMode::FromD2D1InterpolationMode(v14[108] == 0);
    v35 = 0LL;
    v59 = 0LL;
    LOBYTE(v37) = v23;
    HIBYTE(v37) = 1;
    v58 = &v35;
    v38 = v37;
    v60 = 1;
    v39 = 1;
    v19 = CSurfaceDrawListBrush::CreateWithTextureTransform(
            (struct CSurfaceDrawListBrush *)(v14 + 8),
            &v38,
            (_DWORD *)v14 + 14,
            &v59);
    if ( v60 )
    {
      v24 = *v58;
      *v58 = v59;
      if ( v24 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v24, 1u);
    }
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v24, 0LL, 0, v19, 0x429u, 0LL);
      if ( v35 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v35, 1u);
      goto LABEL_17;
    }
    v25 = v35;
    v35 = 0LL;
    v36 = v25;
    CBrushDrawListGenerator::AttachInput(&v50, v11, &v36);
    if ( v36 )
      std::default_delete<CShape>::operator()(v26, (__int64 (__fastcall ***)(_QWORD, __int64))v36);
    if ( v35 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v35, 1u);
LABEL_10:
    v10 |= *((_DWORD *)v14 + 12);
    if ( ++v11 >= *((_DWORD *)a5 + 1) )
    {
      v8 = (const struct D2D_SIZE_F *)v43;
      goto LABEL_12;
    }
  }
  v35 = 0LL;
  v41 = 0LL;
  v40 = &v35;
  v42 = 1;
  v19 = CColorDrawListBrush::Create((const struct _D3DCOLORVALUE *)v14 + 2, &v41);
  if ( v42 )
  {
    v27 = *v40;
    *v40 = v41;
    if ( v27 )
      CColorDrawListBrush::`vector deleting destructor'(v27, 1u);
  }
  if ( v19 >= 0 )
  {
    v28 = v35;
    v35 = 0LL;
    v36 = v28;
    CBrushDrawListGenerator::AttachInput(&v50, v11, &v36);
    if ( v36 )
      std::default_delete<CShape>::operator()(v29, (__int64 (__fastcall ***)(_QWORD, __int64))v36);
    if ( v35 )
      CColorDrawListBrush::`vector deleting destructor'(v35, 1u);
    goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v27, 0LL, 0, v19, 0x430u, 0LL);
  if ( v35 )
    CColorDrawListBrush::`vector deleting destructor'(v35, 1u);
LABEL_17:
  v20 = v56;
  for ( i = 0LL; (unsigned int)i < v20; i = (unsigned int)(i + 1) )
  {
    if ( !*((_BYTE *)a5 + 104 * (unsigned int)i + 52) )
    {
      v55[i] = 0LL;
      v20 = v56;
    }
  }
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v50);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v61);
  return (unsigned int)v19;
}
