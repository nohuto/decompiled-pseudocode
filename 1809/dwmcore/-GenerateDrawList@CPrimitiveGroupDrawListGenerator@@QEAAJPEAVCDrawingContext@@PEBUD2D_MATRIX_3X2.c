/*
 * XREFs of ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180027D70
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180029400 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180016534 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x180025F0C (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180026010 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180026D0C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180026DE0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x180027D40 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ?FromD2D1ExtendMode@ExtendMode@@YA?AW4Enum@1@W4D2D1_EXTEND_MODE@@@Z @ 0x180028310 (-FromD2D1ExtendMode@ExtendMode@@YA-AW4Enum@1@W4D2D1_EXTEND_MODE@@@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180028814 (-Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x18002898C (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800289AC (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800289EC (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z @ 0x180028B20 (-IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x180028BC0 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180028E60 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x180028EF0 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800292A0 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800293DC (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ??8@YA_NAEBURenderTargetInfo@@0@Z @ 0x18002E4F8 (--8@YA_NAEBURenderTargetInfo@@0@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070160 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x18008DA68 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800B1E70 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800B3CBC (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800C1EF4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800DA754 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x180182490 (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?CalculatePrimitiveToBitmap@CPrimitiveGroupDrawListGenerator@@CAXAEBVCDrawListBitmap@@AEBUD2D_MATRIX_3X2_F@@PEAVMatrix3x3@@@Z @ 0x18022A8D0 (-CalculatePrimitiveToBitmap@CPrimitiveGroupDrawListGenerator@@CAXAEBVCDrawListBitmap@@AEBUD2D_MA.c)
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x18022A9C0 (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::GenerateDrawList(
        CPrimitiveGroupDrawListGenerator *this,
        struct CDrawingContext *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v7; // ecx
  bool v8; // r15
  int v9; // eax
  int v10; // r12d
  struct CMILMatrix *v11; // rdx
  unsigned int v12; // ebx
  int CpuClip; // eax
  unsigned int v14; // ecx
  bool v15; // zf
  __int64 v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // rdi
  int v19; // ebx
  bool v20; // cf
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  char v24; // al
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rcx
  char v28; // r13
  __int64 v29; // rcx
  char v30; // al
  __int64 v31; // rcx
  char v32; // al
  __int64 v33; // rcx
  char v34; // bl
  struct CCommonRenderingEffect *v35; // rcx
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v37; // r10
  int v38; // edx
  struct CRenderingEffect *v39; // rbx
  unsigned int v40; // ecx
  __int128 *v41; // rbx
  __int128 v42; // xmm0
  const struct PrimitiveVertexAttributesDesc *v43; // r9
  unsigned int v44; // ecx
  unsigned int v45; // xmm1_4
  int v46; // xmm1_4
  int v47; // xmm1_4
  int v48; // eax
  unsigned int v50; // ebx
  int v51; // edi
  __int64 v52; // rcx
  unsigned int v53; // xmm1_4
  __int32 v54; // xmm1_4
  int v55; // eax
  unsigned int v56; // ecx
  __int64 v57; // rcx
  int v58; // xmm1_4
  int v59; // xmm1_4
  int v60; // r9d
  unsigned int v61; // [rsp+20h] [rbp-E0h]
  bool v62[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v63; // [rsp+34h] [rbp-CCh]
  __int16 v64; // [rsp+38h] [rbp-C8h]
  __int16 v65; // [rsp+40h] [rbp-C0h] BYREF
  char v66; // [rsp+42h] [rbp-BEh]
  __int16 v67; // [rsp+50h] [rbp-B0h] BYREF
  char v68; // [rsp+52h] [rbp-AEh]
  unsigned int v69; // [rsp+60h] [rbp-A0h]
  __int128 v70; // [rsp+68h] [rbp-98h] BYREF
  char v71; // [rsp+78h] [rbp-88h]
  __int128 v72; // [rsp+80h] [rbp-80h] BYREF
  char v73; // [rsp+90h] [rbp-70h]
  int v74; // [rsp+98h] [rbp-68h] BYREF
  float v75; // [rsp+9Ch] [rbp-64h] BYREF
  float v76; // [rsp+A0h] [rbp-60h] BYREF
  BOOL v77; // [rsp+A4h] [rbp-5Ch]
  __int128 *v78; // [rsp+A8h] [rbp-58h]
  int v79; // [rsp+B0h] [rbp-50h]
  char v80; // [rsp+B4h] [rbp-4Ch]
  __int128 v81; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v82; // [rsp+C8h] [rbp-38h] BYREF
  char v83; // [rsp+D0h] [rbp-30h]
  char v84; // [rsp+D8h] [rbp-28h]
  __int128 v85; // [rsp+E0h] [rbp-20h]
  CDrawListCache *v86; // [rsp+F0h] [rbp-10h]
  __int128 v87; // [rsp+F8h] [rbp-8h]
  __int128 v88; // [rsp+108h] [rbp+8h] BYREF
  int v89; // [rsp+118h] [rbp+18h]
  char v90; // [rsp+120h] [rbp+20h]
  _BYTE v91[8]; // [rsp+128h] [rbp+28h] BYREF
  __int128 *v92; // [rsp+130h] [rbp+30h]
  __int128 v93; // [rsp+150h] [rbp+50h] BYREF
  __m256i v94; // [rsp+160h] [rbp+60h]
  __int128 v95; // [rsp+180h] [rbp+80h]
  int v96; // [rsp+190h] [rbp+90h]
  _BYTE v97[64]; // [rsp+1A0h] [rbp+A0h] BYREF
  int v98; // [rsp+1E0h] [rbp+E0h]
  __int128 v99; // [rsp+1F0h] [rbp+F0h] BYREF
  __m256i v100; // [rsp+200h] [rbp+100h]
  __int128 v101; // [rsp+220h] [rbp+120h]
  struct CRenderingEffect *v102; // [rsp+238h] [rbp+138h] BYREF
  int v103; // [rsp+240h] [rbp+140h]
  __int128 v104; // [rsp+248h] [rbp+148h] BYREF
  struct CDrawListEntry **v105[288]; // [rsp+260h] [rbp+160h] BYREF
  _DWORD v106[9]; // [rsp+B60h] [rbp+A60h] BYREF
  __int128 v107; // [rsp+B84h] [rbp+A84h]
  _DWORD v108[9]; // [rsp+B94h] [rbp+A94h] BYREF
  __int128 v109; // [rsp+BB8h] [rbp+AB8h]

  v86 = a4;
  memset_0(&v74, 0, 0x20uLL);
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v105);
  v82 = 0LL;
  v83 = 0;
  v81 = 0LL;
  v84 = 0;
  v98 = 0;
  if ( !(unsigned __int8)operator==((char *)this + 40, (char *)a2 + 392) )
  {
    v12 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003304315, 0x152u);
    goto LABEL_45;
  }
  ++dword_180308170;
  CDrawListCache::Invalidate(a4);
  if ( !CDrawingContext::IsWarpFastPathEnabled(a2) )
    goto LABEL_3;
  if ( !CPrimitiveGroupDrawListGenerator::CanUseWarpExtension(this) )
    goto LABEL_3;
  v8 = 1;
  if ( *((_DWORD *)a2 + 64) == 4 )
    goto LABEL_3;
  v50 = 0;
  v51 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, struct CRenderingEffect **))(**((_QWORD **)a2 + 44) + 24LL))(
                      *((_QWORD *)a2 + 44),
                      &v102)
                  + 8);
  if ( *((_DWORD *)this + 16) )
  {
    while ( 1 )
    {
      v52 = *(_QWORD *)(*((_QWORD *)this + 14) + 24LL * v50 + 8);
      (*(void (__fastcall **)(__int64, struct CRenderingEffect **))(*(_QWORD *)v52 + 24LL))(v52, &v102);
      if ( v103 != v51 )
        break;
      if ( ++v50 >= *((_DWORD *)this + 16) )
        goto LABEL_4;
    }
LABEL_3:
    v8 = 0;
  }
LABEL_4:
  v9 = *((_DWORD *)a2 + 62);
  v10 = 0;
  if ( v9 == 1 )
  {
    v10 = 1;
  }
  else if ( v9 > 1 )
  {
    if ( v9 <= 3 )
    {
      v10 = 2;
      goto LABEL_6;
    }
    switch ( v9 )
    {
      case 4:
        goto LABEL_63;
      case 5:
        v10 = 4;
        break;
      case 6:
LABEL_63:
        v10 = 3;
        break;
    }
  }
LABEL_6:
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 480), (struct CMILMatrix *)v97);
  v12 = 0;
  if ( !v8 )
  {
    CpuClip = CDrawingContext::GetCpuClip(a2, v11, (struct CCpuClip *)&v81);
    v12 = CpuClip;
    if ( CpuClip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, CpuClip, 0x18Au);
      goto LABEL_45;
    }
  }
  v15 = *((_DWORD *)a2 + 63) == 0;
  v74 = 2;
  v80 = 1;
  v77 = !v15;
  v78 = &v81;
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v97, &v75, &v76);
  v16 = *((_QWORD *)this + 3);
  v17 = 0;
  v69 = 0;
  if ( !*(_DWORD *)(v16 + 8) )
  {
LABEL_44:
    CDrawListCache::Update(v86, a2, v105);
    goto LABEL_45;
  }
  while ( 1 )
  {
    v18 = *(_QWORD *)v16 + 144LL * v17;
    CPrimitiveGroupDrawListGenerator::GetIteratorForState(this, v91, v17);
    v19 = 32;
    v79 = 32;
    if ( (*(_BYTE *)(v18 + 4) & 0x20) == 0 )
      break;
    if ( v84 )
    {
      CShapePtr::Release((CShapePtr *)&v82);
      v84 = 0;
    }
    HIDWORD(v99) = 0;
    *((_QWORD *)&v101 + 1) = 0x3F80000000000000LL;
    v96 = 0;
    v53 = *((_DWORD *)v92 + 5);
    LODWORD(v99) = *((_DWORD *)v92 + 4);
    v100.m256i_i32[0] = *((_DWORD *)v92 + 6);
    *(_QWORD *)((char *)&v99 + 4) = v53;
    v54 = *((_DWORD *)v92 + 7);
    *(_OWORD *)&v100.m256i_u64[1] = 0LL;
    v100.m256i_i64[3] = 1065353216LL;
    LODWORD(v101) = *((_DWORD *)v92 + 8);
    v100.m256i_i32[1] = v54;
    DWORD1(v101) = *((_DWORD *)v92 + 9);
    v96 = 0;
    v93 = v99;
    v94 = v100;
    v95 = v101;
    v104 = *v92;
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v106, (const struct MilRectF *)&v104);
    v55 = CCpuClip::AddPrimitiveClip((CCpuClip *)&v81, (const struct CShape *)v106, (const struct CMILMatrix *)&v93);
    v12 = v55;
    if ( v55 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x1B2u);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v106);
      goto LABEL_45;
    }
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v106);
LABEL_43:
    v16 = *((_QWORD *)this + 3);
    v17 = v69 + 1;
    v69 = v17;
    if ( v17 >= *(_DWORD *)(v16 + 8) )
      goto LABEL_44;
  }
  if ( ((_QWORD)v81 || v82) && !v77 )
  {
    if ( !CCpuClip::IsAxisAlignedRectangle((CCpuClip *)&v81)
      || !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v97) )
    {
      v80 = 1;
      goto LABEL_13;
    }
    v19 = 96;
    v79 = 96;
  }
  v80 = 0;
LABEL_13:
  v20 = *(_DWORD *)v18 == 0;
  v73 = 0;
  v72 = 0LL;
  v71 = 0;
  v70 = 0LL;
  if ( !v20 )
  {
    v21 = *(unsigned int *)(v18 + 40);
    if ( (unsigned int)v21 < *((_DWORD *)this + 16) )
    {
      CDrawListBitmap::operator=((__int64 *)&v72, (__int64 *)(*((_QWORD *)this + 14) + 24 * v21));
      if ( CDrawListBitmap::IsSwapChain((CDrawListBitmap *)&v72, v62) )
      {
        v19 |= 0x10u;
        v79 = v19;
        if ( v62[0] )
        {
          v19 |= 0x100u;
          v79 = v19;
        }
      }
    }
    v22 = *(unsigned int *)(v18 + 56);
    if ( (unsigned int)v22 < *((_DWORD *)this + 20) )
    {
      CDrawListBitmap::operator=((__int64 *)&v70, (__int64 *)(*((_QWORD *)this + 15) + 24 * v22));
      if ( CDrawListBitmap::IsSwapChain((CDrawListBitmap *)&v70, v62) )
      {
        v19 |= 0x10u;
        v79 = v19;
        if ( v62[0] )
        {
          v19 |= 0x100u;
          v79 = v19;
        }
      }
    }
  }
  if ( (*(_BYTE *)(v18 + 4) & 0x10) != 0 )
    v79 = v19 | 1;
  v23 = 0LL;
  if ( v10 )
    v23 = *(unsigned int *)(v18 + 44);
  v24 = InterpolationMode::FromD2D1InterpolationMode(v23);
  v25 = *(unsigned int *)(v18 + 48);
  LOBYTE(v64) = v24;
  v26 = ExtendMode::FromD2D1ExtendMode(v25);
  v27 = *(unsigned int *)(v18 + 52);
  HIBYTE(v64) = v26;
  v28 = ExtendMode::FromD2D1ExtendMode(v27);
  if ( v10 )
    v29 = *(unsigned int *)(v18 + 60);
  else
    v29 = 0LL;
  v30 = InterpolationMode::FromD2D1InterpolationMode(v29);
  v31 = *(unsigned int *)(v18 + 64);
  LOBYTE(v63) = v30;
  v32 = ExtendMode::FromD2D1ExtendMode(v31);
  v33 = *(unsigned int *)(v18 + 68);
  HIBYTE(v63) = v32;
  v34 = ExtendMode::FromD2D1ExtendMode(v33);
  ObjectCache = CThreadContext::GetObjectCache(v35);
  v37 = 0LL;
  v38 = *((_DWORD *)ObjectCache + 1);
  if ( v38 )
  {
    v37 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v37;
    *((_DWORD *)ObjectCache + 1) = v38 - 1;
  }
  if ( v37 || (v37 = HeapAlloc(WPF::g_processHeap, 0, 0x48uLL)) != 0LL )
  {
    v65 = v63;
    v67 = v64;
    v66 = v34;
    v68 = v28;
    v39 = (struct CRenderingEffect *)CCommonRenderingEffect::CCommonRenderingEffect(
                                       (__int64)v37,
                                       &v72,
                                       (__int64)&v67,
                                       &v70,
                                       (__int64)&v65);
  }
  else
  {
    v39 = 0LL;
  }
  v102 = v39;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v102);
  if ( v39 )
  {
    CDrawListEntryBuilder::Begin(
      (CDrawListEntryBuilder *)v105,
      (const struct DrawListEntryBuilderSetupParams *)&v74,
      v39);
    do
    {
      memset_0(&v88, 0, 0x20uLL);
      v41 = v92;
      v42 = *v92;
      v89 = *((_DWORD *)v92 + 11);
      v90 = v90 & 0xF9 | ~(unsigned __int8)*(_DWORD *)(v18 + 4) & 2 | ~(4 * *(_DWORD *)(v18 + 4)) & 4;
      v88 = v42;
      memset_0(&v99, 0, 0x20uLL);
      *(_OWORD *)&v100.m256i_u64[2] = 0LL;
      memset_0(v106, 0, 0x68uLL);
      v43 = 0LL;
      if ( *(_DWORD *)v18 )
      {
        v44 = 7;
        HIDWORD(v85) = *((_DWORD *)v41 + 15);
        *(float *)&v45 = *((float *)&v85 + 3) * *((float *)v41 + 13);
        *(float *)&v85 = *((float *)&v85 + 3) * *((float *)v41 + 12);
        *(_QWORD *)((char *)&v85 + 4) = __PAIR64__(*((float *)&v85 + 3) * *((float *)v41 + 14), v45);
        v99 = v85;
        if ( *((_DWORD *)v41 + 36) < 7u )
          v44 = *((_DWORD *)v41 + 36);
        if ( v44 < *(_DWORD *)(v18 + 12) )
        {
          v57 = *(_DWORD *)(v18 + 8) + v44;
          if ( v57 >= *((_QWORD *)this + 12) )
          {
            gsl::details::terminate((gsl::details *)v57);
            __debugbreak();
          }
          v100.m256i_i64[1] = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v57);
        }
        if ( (_QWORD)v72 )
        {
          if ( v8 )
          {
            CPrimitiveGroupDrawListGenerator::CalculatePrimitiveToBitmap(
              (const struct CDrawListBitmap *)&v72,
              (const struct D2D_MATRIX_3X2_F *)(v41 + 4),
              (struct Matrix3x3 *)v106);
          }
          else
          {
            v106[0] = *((_DWORD *)v41 + 16);
            v46 = *((_DWORD *)v41 + 17);
            v106[2] = 0;
            v106[1] = v46;
            v106[3] = *((_DWORD *)v41 + 18);
            v47 = *((_DWORD *)v41 + 19);
            v106[5] = 0;
            v106[4] = v47;
            v106[6] = *((_DWORD *)v41 + 20);
            v106[7] = *((_DWORD *)v41 + 21);
            v106[8] = 1065353216;
          }
          v107 = *(__int128 *)((char *)v41 + 88);
        }
        if ( (_QWORD)v70 )
        {
          if ( v8 )
          {
            CPrimitiveGroupDrawListGenerator::CalculatePrimitiveToBitmap(
              (const struct CDrawListBitmap *)&v70,
              (const struct D2D_MATRIX_3X2_F *)((char *)v41 + 104),
              (struct Matrix3x3 *)v108);
          }
          else
          {
            v108[0] = *((_DWORD *)v41 + 26);
            v58 = *((_DWORD *)v41 + 27);
            v108[2] = 0;
            v108[1] = v58;
            v108[3] = *((_DWORD *)v41 + 28);
            v59 = *((_DWORD *)v41 + 29);
            v108[5] = 0;
            v108[4] = v59;
            v108[6] = *((_DWORD *)v41 + 30);
            v108[7] = *((_DWORD *)v41 + 31);
            v108[8] = 1065353216;
          }
          v109 = v41[8];
        }
        *(_QWORD *)&v87 = 2LL;
        *((_QWORD *)&v87 + 1) = v106;
        v43 = (const struct PrimitiveVertexAttributesDesc *)&v99;
        *(_OWORD *)&v100.m256i_u64[2] = v87;
      }
      v48 = CDrawListEntryBuilder::Insert(
              (CDrawListEntryBuilder *)v105,
              v8,
              (const struct PrimitiveGeometryDesc *)&v88,
              v43,
              (const struct D2D_MATRIX_3X2_F *)(v41 + 1));
      v12 = v48;
      if ( v48 < 0 )
      {
        v61 = 618;
        goto LABEL_91;
      }
    }
    while ( CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v91) );
    v48 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v105);
    v12 = v48;
    if ( v48 >= 0 )
    {
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v102);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v70 + 1);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v70);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v72 + 1);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v72);
      goto LABEL_43;
    }
    v61 = 622;
LABEL_91:
    v60 = v48;
  }
  else
  {
    v12 = -2147024882;
    v61 = 524;
    v60 = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v60, v61);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v102);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v70 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v70);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v72 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v72);
LABEL_45:
  CShapePtr::Release((CShapePtr *)&v82);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v105);
  return v12;
}
