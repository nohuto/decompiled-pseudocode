/*
 * XREFs of ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180039AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800350E8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x180035388 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x1800353B0 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x18003772C (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x180037864 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800378A4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18003A388 (-Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x18003BEB4 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18003C400 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18003ECD0 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180057610 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18006A10C (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18006F024 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18006F2A8 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C52D0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CBA2C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800EB6D4 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GenerateDrawList(
        CAtlasedRectsGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v4; // esi
  char v6; // r12
  unsigned int v7; // r14d
  char v9; // bl
  struct CMILMatrix *v10; // rdx
  int CpuClip; // eax
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax
  struct CCommonRenderingEffect *v14; // rcx
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v16; // r10
  int v17; // edx
  struct CRenderingEffect *v18; // rbx
  unsigned int v19; // ecx
  unsigned int v20; // edi
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // r14
  unsigned __int8 *v24; // rax
  __int64 v25; // r8
  _DWORD *v26; // rcx
  __int128 v27; // xmm8
  int v28; // xmm1_4
  int v29; // eax
  int v30; // xmm1_4
  __m128 v31; // xmm6
  _DWORD *v32; // rbx
  __m128 v33; // xmm6
  int v34; // xmm0_4
  int v35; // xmm1_4
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // ecx
  __int64 v41; // rsi
  __int64 (__fastcall *v42)(__int64, unsigned __int8 **); // rdi
  int v43; // ebx
  __int64 v44; // rax
  bool v45; // zf
  bool v46; // [rsp+38h] [rbp-D0h]
  _QWORD v47[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v48; // [rsp+58h] [rbp-B0h] BYREF
  char v49; // [rsp+5Ah] [rbp-AEh]
  __int128 v50; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+78h] [rbp-90h]
  __int64 v52; // [rsp+80h] [rbp-88h] BYREF
  __int64 v53; // [rsp+88h] [rbp-80h] BYREF
  __int64 v54; // [rsp+90h] [rbp-78h]
  int v55; // [rsp+98h] [rbp-70h] BYREF
  __int64 v56; // [rsp+9Ch] [rbp-6Ch] BYREF
  float v57; // [rsp+A4h] [rbp-64h]
  __int128 *v58; // [rsp+A8h] [rbp-60h]
  __int64 v59; // [rsp+B0h] [rbp-58h]
  _DWORD v60[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-48h]
  _QWORD v62[2]; // [rsp+C8h] [rbp-40h] BYREF
  int v63; // [rsp+D8h] [rbp-30h]
  int v64; // [rsp+DCh] [rbp-2Ch]
  __int128 v65; // [rsp+E0h] [rbp-28h]
  __m128 v66; // [rsp+F0h] [rbp-18h]
  CDrawListCache *v67; // [rsp+100h] [rbp-8h]
  __int128 v68; // [rsp+108h] [rbp+0h] BYREF
  int v69; // [rsp+118h] [rbp+10h]
  __int64 v70; // [rsp+11Ch] [rbp+14h]
  int v71; // [rsp+124h] [rbp+1Ch]
  __int128 v72; // [rsp+128h] [rbp+20h] BYREF
  __int64 v73; // [rsp+138h] [rbp+30h] BYREF
  char v74; // [rsp+140h] [rbp+38h]
  char v75; // [rsp+148h] [rbp+40h]
  unsigned __int8 *v76; // [rsp+150h] [rbp+48h] BYREF
  _QWORD v77[3]; // [rsp+160h] [rbp+58h] BYREF
  _OWORD v78[2]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v79; // [rsp+198h] [rbp+90h]
  __int128 v80; // [rsp+1A0h] [rbp+98h]
  int v81; // [rsp+1B8h] [rbp+B0h]
  _BYTE v82[2304]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v83; // [rsp+AC8h] [rbp+9C0h] BYREF
  int v84; // [rsp+AD0h] [rbp+9C8h]
  __int64 v85; // [rsp+AD4h] [rbp+9CCh]
  int v86; // [rsp+ADCh] [rbp+9D4h]
  int v87; // [rsp+AE0h] [rbp+9D8h]
  int v88; // [rsp+AE4h] [rbp+9DCh]
  int v89; // [rsp+AE8h] [rbp+9E0h]
  __int128 v90; // [rsp+AECh] [rbp+9E4h]

  v4 = 0;
  v67 = a4;
  LODWORD(v47[0]) = 0;
  v6 = 0;
  v7 = 0;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v82);
  v73 = 0LL;
  v72 = 0LL;
  v74 = 0;
  v75 = 0;
  if ( !*((_QWORD *)this + 7) )
    goto LABEL_24;
  if ( !CDrawingContext::IsWarpFastPathEnabled(a2)
    || *((_DWORD *)a2 + 64) == 4
    || (v41 = *((_QWORD *)a2 + 44),
        v42 = *(__int64 (__fastcall **)(__int64, unsigned __int8 **))(*(_QWORD *)v41 + 24LL),
        v43 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 7) + 24LL))(
                            *((_QWORD *)this + 7),
                            v77)
                        + 8),
        v44 = v42(v41, &v76),
        v4 = 0,
        v45 = *(_DWORD *)(v44 + 8) == v43,
        v9 = 1,
        !v45) )
  {
    v9 = 0;
  }
  v46 = v9;
  v56 = 0LL;
  v57 = 0.0;
  v59 = 0LL;
  v55 = 2;
  v81 = 0;
  CDrawingContext::GetWorldTransform(a2, (struct CMILMatrix *)v78);
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v78, (float *)&v56, (float *)&v56 + 1);
  if ( !v9 )
  {
    CpuClip = CDrawingContext::GetCpuClip((const struct CVisualTree **)a2, v10, (struct CCpuClip *)&v72);
    v7 = CpuClip;
    if ( CpuClip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, CpuClip, 0x79u, 0LL);
      goto LABEL_24;
    }
  }
  LOBYTE(v51) = 0;
  v58 = &v72;
  v13 = *((_QWORD *)this + 7);
  v50 = 0LL;
  if ( (int)CDrawListBitmap::FromImageSource(
              (CDrawListBitmap *)&v50,
              (struct IImageSource *)((v13 + 8) & ((unsigned __int128)-(__int128)v13 >> 64)),
              a2,
              0) < 0 )
  {
LABEL_32:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v50 + 1);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v50);
    goto LABEL_24;
  }
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)&v50 + 1) + 40LL))(*((_QWORD *)&v50 + 1), v60);
  ObjectCache = CThreadContext::GetObjectCache(v14);
  v16 = 0LL;
  v17 = *((_DWORD *)ObjectCache + 1);
  if ( v17 )
  {
    v16 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v16;
    *((_DWORD *)ObjectCache + 1) = v17 - 1;
  }
  if ( v16 || (v16 = DefaultHeap::Alloc(0x48uLL)) != 0LL )
  {
    v48 = SamplerMode::k_ClampClampLinear;
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v49 = 1;
    BYTE2(v47[0]) = 1;
    LOWORD(v47[0]) = SamplerMode::k_ClampClampLinear;
    v18 = (struct CRenderingEffect *)CCommonRenderingEffect::CCommonRenderingEffect(v16, &v50, v47, &v52, &v48);
    v6 = 1;
  }
  else
  {
    v18 = 0LL;
  }
  v47[0] = v18;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v47);
  if ( (v6 & 1) != 0 )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v53);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v52);
  }
  if ( !v18 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024882, 0x88u, 0LL);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v47);
    goto LABEL_32;
  }
  CDrawListEntryBuilder::Begin((CDrawListEntryBuilder *)v82, (const struct DrawListEntryBuilderSetupParams *)&v55, v18);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v47);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v50 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v50);
  v20 = 0;
  if ( *((_DWORD *)this + 16) )
  {
    while ( 1 )
    {
      v21 = *(_QWORD *)(*((_QWORD *)this + 9) + 8LL * v20);
      v22 = *(_DWORD *)(v21 + 60);
      v23 = *(_QWORD *)(v21 + 72);
      v24 = *(unsigned __int8 **)(v21 + 104);
      v25 = *(_QWORD *)(v21 + 88);
      v77[0] = v23;
      v76 = v24;
      LODWORD(v47[0]) = v22;
      if ( v22 )
        break;
LABEL_21:
      ++v20;
      v4 = 0;
      if ( v20 >= *((_DWORD *)this + 16) )
        goto LABEL_22;
    }
    *((_QWORD *)&v50 + 1) = &v83;
    v26 = (_DWORD *)(v25 + 8);
    *(_QWORD *)&v50 = 2LL;
    v27 = v50;
    v61 = v25 + 8;
    while ( 1 )
    {
      v28 = *(v26 - 1);
      v29 = *v24;
      v69 = 0;
      DWORD1(v65) = v28;
      v30 = v26[1];
      v31 = (__m128)COERCE_UNSIGNED_INT((float)v29);
      v70 = 0x200000000LL;
      v71 = 0;
      v32 = v26 - 2;
      v31.m128_f32[0] = v31.m128_f32[0] / 255.0;
      LODWORD(v65) = *(v26 - 2);
      DWORD2(v65) = *v26;
      HIDWORD(v65) = v30;
      v33 = _mm_shuffle_ps(v31, v31, 0);
      v68 = v65;
      memset_0(&v83, 0, 0x68uLL);
      v90 = _xmm;
      MILMatrix3x2::InferAffineMatrix(v62, v32, v23 + 16LL * v4);
      if ( v46 )
      {
        v83 = v62[0];
        v85 = v62[1];
        v34 = v63;
        v35 = v64;
      }
      else
      {
        v56 = 0LL;
        v58 = 0LL;
        *(float *)&v55 = 1.0 / (float)v60[0];
        v57 = 1.0 / (float)v60[1];
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v52,
          (const struct D2D1::Matrix3x2F *)v62,
          (const struct D2D1::Matrix3x2F *)&v55);
        v85 = v53;
        v34 = v54;
        v35 = HIDWORD(v54);
        v83 = v52;
      }
      v84 = 0;
      v86 = 0;
      v87 = v34;
      v88 = v35;
      v78[1] = 0LL;
      v89 = 1065353216;
      v79 = 0LL;
      v66 = v33;
      v78[0] = v33;
      v80 = v27;
      v36 = CDrawListEntryBuilder::Insert(
              (CDrawListEntryBuilder *)v82,
              v46,
              (const struct PrimitiveGeometryDesc *)&v68,
              (const struct PrimitiveVertexAttributesDesc *)v78,
              0LL);
      v7 = v36;
      if ( v36 < 0 )
        break;
      ++v4;
      v26 = (_DWORD *)(v61 + 16);
      v23 = v77[0];
      v24 = v76 + 1;
      v61 += 16LL;
      ++v76;
      if ( v4 >= LODWORD(v47[0]) )
        goto LABEL_21;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0xC2u, 0LL);
  }
  else
  {
LABEL_22:
    v38 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v82);
    v7 = v38;
    if ( v38 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0xC6u, 0LL);
    else
      CDrawListCache::Update(v67, a2, (struct CDrawListEntryBuilder *)v82);
  }
LABEL_24:
  CShapePtr::Release((CShapePtr *)&v73);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v82);
  return v7;
}
