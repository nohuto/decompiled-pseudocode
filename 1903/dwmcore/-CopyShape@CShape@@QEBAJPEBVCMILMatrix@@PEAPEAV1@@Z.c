/*
 * XREFs of ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800677D0
 * Callers:
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x180018CB4 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180067570 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800690F0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z @ 0x1800AD240 (-GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD330 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1800CC0E0 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800CDE8C (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?CopyRegionShape@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800EBAB8 (-CopyRegionShape@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x1801B0768 (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1801B0AA8 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801D6350 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801FF39C (-AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180028290 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18003A44C (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegio.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180050470 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180051114 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ??0CRegionShape@@QEAA@XZ @ 0x180052E5C (--0CRegionShape@@QEAA@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180061BF0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180066470 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Reset@CRectanglesShape@@IEAAXXZ @ 0x1800830F8 (-Reset@CRectanglesShape@@IEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BuildFromCRegion@CRegionShape@@QEAAJAEBVCRegion@@@Z @ 0x1800AE398 (-BuildFromCRegion@CRegionShape@@QEAAJAEBVCRegion@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800AEEF0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7F40 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??0CRegion@@QEAA@XZ @ 0x1800D6524 (--0CRegion@@QEAA@XZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800E47B4 (--0CThreadContext@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_N_N@Z @ 0x1800EB79C (-Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_N_N@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     MIDL_user_allocate @ 0x18015B390 (MIDL_user_allocate.c)
 *     ??1CRegion@@QEAA@XZ @ 0x18015F9D4 (--1CRegion@@QEAA@XZ.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18024BE38 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x18024D75C (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 */

