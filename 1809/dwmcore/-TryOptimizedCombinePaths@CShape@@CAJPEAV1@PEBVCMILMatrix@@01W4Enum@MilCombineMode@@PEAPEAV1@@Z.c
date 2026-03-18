/*
 * XREFs of ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180047930
 * Callers:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800457F0 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18006C438 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B4690 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800142B8 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     CanCombineToRegion @ 0x180015D7C (CanCombineToRegion.c)
 *     ?BuildFromCRegion@CRegionShape@@QEAAJAEBVCRegion@@@Z @ 0x180015E50 (-BuildFromCRegion@CRegionShape@@QEAAJAEBVCRegion@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180020564 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?DoesIntersectInclusive@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180025934 (-DoesIntersectInclusive@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800307F0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180030B00 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18003E3F0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??1?$unique_ptr@VCRegionShape@@U?$default_delete@VCRegionShape@@@std@@@std@@QEAA@XZ @ 0x18004872C (--1-$unique_ptr@VCRegionShape@@U-$default_delete@VCRegionShape@@@std@@@std@@QEAA@XZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180055610 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800580A0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180078FF4 (--0CThreadContext@@AEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18009B9D4 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A0628 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A60E4 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6FB4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A8A88 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800B10A8 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B6E30 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800DA754 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_N_N@Z @ 0x1800EF85C (-Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_N_N@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCRegionShape@@U?$default_delete@VCRegionShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800EFB58 (--1-$out_param_t@V-$unique_ptr@VCRegionShape@@U-$default_delete@VCRegionShape@@@std@@@std@@@deta.c)
 *     ?CopyRegionShape@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800EFB7C (-CopyRegionShape@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CShape::TryOptimizedCombinePaths(
        CShape *a1,
        __int64 a2,
        CShape *a3,
        float *a4,
        int a5,
        struct CShape **a6)
{
  struct CShape *v6; // rdi
  int v10; // ebx
  __int64 v11; // rdx
  float v12; // xmm1_4
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  struct CRectanglesShape *v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  _QWORD *v23; // rax
  unsigned int v24; // ecx
  _QWORD *v25; // rsi
  struct CObjectCache *v26; // rax
  char *v27; // rsi
  int v28; // edx
  unsigned int v29; // ecx
  bool v30; // dl
  _QWORD *v31; // rax
  _QWORD *v32; // rsi
  __int64 v33; // rax
  int v34; // eax
  unsigned int v35; // ecx
  _DWORD *Value; // rsi
  CThreadContext *v37; // rax
  unsigned int v38; // ecx
  CThreadContext *v39; // rax
  int v40; // ecx
  _QWORD *v41; // r14
  __int64 v42; // rcx
  __int64 v43; // rdx
  int v44; // eax
  unsigned int v45; // ecx
  _QWORD *v46; // rax
  unsigned int v47; // ecx
  _QWORD *v48; // rsi
  int v49; // eax
  unsigned int v50; // ecx
  int v51; // eax
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  int v55; // eax
  unsigned int v56; // ecx
  _QWORD *v57; // rax
  unsigned int v58; // ecx
  _QWORD *v59; // rsi
  struct CRectanglesShape *v60; // rcx
  int v61; // eax
  unsigned int v62; // ecx
  struct CObjectCache *v63; // rax
  char *v64; // rsi
  int v65; // edx
  struct CObjectCache *ObjectCache; // rax
  char *v67; // rsi
  int v68; // edx
  int v69; // eax
  unsigned int v70; // ecx
  int v71; // eax
  unsigned int v72; // ecx
  struct CObjectCache *v73; // rax
  char *v74; // rsi
  int v75; // edx
  unsigned int v77; // [rsp+20h] [rbp-E0h]
  unsigned int v78; // [rsp+20h] [rbp-E0h]
  unsigned int v79; // [rsp+20h] [rbp-E0h]
  unsigned int v80; // [rsp+20h] [rbp-E0h]
  _QWORD *v81; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_RECT_F v82; // [rsp+38h] [rbp-C8h] BYREF
  struct D2D_RECT_F v83; // [rsp+48h] [rbp-B8h] BYREF
  struct CRegionShape *v84[2]; // [rsp+58h] [rbp-A8h] BYREF
  char v85; // [rsp+68h] [rbp-98h]
  _DWORD *v86; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v87[18]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v88; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v89[18]; // [rsp+C8h] [rbp-38h] BYREF
  void *retaddr; // [rsp+158h] [rbp+58h]

  v6 = 0LL;
  v81 = 0LL;
  v10 = 0;
  *a6 = 0LL;
  if ( !a1 )
    goto LABEL_129;
  if ( (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a1 + 16LL))(a1)
    || !a3
    || (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a3 + 16LL))(a3) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a1 + 16LL))(a1) )
    {
LABEL_131:
      if ( a5 )
      {
        v60 = (struct CRectanglesShape *)(unsigned int)(a5 - 1);
        if ( a5 == 1 )
        {
          ObjectCache = CThreadContext::GetObjectCache(v60);
          v67 = 0LL;
          v68 = *((_DWORD *)ObjectCache + 1);
          if ( v68 )
          {
            v67 = (char *)*((_QWORD *)ObjectCache + 1);
            *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v67;
            *((_DWORD *)ObjectCache + 1) = v68 - 1;
          }
          if ( v67 || (v67 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL)) != 0LL )
          {
            *((_QWORD *)v67 + 1) = 0LL;
            *(_QWORD *)v67 = &CRectanglesShape::`vftable';
            *((_QWORD *)v67 + 2) = v67 + 48;
            *((_QWORD *)v67 + 3) = v67 + 48;
            *((_DWORD *)v67 + 8) = 1;
            *(_QWORD *)(v67 + 36) = 1LL;
            `vector constructor iterator'(
              v67 + 48,
              16LL,
              1LL,
              (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
            *((_QWORD *)v67 + 8) = 0LL;
            v6 = (struct CShape *)v67;
          }
          *a6 = v6;
          if ( !v6 )
          {
            v78 = 616;
            goto LABEL_168;
          }
        }
        else
        {
          if ( a5 != 2 )
            goto LABEL_169;
          if ( !a1 || (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a1 + 16LL))(a1) )
          {
            v63 = CThreadContext::GetObjectCache(v60);
            v64 = 0LL;
            v65 = *((_DWORD *)v63 + 1);
            if ( v65 )
            {
              v64 = (char *)*((_QWORD *)v63 + 1);
              *((_QWORD *)v63 + 1) = *(_QWORD *)v64;
              *((_DWORD *)v63 + 1) = v65 - 1;
            }
            if ( v64 || (v64 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL)) != 0LL )
            {
              *((_QWORD *)v64 + 1) = 0LL;
              *(_QWORD *)v64 = &CRectanglesShape::`vftable';
              *((_QWORD *)v64 + 2) = v64 + 48;
              *((_QWORD *)v64 + 3) = v64 + 48;
              *((_DWORD *)v64 + 8) = 1;
              *(_QWORD *)(v64 + 36) = 1LL;
              `vector constructor iterator'(
                v64 + 48,
                16LL,
                1LL,
                (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
              *((_QWORD *)v64 + 8) = 0LL;
              v6 = (struct CShape *)v64;
            }
            *a6 = v6;
            if ( !v6 )
            {
              v78 = 630;
              goto LABEL_168;
            }
          }
          else
          {
            v61 = CShape::CopyShape(a1, 0LL, a6);
            v10 = v61;
            if ( v61 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x282u);
          }
        }
      }
      else if ( !a1 || (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a1 + 16LL))(a1) )
      {
        if ( !a4 || CShape::IsAxisAlignedRectangle(a3) && (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(a4) )
        {
          v71 = CShape::CopyShape(a3, (const struct CMILMatrix *)a4, a6);
          v10 = v71;
          if ( v71 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v71, 0x251u);
        }
      }
      else
      {
        v69 = CShape::CopyShape(a1, 0LL, a6);
        v10 = v69;
        if ( v69 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, v69, 0x25Cu);
      }
      goto LABEL_169;
    }
LABEL_129:
    if ( !a3 || (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a3 + 16LL))(a3) )
    {
      v73 = CThreadContext::GetObjectCache(a1);
      v74 = 0LL;
      v75 = *((_DWORD *)v73 + 1);
      if ( v75 )
      {
        v74 = (char *)*((_QWORD *)v73 + 1);
        *((_QWORD *)v73 + 1) = *(_QWORD *)v74;
        *((_DWORD *)v73 + 1) = v75 - 1;
      }
      if ( v74 || (v74 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL)) != 0LL )
      {
        *((_QWORD *)v74 + 1) = 0LL;
        *(_QWORD *)v74 = &CRectanglesShape::`vftable';
        *((_QWORD *)v74 + 2) = v74 + 48;
        *((_QWORD *)v74 + 3) = v74 + 48;
        *((_DWORD *)v74 + 8) = 1;
        *(_QWORD *)(v74 + 36) = 1LL;
        `vector constructor iterator'(
          v74 + 48,
          16LL,
          1LL,
          (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
        *((_QWORD *)v74 + 8) = 0LL;
        v6 = (struct CShape *)v74;
      }
      *a6 = v6;
      if ( !v6 )
      {
        v78 = 568;
        goto LABEL_168;
      }
      goto LABEL_169;
    }
    goto LABEL_131;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(CShape *, struct D2D_RECT_F *))(*(_QWORD *)a1 + 40LL))(a1, &v83)
    || LODWORD(v83.left) != 1
    || !(*(unsigned __int8 (__fastcall **)(CShape *, struct D2D_RECT_F *))(*(_QWORD *)a3 + 40LL))(a3, &v83)
    || LODWORD(v83.left) != 1
    || a4
    && (!CMILMatrix::Is2DAffine<1>((__int64)a4, 1)
     || (v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4[1] - 0.0)) & _xmm), v12 >= 0.000081380211)
     || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4[4] - 0.0)) & _xmm) >= 0.000081380211)
    && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*a4 - 0.0)) & _xmm) >= 0.000081380211
     || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4[5] - 0.0)) & _xmm) >= 0.000081380211) )
  {
    if ( !CanCombineToRegion((__int64)a1, v11, (__int64)a3, (CMILMatrix *)a4) )
      goto LABEL_169;
    *(_QWORD *)&v82.left = 0LL;
    v84[0] = (struct CRegionShape *)&v82;
    v84[1] = 0LL;
    v85 = 1;
    v10 = CRegionShape::CopyRegionShape(a1, 0LL, &v84[1]);
    wil::details::out_param_t<std::unique_ptr<CRegionShape>>::~out_param_t<std::unique_ptr<CRegionShape>>(v84);
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v10, 0x2F3u);
      std::unique_ptr<CRegionShape>::~unique_ptr<CRegionShape>(&v82);
      goto LABEL_169;
    }
    *(_QWORD *)&v83.left = 0LL;
    v84[0] = (struct CRegionShape *)&v83;
    v84[1] = 0LL;
    v85 = 1;
    v10 = CRegionShape::CopyRegionShape(a3, (const struct CMILMatrix *)a4, &v84[1]);
    wil::details::out_param_t<std::unique_ptr<CRegionShape>>::~out_param_t<std::unique_ptr<CRegionShape>>(v84);
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v10, 0x2F6u);
      goto LABEL_126;
    }
    v86 = v87;
    v87[0] = 0;
    v55 = FastRegion::CRegion::Copy((FastRegion::CRegion *)&v86, (const struct CRegion *)(*(_QWORD *)&v82.left + 16LL));
    v10 = v55;
    if ( v55 < 0 )
    {
      v80 = 761;
      goto LABEL_123;
    }
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        v55 = FastRegion::CRegion::Intersect(
                (FastRegion::CRegion *)&v86,
                (const struct CRegion *)(*(_QWORD *)&v83.left + 16LL));
        v10 = v55;
        if ( v55 < 0 )
        {
          v80 = 767;
          goto LABEL_123;
        }
      }
      else if ( a5 == 2 )
      {
        v55 = FastRegion::CRegion::Subtract(
                (FastRegion::CRegion *)&v86,
                (const struct CRegion *)(*(_QWORD *)&v83.left + 16LL));
        v10 = v55;
        if ( v55 < 0 )
        {
          v80 = 771;
          goto LABEL_123;
        }
      }
    }
    else
    {
      v55 = FastRegion::CRegion::Union(
              (FastRegion::CRegion *)&v86,
              (const struct CRegion *)(*(_QWORD *)&v83.left + 16LL));
      v10 = v55;
      if ( v55 < 0 )
      {
        v80 = 775;
        goto LABEL_123;
      }
    }
    v57 = HeapAlloc(WPF::g_processHeap, 0, 0x60uLL);
    v59 = v57;
    if ( v57 )
    {
      memset_0(v57, 0, 0x60uLL);
      v59[1] = 0LL;
      v58 = (_DWORD)v59 + 24;
      *v59 = &CRegionShape::`vftable';
      v59[2] = v59 + 3;
      *((_DWORD *)v59 + 6) = 0;
      v59[11] = 0LL;
    }
    else
    {
      v59 = 0LL;
    }
    v81 = v59;
    if ( !v59 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, -2147024882, 0x30Cu);
LABEL_124:
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v86);
      goto LABEL_126;
    }
    v55 = CRegionShape::BuildFromCRegion((CRegionShape *)v59, (const struct CRegion *)&v86);
    v10 = v55;
    if ( v55 >= 0 )
    {
      v81 = 0LL;
      *a6 = (struct CShape *)v59;
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v86);
LABEL_126:
      std::unique_ptr<CRegionShape>::~unique_ptr<CRegionShape>(&v83);
      std::unique_ptr<CRegionShape>::~unique_ptr<CRegionShape>(&v82);
      goto LABEL_169;
    }
    v80 = 781;
LABEL_123:
    MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, v80);
    goto LABEL_124;
  }
  v13 = (*(__int64 (__fastcall **)(CShape *, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, &v82, 0LL);
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x296u);
    goto LABEL_169;
  }
  v15 = (*(__int64 (__fastcall **)(CShape *, struct D2D_RECT_F *, float *))(*(_QWORD *)a3 + 32LL))(a3, &v83, a4);
  v10 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x297u);
    goto LABEL_169;
  }
  switch ( a5 )
  {
    case 0:
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(&v82.left, &v83.left) || IsEmpty(&v83) )
      {
        v51 = CShape::CopyShape(a1, 0LL, a6);
        v10 = v51;
        if ( v51 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x2D1u);
        break;
      }
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(&v83.left, &v82.left) || IsEmpty(&v82) )
      {
        v49 = CShape::CopyShape(a3, (const struct CMILMatrix *)a4, a6);
        v10 = v49;
        if ( v49 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x2D5u);
        break;
      }
      if ( !CanCombineToRegion((__int64)a1, v43, (__int64)a3, (CMILMatrix *)a4) )
        break;
      v89[0] = 0;
      v86 = v87;
      v87[0] = 0;
      v88 = v89;
      v44 = CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
              (FastRegion::CRegion *)&v86,
              &v82.left);
      v10 = v44;
      if ( v44 < 0 )
      {
        v79 = 732;
      }
      else
      {
        *v88 = 0;
        v44 = CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
                (FastRegion::CRegion *)&v88,
                &v83.left);
        v10 = v44;
        if ( v44 < 0 )
        {
          v79 = 733;
        }
        else
        {
          v44 = FastRegion::CRegion::Union((FastRegion::CRegion *)&v86, (const struct CRegion *)&v88);
          v10 = v44;
          if ( v44 < 0 )
          {
            v79 = 735;
          }
          else
          {
            v46 = HeapAlloc(WPF::g_processHeap, 0, 0x60uLL);
            v48 = v46;
            if ( v46 )
            {
              memset_0(v46, 0, 0x60uLL);
              v48[1] = 0LL;
              v47 = (_DWORD)v48 + 24;
              *v48 = &CRegionShape::`vftable';
              v48[2] = v48 + 3;
              *((_DWORD *)v48 + 6) = 0;
              v48[11] = 0LL;
            }
            else
            {
              v48 = 0LL;
            }
            v81 = v48;
            if ( !v48 )
            {
              v10 = -2147024882;
              MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, -2147024882, 0x2E2u);
LABEL_94:
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v88);
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v86);
              break;
            }
            v44 = CRegionShape::BuildFromCRegion((CRegionShape *)v48, (const struct CRegion *)&v86);
            v10 = v44;
            if ( v44 >= 0 )
            {
              v81 = 0LL;
              *a6 = (struct CShape *)v48;
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v88);
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v86);
              break;
            }
            v79 = 739;
          }
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, v79);
      goto LABEL_94;
    case 1:
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v82, &v83);
      if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)a1 + 8LL))(a1) == 2
        && (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)a3 + 8LL))(a3) == 2
        && (!a4 || CMILMatrix::Is2DAxisAlignedIntegerPreserving((CMILMatrix *)a4, v30)) )
      {
        v31 = HeapAlloc(WPF::g_processHeap, 0, 0x60uLL);
        v32 = v31;
        if ( v31 )
        {
          memset_0(v31, 0, 0x60uLL);
          v32[1] = 0LL;
          v29 = (_DWORD)v32 + 24;
          *v32 = &CRegionShape::`vftable';
          v32[2] = v32 + 3;
          *((_DWORD *)v32 + 6) = 0;
          v32[11] = 0LL;
        }
        else
        {
          v32 = 0LL;
        }
        v81 = v32;
        if ( v32 )
        {
          v33 = CMilRectLFromMilRectF(v84, &v82);
          v34 = CRegionShape::BuildFromRects(v32, v33);
          v10 = v34;
          if ( v34 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x2A3u);
          }
          else
          {
            v81 = 0LL;
            *a6 = (struct CShape *)v32;
          }
          break;
        }
        v78 = 674;
LABEL_168:
        v10 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024882, v78);
        break;
      }
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v37 = (CThreadContext *)operator new(0x128uLL);
        if ( !v37 || (v39 = CThreadContext::CThreadContext(v37), (Value = v39) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, -2147024882, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v39);
      }
      v40 = Value[3];
      v41 = 0LL;
      if ( v40 )
      {
        v41 = (_QWORD *)*((_QWORD *)Value + 2);
        *((_QWORD *)Value + 2) = *v41;
        Value[3] = v40 - 1;
      }
      if ( v41 || (v41 = HeapAlloc(WPF::g_processHeap, 0, 0x48uLL)) != 0LL )
      {
        v41[1] = 0LL;
        *v41 = &CRectanglesShape::`vftable';
        *((_DWORD *)v41 + 8) = 1;
        v41[2] = v41 + 6;
        v41[3] = v41 + 6;
        *(_QWORD *)((char *)v41 + 36) = 1LL;
        v41[8] = 0LL;
        *((_DWORD *)v41 + 10) = 0;
        DynArrayImpl<0>::ShrinkToSize(v41 + 2, 16LL);
        v42 = v41[8];
        if ( v42 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
          v41[8] = 0LL;
        }
        *(struct D2D_RECT_F *)v84 = v82;
        DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
          v41 + 2,
          v84,
          1LL);
        v6 = (struct CShape *)v41;
      }
      *a6 = v6;
      if ( !v6 )
      {
        v78 = 681;
        goto LABEL_168;
      }
      break;
    case 2:
      if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(&v83.left, &v82.left) && !IsEmpty(&v82) )
      {
        if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectInclusive(&v82.left, &v83.left) )
        {
          v19 = CShape::CopyShape(a1, 0LL, a6);
          v10 = v19;
          if ( v19 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x2B8u);
          break;
        }
        if ( !CanCombineToRegion((__int64)a1, v18, (__int64)a3, (CMILMatrix *)a4) )
          break;
        v87[0] = 0;
        v88 = v89;
        v89[0] = 0;
        v86 = v87;
        v21 = CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
                (FastRegion::CRegion *)&v88,
                &v82.left);
        v10 = v21;
        if ( v21 < 0 )
        {
          v77 = 703;
        }
        else
        {
          *v86 = 0;
          v21 = CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
                  (FastRegion::CRegion *)&v86,
                  &v83.left);
          v10 = v21;
          if ( v21 < 0 )
          {
            v77 = 704;
          }
          else
          {
            v21 = FastRegion::CRegion::Subtract((FastRegion::CRegion *)&v88, (const struct CRegion *)&v86);
            v10 = v21;
            if ( v21 < 0 )
            {
              v77 = 706;
            }
            else
            {
              v23 = HeapAlloc(WPF::g_processHeap, 0, 0x60uLL);
              v25 = v23;
              if ( v23 )
              {
                memset_0(v23, 0, 0x60uLL);
                v25[1] = 0LL;
                v24 = (_DWORD)v25 + 24;
                *v25 = &CRegionShape::`vftable';
                v25[2] = v25 + 3;
                *((_DWORD *)v25 + 6) = 0;
                v25[11] = 0LL;
              }
              else
              {
                v25 = 0LL;
              }
              v81 = v25;
              if ( !v25 )
              {
                v10 = -2147024882;
                MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024882, 0x2C5u);
LABEL_41:
                FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v86);
                FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v88);
                break;
              }
              v21 = CRegionShape::BuildFromCRegion((CRegionShape *)v25, (const struct CRegion *)&v88);
              v10 = v21;
              if ( v21 >= 0 )
              {
                v81 = 0LL;
                *a6 = (struct CShape *)v25;
                goto LABEL_41;
              }
              v77 = 710;
            }
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, v77);
        goto LABEL_41;
      }
      v26 = CThreadContext::GetObjectCache(v17);
      v27 = 0LL;
      v28 = *((_DWORD *)v26 + 1);
      if ( v28 )
      {
        v27 = (char *)*((_QWORD *)v26 + 1);
        *((_QWORD *)v26 + 1) = *(_QWORD *)v27;
        *((_DWORD *)v26 + 1) = v28 - 1;
      }
      if ( v27 || (v27 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL)) != 0LL )
      {
        *((_QWORD *)v27 + 1) = 0LL;
        *(_QWORD *)v27 = &CRectanglesShape::`vftable';
        *((_QWORD *)v27 + 2) = v27 + 48;
        *((_QWORD *)v27 + 3) = v27 + 48;
        *((_DWORD *)v27 + 8) = 1;
        *(_QWORD *)(v27 + 36) = 1LL;
        `vector constructor iterator'(
          v27 + 48,
          16LL,
          1LL,
          (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
        *((_QWORD *)v27 + 8) = 0LL;
        v6 = (struct CShape *)v27;
      }
      *a6 = v6;
      if ( !v6 )
      {
        v78 = 691;
        goto LABEL_168;
      }
      break;
    default:
      break;
  }
LABEL_169:
  std::unique_ptr<CRegionShape>::~unique_ptr<CRegionShape>(&v81);
  return (unsigned int)v10;
}
