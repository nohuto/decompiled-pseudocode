/*
 * XREFs of ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180070D54
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800CE9E0 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180018E34 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800512F0 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z @ 0x1800520AC (-IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005293C (-Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ??8@YA_NAEBURenderTargetInfo@@0@Z @ 0x180052F04 (--8@YA_NAEBURenderTargetInfo@@0@Z.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x18006EEDC (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006F7D4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x180070C78 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ?FromD2D1ExtendMode@ExtendMode@@YA?AW4Enum@1@W4D2D1_EXTEND_MODE@@@Z @ 0x180071320 (-FromD2D1ExtendMode@ExtendMode@@YA-AW4Enum@1@W4D2D1_EXTEND_MODE@@@Z.c)
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x180071334 (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x180071354 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x180071388 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800713C8 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x180073B38 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180073C40 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180076050 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180079BAC (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18007A8E8 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180085E5C (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800915B4 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180091838 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800B55D8 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7F40 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C57A0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CC07C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800D2B90 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x1801B0768 (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?CalculatePrimitiveToBitmap@CPrimitiveGroupDrawListGenerator@@CAXAEBVCDrawListBitmap@@AEBUD2D_MATRIX_3X2_F@@PEAVMatrix3x3@@@Z @ 0x180258164 (-CalculatePrimitiveToBitmap@CPrimitiveGroupDrawListGenerator@@CAXAEBVCDrawListBitmap@@AEBUD2D_MA.c)
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x180258254 (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::GenerateDrawList(
        CPrimitiveGroupDrawListGenerator *this,
        struct CDrawingContext *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v7; // ecx
  char v8; // r15
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
  int v23; // ecx
  char v24; // al
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rcx
  char v28; // r13
  int v29; // ecx
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
  __int64 v43; // rdx
  __int64 v44; // r8
  const struct PrimitiveVertexAttributesDesc *v45; // r9
  unsigned int v46; // ecx
  unsigned int v47; // xmm1_4
  int v48; // xmm1_4
  int v49; // xmm1_4
  int v50; // eax
  unsigned int v52; // ebx
  int v53; // edi
  __int64 v54; // rcx
  unsigned int v55; // xmm1_4
  int v56; // xmm1_4
  int v57; // eax
  unsigned int v58; // ecx
  unsigned __int64 v59; // rcx
  int v60; // xmm1_4
  int v61; // xmm1_4
  int v62; // r9d
  unsigned int v63; // [rsp+20h] [rbp-E0h]
  bool v64[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v65; // [rsp+34h] [rbp-CCh]
  __int16 v66; // [rsp+38h] [rbp-C8h]
  __int16 v67; // [rsp+40h] [rbp-C0h] BYREF
  char v68; // [rsp+42h] [rbp-BEh]
  __int16 v69; // [rsp+50h] [rbp-B0h] BYREF
  char v70; // [rsp+52h] [rbp-AEh]
  unsigned int v71; // [rsp+60h] [rbp-A0h]
  __int128 v72; // [rsp+68h] [rbp-98h] BYREF
  char v73; // [rsp+78h] [rbp-88h]
  __int128 v74; // [rsp+80h] [rbp-80h] BYREF
  char v75; // [rsp+90h] [rbp-70h]
  int v76; // [rsp+98h] [rbp-68h] BYREF
  float v77; // [rsp+9Ch] [rbp-64h] BYREF
  float v78; // [rsp+A0h] [rbp-60h] BYREF
  BOOL v79; // [rsp+A4h] [rbp-5Ch]
  __int128 *v80; // [rsp+A8h] [rbp-58h]
  int v81; // [rsp+B0h] [rbp-50h]
  char v82; // [rsp+B4h] [rbp-4Ch]
  __int128 v83; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v84; // [rsp+C8h] [rbp-38h] BYREF
  char v85; // [rsp+D0h] [rbp-30h]
  char v86; // [rsp+D8h] [rbp-28h]
  __int128 v87; // [rsp+E0h] [rbp-20h]
  CDrawListCache *v88; // [rsp+F0h] [rbp-10h]
  __int128 v89; // [rsp+F8h] [rbp-8h] BYREF
  int v90; // [rsp+108h] [rbp+8h]
  __int64 v91; // [rsp+10Ch] [rbp+Ch]
  int v92; // [rsp+114h] [rbp+14h]
  __int128 v93; // [rsp+118h] [rbp+18h]
  _BYTE v94[8]; // [rsp+128h] [rbp+28h] BYREF
  __int128 *v95; // [rsp+130h] [rbp+30h]
  _OWORD v96[4]; // [rsp+150h] [rbp+50h] BYREF
  int v97; // [rsp+190h] [rbp+90h]
  _BYTE v98[64]; // [rsp+1A0h] [rbp+A0h] BYREF
  int v99; // [rsp+1E0h] [rbp+E0h]
  __int128 v100; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v101[48]; // [rsp+200h] [rbp+100h]
  struct CRenderingEffect *v102; // [rsp+238h] [rbp+138h] BYREF
  int v103; // [rsp+240h] [rbp+140h]
  __int128 v104; // [rsp+248h] [rbp+148h] BYREF
  _BYTE v105[2304]; // [rsp+260h] [rbp+160h] BYREF
  _DWORD v106[9]; // [rsp+B60h] [rbp+A60h] BYREF
  __int128 v107; // [rsp+B84h] [rbp+A84h]
  _DWORD v108[9]; // [rsp+B94h] [rbp+A94h] BYREF
  __int128 v109; // [rsp+BB8h] [rbp+AB8h]

  v88 = a4;
  memset_0(&v76, 0, 0x20uLL);
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v105);
  v84 = 0LL;
  v85 = 0;
  v83 = 0LL;
  v86 = 0;
  v99 = 0;
  if ( !operator==((__int64)this + 40, (__int64)a2 + 392) )
  {
    v12 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003304315, 0x13Du, 0LL);
    goto LABEL_45;
  }
  ++dword_18033C850;
  CDrawListCache::Invalidate(a4);
  if ( !CDrawingContext::IsWarpFastPathEnabled(a2) )
    goto LABEL_3;
  if ( !CPrimitiveGroupDrawListGenerator::CanUseWarpExtension(this) )
    goto LABEL_3;
  v8 = 1;
  if ( *((_DWORD *)a2 + 64) == 4 )
    goto LABEL_3;
  v52 = 0;
  v53 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, struct CRenderingEffect **))(**((_QWORD **)a2 + 44) + 24LL))(
                      *((_QWORD *)a2 + 44),
                      &v102)
                  + 8);
  if ( *((_DWORD *)this + 16) )
  {
    while ( 1 )
    {
      v54 = *(_QWORD *)(*((_QWORD *)this + 14) + 24LL * v52 + 8);
      (*(void (__fastcall **)(__int64, struct CRenderingEffect **))(*(_QWORD *)v54 + 24LL))(v54, &v102);
      if ( v103 != v53 )
        break;
      if ( ++v52 >= *((_DWORD *)this + 16) )
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
        goto LABEL_68;
      case 5:
        v10 = 4;
        break;
      case 6:
LABEL_68:
        v10 = 3;
        break;
    }
  }
LABEL_6:
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 480), (struct CMILMatrix *)v98);
  v12 = 0;
  if ( !v8 )
  {
    CpuClip = CDrawingContext::GetCpuClip((const struct CVisualTree **)a2, v11, (struct CCpuClip *)&v83);
    v12 = CpuClip;
    if ( CpuClip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, CpuClip, 0x175u, 0LL);
      goto LABEL_45;
    }
  }
  v15 = *((_DWORD *)a2 + 63) == 0;
  v76 = 2;
  v82 = 1;
  v79 = !v15;
  v80 = &v83;
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v98, &v77, &v78);
  v16 = *((_QWORD *)this + 3);
  v17 = 0;
  v71 = 0;
  if ( !*(_DWORD *)(v16 + 8) )
  {
LABEL_44:
    CDrawListCache::Update(v88, a2, (struct CDrawListEntryBuilder *)v105);
    goto LABEL_45;
  }
  while ( 1 )
  {
    v18 = *(_QWORD *)v16 + 144LL * v17;
    CPrimitiveGroupDrawListGenerator::GetIteratorForState((__int64)this, (__int64)v94, v17);
    v19 = 32;
    v81 = 32;
    if ( (*(_BYTE *)(v18 + 4) & 0x20) == 0 )
      break;
    if ( v86 )
    {
      CShapePtr::Release((CShapePtr *)&v84);
      v86 = 0;
    }
    HIDWORD(v100) = 0;
    *(_DWORD *)&v101[40] = 0;
    v97 = 0;
    v55 = *((_DWORD *)v95 + 5);
    LODWORD(v100) = *((_DWORD *)v95 + 4);
    *(_DWORD *)v101 = *((_DWORD *)v95 + 6);
    *(_QWORD *)((char *)&v100 + 4) = v55;
    v56 = *((_DWORD *)v95 + 7);
    *(_OWORD *)&v101[8] = 0LL;
    *(_QWORD *)&v101[24] = 1065353216LL;
    *(_DWORD *)&v101[32] = *((_DWORD *)v95 + 8);
    *(_DWORD *)&v101[44] = 1065353216;
    *(_DWORD *)&v101[4] = v56;
    *(_DWORD *)&v101[36] = *((_DWORD *)v95 + 9);
    v97 = 0;
    v96[0] = v100;
    v96[1] = *(_OWORD *)v101;
    v96[2] = *(_OWORD *)&v101[16];
    v96[3] = *(_OWORD *)&v101[32];
    v104 = *v95;
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v106, (const struct MilRectF *)&v104);
    v57 = CCpuClip::AddPrimitiveClip((CCpuClip *)&v83, (const struct CShape *)v106, (const struct CMILMatrix *)v96);
    v12 = v57;
    if ( v57 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x19Du, 0LL);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v106);
      goto LABEL_45;
    }
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v106);
LABEL_43:
    v16 = *((_QWORD *)this + 3);
    v17 = v71 + 1;
    v71 = v17;
    if ( v17 >= *(_DWORD *)(v16 + 8) )
      goto LABEL_44;
  }
  if ( ((_QWORD)v83 || v84) && !v79 )
  {
    if ( !CCpuClip::IsAxisAlignedRectangle((CCpuClip *)&v83)
      || !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v98) )
    {
      v82 = 1;
      goto LABEL_13;
    }
    v19 = 96;
    v81 = 96;
  }
  v82 = 0;
LABEL_13:
  v20 = *(_DWORD *)v18 == 0;
  v75 = 0;
  v74 = 0LL;
  v73 = 0;
  v72 = 0LL;
  if ( !v20 )
  {
    v21 = *(unsigned int *)(v18 + 40);
    if ( (unsigned int)v21 < *((_DWORD *)this + 16) )
    {
      CDrawListBitmap::operator=(&v74, *((_QWORD *)this + 14) + 24 * v21);
      if ( CDrawListBitmap::IsSwapChain((CDrawListBitmap *)&v74, v64) )
      {
        v19 |= 0x10u;
        v81 = v19;
        if ( v64[0] )
        {
          v19 |= 0x100u;
          v81 = v19;
        }
      }
    }
    v22 = *(unsigned int *)(v18 + 56);
    if ( (unsigned int)v22 < *((_DWORD *)this + 20) )
    {
      CDrawListBitmap::operator=(&v72, *((_QWORD *)this + 15) + 24 * v22);
      if ( CDrawListBitmap::IsSwapChain((CDrawListBitmap *)&v72, v64) )
      {
        v19 |= 0x10u;
        v81 = v19;
        if ( v64[0] )
        {
          v19 |= 0x100u;
          v81 = v19;
        }
      }
    }
  }
  if ( (*(_BYTE *)(v18 + 4) & 0x10) != 0 )
    v81 = v19 | 1;
  v23 = 0;
  if ( v10 )
    v23 = *(_DWORD *)(v18 + 44);
  v24 = InterpolationMode::FromD2D1InterpolationMode(v23);
  v25 = *(unsigned int *)(v18 + 48);
  LOBYTE(v66) = v24;
  v26 = ExtendMode::FromD2D1ExtendMode(v25);
  v27 = *(unsigned int *)(v18 + 52);
  HIBYTE(v66) = v26;
  v28 = ExtendMode::FromD2D1ExtendMode(v27);
  if ( v10 )
    v29 = *(_DWORD *)(v18 + 60);
  else
    v29 = 0;
  v30 = InterpolationMode::FromD2D1InterpolationMode(v29);
  v31 = *(unsigned int *)(v18 + 64);
  LOBYTE(v65) = v30;
  v32 = ExtendMode::FromD2D1ExtendMode(v31);
  v33 = *(unsigned int *)(v18 + 68);
  HIBYTE(v65) = v32;
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
  if ( v37 || (v37 = DefaultHeap::Alloc(0x48uLL)) != 0LL )
  {
    v67 = v65;
    v69 = v66;
    v68 = v34;
    v70 = v28;
    v39 = (struct CRenderingEffect *)CCommonRenderingEffect::CCommonRenderingEffect(v37, &v74, &v69, &v72, &v67);
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
      (const struct DrawListEntryBuilderSetupParams *)&v76,
      v39);
    do
    {
      v41 = v95;
      v91 = 0LL;
      v92 = 0;
      v42 = *v95;
      v90 = *((_DWORD *)v95 + 11);
      BYTE4(v91) = ~(unsigned __int8)*(_DWORD *)(v18 + 4) & 2 | ~(4 * *(_DWORD *)(v18 + 4)) & 4;
      v89 = v42;
      memset_0(&v100, 0, 0x28uLL);
      *(_OWORD *)&v101[24] = 0LL;
      memset_0(v106, 0, 0x68uLL);
      v45 = 0LL;
      if ( *(_DWORD *)v18 )
      {
        v46 = 7;
        HIDWORD(v87) = *((_DWORD *)v41 + 15);
        *(float *)&v47 = *((float *)&v87 + 3) * *((float *)v41 + 13);
        *(float *)&v87 = *((float *)&v87 + 3) * *((float *)v41 + 12);
        *(_QWORD *)((char *)&v87 + 4) = __PAIR64__(*((float *)&v87 + 3) * *((float *)v41 + 14), v47);
        v100 = v87;
        if ( *((_DWORD *)v41 + 36) < 7u )
          v46 = *((_DWORD *)v41 + 36);
        if ( v46 < *(_DWORD *)(v18 + 12) )
        {
          v59 = *(_DWORD *)(v18 + 8) + v46;
          if ( v59 >= *((_QWORD *)this + 12) )
          {
            ((void (__fastcall *)(unsigned __int64, __int64, __int64, _QWORD))`gsl::details::get_terminate_handler'::`2'::handler)(
              v59,
              v43,
              v44,
              0LL);
            __debugbreak();
          }
          *(_QWORD *)&v101[8] = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v59);
        }
        if ( (_QWORD)v74 )
        {
          if ( v8 )
          {
            CPrimitiveGroupDrawListGenerator::CalculatePrimitiveToBitmap(
              (const struct CDrawListBitmap *)&v74,
              (const struct D2D_MATRIX_3X2_F *)(v41 + 4),
              (struct Matrix3x3 *)v106);
          }
          else
          {
            v106[0] = *((_DWORD *)v41 + 16);
            v48 = *((_DWORD *)v41 + 17);
            v106[2] = 0;
            v106[1] = v48;
            v106[3] = *((_DWORD *)v41 + 18);
            v49 = *((_DWORD *)v41 + 19);
            v106[5] = 0;
            v106[4] = v49;
            v106[6] = *((_DWORD *)v41 + 20);
            v106[7] = *((_DWORD *)v41 + 21);
            v106[8] = 1065353216;
          }
          v107 = *(__int128 *)((char *)v41 + 88);
        }
        if ( (_QWORD)v72 )
        {
          if ( v8 )
          {
            CPrimitiveGroupDrawListGenerator::CalculatePrimitiveToBitmap(
              (const struct CDrawListBitmap *)&v72,
              (const struct D2D_MATRIX_3X2_F *)((char *)v41 + 104),
              (struct Matrix3x3 *)v108);
          }
          else
          {
            v108[0] = *((_DWORD *)v41 + 26);
            v60 = *((_DWORD *)v41 + 27);
            v108[2] = 0;
            v108[1] = v60;
            v108[3] = *((_DWORD *)v41 + 28);
            v61 = *((_DWORD *)v41 + 29);
            v108[5] = 0;
            v108[4] = v61;
            v108[6] = *((_DWORD *)v41 + 30);
            v108[7] = *((_DWORD *)v41 + 31);
            v108[8] = 1065353216;
          }
          v109 = v41[8];
        }
        *(_QWORD *)&v93 = 2LL;
        *((_QWORD *)&v93 + 1) = v106;
        v45 = (const struct PrimitiveVertexAttributesDesc *)&v100;
        *(_OWORD *)&v101[24] = v93;
      }
      v50 = CDrawListEntryBuilder::Insert(
              (CDrawListEntryBuilder *)v105,
              v8,
              (const struct PrimitiveGeometryDesc *)&v89,
              v45,
              (const struct D2D_MATRIX_3X2_F *)(v41 + 1));
      v12 = v50;
      if ( v50 < 0 )
      {
        v63 = 597;
        goto LABEL_91;
      }
    }
    while ( CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v94) );
    v50 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v105);
    v12 = v50;
    if ( v50 >= 0 )
    {
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v102);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v72 + 1);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v72);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v74 + 1);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v74);
      goto LABEL_43;
    }
    v63 = 601;
LABEL_91:
    v62 = v50;
  }
  else
  {
    v12 = -2147024882;
    v62 = -2147024882;
    v63 = 503;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v62, v63, 0LL);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v102);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v72 + 1);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v72);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v74 + 1);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v74);
LABEL_45:
  CShapePtr::Release((CShapePtr *)&v84);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v105);
  return v12;
}
