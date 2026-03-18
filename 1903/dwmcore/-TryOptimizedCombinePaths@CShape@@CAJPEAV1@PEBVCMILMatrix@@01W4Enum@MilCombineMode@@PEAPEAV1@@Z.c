/*
 * XREFs of ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD330
 * Callers:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180066F20 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800690F0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD2BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     CanCombineToRegion @ 0x180017658 (CanCombineToRegion.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18003A3DC (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180044FFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180050470 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180053490 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800677D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800880B4 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180090988 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A1C50 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??1?$unique_ptr@VCRegionShape@@U?$default_delete@VCRegionShape@@@std@@@std@@QEAA@XZ @ 0x1800AE384 (--1-$unique_ptr@VCRegionShape@@U-$default_delete@VCRegionShape@@@std@@@std@@QEAA@XZ.c)
 *     ?BuildFromCRegion@CRegionShape@@QEAAJAEBVCRegion@@@Z @ 0x1800AE398 (-BuildFromCRegion@CRegionShape@@QEAAJAEBVCRegion@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800AEEF0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7904 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800B7B28 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7CD8 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7DAC (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7F40 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?DoesIntersectInclusive@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800CC390 (-DoesIntersectInclusive@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800E47B4 (--0CThreadContext@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_N_N@Z @ 0x1800EB79C (-Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_N_N@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCRegionShape@@U?$default_delete@VCRegionShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800EBA94 (--1-$out_param_t@V-$unique_ptr@VCRegionShape@@U-$default_delete@VCRegionShape@@@std@@@std@@@deta.c)
 *     ?CopyRegionShape@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800EBAB8 (-CopyRegionShape@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180159D34 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 */

__int64 __fastcall CShape::TryOptimizedCombinePaths(
        CShape *a1,
        __int64 a2,
        CShape *a3,
        __int64 a4,
        int a5,
        struct CShape **a6)
{
  signed int v9; // ebx
  __int64 v10; // rdx
  char v11; // cl
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  signed int v27; // eax
  __int64 v28; // rcx
  signed int v29; // eax
  __int64 v30; // rcx
  struct CRectanglesShape *v31; // rcx
  __int64 v32; // rdx
  signed int v33; // eax
  __int64 v34; // rcx
  signed int v35; // eax
  __int64 v36; // rcx
  CRegionShape *v37; // rax
  __int64 v38; // rcx
  CRegionShape *v39; // rdi
  struct CObjectCache *v40; // rax
  char *v41; // rdi
  int v42; // edx
  __int64 v43; // rcx
  bool v44; // dl
  _QWORD *v45; // rax
  __int64 v46; // rdi
  int *v47; // rax
  signed int v48; // eax
  __int64 v49; // rcx
  _DWORD *Value; // rsi
  CThreadContext *v51; // rax
  __int64 v52; // rcx
  CThreadContext *v53; // rax
  int v54; // ecx
  _QWORD *v55; // rdi
  void *v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rdx
  signed int v59; // eax
  __int64 v60; // rcx
  CRegionShape *v61; // rax
  __int64 v62; // rcx
  CRegionShape *v63; // rdi
  signed int v64; // eax
  __int64 v65; // rcx
  signed int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  signed int v70; // eax
  __int64 v71; // rcx
  CRegionShape *v72; // rax
  __int64 v73; // rcx
  CRegionShape *v74; // rdi
  struct CRectanglesShape *v75; // rcx
  signed int v76; // eax
  __int64 v77; // rcx
  struct CObjectCache *v78; // rax
  char *v79; // rdi
  int v80; // edx
  struct CObjectCache *ObjectCache; // rax
  char *v82; // rdi
  int v83; // edx
  signed int v84; // eax
  __int64 v85; // rcx
  signed int v86; // eax
  __int64 v87; // rcx
  struct CObjectCache *v88; // rax
  char *v89; // rdi
  int v90; // edx
  __int64 v92; // r8
  unsigned int v93; // [rsp+20h] [rbp-E0h]
  unsigned int v94; // [rsp+20h] [rbp-E0h]
  unsigned int v95; // [rsp+20h] [rbp-E0h]
  unsigned int v96; // [rsp+20h] [rbp-E0h]
  __int64 v97; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_RECT_F v98; // [rsp+38h] [rbp-C8h] BYREF
  struct D2D_RECT_F v99; // [rsp+48h] [rbp-B8h] BYREF
  struct CRegionShape *v100[2]; // [rsp+58h] [rbp-A8h] BYREF
  char v101; // [rsp+68h] [rbp-98h]
  int *v102; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v103[18]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v104; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v105[18]; // [rsp+C8h] [rbp-38h] BYREF
  void *retaddr; // [rsp+168h] [rbp+68h]

