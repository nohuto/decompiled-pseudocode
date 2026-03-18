/*
 * XREFs of ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180028330
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x180025F0C (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180026D0C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180026DE0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x180027D40 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180028814 (-Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800288C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800289AC (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800289EC (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180028E60 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x180028EF0 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800292A0 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070160 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x1800AE108 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800B17F8 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800B3CBC (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GenerateDrawList(
        CAtlasedRectsGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v4; // edi
  char v6; // r12
  unsigned int v7; // esi
  CDrawListCache *v8; // r13
  char v10; // bl
  struct CMILMatrix *v11; // rdx
  int CpuClip; // eax
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  struct CCommonRenderingEffect *v15; // rcx
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v17; // r10
  int v18; // edx
  struct CRenderingEffect *v19; // rbx
  unsigned int v20; // ecx
  unsigned int v21; // r12d
  __int64 v22; // rdx
  int v23; // ecx
  __int64 v24; // rsi
  unsigned __int8 *v25; // rax
  __int64 v26; // r13
  _QWORD *v27; // r13
  __int128 v28; // xmm8
  __m128 v29; // xmm6
  __m128 v30; // xmm6
  unsigned int v31; // xmm1_4
  unsigned int v32; // xmm0_4
  int v33; // xmm0_4
  int v34; // xmm1_4
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // eax
  unsigned int v38; // ecx
  __int64 v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rax
  bool v43; // zf
  bool v44; // [rsp+38h] [rbp-D0h]
  _QWORD v45[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v46; // [rsp+58h] [rbp-B0h] BYREF
  char v47; // [rsp+5Ah] [rbp-AEh]
  __int128 v48; // [rsp+68h] [rbp-A0h] BYREF
  char v49; // [rsp+78h] [rbp-90h]
  __m128 v50; // [rsp+80h] [rbp-88h] BYREF
  __int64 v51; // [rsp+90h] [rbp-78h]
  int v52; // [rsp+98h] [rbp-70h] BYREF
  float v53; // [rsp+9Ch] [rbp-6Ch] BYREF
  float v54[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 *v55; // [rsp+A8h] [rbp-60h]
  _DWORD v56[2]; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v57[6]; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v58; // [rsp+D8h] [rbp-30h]
  float v59[6]; // [rsp+E8h] [rbp-20h] BYREF
  struct CDrawListCache *v60; // [rsp+100h] [rbp-8h]
  __int128 v61; // [rsp+108h] [rbp+0h] BYREF
  int v62; // [rsp+118h] [rbp+10h]
  char v63; // [rsp+120h] [rbp+18h]
  __int128 v64; // [rsp+128h] [rbp+20h] BYREF
  __int64 v65; // [rsp+138h] [rbp+30h] BYREF
  char v66; // [rsp+140h] [rbp+38h]
  char v67; // [rsp+148h] [rbp+40h]
  unsigned __int8 *v68; // [rsp+150h] [rbp+48h] BYREF
  _QWORD v69[3]; // [rsp+160h] [rbp+58h] BYREF
  _OWORD v70[4]; // [rsp+178h] [rbp+70h] BYREF
  int v71; // [rsp+1B8h] [rbp+B0h]
  struct CDrawListEntry **v72[288]; // [rsp+1C8h] [rbp+C0h] BYREF
  int v73; // [rsp+AC8h] [rbp+9C0h] BYREF
  float v74; // [rsp+ACCh] [rbp+9C4h]
  int v75; // [rsp+AD0h] [rbp+9C8h]
  float v76; // [rsp+AD4h] [rbp+9CCh]
  float v77; // [rsp+AD8h] [rbp+9D0h]
  int v78; // [rsp+ADCh] [rbp+9D4h]
  int v79; // [rsp+AE0h] [rbp+9D8h]
  int v80; // [rsp+AE4h] [rbp+9DCh]
  int v81; // [rsp+AE8h] [rbp+9E0h]
  __int128 v82; // [rsp+AECh] [rbp+9E4h]

  v4 = 0;
  v60 = a4;
  LODWORD(v45[0]) = 0;
  v6 = 0;
  v7 = 0;
  v8 = a4;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v72);
  v65 = 0LL;
  v64 = 0LL;
  v66 = 0;
  v67 = 0;
  if ( !*((_QWORD *)this + 7) )
    goto LABEL_25;
  if ( !CDrawingContext::IsWarpFastPathEnabled(a2)
    || *((_DWORD *)a2 + 64) == 4
    || (v40 = *((_QWORD *)a2 + 44),
        v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 7) + 24LL))(*((_QWORD *)this + 7), v69),
        v42 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 **))(*(_QWORD *)v40 + 24LL))(v40, &v68),
        v4 = 0,
        v43 = *(_DWORD *)(v42 + 8) == *(_DWORD *)(v41 + 8),
        v10 = 1,
        !v43) )
  {
    v10 = 0;
  }
  v44 = v10;
  memset_0(&v52, 0, 0x20uLL);
  v52 = 2;
  v71 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 480), (struct CMILMatrix *)v70);
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v70, &v53, v54);
  if ( !v10 )
  {
    CpuClip = CDrawingContext::GetCpuClip(a2, v11, (struct CCpuClip *)&v64);
    v7 = CpuClip;
    if ( CpuClip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, CpuClip, 0x77u);
      goto LABEL_25;
    }
  }
  v49 = 0;
  v55 = &v64;
  v14 = *((_QWORD *)this + 7);
  v48 = 0LL;
  if ( (int)CDrawListBitmap::FromImageSource(
              (CDrawListBitmap *)&v48,
              (struct IImageSource *)((v14 + 8) & ((unsigned __int128)-(__int128)v14 >> 64)),
              a2,
              0) < 0 )
  {
LABEL_31:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v48 + 1);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v48);
    goto LABEL_25;
  }
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)&v48 + 1) + 40LL))(*((_QWORD *)&v48 + 1), v56);
  ObjectCache = CThreadContext::GetObjectCache(v15);
  v17 = 0LL;
  v18 = *((_DWORD *)ObjectCache + 1);
  if ( v18 )
  {
    v17 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v17;
    *((_DWORD *)ObjectCache + 1) = v18 - 1;
  }
  if ( v17 || (v17 = HeapAlloc(WPF::g_processHeap, 0, 0x48uLL)) != 0LL )
  {
    v46 = SamplerMode::k_ClampClampLinear;
    v47 = 1;
    BYTE2(v45[0]) = 1;
    LOWORD(v45[0]) = SamplerMode::k_ClampClampLinear;
    v50 = 0LL;
    v51 = 0LL;
    v19 = (struct CRenderingEffect *)CCommonRenderingEffect::CCommonRenderingEffect(
                                       (__int64)v17,
                                       &v48,
                                       (__int64)v45,
                                       &v50,
                                       (__int64)&v46);
    v6 = 1;
  }
  else
  {
    v19 = 0LL;
  }
  v45[0] = v19;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v45);
  if ( (v6 & 1) != 0 )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v50.m128_i64[1]);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v50);
  }
  if ( !v19 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024882, 0x86u);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v45);
    goto LABEL_31;
  }
  CDrawListEntryBuilder::Begin((CDrawListEntryBuilder *)v72, (const struct DrawListEntryBuilderSetupParams *)&v52, v19);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v45);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v48 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v48);
  if ( *((_DWORD *)this + 16) )
  {
    while ( 1 )
    {
      v21 = 0;
      v22 = *(_QWORD *)(*((_QWORD *)this + 9) + 8LL * v4);
      v23 = *(_DWORD *)(v22 + 60);
      v24 = *(_QWORD *)(v22 + 72);
      v25 = *(unsigned __int8 **)(v22 + 104);
      v26 = *(_QWORD *)(v22 + 88);
      v69[0] = v24;
      v68 = v25;
      LODWORD(v45[0]) = v23;
      if ( v23 )
        break;
LABEL_21:
      if ( ++v4 >= *((_DWORD *)this + 16) )
      {
        v8 = v60;
        goto LABEL_23;
      }
    }
    *((_QWORD *)&v48 + 1) = &v73;
    v27 = (_QWORD *)(v26 + 8);
    *(_QWORD *)&v48 = 2LL;
    v28 = v48;
    while ( 1 )
    {
      v29 = (__m128)COERCE_UNSIGNED_INT((float)*v25);
      v29.m128_f32[0] = v29.m128_f32[0] / 255.0;
      v30 = _mm_shuffle_ps(v29, v29, 0);
      memset_0(&v61, 0, 0x20uLL);
      v31 = *((_DWORD *)v27 - 1);
      v32 = *((_DWORD *)v27 - 2);
      v62 = 0;
      v63 |= 2u;
      *(_QWORD *)&v58 = __PAIR64__(v31, v32);
      *((_QWORD *)&v58 + 1) = *v27;
      v61 = v58;
      memset_0(&v73, 0, 0x68uLL);
      v82 = _xmm;
      MILMatrix3x2::InferAffineMatrix(v57, v27 - 1, v24 + 16LL * v21);
      if ( v44 )
      {
        v73 = v57[0];
        v74 = *(float *)&v57[1];
        v76 = *(float *)&v57[2];
        v33 = v57[4];
        v77 = *(float *)&v57[3];
        v34 = v57[5];
      }
      else
      {
        v59[1] = 0.0;
        v59[2] = 0.0;
        v59[4] = 0.0;
        v59[5] = 0.0;
        v59[0] = 1.0 / (float)v56[0];
        v59[3] = 1.0 / (float)v56[1];
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v52,
          (const struct D2D1::Matrix3x2F *)v57,
          (const struct D2D1::Matrix3x2F *)v59);
        v76 = v54[0];
        v33 = (int)v55;
        v77 = v54[1];
        v34 = HIDWORD(v55);
        v73 = v52;
        v74 = v53;
      }
      v75 = 0;
      v78 = 0;
      v80 = v34;
      v79 = v33;
      v81 = 1065353216;
      memset_0(v70, 0, 0x20uLL);
      v50 = v30;
      v70[0] = v30;
      v70[2] = v28;
      v35 = CDrawListEntryBuilder::Insert(
              (CDrawListEntryBuilder *)v72,
              v44,
              (const struct PrimitiveGeometryDesc *)&v61,
              (const struct PrimitiveVertexAttributesDesc *)v70,
              0LL);
      v7 = v35;
      if ( v35 < 0 )
        break;
      ++v21;
      v24 = v69[0];
      v25 = v68 + 1;
      v27 += 2;
      ++v68;
      if ( v21 >= LODWORD(v45[0]) )
        goto LABEL_21;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0xC0u);
  }
  else
  {
LABEL_23:
    v37 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v72);
    v7 = v37;
    if ( v37 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0xC4u);
    else
      CDrawListCache::Update(v8, a2, v72);
  }
LABEL_25:
  CShapePtr::Release((CShapePtr *)&v65);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v72);
  return v7;
}