__int64 __fastcall CShape::CopyShape(CShape *this, const struct CMILMatrix *a2, struct CShape **a3)
{
  CMILMatrix *v4; // rbp
  int v6; // edi
  char *v7; // r12
  SIZE_T v8; // rbx
  HANDLE ProcessHeap; // rax
  char *v10; // rax
  unsigned int v11; // ecx
  unsigned int i; // esi
  char *v13; // rbx
  bool v14; // dl
  CRegionShape *v15; // rax
  unsigned int v16; // ecx
  CRegionShape *v17; // rbx
  struct CShape *v18; // rsi
  int v19; // ebx
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  CComplexShape *v24; // rax
  unsigned int v25; // ecx
  struct CShape *v26; // rax
  int Current; // eax
  __int64 v28; // r8
  _DWORD *v29; // rcx
  _QWORD *v30; // rbx
  int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // esi
  __int64 v34; // rcx
  int v35; // eax
  unsigned int v36; // ecx
  CRegionShape *v37; // rax
  unsigned int v38; // ecx
  CRegionShape *v39; // rbx
  struct CShape *v40; // rax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  CPathSegmentsShape *v44; // rax
  unsigned int v45; // ecx
  struct CShape *v46; // rax
  CRegionShape *v47; // rax
  CRegionShape *v48; // rbx
  CRegionShape *v49; // rax
  int v50; // eax
  unsigned int v51; // ecx
  _DWORD *Value; // rdi
  CThreadContext *v53; // rax
  unsigned int v54; // ecx
  CThreadContext *v55; // rax
  int v56; // ecx
  unsigned int v57; // ecx
  __int64 v58; // r13
  void *v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rax
  unsigned int v62; // ebp
  unsigned int v63; // ecx
  int v64; // eax
  struct CShape *v65; // rax
  struct CShape *v66; // rcx
  HANDLE v67; // rax
  __int64 v69; // r8
  unsigned int v70; // [rsp+20h] [rbp-D8h]
  unsigned int v71; // [rsp+30h] [rbp-C8h] BYREF
  void *Src; // [rsp+38h] [rbp-C0h] BYREF
  struct ID2D1Geometry *v73; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v74; // [rsp+48h] [rbp-B0h] BYREF
  _BYTE v75[80]; // [rsp+60h] [rbp-98h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+0h]

  *(_QWORD *)&v74 = a2;
  v73 = 0LL;
  *a3 = 0LL;
  v4 = a2;
  v6 = 0;
  v7 = 0LL;
  if ( !a2 || CMILMatrix::IsIdentity<0>((__int64)a2) )
  {
    v41 = (*(__int64 (__fastcall **)(CShape *))(*(_QWORD *)this + 8LL))(this);
    if ( !v41 )
    {
      v65 = (struct CShape *)MIDL_user_allocate(0x50uLL);
      v66 = v65;
      if ( v65 )
      {
        *((_QWORD *)v65 + 1) = 0LL;
        *(_QWORD *)v65 = &CRoundedRectangleShape::`vftable';
        *((_OWORD *)v65 + 1) = *((_OWORD *)this + 1);
        *((_OWORD *)v65 + 2) = *((_OWORD *)this + 2);
        *((_OWORD *)v65 + 3) = *((_OWORD *)this + 3);
        *((_DWORD *)v65 + 16) = *((_DWORD *)this + 16);
        *((_QWORD *)v65 + 9) = 0LL;
      }
      else
      {
        v66 = 0LL;
      }
      *a3 = v66;
      if ( !v66 )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024882, 0xEBu, 0LL);
        goto LABEL_97;
      }
      goto LABEL_19;
    }
    v42 = v41 - 1;
    if ( v42 )
    {
      v43 = v42 - 1;
      if ( v43 )
      {
        if ( v43 == 2 )
        {
          v44 = (CPathSegmentsShape *)MIDL_user_allocate(0x18uLL);
          if ( !v44
            || (v46 = CPathSegmentsShape::CPathSegmentsShape(v44, *((const struct CPathData **)this + 2))) == 0LL )
          {
            v6 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, -2147024882, 0x112u, 0LL);
            goto LABEL_97;
          }
          *a3 = v46;
        }
        goto LABEL_19;
      }
      v47 = (CRegionShape *)MIDL_user_allocate(0x60uLL);
      v48 = v47;
      if ( v47 )
      {
        memset_0(v47, 0, 0x60uLL);
        v49 = CRegionShape::CRegionShape(v48);
        v18 = v49;
        if ( v49 )
        {
          v50 = CRegionShape::BuildFromCRegion(v49, (CShape *)((char *)this + 16));
          v6 = v50;
          if ( v50 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x105u, 0LL);
            goto LABEL_60;
          }
          *a3 = v18;
          goto LABEL_19;
        }
      }
      else
      {
        v18 = 0LL;
      }
      v70 = 260;
LABEL_59:
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, v70, 0LL);
LABEL_60:
      if ( v18 )
        CRegionShape::`vector deleting destructor'(v18, 1);
      goto LABEL_95;
    }
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v53 = (CThreadContext *)operator new(0x138uLL);
      if ( !v53 || (v55 = CThreadContext::CThreadContext(v53), (Value = v55) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, -2147024882, 0x42u, 0LL);
        ModuleFailFastForHRESULT(2147942414LL, retaddr, v69);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v55);
    }
    v56 = Value[3];
    v30 = 0LL;
    if ( v56 )
    {
      v30 = (_QWORD *)*((_QWORD *)Value + 2);
      *((_QWORD *)Value + 2) = *v30;
      Value[3] = v56 - 1;
    }
    if ( !v30 )
    {
      v30 = DefaultHeap::Alloc(0x48uLL);
      if ( !v30 )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, -2147024882, 0xF5u, 0LL);
        goto LABEL_97;
      }
    }
    v30[1] = 0LL;
    *v30 = &CRectanglesShape::`vftable';
    v6 = 0;
    *((_DWORD *)v30 + 8) = 1;
    v30[2] = v30 + 6;
    v30[3] = v30 + 6;
    *(_QWORD *)((char *)v30 + 36) = 1LL;
    v30[8] = 0LL;
    v58 = *((unsigned int *)this + 10);
    if ( (_DWORD)v58 )
    {
      v59 = (void *)v30[2];
      Src = (void *)*((_QWORD *)this + 2);
      *((_DWORD *)v30 + 10) = 0;
      if ( v59 != (void *)v30[3] )
      {
        operator delete(v59);
        v30[2] = v30[3];
        *((_DWORD *)v30 + 9) = *((_DWORD *)v30 + 8);
      }
      v60 = v30[8];
      if ( v60 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
        v30[8] = 0LL;
      }
      v61 = *((unsigned int *)v30 + 10);
      v62 = v61 + v58;
      if ( (int)v61 + (int)v58 >= (unsigned int)v61 )
      {
        if ( v62 > *((_DWORD *)v30 + 9) )
        {
          v64 = DynArrayImpl<0>::AddMultipleAndSet(v30 + 2, 16LL, (unsigned int)v58, Src);
          v6 = v64;
          if ( v64 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v64, 0xC3u, 0LL);
          v4 = (CMILMatrix *)v74;
        }
        else
        {
          memcpy_0((void *)(v30[2] + 16 * v61), Src, 16 * v58);
          *((_DWORD *)v30 + 10) = v62;
          v4 = (CMILMatrix *)v74;
        }
      }
      else
      {
        v6 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, -2147024362, 0xB8u, 0LL);
        v4 = (CMILMatrix *)v74;
      }
    }
    else
    {
      CRectanglesShape::Reset((CRectanglesShape *)v30);
    }
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v6, 0xF7u, 0LL);
      goto LABEL_87;
    }
    *a3 = (struct CShape *)v30;
LABEL_19:
    if ( !*a3 )
    {
      v22 = (*(__int64 (__fastcall **)(CShape *, CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)this + 24LL))(
              this,
              v4,
              &v73);
      v6 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x152u, 0LL);
      }
      else
      {
        v24 = (CComplexShape *)operator new(0x18uLL);
        if ( v24 && (v26 = CComplexShape::CComplexShape(v24, v73)) != 0LL )
        {
          *a3 = v26;
        }
        else
        {
          v6 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, -2147024882, 0x155u, 0LL);
        }
      }
    }
    goto LABEL_95;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(CShape *, unsigned int *))(*(_QWORD *)this + 40LL))(this, &v71)
    || !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v4) )
  {
    goto LABEL_19;
  }
  if ( !v71 )
  {
    v37 = (CRegionShape *)MIDL_user_allocate(0x60uLL);
    v39 = v37;
    if ( v37 )
    {
      memset_0(v37, 0, 0x60uLL);
      v40 = CRegionShape::CRegionShape(v39);
    }
    else
    {
      v40 = 0LL;
    }
    *a3 = v40;
    if ( !v40 )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, -2147024882, 0x14Cu, 0LL);
      goto LABEL_97;
    }
    goto LABEL_19;
  }
  v8 = 16LL * v71;
  if ( !is_mul_ok(v71, 0x10uLL) )
    v8 = -1LL;
  ProcessHeap = GetProcessHeap();
  v10 = (char *)HeapAlloc(ProcessHeap, 0, v8);
  v7 = v10;
  if ( !v10 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x11Eu, 0LL);
    goto LABEL_97;
  }
  (*(void (__fastcall **)(CShape *, char *, _QWORD))(*(_QWORD *)this + 48LL))(this, v10, v71);
  for ( i = 0; i < v71; *(_OWORD *)v13 = v74 )
  {
    v13 = &v7[16 * i];
    CMILMatrix::Transform2DBoundsHelper<0>(v4, (__int64)v13, (float *)&v74);
    ++i;
  }
  if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)this + 8LL))(this) == 2
    && CMILMatrix::Is2DAxisAlignedIntegerPreserving(v4, v14) )
  {
    v15 = (CRegionShape *)MIDL_user_allocate(0x60uLL);
    v17 = v15;
    if ( v15 )
    {
      memset_0(v15, 0, 0x60uLL);
      v18 = CRegionShape::CRegionShape(v17);
      if ( v18 )
      {
        CRegion::CRegion((CRegion *)v75);
        v19 = 0;
        if ( v71 )
        {
          while ( 1 )
          {
            CMilRectLFromMilRectF((int *)&v74, (__int64)&v7[16 * v19]);
            v20 = CRegion::AppendRects<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>>(
                    (FastRegion::CRegion *)v75,
                    (__int64)&v74,
                    1u);
            v6 = v20;
            if ( v20 < 0 )
              break;
            if ( ++v19 >= v71 )
              goto LABEL_18;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x135u, 0LL);
          CRegion::~CRegion((CRegion *)v75);
          goto LABEL_60;
        }
LABEL_18:
        CRegionShape::BuildFromCRegion(v18, (const struct CRegion *)v75);
        *a3 = v18;
        CRegion::~CRegion((CRegion *)v75);
        goto LABEL_19;
      }
    }
    else
    {
      v18 = 0LL;
    }
    v70 = 303;
    goto LABEL_59;
  }
  Current = CThreadContext::GetCurrent((struct CThreadContext **)&Src);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr, v28);
  v29 = Src;
  v30 = 0LL;
  v31 = *((_DWORD *)Src + 3);
  if ( v31 )
  {
    v30 = (_QWORD *)*((_QWORD *)Src + 2);
    *((_QWORD *)Src + 2) = *v30;
    v29[3] = v31 - 1;
  }
  if ( !v30 )
  {
    v30 = DefaultHeap::Alloc(0x48uLL);
    if ( !v30 )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, -2147024882, 0x141u, 0LL);
      goto LABEL_95;
    }
  }
  v30[1] = 0LL;
  *v30 = &CRectanglesShape::`vftable';
  *((_DWORD *)v30 + 8) = 1;
  v30[2] = v30 + 6;
  v30[3] = v30 + 6;
  *(_QWORD *)((char *)v30 + 36) = 1LL;
  v30[8] = 0LL;
  v33 = v71;
  *((_DWORD *)v30 + 10) = 0;
  DynArrayImpl<0>::ShrinkToSize(v30 + 2, 16LL);
  v34 = v30[8];
  if ( v34 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    v30[8] = 0LL;
  }
  v35 = DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
          v30 + 2,
          v7,
          v33);
  v6 = v35;
  if ( v35 >= 0 )
  {
    *a3 = (struct CShape *)v30;
    goto LABEL_19;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x143u, 0LL);
LABEL_87:
  CRectanglesShape::`scalar deleting destructor'((CRectanglesShape *)v30, 1);
LABEL_95:
  if ( v7 )
  {
    v67 = GetProcessHeap();
    HeapFree(v67, 0, v7);
  }
LABEL_97:
  if ( v73 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v73 + 16LL))(v73);
  return (unsigned int)v6;
}