  v97 = 0LL;
  v9 = 0;
  *a6 = 0LL;
  if ( !a1 )
    goto LABEL_148;
  if ( (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a1 + 16LL))(a1)
    || !a3
    || (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a3 + 16LL))(a3) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a1 + 16LL))(a1) )
    {
LABEL_150:
      if ( a5 )
      {
        v75 = (struct CRectanglesShape *)(unsigned int)(a5 - 1);
        if ( a5 == 1 )
        {
          ObjectCache = CThreadContext::GetObjectCache(v75);
          v82 = 0LL;
          v83 = *((_DWORD *)ObjectCache + 1);
          if ( v83 )
          {
            v82 = (char *)*((_QWORD *)ObjectCache + 1);
            *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v82;
            *((_DWORD *)ObjectCache + 1) = v83 - 1;
          }
          if ( v82 || (v82 = (char *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
          {
            *((_QWORD *)v82 + 1) = 0LL;
            *(_QWORD *)v82 = &CRectanglesShape::`vftable';
            *((_QWORD *)v82 + 2) = v82 + 48;
            *((_QWORD *)v82 + 3) = v82 + 48;
            *((_DWORD *)v82 + 8) = 1;
            *(_QWORD *)(v82 + 36) = 1LL;
            `vector constructor iterator'(
              v82 + 48,
              16LL,
              1LL,
              (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
            *((_QWORD *)v82 + 8) = 0LL;
          }
          else
          {
            v82 = 0LL;
          }
          *a6 = (struct CShape *)v82;
          if ( !v82 )
          {
            v94 = 613;
            goto LABEL_190;
          }
        }
        else
        {
          if ( a5 != 2 )
            goto LABEL_191;
          if ( !a1 || (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a1 + 16LL))(a1) )
          {
            v78 = CThreadContext::GetObjectCache(v75);
            v79 = 0LL;
            v80 = *((_DWORD *)v78 + 1);
            if ( v80 )
            {
              v79 = (char *)*((_QWORD *)v78 + 1);
              *((_QWORD *)v78 + 1) = *(_QWORD *)v79;
              *((_DWORD *)v78 + 1) = v80 - 1;
            }
            if ( v79 || (v79 = (char *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
            {
              *((_QWORD *)v79 + 1) = 0LL;
              *(_QWORD *)v79 = &CRectanglesShape::`vftable';
              *((_QWORD *)v79 + 2) = v79 + 48;
              *((_QWORD *)v79 + 3) = v79 + 48;
              *((_DWORD *)v79 + 8) = 1;
              *(_QWORD *)(v79 + 36) = 1LL;
              `vector constructor iterator'(
                v79 + 48,
                16LL,
                1LL,
                (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
              *((_QWORD *)v79 + 8) = 0LL;
            }
            else
            {
              v79 = 0LL;
            }
            *a6 = (struct CShape *)v79;
            if ( !v79 )
            {
              v94 = 627;
              goto LABEL_190;
            }
          }
          else
          {
            v76 = CShape::CopyShape(a1, 0LL, a6);
            v9 = v76;
            if ( v76 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, v76, 0x27Fu, 0LL);
          }
        }
      }
      else if ( !a1 || (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a1 + 16LL))(a1) )
      {
        if ( !a4 || CShape::IsAxisAlignedRectangle(a3) && (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(a4) )
        {
          v86 = CShape::CopyShape(a3, (const struct CMILMatrix *)a4, a6);
          v9 = v86;
          if ( v86 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v87, 0LL, 0, v86, 0x24Eu, 0LL);
        }
      }
      else
      {
        v84 = CShape::CopyShape(a1, 0LL, a6);
        v9 = v84;
        if ( v84 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v85, 0LL, 0, v84, 0x259u, 0LL);
      }
      goto LABEL_191;
    }
LABEL_148:
    if ( !a3 || (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)a3 + 16LL))(a3) )
    {
      v88 = CThreadContext::GetObjectCache(a1);
      v89 = 0LL;
      v90 = *((_DWORD *)v88 + 1);
      if ( v90 )
      {
        v89 = (char *)*((_QWORD *)v88 + 1);
        *((_QWORD *)v88 + 1) = *(_QWORD *)v89;
        *((_DWORD *)v88 + 1) = v90 - 1;
      }
      if ( v89 || (v89 = (char *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
      {
        *((_QWORD *)v89 + 1) = 0LL;
        *(_QWORD *)v89 = &CRectanglesShape::`vftable';
        *((_QWORD *)v89 + 2) = v89 + 48;
        *((_QWORD *)v89 + 3) = v89 + 48;
        *((_DWORD *)v89 + 8) = 1;
        *(_QWORD *)(v89 + 36) = 1LL;
        `vector constructor iterator'(
          v89 + 48,
          16LL,
          1LL,
          (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
        *((_QWORD *)v89 + 8) = 0LL;
      }
      else
      {
        v89 = 0LL;
      }
      *a6 = (struct CShape *)v89;
      if ( !v89 )
      {
        v94 = 565;
        goto LABEL_190;
      }
      goto LABEL_191;
    }
    goto LABEL_150;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(CShape *, struct D2D_RECT_F *))(*(_QWORD *)a1 + 40LL))(a1, &v99)
    || LODWORD(v99.left) != 1
    || !(*(unsigned __int8 (__fastcall **)(CShape *, struct D2D_RECT_F *))(*(_QWORD *)a3 + 40LL))(a3, &v99)
    || LODWORD(v99.left) != 1 )
  {
    goto LABEL_120;
  }
  if ( a4 )
  {
    v10 = *(unsigned __int8 *)(a4 + 65);
    if ( (char)v10 >> 6 )
    {
      v11 = (char)v10 >> 6 == 1;
    }
    else
    {
      v11 = 0;
      v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a4 + 8) - 0.0)) & _xmm);
      if ( v12 < 0.000081380211 )
      {
        v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a4 + 24) - 0.0)) & _xmm);
        if ( v13 < 0.000081380211 )
        {
          v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a4 + 56) - 0.0)) & _xmm);
          if ( v14 < 0.000081380211 )
            goto LABEL_23;
        }
        if ( v12 < 0.000081380211 )
        {
          v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a4 + 24) - 0.0)) & _xmm);
          if ( v15 < 0.000081380211 )
          {
            v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a4 + 32) - 0.0)) & _xmm);
            if ( v16 < 0.000081380211 )
            {
              v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a4 + 36) - 0.0)) & _xmm);
              if ( v17 < 0.000081380211 )
              {
                v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a4 + 40) - 0.0)) & _xmm);
                if ( v18 < 0.000081380211
                  || (v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a4 + 40) - 1.0)) & _xmm),
                      v19 < 0.000081380211) )
                {
                  v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a4 + 44) - 0.0)) & _xmm);
                  if ( v20 < 0.000081380211 )
                  {
                    v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a4 + 56) - 0.0)) & _xmm);
                    if ( v21 < 0.000081380211 )
                    {
LABEL_23:
                      v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a4 + 12)) & _xmm);
                      v23 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a4 + 28)) & _xmm) * 61440.0)
                          + (float)(v22 * 61440.0);
                      v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a4 + 60)) & _xmm);
                      v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v23 + v24) - 1.0)) & _xmm);
                      v11 = v25 < 0.000081380211;
                    }
                  }
                }
              }
            }
          }
        }
      }
      LOBYTE(v10) = v10 & 0x3F;
      *(_BYTE *)(a4 + 65) = v10 | ((v11 << 7) - 64);
    }
    if ( !v11
      || (v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a4 + 4) - 0.0)) & _xmm), v26 >= 0.000081380211)
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a4 + 16) - 0.0)) & _xmm) >= 0.000081380211 )
    {
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)a4 - 0.0)) & _xmm) >= 0.000081380211
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a4 + 20) - 0.0)) & _xmm) >= 0.000081380211 )
      {
LABEL_120:
        if ( !CanCombineToRegion((__int64)a1, v10, (__int64)a3, (CMILMatrix *)a4) )
          goto LABEL_191;
        *(_QWORD *)&v98.left = 0LL;
        v100[0] = (struct CRegionShape *)&v98;
        v100[1] = 0LL;
        v101 = 1;
        v9 = CRegionShape::CopyRegionShape(a1, 0LL, &v100[1]);
        wil::details::out_param_t<std::unique_ptr<CRegionShape>>::~out_param_t<std::unique_ptr<CRegionShape>>(v100);
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v9, 0x2F0u, 0LL);
          std::unique_ptr<CRegionShape>::~unique_ptr<CRegionShape>(&v98);
          goto LABEL_191;
        }
        *(_QWORD *)&v99.left = 0LL;
        v100[0] = (struct CRegionShape *)&v99;
        v100[1] = 0LL;
        v101 = 1;
        v9 = CRegionShape::CopyRegionShape(a3, (const struct CMILMatrix *)a4, &v100[1]);
        wil::details::out_param_t<std::unique_ptr<CRegionShape>>::~out_param_t<std::unique_ptr<CRegionShape>>(v100);
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v9, 0x2F3u, 0LL);
          goto LABEL_145;
        }
        v102 = v103;
        v103[0] = 0;
        v70 = FastRegion::CRegion::Copy(&v102, (int **)(*(_QWORD *)&v98.left + 16LL));
        v9 = v70;
        if ( v70 < 0 )
        {
          v96 = 758;
          goto LABEL_142;
        }
        if ( a5 )
        {
          if ( a5 == 1 )
          {
            v70 = FastRegion::CRegion::Intersect(
                    (FastRegion::CRegion *)&v102,
                    (const struct CRegion *)(*(_QWORD *)&v99.left + 16LL));
            v9 = v70;
            if ( v70 < 0 )
            {
              v96 = 764;
              goto LABEL_142;
            }
          }
          else if ( a5 == 2 )
          {
            v70 = FastRegion::CRegion::Subtract(
                    (FastRegion::CRegion *)&v102,
                    (const struct CRegion *)(*(_QWORD *)&v99.left + 16LL));
            v9 = v70;
            if ( v70 < 0 )
            {
              v96 = 768;
              goto LABEL_142;
            }
          }
        }
        else
        {
          v70 = FastRegion::CRegion::Union(
                  (FastRegion::CRegion *)&v102,
                  (const struct CRegion *)(*(_QWORD *)&v99.left + 16LL));
          v9 = v70;
          if ( v70 < 0 )
          {
            v96 = 772;
            goto LABEL_142;
          }
        }
        v72 = (CRegionShape *)DefaultHeap::Alloc(0x60uLL);
        v74 = v72;
        if ( v72 )
        {
          *((_QWORD *)v72 + 3) = 0LL;
          *((_QWORD *)v72 + 4) = 0LL;
          *((_QWORD *)v72 + 5) = 0LL;
          *((_QWORD *)v72 + 6) = 0LL;
          *((_QWORD *)v72 + 7) = 0LL;
          *((_QWORD *)v72 + 8) = 0LL;
          *((_QWORD *)v72 + 9) = 0LL;
          *((_QWORD *)v72 + 10) = 0LL;
          *((_QWORD *)v72 + 1) = 0LL;
          *(_QWORD *)v72 = &CRegionShape::`vftable';
          *((_QWORD *)v72 + 2) = (char *)v72 + 24;
          *((_DWORD *)v72 + 6) = 0;
          *((_QWORD *)v72 + 11) = 0LL;
        }
        else
        {
          v74 = 0LL;
        }
        v97 = (__int64)v74;
        if ( !v74 )
        {
          v9 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, 0x8007000E, 0x309u, 0LL);
LABEL_143:
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v102);
          goto LABEL_145;
        }
        v70 = CRegionShape::BuildFromCRegion(v74, (const struct CRegion *)&v102);
        v9 = v70;
        if ( v70 >= 0 )
        {
          v97 = 0LL;
          *a6 = v74;
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v102);
LABEL_145:
          std::unique_ptr<CRegionShape>::~unique_ptr<CRegionShape>(&v99);
          std::unique_ptr<CRegionShape>::~unique_ptr<CRegionShape>(&v98);
          goto LABEL_191;
        }
        v96 = 778;
LABEL_142:
        MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v70, v96, 0LL);
        goto LABEL_143;
      }
    }
  }
  v27 = (*(__int64 (__fastcall **)(CShape *, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, &v98, 0LL);
  v9 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x293u, 0LL);
    goto LABEL_191;
  }
  v29 = (*(__int64 (__fastcall **)(CShape *, struct D2D_RECT_F *, __int64))(*(_QWORD *)a3 + 32LL))(a3, &v99, a4);
  v9 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x294u, 0LL);
    goto LABEL_191;
  }
  switch ( a5 )
  {
    case 0:
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(&v98.left, &v99.left) || IsEmpty(&v99) )
      {
        v66 = CShape::CopyShape(a1, 0LL, a6);
        v9 = v66;
        if ( v66 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0x2CEu, 0LL);
        break;
      }
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(&v99.left, &v98.left) || IsEmpty(&v98) )
      {
        v64 = CShape::CopyShape(a3, (const struct CMILMatrix *)a4, a6);
        v9 = v64;
        if ( v64 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v64, 0x2D2u, 0LL);
        break;
      }
      if ( !CanCombineToRegion((__int64)a1, v58, (__int64)a3, (CMILMatrix *)a4) )
        break;
      v105[0] = 0;
      v102 = v103;
      v103[0] = 0;
      v104 = v105;
      v59 = CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>((FastRegion::CRegion *)&v102);
      v9 = v59;
      if ( v59 < 0 )
      {
        v95 = 729;
      }
      else
      {
        *v104 = 0;
        v59 = CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>((FastRegion::CRegion *)&v104);
        v9 = v59;
        if ( v59 < 0 )
        {
          v95 = 730;
        }
        else
        {
          v59 = FastRegion::CRegion::Union((FastRegion::CRegion *)&v102, (const struct CRegion *)&v104);
          v9 = v59;
          if ( v59 < 0 )
          {
            v95 = 732;
          }
          else
          {
            v61 = (CRegionShape *)DefaultHeap::Alloc(0x60uLL);
            v63 = v61;
            if ( v61 )
            {
              *((_QWORD *)v61 + 3) = 0LL;
              *((_QWORD *)v61 + 4) = 0LL;
              *((_QWORD *)v61 + 5) = 0LL;
              *((_QWORD *)v61 + 6) = 0LL;
              *((_QWORD *)v61 + 7) = 0LL;
              *((_QWORD *)v61 + 8) = 0LL;
              *((_QWORD *)v61 + 9) = 0LL;
              *((_QWORD *)v61 + 10) = 0LL;
              *((_QWORD *)v61 + 1) = 0LL;
              *(_QWORD *)v61 = &CRegionShape::`vftable';
              *((_QWORD *)v61 + 2) = (char *)v61 + 24;
              *((_DWORD *)v61 + 6) = 0;
              *((_QWORD *)v61 + 11) = 0LL;
            }
            else
            {
              v63 = 0LL;
            }
            v97 = (__int64)v63;
            if ( !v63 )
            {
              v9 = -2147024882;
              MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, 0x8007000E, 0x2DFu, 0LL);
