/*
 * XREFs of ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800268FC
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x1800CB2C0 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1801D4D6C (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x18001DA44 (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 *     ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x18001DB00 (--_ECColorDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180026D0C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CBrushRenderingEffectFactory@@QEAA@PEAVCDrawingContext@@PEAVCRenderingTechnique@@PEBUEffectStage@@@Z @ 0x180026D84 (--0CBrushRenderingEffectFactory@@QEAA@PEAVCDrawingContext@@PEAVCRenderingTechnique@@PEBUEffectSt.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180026DE0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18002781C (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18005AB70 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18005C55C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18005C7CC (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180064010 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800AE7D4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800B1E70 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800B3CBC (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800B40E0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraph::UpdateDrawListCache(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        const struct CDrawListBrush *a4,
        struct EffectStage *a5,
        struct CDrawListCache *a6)
{
  CDrawListCache *v6; // r15
  CSurfaceDrawListBrush *v8; // rdi
  const struct D2D_SIZE_F *v9; // r14
  struct CDrawingContext *v10; // rsi
  int v11; // r13d
  __int64 v12; // rcx
  __int64 v13; // rax
  struct CRenderingTechnique *v14; // rbx
  unsigned int v15; // edi
  __int64 v16; // r15
  char *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  char *v20; // rax
  __int64 (__fastcall ***v21)(_QWORD, __int64); // rbx
  __int64 (__fastcall ***v22)(_QWORD, __int64); // rdx
  unsigned int v23; // eax
  int DrawList; // eax
  unsigned int v25; // ecx
  int v26; // ebx
  unsigned int v27; // edx
  __int64 i; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdi
  unsigned int *v31; // rsi
  char v33; // al
  CSurfaceDrawListBrush *v34; // rcx
  CSurfaceDrawListBrush *v35; // rdx
  CSurfaceDrawListBrush *v36; // rcx
  char *v37; // rax
  CSurfaceDrawListBrush *v38; // rbx
  __int64 (__fastcall ***v39)(_QWORD, __int64); // r8
  unsigned int v40; // eax
  CColorDrawListBrush *v41; // rcx
  CSurfaceDrawListBrush *v42; // rax
  __int64 v43; // rcx
  CGeometryOnlyDrawListBrush *v44; // rcx
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  CSurfaceDrawListBrush *v47; // rax
  __int128 v48; // xmm0
  CSurfaceDrawListBrush *v49; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v50; // [rsp+38h] [rbp-C8h]
  __int16 v51; // [rsp+40h] [rbp-C0h] BYREF
  char v52; // [rsp+42h] [rbp-BEh]
  CSurfaceDrawListBrush **v53; // [rsp+50h] [rbp-B0h]
  struct CGeometryOnlyDrawListBrush *v54; // [rsp+58h] [rbp-A8h] BYREF
  char v55; // [rsp+60h] [rbp-A0h]
  __int128 v56; // [rsp+68h] [rbp-98h]
  CSurfaceDrawListBrush *v57; // [rsp+78h] [rbp-88h] BYREF
  struct CRenderingTechnique *v58; // [rsp+80h] [rbp-80h]
  const struct CDrawListBrush *v59; // [rsp+88h] [rbp-78h]
  struct CDrawingContext *v60; // [rsp+90h] [rbp-70h]
  const struct D2D_SIZE_F *v61; // [rsp+98h] [rbp-68h]
  char v62; // [rsp+A0h] [rbp-60h] BYREF
  char v63; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v64[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v65; // [rsp+C0h] [rbp-40h]
  __int16 v66; // [rsp+10Ch] [rbp+Ch]
  char v67; // [rsp+10Eh] [rbp+Eh]
  struct CDrawingContext *v68; // [rsp+110h] [rbp+10h] BYREF
  int v69; // [rsp+118h] [rbp+18h]
  int v70; // [rsp+11Ch] [rbp+1Ch]
  int v71; // [rsp+120h] [rbp+20h]
  __int128 v72; // [rsp+124h] [rbp+24h]
  _QWORD v73[4]; // [rsp+138h] [rbp+38h] BYREF
  unsigned int v74; // [rsp+158h] [rbp+58h] BYREF
  char v75; // [rsp+15Ch] [rbp+5Ch]
  CSurfaceDrawListBrush **v76; // [rsp+160h] [rbp+60h] BYREF
  CSurfaceDrawListBrush *v77; // [rsp+168h] [rbp+68h] BYREF
  char v78; // [rsp+170h] [rbp+70h]
  _BYTE v79[2304]; // [rsp+190h] [rbp+90h] BYREF

  v6 = a6;
  *(_QWORD *)&v56 = a6;
  v8 = a4;
  v59 = a4;
  v9 = a3;
  v61 = a3;
  v10 = a2;
  v60 = a2;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v79);
  v69 = 0;
  v11 = 0;
  v70 = 0;
  v71 = 0;
  memset(v73, 0, sizeof(v73));
  v74 = 0;
  v12 = *(unsigned int *)a5;
  v13 = *((_QWORD *)this + 18);
  v68 = v10;
  v72 = _xmm;
  v75 = 0;
  v14 = *(struct CRenderingTechnique **)(v13 + 8 * v12);
  v58 = v14;
  if ( !*((_DWORD *)a5 + 1) )
  {
LABEL_19:
    v49 = 0LL;
    v75 = 1;
    v71 = v11;
    v72 = _xmm;
    if ( !v8 )
    {
      v54 = 0LL;
      v53 = &v49;
      v55 = 1;
      v26 = CGeometryOnlyDrawListBrush::Create(&v54);
      if ( v55 )
      {
        v44 = *v53;
        *v53 = v54;
        if ( v44 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v44, 1u);
      }
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v44, 0LL, 0, v26, 0x44Eu);
LABEL_66:
        if ( v49 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v49, 1u);
        goto LABEL_24;
      }
      width = v9->width;
      height = v9->height;
      v47 = v49;
      *(_QWORD *)&v56 = 0LL;
      *((_QWORD *)&v56 + 1) = __PAIR64__(LODWORD(height), LODWORD(width));
      v48 = v56;
      *((_BYTE *)v49 + 52) = 1;
      *((_DWORD *)v47 + 12) = 50529027;
      *((_OWORD *)v47 + 2) = v48;
      v8 = v49;
    }
    CBrushRenderingEffectFactory::CBrushRenderingEffectFactory((CBrushRenderingEffectFactory *)&v76, v10, v58, a5);
    v65 = 0;
    v64[1] = &v76;
    v66 = 1;
    v67 = 0;
    v64[0] = v8;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)&v68,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v64,
                 (struct CDrawListEntryBuilder *)v79);
    v26 = DrawList;
    if ( DrawList >= 0 )
    {
      CDrawListCache::Update(v6, v10, (struct CDrawListEntryBuilder *)v79);
      if ( v49 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v49, 1u);
      v26 = 0;
      goto LABEL_24;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, DrawList, 0x459u);
    goto LABEL_66;
  }
  v15 = 1;
  while ( 1 )
  {
    v16 = v15 - 1;
    v17 = (char *)a5 + 104 * v16;
    if ( !v17[52] )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v17 + 8) + 8LL))(
             *((_QWORD *)v17 + 8),
             2LL) )
      {
        v18 = *((_QWORD *)v17 + 8);
        if ( *(_BYTE *)(v18 + 52) )
        {
          if ( *(_BYTE *)(v18 + 136) && *((_BYTE *)v14 + 60 * v16 + 110) )
            *(_BYTE *)(v18 + 52) = 0;
        }
      }
      v19 = *((_QWORD *)v17 + 8);
      v20 = (char *)&v73[v16];
      v21 = (__int64 (__fastcall ***)(_QWORD, __int64))v19;
      if ( v20 != &v63 )
      {
        v22 = *(__int64 (__fastcall ****)(_QWORD, __int64))v20;
        v21 = 0LL;
        *(_QWORD *)v20 = v19;
        v19 = 0LL;
        if ( v22 )
        {
          std::default_delete<CShape>::operator()(0LL, v22);
          v19 = 0LL;
        }
      }
      v23 = v74;
      if ( v74 <= v15 )
        v23 = v15;
      v74 = v23;
      if ( v19 )
        std::default_delete<CShape>::operator()(v19, v21);
      goto LABEL_16;
    }
    if ( v17[53] )
      break;
    v33 = InterpolationMode::FromD2D1InterpolationMode(v17[108] == 0);
    v49 = 0LL;
    v77 = 0LL;
    LOBYTE(v50) = v33;
    HIBYTE(v50) = 1;
    v51 = v50;
    v76 = &v49;
    v52 = 1;
    v78 = 1;
    v26 = CSurfaceDrawListBrush::CreateWithTextureTransform(v17 + 8, &v51, v17 + 56, &v77);
    if ( v78 )
    {
      v34 = *v76;
      *v76 = v77;
      if ( v34 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v34, 1u);
    }
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v34, 0LL, 0, v26, 0x420u);
      if ( v49 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v49, 1u);
      goto LABEL_24;
    }
    v35 = v49;
    v36 = 0LL;
    v37 = (char *)&v73[v16];
    v49 = 0LL;
    v38 = v35;
    if ( v37 != &v62 )
    {
      v39 = *(__int64 (__fastcall ****)(_QWORD, __int64))v37;
      v38 = 0LL;
      *(_QWORD *)v37 = v35;
      v35 = 0LL;
      if ( v39 )
      {
        std::default_delete<CShape>::operator()(0LL, v39);
        v36 = v49;
        v35 = 0LL;
      }
    }
    v40 = v74;
    if ( v74 <= v15 )
      v40 = v15;
    v74 = v40;
    if ( v35 )
    {
      std::default_delete<CShape>::operator()((__int64)v36, (__int64 (__fastcall ***)(_QWORD, __int64))v38);
      v36 = v49;
    }
    if ( v36 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v36, 1u);
LABEL_16:
    v11 |= *((_DWORD *)v17 + 12);
    if ( v15++ >= *((_DWORD *)a5 + 1) )
    {
      v8 = v59;
      v10 = v60;
      v9 = v61;
      v6 = (CDrawListCache *)v56;
      goto LABEL_19;
    }
    v14 = v58;
  }
  v49 = 0LL;
  v54 = 0LL;
  v53 = &v49;
  v55 = 1;
  v26 = CColorDrawListBrush::Create((struct _D3DCOLORVALUE *)v17 + 2, &v54);
  if ( v55 )
  {
    v41 = *v53;
    *v53 = v54;
    if ( v41 )
      CColorDrawListBrush::`vector deleting destructor'(v41, 1);
  }
  if ( v26 >= 0 )
  {
    v42 = v49;
    v49 = 0LL;
    v57 = v42;
    CBrushDrawListGenerator::AttachInput(&v68, (unsigned int)v16, &v57);
    if ( v57 )
      std::default_delete<CShape>::operator()(v43, (__int64 (__fastcall ***)(_QWORD, __int64))v57);
    if ( v49 )
      CColorDrawListBrush::`vector deleting destructor'(v49, 1);
    goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v41, 0LL, 0, v26, 0x427u);
  if ( v49 )
    CColorDrawListBrush::`vector deleting destructor'(v49, 1);
LABEL_24:
  v27 = v74;
  for ( i = 0LL; (unsigned int)i < v27; i = (unsigned int)(i + 1) )
  {
    if ( !*((_BYTE *)a5 + 104 * (unsigned int)i + 52) )
    {
      v73[i] = 0LL;
      v27 = v74;
    }
  }
  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)&v68);
  v30 = 4LL;
  v31 = &v74;
  do
  {
    v31 -= 2;
    --v30;
    if ( *(_QWORD *)v31 )
      std::default_delete<CShape>::operator()(v29, *(__int64 (__fastcall ****)(_QWORD, __int64))v31);
  }
  while ( v30 );
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v79);
  return (unsigned int)v26;
}