LABEL_113:
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v104);
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v102);
              break;
            }
            v59 = CRegionShape::BuildFromCRegion(v63, (const struct CRegion *)&v102);
            v9 = v59;
            if ( v59 >= 0 )
            {
              v97 = 0LL;
              *a6 = v63;
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v104);
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v102);
              break;
            }
            v95 = 736;
          }
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, v95, 0LL);
      goto LABEL_113;
    case 1:
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)&v98, (__int64)&v99);
      if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)a1 + 8LL))(a1) == 2
        && (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)a3 + 8LL))(a3) == 2
        && (!a4 || CMILMatrix::Is2DAxisAlignedIntegerPreserving((CMILMatrix *)a4, v44)) )
      {
        v45 = DefaultHeap::Alloc(0x60uLL);
        v46 = (__int64)v45;
        if ( v45 )
        {
          v45[3] = 0LL;
          v45[4] = 0LL;
          v45[5] = 0LL;
          v45[6] = 0LL;
          v45[7] = 0LL;
          v45[8] = 0LL;
          v45[9] = 0LL;
          v45[10] = 0LL;
          v45[1] = 0LL;
          *v45 = &CRegionShape::`vftable';
          v45[2] = v45 + 3;
          *((_DWORD *)v45 + 6) = 0;
          v45[11] = 0LL;
        }
        else
        {
          v46 = 0LL;
        }
        v97 = v46;
        if ( v46 )
        {
          v47 = CMilRectLFromMilRectF((int *)v100, (__int64)&v98);
          v48 = CRegionShape::BuildFromRects(v46, (__int64)v47, 1);
          v9 = v48;
          if ( v48 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0x2A0u, 0LL);
          }
          else
          {
            v97 = 0LL;
            *a6 = (struct CShape *)v46;
          }
          break;
        }
        v94 = 671;
LABEL_190:
        v9 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, 0x8007000E, v94, 0LL);
        break;
      }
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v51 = (CThreadContext *)operator new(0x138uLL);
        if ( !v51 || (v53 = CThreadContext::CThreadContext(v51), (Value = v53) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, 0x8007000E, 0x42u, 0LL);
          ModuleFailFastForHRESULT(2147942414LL, retaddr, v92);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v53);
      }
      v54 = Value[3];
      v55 = 0LL;
      if ( v54 )
      {
        v55 = (_QWORD *)*((_QWORD *)Value + 2);
        *((_QWORD *)Value + 2) = *v55;
        Value[3] = v54 - 1;
      }
      if ( v55 || (v55 = DefaultHeap::Alloc(0x48uLL)) != 0LL )
      {
        v55[1] = 0LL;
        *v55 = &CRectanglesShape::`vftable';
        v55[2] = v55 + 6;
        v55[3] = v55 + 6;
        *((_DWORD *)v55 + 8) = 1;
        *(_QWORD *)((char *)v55 + 36) = 1LL;
        v55[8] = 0LL;
        v56 = (void *)v55[2];
        if ( v56 != (void *)v55[3] )
        {
          operator delete(v56);
          v55[2] = v55[3];
          *((_DWORD *)v55 + 9) = *((_DWORD *)v55 + 8);
        }
        v57 = v55[8];
        if ( v57 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
          v55[8] = 0LL;
        }
        *(struct D2D_RECT_F *)v100 = v98;
        DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
          v55 + 2,
          v100,
          1LL);
      }
      else
      {
        v55 = 0LL;
      }
      *a6 = (struct CShape *)v55;
      if ( !v55 )
      {
        v94 = 678;
        goto LABEL_190;
      }
      break;
    case 2:
      if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(&v99.left, &v98.left) && !IsEmpty(&v98) )
      {
        if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectInclusive(&v98, &v99) )
        {
          v33 = CShape::CopyShape(a1, 0LL, a6);
          v9 = v33;
          if ( v33 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x2B5u, 0LL);
          break;
        }
        if ( !CanCombineToRegion((__int64)a1, v32, (__int64)a3, (CMILMatrix *)a4) )
          break;
        v103[0] = 0;
        v104 = v105;
        v105[0] = 0;
        v102 = v103;
        v35 = CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>((FastRegion::CRegion *)&v104);
        v9 = v35;
        if ( v35 < 0 )
        {
          v93 = 700;
        }
        else
        {
          *v102 = 0;
          v35 = CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>((FastRegion::CRegion *)&v102);
          v9 = v35;
          if ( v35 < 0 )
          {
            v93 = 701;
          }
          else
          {
            v35 = FastRegion::CRegion::Subtract((FastRegion::CRegion *)&v104, (const struct CRegion *)&v102);
            v9 = v35;
            if ( v35 < 0 )
            {
              v93 = 703;
            }
            else
            {
              v37 = (CRegionShape *)DefaultHeap::Alloc(0x60uLL);
              v39 = v37;
              if ( v37 )
              {
                *((_QWORD *)v37 + 3) = 0LL;
                *((_QWORD *)v37 + 4) = 0LL;
                *((_QWORD *)v37 + 5) = 0LL;
                *((_QWORD *)v37 + 6) = 0LL;
                *((_QWORD *)v37 + 7) = 0LL;
                *((_QWORD *)v37 + 8) = 0LL;
                *((_QWORD *)v37 + 9) = 0LL;
                *((_QWORD *)v37 + 10) = 0LL;
                *((_QWORD *)v37 + 1) = 0LL;
                *(_QWORD *)v37 = &CRegionShape::`vftable';
                *((_QWORD *)v37 + 2) = (char *)v37 + 24;
                *((_DWORD *)v37 + 6) = 0;
                *((_QWORD *)v37 + 11) = 0LL;
              }
              else
              {
                v39 = 0LL;
              }
              v97 = (__int64)v39;
              if ( !v39 )
              {
                v9 = -2147024882;
                MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, 0x8007000E, 0x2C2u, 0LL);
LABEL_56:
                FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v102);
                FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v104);
                break;
              }
              v35 = CRegionShape::BuildFromCRegion(v39, (const struct CRegion *)&v104);
              v9 = v35;
              if ( v35 >= 0 )
              {
                v97 = 0LL;
                *a6 = v39;
                goto LABEL_56;
              }
              v93 = 707;
            }
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, v93, 0LL);
        goto LABEL_56;
      }
      v40 = CThreadContext::GetObjectCache(v31);
      v41 = 0LL;
      v42 = *((_DWORD *)v40 + 1);
      if ( v42 )
      {
        v41 = (char *)*((_QWORD *)v40 + 1);
        *((_QWORD *)v40 + 1) = *(_QWORD *)v41;
        *((_DWORD *)v40 + 1) = v42 - 1;
      }
      if ( v41 || (v41 = (char *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
      {
        *((_QWORD *)v41 + 1) = 0LL;
        *(_QWORD *)v41 = &CRectanglesShape::`vftable';
        *((_QWORD *)v41 + 2) = v41 + 48;
        *((_QWORD *)v41 + 3) = v41 + 48;
        *((_DWORD *)v41 + 8) = 1;
        *(_QWORD *)(v41 + 36) = 1LL;
        `vector constructor iterator'(
          v41 + 48,
          16LL,
          1LL,
          (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
        *((_QWORD *)v41 + 8) = 0LL;
      }
      else
      {
        v41 = 0LL;
      }
      *a6 = (struct CShape *)v41;
      if ( !v41 )
      {
        v94 = 688;
        goto LABEL_190;
      }
      break;
    default:
      break;
  }
LABEL_191:
  std::unique_ptr<CRegionShape>::~unique_ptr<CRegionShape>(&v97);
  return (unsigned int)v9;
}
